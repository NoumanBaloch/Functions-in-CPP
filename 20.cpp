#include <iostream>
using namespace std;
int add_odd(int a);
int main()
{
    int x;
    cout<<"Enter the range = ";
    cin>>x;
    add_odd(x);
    system("pause");
}
int add_odd(int a)
{
    int i,sum=0;
    for(i=1;i<=a;i=i+2)
    {
                sum+=i;
                }       
                       cout<<"sum is = "<<sum;
                       
}
