#include <iostream>
using namespace std;
int find_greater(int a, int b);
int main()
{
    int x,y;    
    cout<<"Enter your first number";
    cin>>x;
    cout<<endl;
    cout<<"Enter your second number";
    cin>>y;
    cout<<endl;
    find_greater(x,y);
    system("pause");
}
int find_greater(int a, int b)
{
    if(a>b)
    {
           cout<<a<<" Is largest";
           cout<<endl;
           }
           else
           {
               cout<<b<<" Is largest";
               cout<<endl;         
    
}

}
