#include<iostream>
using namespace std;

int main()
{
    int x = 0;
    
    
    for (x ; x <= 100; x++){
        cout << x;
        if (x < 100){
            cout << " ==> ";
        }
    }
    
    int a , b , c;
    
    cout << endl;
    
    for (a = 0, b = 0 , c = 0; a <= 50; a++ ,b+=2 ,c+=3 ){
        cout << a << " - " << b << " - " << c << endl;
    }
    
    return 0;
}