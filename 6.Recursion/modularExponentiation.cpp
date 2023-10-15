// Modular exponentiation
#include <iostream>
using namespace std;

int modularExponentiation ( int x , int n , int m) { 
    int res = 1 ; 

    while (n> 0) {
        if(n&1) {
            // odd

            res = (1LL*(res)  * (x)%n)%n; 
        }
        x= ( 1LL*(x)%n *  (x)%n)%n ;
        n = n >> 1 ;

    }
    return res; 
}

int main(){

    

    return 0;
}