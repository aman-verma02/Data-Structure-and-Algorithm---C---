#include <iostream>
using namespace std;

class Hero {
    // by default it is private 
    public:
    // properties 
    int health; 
    char level; 

    Hero() {
        cout << "Simple constructor called"<< endl;
    }

    // parameterised constructor
    Hero( int health ) {
        this-> health= health ; 
    }
    Hero( int health , char level  ) {
        cout << "this -> " << this << endl; 
        this -> level = level ;  
        this-> health= health ; 
    }


};


int main(){

    Hero suresh ;


    













































    
    // creation of object statically 
    Hero ramesh(10);
    cout << "address of ramesh " << &ramesh << endl; 

    // dynamically 
    Hero *h = new Hero ; 



















































    //accessing the properties or data members using dot operator ( . )
    
    cout << "health is "<< ramesh.health << endl;
    cout << "level is "<< ramesh.level << endl;
    cout << sizeof(ramesh); 

    return 0;
}