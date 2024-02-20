#include<iostream>
using namespace std;

int main() {
     int a = 1330;

     switch (a)
     {
     case 1:
        int r1= a%100;
        int q = (a - 100*r1);
        a=q;
        break;
    case 2:
        int r2= a%50;
        int q = (a - 50*r2);
        break;
    case 3:
        int r3= a%50;
        int q = (a - 50*r3);
        break;
    case 4:
        int r4= a%50;
        int q = (a - 50*r4);
        break;
     
     default:      cout << r1 << r2 << r3 << r4;
        break;

    
    }

   
}
