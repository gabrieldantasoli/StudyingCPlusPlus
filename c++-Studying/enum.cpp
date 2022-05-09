#include<iostream>
using namespace std;

int main()
{
    enum books{math=10, geografy=20, ciency=30};
    books mybook1 = math;
    
    books mybook2 = geografy;
    
    books mybook3 = ciency;
    
    cout << mybook1 << " " << mybook2 << " " << mybook3;
    
    return 0;
}