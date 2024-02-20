#include <iostream>
using namespace std;

/*1. int power (int a, int b) {
    int ans =1;

    for(int i = 1; i<=b; i++) {
        ans= ans*a;
    }
    return ans;
}

int main() {
    int a, b;
    cin>> a >> b;

    int ans = power(a,b);
    cout << "answer  is " << ans << endl;
    return 0;
}*/

int power () {
    int a,  b;
    cin >> a >> b;
    int ans =1;

    for(int i = 1; i<=b; i++) {
        ans= ans*a;
    }
    return ans;
}

int main() {
    
    int ans = power();
    cout << "answer  is " << ans << endl;

    ans = power();
    cout << "answer  is " << ans << endl;

    ans = power();
    cout << "answer  is " << ans << endl;

    return 0;
}