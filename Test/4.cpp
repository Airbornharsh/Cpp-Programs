C++
#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdlib.h>
#include<iomanip>
#include<string.h>
#include<graphics>
#include <dos.h>
#define pi 3.1415
 
// global //
float
z_t[3],sphere[700][3],sphere_temp,A[700],B[700],C[700],D[700],
Ia=25,ka=.4,Il=2,kd=.3,ks=.3,ns=1,L[3]={0,0,10},V[3]={10,0,0},R[3];
int
rad,x_lim[2],y_lim[2],x[700],y[700],z[700],
zoom_fact,rot_x,rot_y,rot_z,trans_dir[2],trans_axis[2],trans_fact[2],rot_speed,rot_dir,
display_mode;
 
struct palettetype pal;
 
float dot_prod(float a[],float b[])
{
return(a[0]*b[0]+a[1]*b[1]+a[2]*b[2]);
}
class access_mouse
{
public :
int xx,yy,status;
 
int mouse_reset() //check for hardware problems
{
_AX=0;
geninterrupt(0x33);
return(_AX);
}
void show_mouse() //to show mouse pointer
{
_AX=1;
geninterrupt(0x33);
}
void hide_mouse() //to hide mouse pointer
{
_AX=2;
geninterrupt(0x33);
}
void mouse_limit(int x1,int y1, int x2,int y2) //to limit the scope of the mouse pointer
{
_AX=7;
_CX=x1;
_DX=x2;
geninterrupt(0x33);
_AX=8;
_CX=y1;
_DX=y2;
geninterrupt(0x33);
}
void mouse_pos() //to get the co-ordinates of the pointer & mouse status(clicked or not)
{
_AX=3;
geninterrupt(0x33);
status=_BX;
xx=_CX;
yy=_DX;
}
};
access_mouse mouse;
 
void introduce() //funtion to introduce the project members
{
int i,j,s,p,x=320,y=200;
struct palettetype pal;
getpalette(&pal);
setrgbpalette(pal.colors[14],60,60,0);
char *names[5]={"Best", "Engineering","Projects","Dot Com"},
* name[5]={"A","GRAPHICS","PROJECT ","By !!"};
settextstyle(4,0,7);
for( i=0;i<4;i++)
{
delay(500);
if(kbhit())
{
if((getch())==27) break;
}
if(i==3) y=40;
setcolor(0);
outtextxy(x,y,name[i]);
delay(300);
setcolor(8);
outtextxy(x,y,name[i]);
delay(200);
setcolor(7);
outtextxy(x,y,name[i]);
delay(150);
setcolor(15);
outtextxy(x,y,name[i]);
delay(800);
 
if(i==3)
{
settextstyle(4,0,5);
for(s=0;s<4;s++)
{
for(p=0;p<50;p++)
{
delay(10);
setcolor(4);
rectangle(0,230-p,640,230+p);
setcolor(15);
rectangle(50,230-p,595,230+p);
}
setcolor(2);
outtextxy(x,225,names[s]);
delay(1000);
setcolor(0);
for(j=p;j>=0;j--)
{
delay(20);
setcolor(0);
rectangle(0,230-j,640,230+j);
}
delay(500);
}
settextstyle(4,0,7);
}
setcolor(15);
outtextxy(x,y,name[i]);
delay(150); setcolor(7);
outtextxy(x,y,name[i]);
delay(150);
setcolor(8);
outtextxy(x,y,name[i]);
delay(200);
setcolor(0);
outtextxy(x,y,name[i]);
}
delay(1000);
}
 
