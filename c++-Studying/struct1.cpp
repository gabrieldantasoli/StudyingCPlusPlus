#include<iostream>
using namespace std;

struct cars{
    string model;
    string fabric;
    string color;
    int year;
    int price;
};

int main(){
    cars car1 , car2;
    
    car1.model = "S";
    car1.fabric = "Tesla";
    car1.color = "Darkred";
    car1.year = 2019;
    car1.price = 70000;
    
    car2.model = "Civic";
    car2.fabric = "Volkswagem";
    car2.color = "Blue";
    car2.year = 2016;
    car2.price = 20500;
    
    cout << "Model : " << car1.model << endl;
    cout << "Fabric : " << car1.fabric << endl;
    cout << "Color : " << car1.color << endl;
    cout << "Year : " << car1.year << endl;
    cout << "Price : " << car1.price << endl;
    cout << "=-=-=-=-=-=-=-=" << endl;
    cout << "Model : " <<car2.model << endl;
    cout << "Fabric : " << car2.fabric << endl;
    cout << "Color : " << car2.color << endl;
    cout << "Year : " << car2.year << endl;
    cout << "Price : " << car2.price << endl;
    

    return 0;
}