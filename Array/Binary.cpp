#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {

    int start =0;
    int end = size - 1;
    int mid = (start  + end)/2;
    while (start <= end)   
    {
        if(arr[mid] == key){
            return mid;
            
        }
        // go to right part
        if(key > arr[mid]){
            start =  mid + 1;
            
        }
        else {
            end = mid - 1;
        }
        
        mid = (start+end)/2;
    }

    return -1;
    

}

int main() {
    

    int even[6]= {3,9,15,36,89,104};
    int odd[5]= {9,15,36,89,104};

    int index= binarySearch(even, 6, 89 );
    //binarySearch(odd, 5, key );
    cout << "Index= " << index << endl;

    return 0;
}