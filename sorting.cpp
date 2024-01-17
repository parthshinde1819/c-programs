#include <bits/stdc++.h>
using namespace std;
class Sorting
{
public:
    vector<int> arr;
    vector<int> Bubblesort()
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
    vector<int> insertionsort()
    {

    }
    vector<int> selectionsort()
    {

    }
};
class searching
{
    public:
    vector<int> arr;
    int target = 2;
    int linearsearch()
    {
        for(int i = 0; i < arr.size();i++)
        {
            if(arr[i] == target)
            {
                return i;
            }
        }
        return -1;
    }
};
int main()
{
    Sorting obj;
    obj.arr = {5,4,2,1,6};
    vector<int> result = obj.Bubblesort();
    for(auto i : result)
    {
        cout << i ;
    }

    searching search;
    search.arr = {5,4,2,1,6};
    vector<int> res   ;
    return 0;
}