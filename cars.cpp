#include <iostream>
using namespace std;
class cars
{
public:
    string name;
    string color;
    string price;
    string varient;
    void printcar()
    {
        cout << "name: " << name << endl
             << " color: " << color << endl
             << " price: " << price << endl
             << " varient: " << varient << endl;
    }
};

int main()
{
    cars shadap;
    shadap.name = "Volvo";
    shadap.color = "black";
    shadap.price = "1 cr";
    shadap.varient = "Petrol";
    shadap.printcar();

    cars shubham;
    shubham.name = "Scorpio";
    shubham.price = "20 lakh";
    shubham.color = "black";
    shubham.varient = "Disel";
    shubham.printcar();

    cars vinay;
    vinay.name = "Verna";
    vinay.price = "17 lakh";
    vinay.color = "black";
    vinay.varient = "Disel";
    vinay.printcar();
}