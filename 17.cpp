#include <iostream>
using namespace std;
int table(int a);
int main()
{
    int x;
    cout<<"Enter the range = ";
    cin>>x;
    table(x);
    system("pause");
}
int table(int a)
{
    int i;
    for(i=1;i<=10;i++)
    {
                       cout<<a<<" x "<<i<<"="<<a*i;
                       cout<<endl;
                       }
}
