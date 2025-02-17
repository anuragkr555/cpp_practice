#include<iostream>
// #include "hero.cpp"
using namespace std;


//define class
class hero{

    //properties
    char name[100];
    
    char level;
    private:
    int health;

    int getHealth(){
        return health;
    }

    char getLevel(){
        return Level;
    }

    void setHealth(int h) {
        health = h;
    }
    void setLevel(char ch) {
        level = ch;
    }


};

int main () {

    //creation of object
    // hero h1;
    hero ramesh
    cout<< "Ramesh health is "<< ramesh.getHealth()<< endl;

    cout<<"size-->"<<sizeof(h1)<<endl;

    // ramesh.health=15;
    // ramesh.level= 'a';

    // cout <<"Health is-->"<< ramesh.health<<endl;
    // cout <<"Health is-->"<< ramesh.level<<endl;


    return 0;
}
