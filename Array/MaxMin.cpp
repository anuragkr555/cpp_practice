#include <iostream>
#include <climits>
using namespace std;

int getMin(int arr[], int n) {

    int mini = INT_MAX;

    for(int i = 0; i<n; i++) {

        mini = min(mini, arr[i]);
      //  if (arr[i] < min)
        //    min = arr[i];     
    }

    return mini;
}


int getMax(int arr[], int n) {

    int maxi = INT_MIN;

    for(int i = 0; i<n; i++) {

        maxi = max(maxi, arr[i]);
       // if (arr[i] > max)
        //    max = arr[i];     
    }

    return maxi;
}


int main() {
    int size;
    cin >> size;

    int num[100];

    //taking input inn array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value-" << getMax(num, size) << endl;
    cout << "Minimum value-" << getMin(num, size) << endl;

    return 0;
    
}