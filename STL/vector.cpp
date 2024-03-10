#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> v;
    

    vector<int> a(5,1);
    cout<<"print a"<<endl;
    for(int i=0; i<a.size();i++){
        cout<<a[i]<<" ";
    }cout <<endl; 

    vector<int> last(a);

    cout<<"print last"<<endl;
    for(int i=0; i<last.size();i++){
        cout<<last[i]<<" ";
    }cout <<endl; 

    cout<<"size-->"<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"capacity-->"<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"capacity-->"<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"capacity-->"<<v.capacity()<<endl;

    cout<<"size-->"<<v.size()<<endl;

    cout<<"element at 2nd index-->" <<v.at(2)<<endl;

    cout<<"staring element--"<< v.front()<<endl;
    cout<<"last element--"<< v.back()<<endl;


    cout<<"before pop ";
    for(int i: v){
        cout<<i<<" ";
    }cout <<endl; 

    v.pop_back();

    cout<<"after pop ";
    for(int i: v){
        cout<<i<<" ";
    }cout <<endl; 

    v.clear();
    cout<<"after clear";
    cout<<"size-->"<<v.size()<<endl;


    


}