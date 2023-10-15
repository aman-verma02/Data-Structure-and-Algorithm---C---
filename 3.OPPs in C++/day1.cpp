#include <iostream>
using namespace std;

class Hero {

    // properties 

    public:
    int health ; 
    char level ; 

    int getHealth ( ) {
        return health;

    }

    char getLevel () { 
        return level;
    }

    void setHealth( int h ) {
        health = h;

    }
     
    void setLevel( char ch) {
        level = ch;
    }




  // by default class are private
};

int main() {


    Hero a;

    cout << "level is " << a.level<< endl; 
    cout << "health is " << a.getHealth() << endl; 


    Hero *b = new Hero;
    cout << "level is " << a.level<< endl; 
    cout << "health is " << a.getHealth() << endl; 


    cout << sizeof(b)<< endl;






















    // // creation of object 

    // Hero ramesh ;

    // ramesh.health= 70; 
    // ramesh.level = 'a';

    // cout << "size : " << sizeof(ramesh) << endl;
     
    // cout << "health is : " << ramesh.health << endl;
    // cout << "level is : " << ramesh.level << endl;


    return 0;

}