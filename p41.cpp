#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    int a[10],count=0;
    fstream file;

    file.open("prime.txt",ios::in | ios ::out | ios::trunc );

    for(int i=0;i<10;i++)
    {
        cout<<"\nEnter number on index number  "<<i<<":";
        cin>>a[i];
    }
    for(int j=0;j<10;j++)
    {
            count=0;
        for(int i=2;i<a[j];i++)
         {
          if(a[j]%i==0)
              {
                  count++;
                  break;
              }
        }
        if(count==0)
        {
              file<<a[j]<<" ";
        }
    }     
    file.seekg(0);
    int  n;
    cout<<"\nprime number :";
    while (file>>n)
    {
        cout<<n<<" ";
    }
    file.close();
    return 0;
    

}