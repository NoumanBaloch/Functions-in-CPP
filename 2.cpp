#include <iostream>
using namespace std;
float functions(float a, float b);
int main()
{
    float x,y;    
    cout<<"Enter your two numbers";
    cin>>x>>y;
    functions(x,y);
    system("pause");
}
float functions(float a,float b)
{
    float sum,divid,multi,sub;
    
    sum=a+b;
    
    cout<<a<<" + "<<b<<" = "<<sum;
    
    cout<<endl;
    
    divid=a/b;
    
    cout<<a<<" / "<<b<<" = "<<divid;
    
    cout<<endl;
    
    multi=a*b;
    
    cout<<a<<" x "<<b<<" = "<<multi;
    
    cout<<endl;
    
    sub=a-b;
    
    cout<<a<<" - "<<b<<" = "<<sub;
    
    cout<<endl;       
    
}
