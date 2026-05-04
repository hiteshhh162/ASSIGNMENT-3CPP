#include<iostream>
using namespace std;
class employee{
    protected:
        double sal;
    public:
        virtual void getbonus()=0;    
};
class manager:public employee
{
    double per;
    public:
    manager(double p,double s)
    {
        sal=s;    
        per=p;
    }
    void getbonus()
    {
        cout<<"manager bonus is :"<<(sal*per)/100;
        cout<<"\nManager after salary adding bonus :"<<sal+(sal*per/100);
    }
};
class developer:public employee
{
    double performance_bonus;
    public:
    developer(double p,double s)
    {
        sal=s;    
        performance_bonus=p;
    }
    void getbonus()
    {
        cout<<"developer bonus is :"<<performance_bonus;
        cout<<"\nManager after salary adding bonus :"<<sal+performance_bonus;
    }
};
int main ()
{
    employee *e;
    double s,per,per_bonus;
    
    for(int i=0;i<3;i++)
    {
        cout<<"\n\n\t\t\tEnter "<<i<<" Manager Detail..";
        cout<<"\nSalary :";
        cin>>s;
        cout<<"\nEnter bonus percentage :";
        cin>>per;
        manager m(per,s);
        e=&m;
        e->getbonus();
    }
    for(int i=0;i<3;i++)
    {
        cout<<"\n\n\t\t\tEnter "<<i<<" Developer Detail..";
        cout<<"\nSalary :";
        cin>>s;
        cout<<"\nEnter performance bonus  :";
        cin>>per_bonus;
        developer d(per_bonus,s);
        e=&d;
        e->getbonus();
    }
    return 0;
}