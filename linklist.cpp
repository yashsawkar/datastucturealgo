
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


int main()
{
     struct {
          int info;
          int *id;
     } ele , ele2 , ele3;

     ele.info = 89;
     ele.id = &ele.info;
     ele2.info = 91;
     ele2.id = &ele2.info;
     ele3.info = 93;
     ele3.id = &ele3.info;

     cout << "--------------------------------" << endl;
     cout << "first : \n" << "info : " << ele.info << "\n" << "address : " << ele.id << endl;
     cout << "Conforming the address to the info : " << *ele.id << endl;
     cout << "first : \n" << "info : " << ele.info << "\n" << "address : " << ele2.id +1 << endl;
     cout << "Conforming the address to the info : " << *ele.id << endl;
     cout << "first : \n" << "info : " << ele3.info << "\n" << "address : " << ele.id+1 << endl;
     cout << "Conforming the address to the info : " << *ele.id  << endl;

     // changing the infor through the address
      *ele.id = *ele3.id;
      cout << "The info is : " << *ele.id << endl;
      cout << "Conforming the info : " << ele.info << endl;


     

      cout << "Enter the input for the matrix : " << endl;
      cout << "No of rows : " << endl;
      int n ,m;
      cin >> n;
      cout << "No of columns : " << endl;
      cin >> m;

      int arr[100][100];

     input_2d(arr,n,m);
     display_2d(arr,n,m);
     



     return 0;
}