void out_frames()
{
int i;
setcolor(3);
outtextxy(530,35,"ROTATION_AXIS");
outtextxy(465,61,"-X-");outtextxy(530,61,"-Y-");outtextxy(595,61,"-Z-");
 
// outtextxy(530,95,"ROTATION_SPEED_DIR");
//outtextxy(465,126,"+");outtextxy(595,126,"-");outtextxy(530,126,"DIR");
 
// outtextxy(530,175,"ZOOM");
// outtextxy(465,206,"+");outtextxy(595,206,"-");
 
outtextxy(530,255,"TRANSLATE");
outtextxy(465,281,"-X-");outtextxy(595,281,"-Y-");outtextxy(530,281,"DIR");
outtextxy(530,330,"RENDERING_MODES");
outtextxy(525,446,"EXIT");
setcolor(2);
rectangle(5,5,635,475);
rectangle(10,10,425,470);
rectangle(430,10,630,145);
 
for(i=0;i<3;i++) rectangle(465+i*65-30,45,465+i*65+30,75);
for(i=0;i<3;i++) rectangle(465+i*65-30,110,465+i*65+30,140);
 
rectangle(430,150,630,225);
 
for(i=0;i<2;i++) rectangle(465+i*2*65-30,190,465+i*65*2+30,220);
 
rectangle(430,230,630,300);
for(i=0;i<3;i++) rectangle(465+i*65-30,265,465+i*65+30,295);
 
rectangle(430,305,630,415);
 
int style;
for(i=0;i<2;i++)
{
if(i==0) style=10;
else style=3;
rectangle(465+i*2*65-30,340,465+i*2*65+30,370);
setfillstyle(style,4);
floodfill(465+i*2*65,350,2);
}
for(i=0;i<2;i++)
{
if(i==0) style=8;
else style=1;
rectangle(465+i*2*65-30,375,465+i*2*65+30,405);
setfillstyle(style,4);
floodfill(465+i*2*65,380,2);
}
rectangle(480,430,570,460);
 
}
 
void get_vertex()
{
int i,j,n;
rad=60;
float phi=18*pi/180,theta=pi/180;
for(i=0;i<=20;i++)
for(j=0;j<=30;j++)
{
n=31*i+j;
sphere[n][0]=rad*cos(((-90+j*6)*theta))*cos(i*phi);
sphere[n][2]=rad*cos(((-90+j*6)*theta))*sin(i*phi);
sphere[n][1]=rad*sin(((-90+j*6)*theta));
}
}
void do_rotate()
{
int i,j,n,inc;
float ang;
 
inc++;
if(inc>=360) inc=0;
ang=rot_dir*(1+rot_speed)*pi/180;
for(i=0;i<=20;i++)
for(j=0;j<=30;j++)
{
n=31*i+j;
//x_axis
if(rot_x)
{
sphere_temp=sphere[n][1];
sphere[n][1]=cos(ang)*sphere[n][1]-sin(ang)*sphere[n][2];
sphere[n][2]=sin(ang)*sphere_temp+cos(ang)*sphere[n][2];
}
//y_axis
if(rot_y)
{
sphere_temp=sphere[n][0];
sphere[n][0]=sin(ang)*sphere[n][2]+cos(ang)*sphere[n][0];
sphere[n][2]=cos(ang)*sphere[n][2]-sin(ang)*sphere_temp;
}
//z_axis
if(rot_z)
{
sphere_temp=sphere[n][1];
sphere[n][1]=sin(ang)*sphere[n][0]+cos(ang)*sphere[n][1];
sphere[n][0]=cos(ang)*sphere[n][0]-sin(ang)*sphere_temp;
}
x[n]=sphere[n][0];y[n]=sphere[n][1];z[n]=sphere[n][2];
}
 
}
void project()
{
int i,j,k;
x_lim[0]=x_lim[1]=217;
y_lim[0]=y_lim[1]=240;
 
for(i=0;i<=20;i++)
for(j=0;j<=30;j++)
{
k=31*i+j;
z_t[2]=z[k]+200;
x[k]=(200+zoom_fact)*x[k]/z_t[2]+(217+trans_fact[0]);
y[k]=(200+zoom_fact)*y[k]/z_t[2]+(240+trans_fact[1]);
if(x[k]<x_lim[0]) x_lim[0]=x[k];
if(x[k]>x_lim[1]) x_lim[1]=x[k];
if(y[k]<y_lim[0]) y_lim[0]=y[k];
if(y[k]>y_lim[1]) y_lim[1]=y[k];
}
}
 
