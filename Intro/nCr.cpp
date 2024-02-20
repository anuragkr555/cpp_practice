#include<iostream>
using namespace std;

int factorial(int a) {

    int fac=1;
    for (int i =1; i <=a; i++)
    {
        fac=fac*i;
    }
     return fac;
    
 }

/*int denominator( int n, int r)  {
    int a= r;
    int b= n;
    int ans1= factorial(a);
    int ans2 = factorial(b-a);
    return (ans1 * ans2);
}
*/

int nCr(int n, int r){
   // int p= (factorial(n) / denominator( n, r));
   int num = factorial (n);

   int denom= (factorial(r) * factorial( n- r));
    
   return num/denom;
}

int main() {
    int v1, v2;
    cout << "Value of n-" << endl;
    cin >> v1;

    cout << "Value of r-" << endl;
    cin >> v2;
    if (v1>=v2)
    {
        cout << "Value of nCr=" << nCr(v1,v2) << endl;
    } 
    else
    cout << "Enter right value i.e n>r";
    
    return 0;

}