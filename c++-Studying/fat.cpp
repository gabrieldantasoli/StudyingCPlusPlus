#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int num , fat;
    char cont;
    while (true){
        cout << "Enter a number to see it's fatorial : " ;
        cin >> num;
        system("clear");
        cout << num << "! = (";
        fat = 1;
        for (int x = num; x >= 1; x-=1){
            fat *= x;
            cout << x;
            if (x > 1){
                cout << " * ";
            }
        } 
        cout << ") = " << fat << endl;
        cout << "Do you want to see the fatorial of another number ? [y/n] ";
        cin >> cont;
        if (cont == 'n'){ break;}
    }
    return 0;
}