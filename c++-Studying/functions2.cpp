#include<iostream>
using namespace std;


float sum(float n1 , float n2);
void sum();

int main()
{
    sum();
    float s = sum(10,23.4);
    return 0;
}

float sum(float n1 , float n2)
{
    cout << "The sum of " << n1 << " and " << n2 << " is equal to " << n1 + n2 << endl;
    return n1 + n2;
}

void sum()
{
    float n1 = 10 , n2 = 30.5;
    float re = n1 + n2;
    cout << "The sum of " << n1 << " and " << n2 << " is equal to " << n1 + n2 << endl;
}