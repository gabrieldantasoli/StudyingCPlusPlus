#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int iterations , variable ,n1 = 0 , n2 = 0 , n3 = 0 , n4 = 0 , appendValue ;
    int index = 0;
    cout << "How many iterations ? ";
    cin >> iterations;
    
    appended:
    
    while (index < iterations){
        cout << "Witch variable do you want to increment ? [ 1 , 2 , 3 , 4 ] ";
        cin >> variable;
        
        while (!(variable >= 1 and variable <= 4)){
            cout << "This is an anvalid value . choose one among [ 1 , 2 , 3 ,4 ] ";
            cin >> variable;
        }
        
        cout << "What is the value to increment ? ";
        cin >> appendValue;
        
        switch (variable){
            case 1:
                n1 += appendValue;
                break;
            case 2:
                n2 += appendValue;
                break;
            case 3:
                n3 += appendValue;
                break;
            case 4:
                n4 += appendValue;
                break;
        }
        system("clear");
        cout << "Variable n" << variable << " Incremented in " << appendValue << "." << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
        index += 1;
        goto appended;
    }
    
    system("clear");
    cout << "N1 is equal to : " << n1 << endl << "N2 is equal to : " << n2 << endl << "N3 is equal to : " << n3 << endl << "N4 is equal to : " << n4 ;
    return 0;
}