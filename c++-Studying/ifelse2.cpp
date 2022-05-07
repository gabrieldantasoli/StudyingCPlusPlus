#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n1 , n2 , n3;
    float p1 , p2 , p3 , studentResult;
    char opc;
    
    inicio:
    system("clear");
    
    cout << "Enter your first exame result : ";
    cin >> n1;
    cout << "Enter the weight for this exame: ";
    cin >> p1;
    cout << "Enter your second exame result : ";
    cin >> n2;
    cout << "Enter the weight for this exame: ";
    cin >> p2;
    cout << "Enter your third exame result : ";
    cin >> n3;
    cout << "Enter the weight for this exame: ";
    cin >> p3;
    
    studentResult = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3); 
    
    cout << "Student Result : " << studentResult << "." << endl;
    
    if (studentResult >= 7){
        cout << "Student aproved" << endl;
    }else{
        cout << "Recuperation" << endl;
    }
    
    cout << "Want continue [s/n] ? ";
    cin >> opc;
    
    if (opc == 's'){
        goto inicio;
    }
    
    return 0;
}