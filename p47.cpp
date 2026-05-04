#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file ;
    int n,table;
    file.open("table.txt",ios::in | ios::out | ios::trunc);
    cout<<"\nEnter A number for print their table :";
    cin>>n;
    file<<n;
    file.seekg(0);
    file>>table;
    for(int i=1;i<=10;i++)
    {
        cout<<table<<" * "<<i<<" = "<<table*i<<"\n";

    }
    file.close();
    return 0;


}