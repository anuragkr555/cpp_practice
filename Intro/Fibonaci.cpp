//  op- nth fibonachi term

#include  <iostream>
using namespace std;

unsigned int Fibonacci(int n) {
    
    int a=0,b=1,c,i;
    if(n==0) 
        return a;
    
    for (i = 2; i <= n; i++)
    {
        c= a+b;
        a=b;
        b=c;
    }
    return b;
}

int main () {
    int n;
    cout << "Enter nth term";
    cin >> n;

    cout << Fibonacci(n) ;
}