#include<iostream>
#include<queue>

using namespace std;
int main() {
    queue<string> Q;

    Q.push("anurag");
    Q.push("kumar");
    Q.push("sahu");

     cout<<"size before pop--"<<Q.size()<<endl;


    cout<<"first element--"<<Q.front()<<endl;
    Q.pop();
    cout<<"first element--"<<Q.front()<<endl;

    cout<<"size after pop--"<<Q.size()<<endl;

}