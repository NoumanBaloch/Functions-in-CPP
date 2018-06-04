#include <iostream>
using namespace std;
void grade(int marks);
int main()
{
    int x;    
    cout<<"Enter your marks";
    cin>>x;
    cout<<endl;
    grade(x);
    system("pause");
}
void grade(int marks)
{
    if(marks>=90)
    {
           cout<<" A+ grade ";
           }
           else if(marks>=80)
           {
               cout<<" A grade"; 
               }
               else if(marks>=70)
               {
                   cout<<"B grade";     
                   }
                   else if(marks>=60)
                   {
                        cout<<" C grade ";
                        }
                        else if(marks>=50)
                        {
                             cout<<" D grade ";
                             }
                             else if(marks>=40)
                             {
                                  cout<<" E grade ";
                                  }
                                  else
                                  {
                                      cout<<" Fail";
                                      }
                                          cout<<endl;
}
