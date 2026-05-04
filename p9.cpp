#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    char name[2][20]={""};
    int code[2]={0},cost[2]={0} ;
    
    for(int i=0;i<2;i++)
    {
        cout<<"\nEnter "<<i+1<<" product number info..\n";
        cout<<"\nEnter product name :";
        cin>>setw(20)>>name[i];
        cout<<"\nEnter code :";
        cin>>code[i];
        cout<<"\nEnter cost :";
        cin>>cost[i];
    }
    cout<<"\n";
    cout<<setfill('*')<<setw(40)<<" "<<endl;
    cout<<setfill(' ')<<setw(10)<<"NAME"<<setw(15)<<"COST";
  
    cout<<setw(10)<<"CODE";
      cout<<"\n"<<setfill('*')<<setw(40)<<" "<<endl;
      for(int i=0;i<2;i++)
    {
        cout<<endl;
        cout<<setfill(' ');
        cout<<right<<setw(10)<<name[i];
        cout<<right<<setw(15)<<cost[i];
        cout<<right<<setw(10)<<code[i];
        cout<<endl;
     
    }
    cout<<setfill('*')<<setw(40)<<" "<<endl;
    return 0;
}