void surf_table()
{
int i,j,k;
for(i=0;i<20;i++)
for(j=0;j<30;j++)
{
k=31*i+j;
z_t[0]=z[k];z_t[1]=z[k+1];z_t[2]=z[k+32];
z_t[0]+=200;z_t[1]+=200;z_t[2]+=200;
A[k]=y[k]*(z_t[1]-z_t[2])+y[k+1]*(z_t[2]-z_t[0])+y[k+32]*(z_t[0]-z_t[1]);
B[k]=z_t[0]*(x[k+1]-x[k+32])+z_t[1]*(x[k+32]-x[k])+z_t[2]*(x[k]-x[k+1]);
C[k]=x[k]*(y[k+1]-y[k+32])+x[k+1]*(y[k+32]-y[k])+x[k+32]*(y[k]-y[k+1]);
 
D[k]=-x[k]*( y[k+1]*z_t[2]-y[k+32]*z_t[1])-x[k+1]*( y[k+32]*z_t[0]-y[k]*z_t[2])-x[k+32]*( y[k]*z_t[1]-y[k+1]*z_t[0]);
}
project();
}
int find_intensity(int n)
{
int k,inten;
float absN,absL,N[3]={A[n],B[n],C[n]};
absN = sqrt( fabs(N[0]*N[0]+N[1]*N[1]+N[2]*N[2]));
absL = sqrt( L[0]*L[0]+L[1]*L[1]+L[2]*L[2]);
for(k=0;k<3;k++)
{
if(absL!=0)
L[k]=L[k]/absL;
if(absN!=0)
N[k]=N[k]/absN;
}
for(k=0;k<=2;k++)
{
R[k]=N[k]*(2*dot_prod(N,L))-L[k];
}
 
inten=Ia*ka+(Il*kd*(dot_prod(L,N))+Il*ks*pow(dot_prod(V,R),ns));
if(inten>15) inten=15;
return(inten);
}
void draw()
{
int i,j,k,n,inten,poly[8];
for( k=0;k<=19;k++)
{
int color=k/4;
if(color>2) color-=2;
for( j=0;j<30;j++)
{
 
i=31*k+j;
if(D[i]<0){
inten=(find_intensity(i)/3);
inten+=color*5;
setcolor(inten);
setfillstyle(1,inten);
if(display_mode==0)
{
putpixel(x[i],y[i],inten);
if(j==28) putpixel(x[i+1],y[i+1],inten);
}
else if(display_mode==1)
{
line(x[i],y[i],x[i+1],y[i+1]);
}
else
{
poly[0]=x[i];
poly[1]=y[i];
poly[2]=x[i+1];
poly[3]=y[i+1];
poly[4]=x[i+32];
poly[5]=y[i+32];
poly[6]=x[i+31];
poly[7]=y[i+31];
if(display_mode==2) drawpoly(3,poly);
else fillpoly(4,poly);
}
}
}
}
}
void process_mouse()
{
mouse.hide_mouse();
int rect[4],show=0;
//for rotation_axis
if(mouse.yy45)
{
if(mouse.xx>435 && mouse.xx<495)
{
rot_x=!rot_x;
if(rot_x) setcolor(8);
else setcolor(2);
outtextxy(465,61,"-X-");
rectangle(435,45,495,75);
}
else if(mouse.xx>500 && mouse.xx<560)
{
rot_y=!rot_y;
if(rot_y) setcolor(8);
else setcolor(2);
outtextxy(530,61,"-Y-");
rectangle(500,45,560,75);
}
else if(mouse.xx>565 && mouse.xx<625)
{
rot_z=!rot_z;
if(rot_z) setcolor(8);
else setcolor(2);
outtextxy(595,61,"-Z-");
rectangle(565,45,625,75);
}
}
//for rotation_speed_dir
else if(mouse.yy110)
{
 
if(mouse.xx>435 && mouse.xx<495)
{
show=1;
rect[0]=435;rect[1]=110;rect[2]=495;rect[3]=140;
if(rot_speed<40) rot_speed+=2;
}
else if(mouse.xx>500 && mouse.xx<560)
{
show=1;
rect[0]=500;rect[1]=110;rect[2]=560;rect[3]=140;
rot_dir*=-1;
}
else if(mouse.xx>565 && mouse.xx<625)
{
show=1;
rect[0]=565;rect[1]=110;rect[2]=625;rect[3]=140;
if(rot_speed>0) rot_speed-=2;
}
}
//for zoom
else if(mouse.yy190)
{
 
if(mouse.xx>435 && mouse.xx<495)
{
show=1;
rect[0]=435;rect[1]=190;rect[2]=495;rect[3]=220;
if(x_lim[1]25 && zoom_fact25 && y_lim[1] }
else if(mouse.xx>565 && mouse.xx<625)
{
show=1;
rect[0]=565;rect[1]=190;rect[2]=625;rect[3]=220;
if(zoom_fact>-180) zoom_fact-=10;
 
}
}
//for translation
else if(mouse.yy265)
{
 
if(mouse.xx>435 && mouse.xx<495)
{
trans_axis[0]=!trans_axis[0];
if(trans_axis[0]) setcolor(8);
else setcolor(2);
rectangle(435,265,495,295);
outtextxy(465,281,"-X-");
}
else if(mouse.xx>500 && mouse.xx<560)
{
rect[0]=500;rect[1]=265;rect[2]=560;rect[3]=295;
trans_dir[0]*=-1;
trans_dir[1]*=-1;
show=1;
}
else if(mouse.xx>565 && mouse.xx<625)
{
trans_axis[1]=!trans_axis[1];
if(trans_axis[1]) setcolor(8);
else setcolor(2);
rectangle(565,265,625,295);
outtextxy(595,281,"-Y-");
}
}
//for display_modes
else if(mouse.yy>340 && mouse.yy<370)
{
if(mouse.xx>435 && mouse.xx<495)
{
show=1;
rect[0]=435;rect[1]=340;rect[2]=495;rect[3]=370;
display_mode=0;
}
else if(mouse.xx>565 && mouse.xx<625)
{
show=1;
rect[0]=565;rect[1]=340;rect[2]=625;rect[3]=370;
display_mode=1;
}
}
else if(mouse.yy>375 && mouse.yy<405)
{
if(mouse.xx>435 && mouse.xx<495)
{
show=1;
rect[0]=435;rect[1]=375;rect[2]=495;rect[3]=405;
display_mode=2;
}
else if(mouse.xx>565 && mouse.xx<625)
{
show=1;
rect[0]=565;rect[1]=375;rect[2]=625;rect[3]=405;
display_mode=3;
}
}
//for exit
else if(mouse.yy>430 && mouse.yy480)
{
show=0;
closegraph();
exit(0);
}
if(show)
{
setcolor(8);
rectangle(rect[0],rect[1],rect[2],rect[3]);
delay(20);
setcolor(2);
rectangle(rect[0],rect[1],rect[2],rect[3]);
}
delay(30);
mouse.show_mouse();
}
void translate()
{
if(trans_axis[0])
{
if(x_lim[1]>419 || x_lim[0]<16) trans_dir[0]*=-1;
trans_fact[0]+=trans_dir[0]*2;
}
if(trans_axis[1])
{
if(y_lim[0]464) trans_dir[1]*=-1;
trans_fact[1]+=trans_dir[1]*2;
}
}
 
void empty()
{
int poly[8];
poly[0]=12;
poly[1]=12;
poly[2]=423;
poly[3]=12;
poly[4]=423;
poly[5]=468;
poly[6]=12;
poly[7]=468;
setcolor(0);
setfillstyle(1,0);
fillpoly(4,poly);
}
void main()
{
int gd=DETECT,gm,i;
initgraph(&gd,&gm,"c:\\tc\\bgi");
mouse.mouse_limit(430,10,630,470);
zoom_fact=rot_x=rot_y=rot_z=trans_fact[0]=trans_fact[1]=rot_speed=display_mode=0;
rot_dir=trans_dir[0]=trans_dir[1]=1;
settextjustify(CENTER_TEXT,CENTER_TEXT);
//introduce();
getpalette(&pal);
setrgbpalette(pal.colors[0],0,0,0);
for(i=1;i
 
<pal.size;i++)
{
if(i<=5) setrgbpalette(pal.colors[i],i*12,0,0);
else if(i<=10) setrgbpalette(pal.colors[i],0,(i-5)*12,0);
 
else setrgbpalette(pal.colors[i],0,0,(i-10)*12);
}
settextstyle(0,0,0);
out_frames();
mouse.show_mouse();
get_vertex();
while(1)
{
 
do_rotate();
translate();
mouse.mouse_pos();
if(mouse.status==1) process_mouse();
surf_table();
draw();
delay(50);
empty();
}
}