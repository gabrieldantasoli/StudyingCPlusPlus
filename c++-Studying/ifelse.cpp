#include <iostream>
using namespace std;

int main(){

    int num1 , num2 ;
    bool tf;
    
    cin >> num1;
    num2 = 50;
    
    if (num1 > num2){
        cout << "The value of num1 : " << num1 << " is greater then num2 : " << num2 << endl;
    }else if (num1 < num2){
        cout << "The value of num1 : " << num1 << " is less then num2 : " << num2 << endl;
    }else{
        cout << "The valie of num1 : " << num1 << " is equal to num2 : " << num2 << endl;
    }
    
    cin >> tf;
    
    if (tf){
        cout << "TRUE!" << endl;
    }else{
        cout << "FALSE!" << endl;
    }
}