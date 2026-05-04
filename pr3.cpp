#include<iostream>
using namespace std;
int main ()
{
    char str[100],ustr[100],lstr[100];
    cout<<"\nEnter sentence :";
   cin>>str;
    int i=0,j;
    cout<<"\nToggle case :";
    while (str[i]!='\0')
    {
        /* code */
        if(str[i] >= 'a' && str[i]<='z')
        {
            cout<<str[i]+32; 
        }
        else if (str[i] >= 'A' && str[i]<='Z')
        {
            cout<<""<<str[i]-32;
        }
        i++;
    }
    /*lstr[i]='\0';
    ustr[i]='\0';
    cout<<"\nReverse order :";
    for(j=i;j<0;j--)
    {
        cout<<str[j];
    }
    cout<<"\nUpper case :"<<ustr;
    cout<<"\nLower case :"<<lstr;
  */  return 0;
    
}