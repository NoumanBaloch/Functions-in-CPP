#include <iostream>
using namespace std;
void factorial(int n);
int main()
{
    int num=5;
    cout<<"Enter your number to find factorial";
    cin>>num;
    factorial(num);
    system("pause");
}
void factorial(int n)
{
    int c;
    long fact;
    for(c=1;c<=n;c++)
    {
                     fact=fact*c;
                     }
                     cout<<fact;
                     }
