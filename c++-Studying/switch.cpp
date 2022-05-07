#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int mode , transport;
    int e = 0;
    
    error:
    if (e){
        cout << "Error , choose valid option ! " << endl;
    }
    
    cout << "transport mode" << endl << "[ 1 ] - terrestrial" << endl << "[ 2 ] -  air" << endl;
    cout << "Enter you transport mode : ";
    cin >> mode;
    cout << endl << "kind of transport" << endl << "[ 1 ] - car / airplane" << endl << "[ 2 ] - train / balon" << endl;
    cout << "Enter your kind of transport : ";
    cin >> transport;
    
    cout << "--------------------------" << endl;
    
    switch (mode){
        case 1:
            switch (transport){
                case 1:
                    cout << "You choose car!" << endl;
                    break;
                case 2:
                    cout << "You choose train!" << endl;
                    break;
                default:
                    e = 1;
                    system("clear");
                    goto error;
            }
            break;
        case 2:
            switch (transport){
                case 1:
                    cout << "You choose airplane!" << endl;
                    break;
                case 2:
                    cout << "You choose balon!" << endl;
                    break;
                default:
                    e = 1;
                    system("clear");
                    goto error;
            }
            break;
        default:
            e = 1;
            system("clear");
            goto error;
    }
    
    
    return 0;
}