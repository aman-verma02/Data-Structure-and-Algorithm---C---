
// intro to double pointer

#include <iostream>
using namespace std;

int main(){

    int i = 5 ; 

    int *ptr = &i ;
    *ptr = 8 ;  

    cout << i<< endl;
    cout << *ptr << endl;

    return 0;
}