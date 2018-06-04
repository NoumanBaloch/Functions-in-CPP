#include <iostream>
using namespace std;
int positive_negative_zero(int a);
int main()
{
    int x;    
    cout<<"Enter your number";
    cin>>x;
    cout<<endl;
    positive_negative_zero(x);
    system("pause");
}
int positive_negative_zero(int a)
{
    if(a>0)
    {
           cout<<a<<" Is positive";
           cout<<endl;
           }
           else if(a<0)
           {
               cout<<a<<" Is negative";
               cout<<endl;         
               }
               else
               {
                   cout<<a << " is zero";
                   }

}
