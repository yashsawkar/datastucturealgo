


#include<iostream>
using namespace std;


void merge(int arr[], int l, int mid, int r)
{
     int n1 = mid-l+1;
     int n2 = r-mid;

     int a[n1];
     int b[n2];

     for(int i = 0; i < n1; i++)
     {
          a[i] = arr[l+i];
     }
     for(int i = 0; i < n2; i++)
     {
          b[i] = arr[mid+1+i];
     }

     int i = 0;
     int j = 0;
     int k = l;

     while(i < n1 && j < n2)
     {
          if(a[i] < b[j])
          {
               arr[k] = a[i];
               k++; i++;
          }else
          {
               arr[k] = b[j];
               k++; j++;
          }
     }

     while(i < n1)
     {
          arr[k] = a[i];
          k++; i++;
     }
     while(i < n2)
     {
          arr[k] = b[j];
          k++; j++;
     }
}



void mergesort(int arr[], int l, int r)
{
     if(l<r)
     {
          int mid = (l+r)/2;
          mergesort(arr,l,mid);
          mergesort(arr,mid+1,r);
          merge(arr,l, mid, r);
     }
}


int main()
{
     int arr[10];
     cout << " This given array is : " << endl;
     for(int i = 0; i < 10; i++)
     {
          arr[i] = rand()%10;
          cout << arr[i] << "  ";
     }
     mergesort(arr,0,9);
     cout << "\nSorted array : " << endl;
     for(int i = 0; i < 10; i++)
     {
          cout << arr[i] << "  ";
     }
     cout << endl;
     return 0;
}