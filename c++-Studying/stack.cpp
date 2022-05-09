#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack <string> cars;
    
    cars.push("BMW");
    cars.push("Ferrari");
    cars.push("Audi");
    cars.push("Tesla");
    cars.push("Ford");
    cars.push("Lucid");
    
    cout << "Stack's length : " << cars.size() << ".\n" ;
    
    cout << "First car : " << cars.top() << ".\n";
    
    cars.pop();
    
    cout << "New cars length : " << cars.size() << ".\n";
    
    cout << "New first car : " << cars.top() << ".\n";
    
    
    
    return 0;
}