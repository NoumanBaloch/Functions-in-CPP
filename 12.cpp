#include <iostream>
using namespace std;
float ave(int a, int b,int c);
int main()
{
    int x,y,z; 
    cout<<"Enter your numbers to find average = ";
    cin>>x>>y>>z;
    cout<<endl;
    ave(x,y,z);
    system("pause");
}
float ave(int a, int b,int c)
{
      float sum;
                   sum=a+b+c;
                   cout<<sum/3;      
           
}
