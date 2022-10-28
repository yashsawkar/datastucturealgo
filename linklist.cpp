
#include<iostream>
using namespace std;


int display_2d(int arr[100][100], int n,  int m)
{
     cout << "The 2d representation is : \n" << endl;
     for (int i = 0; i < n; i++)
     {
          for (int j = 0 ; j < m; j++)
          {
               cout << "   " << arr[i][j];
          }
          cout << "\n\n";
     }
     return 0;
}

int input_2d(int arr[100][100], int n, int m)
{
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < m; j++)
          {
               cout << " column " << i + 1 << " row " << j + 1 << endl;
               cin >> arr[i][j];
          }
     }
     return 0;
}


class node
{
     public:
     int info;
     node* id;

     node(int val)
     {
          info = val;
          id = NULL;
     }
}

int main()
{
     
     return 0;
}