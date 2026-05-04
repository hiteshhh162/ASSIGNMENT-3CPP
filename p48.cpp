#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main ()
{
    fstream file;
    file.open("name.txt",ios::in|ios::out|ios::trunc);

    char namee[20];
    cout<<"\nEnter your name :";
    cin>>namee;

    int i=0,len;
    
    len=strlen(namee);
    while(len>=0)
    {
        file<<namee[len];
        len--;
    }    
    file.seekg(0);
    char ch;
    while(file>>ch)
    {
        cout<<ch;
    }
    //cout<<"\nReverse name is :"<<namee;
    file.close();
    return 0;
}