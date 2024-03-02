#include <iostream>
using namespace std;
int main()
{
    string name = "nayan";
    string name1 = "nitin";
    string name3 = "jatan";
    int start = 0;
    // nayan
    int end = name.length() - 1;

    bool isPalindrome = true;
    while (start < end)
    {
        if (name[start] != name[end])
        {
            isPalindrome = false;
            break;
        }
        start++;  
        end--;
        isPalindrome = true;
    }
    if (isPalindrome == true)
    {
        cout << " The string is palindrome  " << name << endl;
    }
    else
    {
        cout << " The string is not palindrome  " << name << endl;
    }
    return 0;
    
}