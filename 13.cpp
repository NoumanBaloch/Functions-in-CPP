#include <iostream>
using namespace std;
void add_natural(int a);
int main()
{
    int  x;
    cout<<"Enter your maximum number";
    cin>>x;
    cout<<endl;
    add_natural(x);
    system("pause");
}
void add_natural(int a)
{
      int i,sum=0;
      for(i=1;i<=a;i++)
      {
                       sum+=i;
                       
                       }
                       cout<<sum;  
           
}
