#include<iostream>
#include<math.h>
using namespace std;

void quadEquation(int a , int b , int c);

int main()
{
    quadEquation(-1,2,3);
    quadEquation(1,2,1);
    quadEquation(1,2,4);
}

void quadEquation(int a , int b , int c)
{
    cout << "The equation is : " << a << "x² + " << b << "x + " << c << " = 0" << endl;
    float delta = pow(b,2) + (4 * a * c) * -1;
    cout << "The value of DELTA is equal to : " << delta << endl;
    
    if (delta > 0){
        cout << "Delta is greater then 0 , the equation have two diferents reals roots ." << endl;
    }else if (delta == 0){
        cout << "Delta is equal to 0 , the equation have two equals reals roots . " << endl;
    }else{
        cout << "Delta is less then 0 , the equation don't have any real roots . " << endl;
    }
    
    if (delta >= 0){
        cout << "x' = " << (-b + sqrt(delta)) / 2 << endl;
        cout << "x'' = " << (-b - sqrt(delta)) / 2 << endl;
    }
    
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;

}