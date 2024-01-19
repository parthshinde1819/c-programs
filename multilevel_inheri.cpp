#include<bits/stdc++.h>
using namespace std;
class Grandfather
{
    public:
    void quality()
    {
        cout<<"physics is strong";
    }
};
class Father:public Grandfather
{

};
class Child:public Father
{

};
int main()
{
    Child ram;
    ram.quality();

    return 0;
}