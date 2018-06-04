#include <iostream>
using namespace std;
int display_odd(int a);
int main()
{
    int x;
    cout<<"Enter the range = ";
    cin>>x;
    display_odd(x);
    system("pause");
}
int display_odd(int a)
{
    int i;
    for(i=1;i<=a;i=i+2)
    {
                       cout<<i;
                       cout<<endl;
                       }
}
