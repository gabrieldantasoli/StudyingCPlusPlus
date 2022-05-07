#include<iostream>
using namespace std;

int main()
{
    int num = 1;
    
    do {
        cout << num;
        if (num < 100){
            cout << " ==> ";
        }
        num++;
    }while (num <= 100);
    return 0;
}