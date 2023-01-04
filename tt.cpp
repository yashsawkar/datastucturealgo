
#include <iostream>
using namespace std;


void displayarray(int arr[100],int n)
{
    cout << "[   ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "   ";
    }
    cout << "]" << endl;
        
}

int bubblesort(int arr[100],int n)
{
    for(int i=0; i<=n-1; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    return 0;
}



int main()
{
    int arr[10];

    for(int i=0; i<10; i++)
    {
        arr[i] = rand()%10;
    }

    displayarray(arr,10);
    bubblesort(arr,10);
    displayarray(arr,10);

    return 0;
}
