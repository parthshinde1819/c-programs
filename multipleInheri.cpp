#include<bits/stdc++.h>
using namespace std;
class Father{
    public:
    void skincolor()
    {
        cout<<"Brown ";
    }
};
class Mother{
    public:
    void eyecolor()
    {
        cout<<" light Green";
    }
};
class Child: public Father, public Mother{
   
};
int main()
{
    Child adi;
    adi.skincolor();
    adi.eyecolor();

    return 0;
}