#include <iostream>
using namespace std;
int positive_negative(int a);
int main()
{
    int x;    
    cout<<"Enter your number";
    cin>>x;
    cout<<endl;
    positive_negative(x);
    system("pause");
}
int positive_negative(int a)
{
    if(a>0)
    {
           cout<<a<<" Is positive";
           cout<<endl;
           }
           else
           {
               cout<<a<<" Is negative";
               cout<<endl;         
    
               }

}
