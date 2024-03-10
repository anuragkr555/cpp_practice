#include<iostream>
#include<map>

using namespace std;
int main() {
    map<int, string> m;

    m[1] ="ak";
    m[12] ="kumar";
    m[3] = " sahu";

    m.insert({5,"kashayp"});

    cout<<"before erase-->"<<endl;
    for(auto i: m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 12->"<<m.count(12)<<endl;

    m.erase(3);
    cout<<"after erase"<<endl;
    for(auto i: m) {
        cout<<i.first<<" "<<i.second<<endl;
    }

    auto it = m.find(5);

    for(auto i=it;i!=m.end();i++) {
        cout<<(*i).first<<endl;
    }

}