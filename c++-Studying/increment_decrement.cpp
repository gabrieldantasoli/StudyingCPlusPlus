#include<iostream>
using namespace std;

//global variable
int n1 , n2;

int main()
{
    //local variable
    int n3 , n4;
    n1 = 1;
    n2 = 2;
    n3 = 3;
    n4 = 4;
    
    cout << n1 + n2 + n3 + n4 << endl;
    cout << n1 / n2 << endl;
    
    cout << "---------------" << endl;
    
    //n1 = n1 + 1;
    //n2 = n2 - 1;
    //n3 += 1;
    //n4 -= 1;
    
    //cout << n1 << " " << n2 << " " << n3 << " " << n4 << endl;
    
    cout << n1++ << endl;
    cout << n1 << endl;
    
    cout << ++n2 << endl;
    
    
    return 0;
}