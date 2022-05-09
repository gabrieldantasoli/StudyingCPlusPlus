#include<iostream>
#include<list>
using namespace std;

int main()
{

    /*
    -erase
    -clear
    -merge
    */
    
    list <int> numbers;
    list <int> numbers1 = {20,22,24};
    list <int>::iterator it;
    
    for (int i = 0; i < 10; i++){
        numbers.push_front(i);
    }
    
    int tam = numbers.size();
    
    cout << "List length = " << tam << " . " << endl;
    
    /*
    it = numbers.begin();
    advance(it,3);
    numbers.erase(it);
    advance(it,1);
    numbers.insert(it,0);
    */
    
    it = numbers.begin();
    for (int i = 0; i < tam; i++){
        advance(it,1);
        numbers.erase(it);
        advance(it,1);
        numbers.insert(it,i*2);
    }
    
    numbers.merge(numbers1);
    
    numbers.sort();
    //numbers.reverse();
    
    //numbers.clear();
    
    tam = numbers.size();
    
    for (int i = 0; i < tam; i++){
        cout << numbers.front() << endl;
        numbers.pop_front();
    }
    
    return 0;
}