#include <iostream>
using namespace std;
int sum(int a);
int main()
{
    int x;
    cout<<"Enter the range = ";
    cin>>x;
    sum(x);
    system("pause");
}
int sum(int a)
{
    int i,addition=0;
    for(i=1;i<=a;i++)
    {
                addition+=i;
                }       
                       cout<<"sum is = "<<addition;
                       
}
