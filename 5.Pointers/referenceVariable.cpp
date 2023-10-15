// Reference variable

#include <iostream>
using namespace std;

int main(){

    // Talking about the reference variable

    // Same memory -but- Different name 

    int i = 5 ; 
    int &j = i; 
    cout << ++i << endl; 
    cout << ++j << endl; 

    return 0;
}