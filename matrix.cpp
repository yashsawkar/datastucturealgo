

#include<iostream>
using namespace std;

int arr[100][100];
int n;
int m;

int display_mat()
{
     for (int i = 0; i < n; i++)
     {
          for ( int j = 0; j < m; j++)
          {
               cout << arr[i][j] << "   " ;
          }
          cout << endl;
     }
     return 0;
}



int create_mat()
{
     cout << " Creating an array : " << endl;
     cout << " Enter N dimensions : " << endl;
     cin >> n;
     cout << " Enter M dimensions : " << endl;
     cin >> m;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               arr[i][j] = rand()%100;
          }
     }
     return 0;
}




int main()
{   
     create_mat();
     display_mat(); 
     return 0;
}