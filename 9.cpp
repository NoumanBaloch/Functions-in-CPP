#include <iostream>
using namespace std;
void find_greater_between_three(int a, int b, int c);
int main()
{
    int x,y,z;    
    cout<<"Enter your numbers";
    cin>>x>>y>>z;
    cout<<endl;
    find_greater_between_three(x,y,z);
    system("pause");
}
void find_greater_between_three(int a, int b, int c)
{
    if(a>b)
    {
           if(a>c)
           cout<<a<<" is greater than all";
           }
           else if(b>a)
           {
                if(b>c)
                cout<<b<<" is greater than all";
                }
                else
                {
                    cout<<c<<" is greater than all";
                    }
                    
}
