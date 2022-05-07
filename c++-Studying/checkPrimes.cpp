#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int number , checkedNumbers , primeNumbers;
    char check;
    
    checkedNumbers = 0;
    primeNumbers = 0;
    
    while (true){
       
        newCheck:
        system("clear");
        
        cout << "Enter the number : ";
        cin >> number;
        cout << endl;

        checkedNumbers += 1;
        
        int count = 1;
        for (int x = 2; x <= number; x++){
            if (number % x == 0){
                count += 1;
            }
            if (count > 2){
                break;
            }
        }
        
        if (count < 3){
            cout << "The number : " << number << " is a prime number !" << endl; 
            primeNumbers += 1;
        }else{
            cout << "The number : " << number << " is not a prime number !" << endl;
        }
        
        cout << "Do you want to check another number ? [y/n] ";
        cin >> check;
        
        cout << endl;
        
        if (check == 'y'){
            goto newCheck;
        }else{
            cout << checkedNumbers << "Checkeds. Among this , " << primeNumbers << " were prime numbers !";
            break;
        }
    }
}