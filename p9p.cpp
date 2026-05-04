#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    char name[5][20];
    int code[5], cost[5];

    // Input (2 products)
    for(int i=0; i<2; i++)
    {
        cout<<"\nEnter "<<i+1<<" product info..\n";
        cout<<"Enter product name : ";
        cin>>name[i];
        cout<<"Enter code : ";
        cin>>code[i];
        cout<<"Enter cost : ";
        cin>>cost[i];
    }

    // Top Line
    cout<<"\n";
    cout<<setfill('*')<<setw(40)<<" " <<endl;

    // Header
    cout<<setfill(' ');
    cout<<left<<setw(10)<<"NAME"
        <<setw(15)<<"COST"
        <<setw(10)<<"CODE"<<endl;

    // Middle Line
    cout<<setfill('-')<<setw(40)<<" " <<endl;

    // Data
    cout<<setfill(' ');
    for(int i=0; i<2; i++)
    {
        cout<<left<<setw(10)<<name[i]
            <<setw(15)<<cost[i]
            <<right<<setw(10)<<code[i]<<endl;
    }

    // Bottom Line
    cout<<setfill('*')<<setw(40)<<" " <<endl;

    return 0;
}
