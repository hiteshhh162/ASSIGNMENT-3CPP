#include<iostream>
#include<string.h>
using namespace std;
class employe{
    protected:
    float sal;
    char e_id[10],e_name[10],e_type[10];
    public:
    employe(char id[],char n[],char t[],float s)
    {
            strcpy(e_id,id);
            strcpy(e_name,n);
            strcpy(e_type,t);
            sal=s;
    }
    void display ()
    {
        cout<<"\nEmployee name is :"<<e_name;
        cout<<"\nEmployee id is :"<<e_id;
        cout<<"\nEmployee type is :"<<e_type;
        cout<<"\nEmployee salary is :"<<sal;
    }

        virtual void calsal()=0;
};
class regular:public employe
{
    float  t_sal,pf,da,hra,tax;
    public:
    regular(char n[],char id[],char t[],float s):employe(n,id,t,s){}
        void calsal()
        {
                pf=1000;
                da=100;
                hra=1200;
                tax=500;
            t_sal=(sal+pf+da+hra)-tax;
            display();
            cout<<"\nTotal salary of regular employee :"<<t_sal;
        }
  
};
class temp:public employe
{
    float  t_sal,hra;
    public:
        temp(char n[],char id[],char t[],float s):employe(n,id,t,s){}
        void calsal()
        {
                
                hra=1200;
                
            t_sal=(sal+hra);
            display();
            cout<<"\nTotal salary of temprary employee :"<<t_sal;
        }
  
};
int main ()
{
        employe *e;
    char n[10],id[10],t[10];
    float s;
    cout<<"\nEnter employee name :";
    cin>>n;
    cout<<"\nEnter employee id :";
    cin>>id;
    cout<<"\nEnter salary :";
    cin>>s;
    while(1)
    {
    cout<<"\nEnter employee type:";
    cin>>t;
    if(strcmp(t,"regular")==0)
    {
        regular r(n,id,t,s);
        e=&r;
        e->calsal();
        break;
    }else if(strcmp(t,"temprory")==0)
    {
        temp t1(n,id,t,s);
        e=&t1;
        e->calsal();
        break;
    }
    else
    {
        cout<<"\nenter a valid type :";
    }
    }return 0;
}
