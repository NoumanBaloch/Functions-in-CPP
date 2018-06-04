#include <iostream>
using namespace std;
int show(int rows);
int main()
{
    int x;
    cout<<"Enter the number of rows";
    cin>>x;
    show(x);
     system("pause");
     }
     int show(int rows)
     {
          int i,j;
          for(i=1;i<=rows;i++)
          {
                           for(j=1;j<=5;j++)
                           {
                           cout<<"*";
                           }
                           cout<<endl;
                           }
                           }
