#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(((i==0||i==7)&&j<8)||(i==j)||((j==0||j==7)&&i<8)||7-i == j){
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}