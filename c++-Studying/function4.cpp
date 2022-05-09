#include<iostream>
using namespace std;

void count(int num = 10,int cont = 0);

int main()
{
    count();
    count(100,90);
    return 0;
}

void count(int num , int cont)
{
    cout << cont << endl;
    if (num > cont){
        count(num,++cont);
    }
}