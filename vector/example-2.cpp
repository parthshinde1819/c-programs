#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    return arr;
}

int main()
{
    int arr[] = {1, 10, 23, 18, 20, 50};
    vector<int> vec(arr, arr + sizeof(arr) / sizeof(arr[0]));

    vector<int> sortedArray = bubbleSort(vec);
    for (auto itr : sortedArray)
    {
        cout << itr << " ";
    }
    return 0;
}