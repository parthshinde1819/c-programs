#include <iostream>
using namespace std;
int main()
{
    int a = 18;
    int *p = &a;
    cout << *p;
    cout << endl;
    (*p)++;
    cout << *p;
    return 0;
}