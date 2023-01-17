
#include<iostream>
using namespace std;

void swap(int arr[], int f, int e)
{
     int temp = arr[e];
     arr[e] = arr[f];
     arr[f] = temp;
}

int partitation(int arr[], int l, int r)
{
     int pivot = arr[r];
     int i = l-1;
     for(int j = l; j < r; j++)
     {
          if(arr[j] < pivot)
          {
               i++;
               swap(arr,i,j);
          }
     }
     swap(arr,i+1,r);
     return i+1;
}


void quicksort(int arr[], int l , int r)
{
     if(l<r)
     {
          int pi = partitation(arr,l,r);
          quicksort(arr, l, pi-1);
          quicksort(arr, pi+1, r);
     }
}



int main()
{    
     int arr[10];
     cout << "array to be sorted : " << endl;
     for(int i = 0; i < 10; i++)
     {
          arr[i] = rand()%10;
          cout << arr[i] << "   ";
     }
     cout << endl;
     
     cout << "Sorted array : "<< endl;
     quicksort(arr,0,9);
     for(int i = 0 ; i < 10; i++)
     {
          cout << arr[i] << "   ";
     }
     cout << endl;
     
     return 0;
}