#include <iostream>
using namespace std;

int main(){
    int n1 , n2 , n3;
    bool travel;
    
    cout << "Enter trhee integer numbers . Each one is a confirmation for a travel : " << endl;
    cout << "Money : ";
    cin >> n1;
    cout << "Girlfriend : ";
    cin >> n2;
    cout << "Chosed a country : ";
    cin >> n3;
    
    
    if (n1 && n2 && n3){
        cout << "Let's Travel now!" << endl;
    }else{
        cout << "I will stay home!" << endl;
    }
    
    cout << "To choose the travel local , lets play the inverse game !"<< endl;
    cout << "Will i choose ?";
    cin >> travel;
    
    if (!travel){
        cout << "YES. :)";
    }else{
        cout << "NOT. :)";
    }
    
    return 0;
}