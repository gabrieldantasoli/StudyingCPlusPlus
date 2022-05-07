#include<iostream>
using namespace std;

int main()
{
    int num;
    
    num = 1;
    
    while (num <= 20){
        cout << num;
        num++;
        if (num <= 20){
            cout << " ==> ";
        }
    }
    return 0;
}