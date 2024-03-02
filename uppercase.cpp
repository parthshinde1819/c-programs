// find first uppercase letter in a character array.
#include <iostream>
using namespace std;
int main()
{
    char A[] = {'a', 'b', 'c', 'D', 'e'};
    int size = sizeof(A) / sizeof(A[0]);
    //string isupper();
    for(int i=0; i<size; i++)
    {
        if(isupper(A[i]))
        {
            cout<<A[i]<<endl;
        }
    }

    return 0;
}