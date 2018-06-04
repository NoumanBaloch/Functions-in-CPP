#include <iostream>
using namespace std;
int swap(int a, int b);
int main()
{
    int x,y;    
    cout<<"Enter your first number";
    cin>>x;
    cout<<endl;
    cout<<"Enter your second number";
    cin>>y;
    cout<<endl;
    swap(x,y);
    cout<<endl;
    system("pause");
}
int swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swaping first number is " <<a;
    cout<<endl;
    cout<<"After swaping second number is "<<b;
    cout<<endl; 
    
         
    
}
