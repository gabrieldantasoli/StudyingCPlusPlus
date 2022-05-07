#include <iostream>

using namespace std;

int main(){
    //Variables in C++
    
    //type name;
    //type name = value;
    
    //integer variable:
    int lifes = 3; //20 , 10 , 15
    
    //char variable
    char character = 'g'; //'g','d','o'
    //or char character1[3] = ['g','d','o']; //'abc'
    
    //float variable 
    float number2 = 3.2; //3.5 , 4.9 ,10.2
    
    
    //double variable
    double number3 = 4.9992929292; //4.8999999 , 8.91919191919
    
    //bool variable
    bool isBlue = false; //true or false
    
    //string variable
    string name = "gabriel"; //"gabriel"
    
    cout << lifes << "\n" << character << "\n" << number2 << "\n" << number3 << "\n" << isBlue << "\n" << name;
    
    cout << "Change lifes :" << endl;
    
    cin >> lifes;
    
    cout << lifes << endl;
    
    return 0;
}