#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n1 , n2 , grade;
    string res;
    
    cout << "Enter your first grade : ";
    cin >> n1;
    cout << "Enter your seconde grade : ";
    cin >> n2;
    grade = n1 + n2;
  
    
    /*
    if (grade >= 60){
        cout << "Aproved" << endl;
    }else{
        cout << "Recuperation" << endl;
    }
    */
    
    //(grade >= 50) ? res = "aproved" : res = "Recuperation";
    
    res = (grade >= 50) ? "aproved" : "Recuperation";
    
    
    cout << res << endl;
}