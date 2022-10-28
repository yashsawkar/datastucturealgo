

#include<iostream>
using namespace std;

int result_arr[100][100];
int transmatr[100][100];


int display_mat(int arr[100][100],int n,int m)
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



int create_mat(int arr[100][100],int n,int m)
{
     int dec; 
     cout << " Press : \n 1 --> random numbers \n 2 --> cumstom inputs \n --**-->>--**-->>\n" << endl;
     cin >> dec;
     if ( dec == 1 )
     {
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                     arr[i][j] = rand()%10;
               }
          }
     } else if( dec == 2)
     {
          for (int i = 0; i < n; i++)
          {
               for (int j = 0; j < m; j++)
               {
                    cout << " Enter row " << i+1 << " column " << j+1 << endl;
                    int val;
                    cin >> val;
                    arr[i][j] = val;
               }
          }
     }
     return 0;
}


int transpose(int arr[100][100],int n,int m)
{
     for (int i = 0; i < n; i++)
     {
          for ( int j = 0; j < m; j++)
          {
               transmatr[i][j] = arr[j][i];
          }
     }
     return 0;
}

int multi_mat(int arr[100][100], int arr2[100][100], int n,int m,int u,int o)
{    
     cout << " The Result of matrix multiplication is : " << endl;
     for(int i = 0; i <n; i++)
     {
          for (int j = 0; j < o; j++)
          {
               for (int k = 0; k < m; k++)
               {
                    result_arr[i][j] += arr[i][k]*arr2[k][j];
               }
          }
     }
     return 0;
}


int main()
{  
     cout << " Creating a new matrix : \n" << endl;
     int arr[100][100], n = 3,m = 4;
     create_mat(arr,n,m);
     display_mat(arr,n,m);
     cout << " \n Creating second matrix : \n"  << endl;
     int arr2[100][100],u = 4, o = 3;
     create_mat(arr2,u,o);
     display_mat(arr2,u,o);
     multi_mat(arr,arr2,n,m,u,o);
     display_mat(result_arr,n,o);

     return 0;
}