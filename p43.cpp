#include<iostream>
#include<fstream>
using namespace std;
int main ()
{
    fstream file;
    char name[50];
    int rno,total;
    file.open("student.txt",ios::in|ios::out|ios::trunc);
    for(int i=0;i<5;i++)
    {
        cout<<"\nEnter"<<i+1<<" number student information \n ";
        cout<<"\nStudent name :";
        cin>>name;
        cout<<"\nstudent roll number :";
        cin>>rno;
        cout<<"\nStudent totsl :";
        cin>>total;

        file<<name<<" "<<rno<<" "<<total<<"\n";

    }
    file.seekg(0);
     int i=0;
    while(file.eof()==0)
    {
        file>>name>>rno>>total;
        cout<<"\n"<<i+1<<"Student info \n\n";

        cout<<"\nStudent name :"<<name;
        cout<<"\nRoll number :"<<rno;
        cout<<"\ntotal :"<<total;
        i++;
    }
    file.close();
    return 0;
}