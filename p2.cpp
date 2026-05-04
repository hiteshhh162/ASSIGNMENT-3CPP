#include<iostream>
using namespace std;
int main()
{
    char name[100];
    int age ;
    float w,h;
cout<<"\nenter person name :";
    cin.getline(name,100);
    cout<<"\nEnter person age :";
    cin>>age;
    
    cout<<"\nEnter person hight :";
    cin>>h;
    cout<<"\nenter person weigth :";
    cin>>w;

    cout<<"\nName["<<name<<"]";
    cout<<"\nAge["<<age<<"]";
    cout<<"\nHeigth["<<h<<"]";
    cout<<"\nWeigth["<<w<<"]";
    
    return 0;
}