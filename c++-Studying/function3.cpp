#include<iostream>
#include<math.h>
using namespace std;

void imp(string txt = "Default text!");
float power(float num , float exp = 2);

int main()
{
    
    imp();
    imp("Gabriel");
    imp("I love programming!");
    
    float value1 = power(5);
    float value2 = power(5,3);
    
    cout << "\nThe Value 1 is equal to " << value1;  
    cout << "\nThe Value 2 is equal to " << value2;
    return 0;
}

void imp(string txt)
{
    cout << "\n" << txt << "\n";
}

float power(float num , float exp)
{
    return pow(num,exp);
}