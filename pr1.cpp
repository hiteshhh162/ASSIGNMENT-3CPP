#include<iostream>
using namespace std;
int main ()
{
    int lines=1,chara=0,words=0,space=0,sp=0,inword=0;
    char ch;
    cout<<"\nEnter lines of text :";
    cin.get(ch);

    while (1)
    {
        if(ch==' ')
        {
            space++;
            inword=0;
        }
        else if (ch=='\n')
        {
            lines++;
            inword=0;
        }
        else if (ch>='a' && ch<='z' || ch >= 'A'&&ch<='Z' || ch>='0' && ch<='9')
        {
            chara++;
            if(inword==0)
            {
                words++;
                inword=1;
            }
        }
        else
        {
            sp++;
        }
        cin.get(ch);
        if(ch=='1')
        {
            break;
        }
    }
    cout<<"\nTotal words is :"<<words;
    cout<<"\nTotal lines is :"<<lines;
    cout<<"\nTotal blank space is :"<<space;
    cout<<"\nTotal special character is :"<<sp;
    cout<<"\nTotal character  is :"<<chara;
    return 0;   
}