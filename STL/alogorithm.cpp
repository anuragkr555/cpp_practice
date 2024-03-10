#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() {

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    v.push_back(9);

    cout<<"finding 6-->"<< binary_search(v.begin(), v.end(), 6)<<endl;

    cout<<"lower bound-->"<< binary_search(v.begin(), v.end(), 4)<<endl;

    int a=3;
    int b=5;

    cout<<"max-->"<<max(a,b)<<endl;

    cout<<"min-->"<<min(a,b)<<endl;

    swap(a,b);
    cout<<endl<<"a-->"<<a<<endl;

    string abcd="abcd";
    reverse(abcd.begin(), abcd.end());
    cout<<"string-->"<<abcd<<endl;

    rotate(v.begin(),v.begin()+1,v.begin()+3);
    cout<<"after rotate"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    sort(v.begin(),v.end());
    cout<<"after sorting-->";
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

}