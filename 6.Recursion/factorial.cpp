// factorial using recursion
#include <iostream>
using namespace std;

int factorial( int n ) {

    cout << n << endl; 
    // base case for recursive functions 
    if ( n == 0) { 
        return 1 ; 
    }

   
    return   n * factorial( n - 1 ); ; 
}

int main(){

    int n ; 
    cin >> n ; 

    int ans = factorial(n) ; 

    cout << ans << endl; 

    return 0;
}