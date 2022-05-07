#include<iostream>
using namespace std;

int main()
{
    int matriz[3][4];
    int x = 0;
    
    for (int c = 0; c < sizeof(matriz)/16; c++){
        for (int d = 0; d < sizeof(matriz)/12; d++){
            matriz[c][d] = x;
            x+=10;
            cout << matriz[c][d] << " - ";
        }
        cout << endl;
    }
    return 0;
}