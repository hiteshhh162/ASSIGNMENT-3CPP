#include<iostream>
#include<string.h>
using namespace std;
class sortable{
    public:
    virtual void sort()=0; 
};
class sortstring:public sortable
{
    char str[5][100];
    public:
        sortstring()
        {
            cout<<"\nEnter string on index number :";
            for(int i=0;i<5;i++)
            {
                cout<<i <<" :";
                cin>>str[i];

            }

        }
        void sort()
        {
            char temp[100];

            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5-1;j++)
                {
                    if(strcmp(str[j],str[j+1])>0)
                    {
                        strcpy(temp,str[j]);
                        strcpy(str[j],str[j+1]);
                        strcpy(str[j+1],temp);
                    }
                }
            }
            for(int i=0;i<5;i++)
            {
                cout<<"\n"<<str[i];
            }
        }
};
int main() {

        sortable *s;
        sortstring s1;
        s=&s1;
        s->sort();
        return 0;
    
} // namespace std;
