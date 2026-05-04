#include<iostream>
using namespace std;
int main ()
{
    char str[100];
    cout<<"\nEnter line of text :";
    cin>>str;
    int i=0;
    while (str[i]!='\0')
    {
        cout<< int(str[i])<<" ";
        i++;
    }
    return 0; 
    
}