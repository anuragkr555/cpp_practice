#include<iostream>
using namespace std;

int firstOccurance(int arr[], int key,int n) 
{
    int s=0;
    int e= n-1;
    int mid = (s+e)/2;
    int a,count=0;

    while(s<=e) {

        if (arr[mid] == key){
            a=mid;
            e=mid-1;
        }

        if(key < arr[mid] ) {
            e = mid - 1;            
        }
        if(key > arr[mid]) {
            s  = mid+1;            
        }

        mid= s +(e-s)/2;
    }
    return a;
}


int lastOccurance(int arr[], int key,int n) 
{
    int s=0;
    int e= n-1;
    int mid = (s+e)/2;
    int a,count=0;

    while(s<=e) {

        if (arr[mid] == key){
            a=mid;
            s=mid+1;
        }

        if(key < arr[mid] ) {
            e = mid - 1;            
        }
        if(key > arr[mid]) {
            s  = mid+1;            
        }

        mid= s +(e-s)/2;
    }
    return a;
}

int main() {
    

    int odd[7]= {1,2,3,3,3,3,5};

    int index1= firstOccurance(odd, 3, 7 );
    int index2= lastOccurance(odd, 3, 7 );    
    int ans= index2-index1;
    cout << ans+1 << endl ;

    return 0;
}