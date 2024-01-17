#include <bits/stdc++.h>
using namespace std;
void allOddNumber(int a[], int size)
{
    vector<int> OddNumbers;
    for (int i = 0; i < size; i++)
    {
        if (a[i] % 2 == 0)
        {
            OddNumbers.push_back(a[i]);
        }
    }
    for (int itr : OddNumbers)
    {
        cout << itr << " ";
    }
}
int main()
{
    int arr[] = {1, 2, 11, 16, 17, 18, 25, 45};
    int size = sizeof(arr) / sizeof(arr[0]);
    allOddNumber(arr, size);
    return 0;
}