#include<iostream>
#include<stack>
#include<cstdlib>

using namespace std;

int main()
{
    stack <string> programmingL;
    
    programmingL.push("Javascript");
    programmingL.push("Python");
    
    int choose;
    string language;
    while (true){
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
        cout << "1 - TOP" << endl << "2 - ADD" << endl << "3 - POP" << endl << "4 - CLEAR" << endl << "5 - BREAK" << endl;
        cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
        do{
            cout << "Choose an option : " ;
            cin >> choose;
        }while (choose > 5 || choose < 1);
        if (choose == 5){
            break;
        }
        switch (choose){
            case 1:
                if (!programmingL.empty()){
                    system("clear");
                    cout << "Top programming Language is : " << programmingL.top() << ".\n";
                }else{
                    system("clear");
                    cout << "Stack of programming languages is empty!" << endl;
                }
                break;
            case 2:
                cout << "What Programming Language you wanna add ? ";
                cin >> language;
                programmingL.push(language);
                system("clear");
                cout << language << " added!" << endl;
                break;
            case 3:
                system("clear");
                cout << programmingL.top() << " Removed!" << endl;
                programmingL.pop();
                break;
            case 4:
                system("clear");
                while (!programmingL.empty()){
                    cout << programmingL.top() << " Removed!" << endl;
                    programmingL.pop();
                }
            
                break;
        }
    }
}
