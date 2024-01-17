#include<bits/stdc++.h>
using namespace std;
class database
{
    public :
    database()
    {
        cout<<"Connected";
    }
};
class stringCls
{
    public :
    string str;
    int stringLength()
    {
        int i = 0;
        while (str[i] != '\0')
        {
            i++;
        };
        return i;
    }
};
int main()
{
    stringCls strs;
    strs.str = "Hello Codeseed";
    cout << strs.stringLength();

    string myName = "amit";



    return 0;
}