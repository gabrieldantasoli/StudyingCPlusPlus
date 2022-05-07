#include<iostream>
using namespace std;

int main()
{
    int length , n1 = 1 , n2 = 1;
    
    cout << "How many numbers of fibonacci's sequrncy do you wanna see ? ";
    cin >> length;
    cout << endl << "Fibonacci of " << length << " = 1 , ";
    
    for (int x = 2; x <= length; x++){
        int y = n2;
        n2 = n1 + n2;
        n1 = y;
        cout << n1;
        if (x < length){
            cout << " , ";
        }
    }
    
    
    return 0;
}