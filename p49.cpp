#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main ()
{
    fstream file;
    file.open("newstring.txt",ios::in|ios::out|ios::trunc);

    char str[100],rstr[100],cpstr[100];

    cout<<"\nEnter a string it check is palindrom or not :";
    cin >>str;

    file<<str;

    file.seekg(0);
    file>>cpstr;

    strrev(cpstr);

    if(strcmp(str,cpstr)==0)
    {
        cout<<"\nString is palindrom ..";
    }
    else {
        cout<<"\nString is not palindrom ...";
    }
    file.close();
    return 0;
    

}