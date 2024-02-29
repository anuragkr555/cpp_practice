#include<iostream>
using namespace std;

long long sqrtInteger(int n) {

    int s=0;
    int e =n;

    int mid = s+ (e-n)/2;
    int ans;
    while(s <=e) {
        if((mid*mid)==n) 
        {
            return mid;
        }
        if ((mid * mid) < n) {
            ans = mid;
            s = mid + 1;
        }
         else {
            e = mid - 1;
        }
            mid=s+(e-s)/2;
        }
    return ans;
}    

double morePrecision(int n, int pricision, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    for(int i=0; i<pricision; i++) {
        factor = factor/10;

        for (double j = ans; j*j<n; j=j+factor)
        {
            ans=j;
        }
        
    }
    return ans;
}


int main() {

int n;

cout << "Enter the no-"<< endl;
cin >>n;
int tempSol = sqrtInteger(n);

cout <<"Answer is" << morePrecision(n, 3, tempSol);
return 0;
}