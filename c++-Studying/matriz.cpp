#include<iostream>
using namespace std;

int main()
{
    int matriz[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    
    for (int x = 0; x < 3; x+=1){
        for (int y = 0; y < 4; y++){
            cout << matriz[x][y] << " | ";
        }
        cout << endl;
    }
    return 0;
}