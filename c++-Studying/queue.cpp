#include<iostream>
#include<queue>
using namespace std;

int main()
{
    /*
    -empty
    -size
    -front
    -back
    -push
    -pop
    */
    
    queue <string> cars;
    
    cout << (cars.empty() ? "IT'S EMPTY" : "ISN'T EMPTY") << endl;
    
    cars.push("Audi");
    cars.push("BMW");
    cars.push("Ferrari");
    cars.push("Lucid");
    cars.push("Ford");
    
    //cars.pop();
    
    cout << (cars.size() == 0 ? "IT'S EMPTY" : "NOT EMPTY");
    
    cout << "\nThe First car is : " << cars.front() << " and The last is : " << cars.back() << endl;
    
    while (!cars.empty()){
        cout << cars.front() << endl;
        cars.pop();
    }
    
    return 0;
}