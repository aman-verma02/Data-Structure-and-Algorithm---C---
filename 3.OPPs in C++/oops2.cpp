#include <iostream>
using namespace std;

class Hero {

    private:
    int  health;
    public:
    char level;

    void print(){
        cout << level << endl;
    }

    int  getHealth(){
        return health;

    }
    char getLevel(){
        return level;
    }

    void setHealth (int h){
        health = h ; 
    }

    void setLevel(char ch){
        level = ch;
    }

    Hero (Hero &temp){

        this -> health = temp.health; 
        
        this -> level = temp.level;


    }



};

int main(){

    





































    // Hero a;
    // a.setHealth(39);
    // a.setLevel('b') ;


    // cout << "level is " << a.level << endl;
    // cout << "health is " << a.getHealth() << endl;


    // Hero *b = new Hero;
    // b->setHealth(55);
    // b->setLevel('a');


    // cout << "level is " << (*b).level << endl;
    // cout << "health is " << (*b).getHealth() << endl;

    // // this is the alternative way to call the pointers

    // cout << "level is " << b-> level << endl;
    // cout << "health is " << b-> getHealth() << endl;















    // Hero ramesh;
    // cout << "size of ramesh "<< sizeof(ramesh) << endl;
    // we will notice that size of ramesh 8 . This reason can be explain by padding and greedy alignment.



    

    return 0;
}