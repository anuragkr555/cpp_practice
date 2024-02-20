// ap = 3*n + 7
// input- n;
//op- nth term. 

#include <iostream>
using namespace std;

int AP(int a) {
    return (3*a +7);
}
int main( ) {
    int n; 
    cout << "enter number-";
    cin >> n;
    cout << AP(n);

}