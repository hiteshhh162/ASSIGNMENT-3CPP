#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    fstream file;
    char str[200];

    file.open("encrypt.txt",ios::in| ios::out|ios::trunc);
    cout<<"\nEnter a line of character :";
    cin.getline(str,200);
    int i=0;
    while(str[i]!='\0')
    {
        file<<" "<<char(str[i]+3);
        i++;
    }
    file.seekg(0);
    char ch;
    cout<<"\nDescrypt data:";
    while(file>>ch)
    {
        cout<<""<<char(ch-3);
    }
    return 0;



}