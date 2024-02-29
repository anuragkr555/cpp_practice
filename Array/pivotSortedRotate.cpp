#include <iostream>
using namespace std;

int pivotSearch(int arr[], int n){
    int s=0;
    int e=n;
    int mid= s+ (e-s)/2;

    while(s<e) {
        if(arr[mid] >= arr[0]) {
            s=mid+1;
        }
        else {
            e=mid;
        }
        mid= s + (e-s)/2;

    }
    return s;

}
int main() {
    int arr[5]={7,9,1,2,3};
    int i=pivotSearch(arr, 5);
    cout << i;

    return 0;
}