#include<iostream>
using namespace std;

struct cars
{
    string model;
    string fabric;
    string color;
    int year;
    int price;
    int Vm;
    int index;
    
    void set(string setM, string setF, string setC, int setY, int setP, int setVm, int setI)
    {
        model = setM;
        fabric = setF;
        color = setC;
        year = setY;
        price = setP;
        Vm = setVm;
        index = setI;
    }
    
    void showInfo()
    {
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
        cout << "           car - " << index << "    " << endl;
        cout << "Model : " << model << " .\n";
        cout << "Fabric : " << fabric << " .\n";
        cout << "Color : " << color << " .\n";
        cout << "Year : " << year << " .\n";
        cout << "Price : $" << price << " .\n";
        cout << "Max velocity : " << Vm << " .\n";
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    }
};

int main()
{    
    int index = 1;
    cars car1 , car2 , car3;
    car1.set("S","Tesla","Blue",2019,70000,245,index++);
    car2.set("Civic","Volkswagem","Red",2016,25000,190,index++); 
    car3.set("Dragon","Snap","Orange",2022,140000,370,index++);
    car1.showInfo();
    car2.showInfo();
    car3.showInfo();
    return 0;
}