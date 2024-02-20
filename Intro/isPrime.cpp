#include <iostream>
using namespace std;
#include <stdlib.h>

bool isPrime(int a) {
     for (int i = 2; i < a; i++)
     {

        if (a%i == 0)
            return 0;
     }
     return 1;     
}

int main(){
    int n;
    cout << "Enter number-";
    cin >> n;
    if(isPrime(n)==1) {
        cout  << "It is Prime number" ;
    } else 
        cout  << "It is Not Prime number" ;
}