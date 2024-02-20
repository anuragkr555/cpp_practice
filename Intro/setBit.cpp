// ip- a&b,
// op- total no. of set bit
//eg- a=2 (0010) and b=3(0011), op- 1+1,1 = 3

#include  <iostream>
using namespace std;

int setBit(int a){
    unsigned int count = 0;
    while (a)
    {
        a= a&(a-1);
        count++;
    }
    return count;

}

int main( ) {
    int a,b;
    cout << "enter 1st number";
    cin >> a;

    cout << " Enter 2nd numer";
    cin >> b;
    

    cout << (setBit(a)+setBit(b)) ;

}