#include <bits/stdc++.h>
using namespace std;
class Sortings
{
public:
    vector<int> arr;
    vector<int> BubbleSort()
    {
        // Bubble sort code
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
    vector<int> InsertionSort()
    {
        // insertion sort code
        for(int i=0 ; i < arr.size(); i++)
        {
            int j =i;
            while(j >0 && arr[j] < arr[j-1])
            {
                swap(arr[j],arr[j-1]);
                j--;//
            }
        }
        return arr;
    }
    vector<int> SelectionSort()
    {
        // selection sort code
        for(int i=0 ; i < arr.size(); i++)
        {
            int small = i;
            for(int j=i+1 ; j < arr.size(); j++)
            {
                if (arr[small] > arr[j])
                {
                    small = i;
                }
            }
            swap(arr[small],arr[i]);
        }
        return arr;
    }
};
class Searching
{
public:
    vector<int> arr;
    int target = 4;
    int linearSearch()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Searching obj;
    obj.arr = {1, 2, 3, 4, 5};
    int result = obj.linearSearch();
    cout << result << endl;
    Sortings sort1;
    sort1.arr = {4, 2, 1, 3};
    vector<int> res = sort1.BubbleSort();
    for (auto i : res)
    {
        cout << i << " ";
        cout << endl;
        cout << endl;
    }
   Sortings sort2;
   sort2.arr = {4, 2, 1, 3};
   vector<int> ins_sort = sort2.InsertionSort();
   for(auto i : ins_sort)
   {
        cout<<i<<endl;
   }
    Sortings sort3;
    sort3.arr = {4,3,2,1};
    vector<int> selec = sort3.SelectionSort();
    return 0;
}