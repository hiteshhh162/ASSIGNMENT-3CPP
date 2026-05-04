#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    fstream file;
    file.open("newfile.txt",ios::in | ios::out | ios:: trunc);

    int a[3];
    for(int i=0;i<3;i++)
    {
        cout<<"\nEnter number on index number "<<i<<":";
        cin>>a[i];
        file<<a[i]<<" ";
    }
    file.seekg(0);
    int min=a[0];
    int max=a[0];
    int n;
    while (file.eof()==0)
    {
        file>>n;
        if(n>=max)
        {
            max=n;
        }
        if(n<=min)
        {
            min=n;
        }
    }
    cout<<"\nMaximum number is :"<<max;
    cout<<"\nMinimum number is :"<<min;
    file.close();
    return 0;
    
}