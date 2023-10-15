// Pinting Reverse counting

#include <iostream>
using namespace std;

void counting (int n ) {

    // base case 
    if (n == 0) {
        return ; 
    }
    cout << n << endl; 

    // recursive call to the function  
    counting(n-1) ; 

}

int main(){

    int n ; 
    cin >> n ; 

    counting (n) ; 

    return 0;
}