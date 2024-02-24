#include <iostream>
using namespace std;

bool search(int arr[], int size, int key){
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
        
    } return 0;
}

int main () {

    int arr[10] = {5,7,3,7,-2,10,55,-33,0,1};

    cout <<"Enter the element to search " << endl;
    
    int key;
    cin >> key;

    bool found = search(arr, 10, key);

    if ( found )
    {
        cout << key << " is present" << endl;
    }
    else 
    {
        cout << key << " is not present" << endl;
    }

    return 0;
    
}