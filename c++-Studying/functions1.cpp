#include<iostream>

using namespace std;

void printmsg(string msg);
void printSum(int n1 , int n2 , int n3);
float sum(float n1 , float n2 , float n3);
void printArray(int a,string ar[a]);

int main(){
    int res;
    
    printmsg("Gabriel is a programmer !");
    printSum(1,2,3);
    res = sum(1,2,3);
    
    string a[3] = {"car","ship","airplane"};
    printArray(3,a);
    
    cout << "The value of res is : " << res << endl;
    return 0;
}

void printmsg(string msg){
    cout << "The message is : " << msg << endl;
}

void printSum(int n1 , int n2 , int n3){
    cout << "The sum to " << n1 << " + " << n2 << " + " << n3 << " is equal to " << n1+n2+n3 << " .\n";
}

float sum(float n1 , float n2 , float n3){
    return n1 + n2 + n3;
}

void printArray(int a,string ar[a]){
    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    for (int i = 0; i < a; i++){
        cout << ar[i] << endl;
    }
    cout << "-=-=-=-==-=-=-=-=-=-=-=-=" << endl;
}