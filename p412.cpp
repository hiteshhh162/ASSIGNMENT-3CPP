#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main (int argc,char *argv[])
{
    
    if(argc==2)
    {
        fstream file;
         file.open("palindrom.txt",ios::in|ios::out|ios::trunc);
          char *word,*rev;
        strcpy(word,argv[1]);
        cout<<"\nCode successfully run ";

        strrev(word);
        if(strcmp(word,argv[1])==0)
        {
            file<<word;
             cout<<"\nPalindrom word successfully write ...";
        }   
        else{
          cout<<"\nWord is not palindrom ...";
         }
         file.seekg(0);
         file>>rev;
         cout<<"\nPalindrom words is :"<<rev;
         file.close();
    }else
    {
        cout<<"\nPlease enter valid argument ...";
    }
    return 0;

}