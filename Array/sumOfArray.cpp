#include <iostream>
using namespace std;

int main() {

    int size;
    cout << " enter size of array" << endl;
    cin >> size;

    int arr[100];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    } cout << endl;
    
    return 0;
}