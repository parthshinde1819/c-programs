#include <iostream>
using namespace std;
int main()
{
    int x[] = {1, 2, 3, 4, 5, 0, -1, 10};
    int size = sizeof(x) / sizeof(x[0]);
    int repeat = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j =i+1; j < size; j++)
        {
            if (x[i] == x[j])
            {
                repeat = i;
            }
        }
    }
cout<<repeat<<endl;
return 0;
}
    