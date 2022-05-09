#include<iostream>
#include<string.h>
using namespace std;

int main(int argc,char *argv[])
{
    cout << argv[0] << endl;
    if (argc > 1) {
        if (!strcmp(argv[0],"Sun")) {
            cout << "Let's go to the beach!";
        } else {
            cout << "Let's stay home !";
        }
    }
    return 0;
}