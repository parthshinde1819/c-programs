//Find first positive and negative from the given array(print index).
#include <iostream>
using namespace std;
int main()
{
    int A[] = {0, 1, 2, -1, -1, 0, 1};     // negative
    int B[] = {-1, -2, -2, -2, -3, 1, -3}; // positive
    int size = sizeof(A) / sizeof(A[0]);
    int size2 = sizeof(B) / sizeof(B[0]);
    for (int i = 0; i < size; i++)
    {
        if (A[i] < 0)
        {
            cout << i << endl;
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (B[i] > 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}