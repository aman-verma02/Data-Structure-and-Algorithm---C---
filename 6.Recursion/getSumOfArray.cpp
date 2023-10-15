// Getting sum of the array using Recursion 

#include <iostream>
using namespace std;

int getSumOfArrays (int arr[] , int size ) { 

    // base case 
    if ( size == 0 ) { 
        return 0 ; 
    }
    if ( size == 1 ) { 
        return arr[0]; 
    }

    int ans = arr[0] + getSumOfArrays(arr+1 , size-1);

    return ans; 

}

int main(){

    int arr[] = {3, 2 , 5 , 1, 6} ; 
    int size = 5; 

    int ans = getSumOfArrays(arr , size);

    cout << "The sum of the arrays is " << ans << endl; 

    return 0;
}