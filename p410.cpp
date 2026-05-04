#include<iostream>
#include<fstream>
#include<stdio.h>
using namespace std;
int main (int argc,char *argv[])
{
    if(argc==3)
    {
        fstream file,file1;
        
        file.open(argv[1],ios::in|ios::out|ios::trunc);
        file1.open(argv[2],ios::in|ios::out|ios::trunc);
        int a[10];

        for(int i=0;i<10;i++)
        {
            cout<<"\nEnter number on index numebr "<<i<<":";
            cin>>a[i];
        }
        for(int i=0;i<10;i++)
        {
            if(a[i]%2==0)
            {
                file<<a[i]<<" ";
            }
            else{
                file1<<a[i]<<" ";
            }
        }
        file.seekg(0);
        file1.seekg(0);
        int n;
        cout<<"\neven :";
        while (file>>n)
        {
            
            cout<<n;

        }
          cout<<"\nodd :";
        while (file1>>n)
        {
            cout<<n;
            
        }file.close();
        file1.close();
        return 0;
        
    }    
}