#include <iostream>
using namespace std;

//HOLD
void printArray(int arr[], int size) {

    cout << "printing the array" << endl;
     //print the array
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout <<  endl;
    cout << "printing done" << endl;

}

int main() {
    //declare
    int number[15];

    //accessing an array
    cout << "value at 14 index " << number[14] << endl;
    
    //    cout << "value at 14 index " << number[14] << endl;

    //initialising an array 
    int second[] = {5,7,11};
    //accessing an element 
     cout << "value at 2 index " << second[2] << endl;

    int third[15] ={2,7};

    int n =15;
    printArray(third, 15);
    
    //initialising all locations with 0
    int fourth[10] ={0};
       
    n=10;
    printArray(fourth, n);

     //initialising all locations with 1 (not possible)
    int fifth[10] ={1};
       
    n=10;
    printArray(fifth, n);
    //
}