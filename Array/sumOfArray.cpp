#include <iostream>
using namespace std;

int sumArray(int arr[], int n) {

    int sum= 0;
    for (int i = 0; i < n; i++)
    {
        sum= sum + arr[i];
    }
    return sum;
}

int main() {

    int size;
    cout << " enter size of array" << endl;
    cin >> size;
    //taking input in aaray

    int arr[100];

    for(int i =0; i<size; i++) {
        cin >> arr[i];
    } cout << endl;
    
    
    // printing elemrnt of array

    for(int i =0; i<size; i++) {
        cout << arr[i] <<" ";
    } cout << endl;
    
    cout << "Sum of array=" <<sumArray(arr, size);

    return 0;


}