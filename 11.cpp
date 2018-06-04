#include <iostream>
using namespace std;
float different_operation(float a, float b, char op);
int main()
{
    int x,y;
    char op;  
    cout<<"Enter your operator = ";
    cin>>op;  
    cout<<endl;
    cout<<"Enter your two operond = ";
    cin>>x>>y;
    cout<<endl;
    different_operation(x,y,op);
    system("pause");
}
float different_operation(float a, float b, char op)
{
    switch(op)
    {
           case '+':
           cout<<a<<" + "<<b<<" = "<<a+b;
           break;
           case '-':
           cout<<a<<" - "<<b<<" = "<<a-b;
           break;
           case '*':
           cout<<a<<" x "<<b<<" = "<<a*b;
           break;
           case '/':
           cout<<a<<" / "<<b<<" = "<<a/b;
           break;
           default:
           cout<<"you entered wrong oprator";
                         }
                         
           
}
