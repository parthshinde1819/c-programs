#include<iostream>
using namespace std;
int sort(int arr[] , int size)
{
    for(int i=0; i<size; i++)
    {
        int j = i;
        while(j>0 && arr[j]<=arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }

    }
      for(int i=0; i<size; i++)
      {
        cout << arr[i] << endl;
      }
}
int main()
{
    int arr[] = {5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
}