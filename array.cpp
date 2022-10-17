


#include<iostream>
#include<cmath>
#include<climits>
using namespace std;

int arr[1000];
int sorted_arr[100];
int n;
int maxel = INT_MIN;
int minel = INT_MAX;

// displaying array
int display_arr(int arr[100], int n)
{
      
      cout << "\n[  ";
      for (int i = 0; i <= n-1; i++)
      {
          cout << arr[i] << "  ";
      }
      cout << "]\n" << endl;
      return 0;
}

int binary_search(int arr[100], int n)
{
      int key;
      cout << "Enter the key to find  : " << endl;
      cin >> key;
      int mid_v = n/2;
      if(key < arr[mid_v])
      {
            for (int i = 0; i <= mid_v; i++)
            {
                  if(arr[i] == key)
                  {
                        cout << "Found at index :  " << i+1 << endl;
                        break;
                  } else if (i >= mid_v)
                  {
                        cout << " \nElement not found in this array.....!\n" << endl;
                  }
            } 
      } else if(key == arr[mid_v])
      {
            cout << "Found at index " << mid_v+1 << endl;
      } else if(key > arr[mid_v])
      {
            for (int i = mid_v; i <= n; i++)
            {
                  if(arr[i] == key)
                  {
                        cout << "Found at index :  " << i+1 << endl;
                        break;
                  } else if(i >= n)
                  {
                        cout << "\n Element not found in this array....\n" << endl;
                  }
            }
      } else if(key > arr[n])
      {
            cout << "\nElemnet is not in this array....!\n" << endl;
      }
       else
      {
            cout << " Intiallizing Linear search... \n binary search failed to find unit " << endl;
            for(int i = 0; i <= n; i++)
            {
                  if(arr[i] == key)
                  {
                        cout << "Element found at index :  " << i+1 << endl;
                        break;
                  } else
                  {
                        cout << "\nElement not found.....\n" << endl;
                  }
            }
      } 
      return 0;
}

// creating array
int create_arr()
{
      int dec;
      cout << " \nEnter the size of the array : "  <<  endl;
      cin >> n;
      cout << " \nEnter the type of arrey required  : " << endl;
      cout << " ^1^ -> For even number array " << endl;
      cout << " ^2^ -> for odd number array " << endl;
      cout << " ^3^ -> for natural number array " << endl;
      cout << " ^4^ -> for random number array " << endl;
      cout << " ^5^ -> for custom imput array" << endl;
      cout << " ---> * ->> " << endl;
      cin >> dec;
      if (dec == 1)
      {

            int dt = 2;
            for(int i = 0; i <= n-1; i++)
            {
                  arr[i] = dt;
                  dt += 2;
            }
      } else if(dec == 2)
      {
            int dt = 1;
            for(int i = 0; i <= n-1; i++)
            {
                  arr[i] = dt;
                  dt += 2; 
            }
      } else if(dec == 3)
      {
            for(int i = 0; i <= n-1; i++)
            {
                  arr[i] = i+1;
            }
      } else if (dec == 4)
      {     
            int range;
            cout <<" Enter the range of number : " << endl;
            cin >> range;
            for (int i = 0; i <= n-1; i++)
            {
                  arr[i] = rand()%range;
            }
      } else if (dec == 5)
      {
            for (int i = 0; i <= n-1; i++)
            {
                  cout << "Enter " << i+1 << " value : " << endl;
                  cin >> arr[i];
            }
      }
      return 0;
}

int max_ele(int arr[100], int n)
{
      for (int i = 0; i <= n-1; i++)
      {
            if (arr[i] > maxel)
            {
                  maxel = arr[i];
            }
      }
      return  maxel;
}

int min_ele(int arr[100], int n)
{
      for(int i = 0; i <= n-1 ; i++)
      {
            if (arr[i] < minel)
            {
                  minel = arr[i];
            }
      }
      return minel;
}

int sorting(int arr[100], int n)
{
      int dec;
      cout << " Enter the order elements arrangment : " << endl;
      cout << " ^0^ -> for Ascending" << endl;
      cout << " ^1^ -> for Descending" << endl;
      cin >> dec;
      if (dec == 0)
      {
            for(int i = 0; i <= n-1 ; i++)
            {
                  for(int j = i+1 ; j <= n-1; j++)
                  {
                        if(arr[i] > arr[j])
                        {
                              int temp = arr[i];
                              arr[i] = arr[j];
                              arr[j] = temp;
                        }
                  }
            }
      } else if( dec == 1)
      {
            for(int i = 0; i <= n-1; i++)
            {
                  for(int j = i+1; j <= n-1; j++)
                  {
                        if(arr[i]< arr[j])
                        {
                              int tem  =arr[i];
                              arr[i] = arr[j];
                              arr[j] = tem;
                        }
                  }
            }
      }
      cout << " The sorted array is \n " << display_arr(arr,n) << endl;
      return 0;
}

int insertion(int arr[100], int n)
{
      int pos,ele;
      cout << " Enter the pos : \n";
      cin >> pos;
      cout << " Enter the element : \n";
      cin >> ele;
      for(int i = n; i >= pos;i--)
      {
            if(i == pos)
            {
                  arr[i-1] = ele;
                  break;
            }
            arr[i+1] = arr[i];
      }
      display_arr(arr,n);
      return 0;
}

int main()
{
      create_arr();
      display_arr(arr, n);
      cout << "\nThe maximum element in the array is : \n " << max_ele(arr, n) << "\n"<< endl;
      cout << "\nThe minimum element in the array is : \n " << min_ele(arr, n) << "\n"<< endl;
      sorting(arr, n);
      binary_search(arr, n);
      insertion(arr, n);
      return 0;
}