
#include<iostream>
using namespace std;



int main()
{
     int n;
     cin >> n;
     char sen[n+1];
     cin >> sen;
     cout << sen << endl;
     bool con = 0;
     for(int i = 0; i < n; i++)
     {
          if (sen[i]==sen[n-1-i])
          {
               con = 1;
               break;
          }
          else { con = 0; }  
     }

     if(con)
     {
          cout << "It is palindrom.." << endl;
     }
     else
     {    
          cout <<" FALSE" << endl; 
     }
     return 0;
}
 