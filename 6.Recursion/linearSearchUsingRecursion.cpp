// linear search using recursion
#include <iostream>
using namespace std;

bool linearSearch ( int arr[] , int size , int key) { 

    // base case 
    if ( size == 0 ){ 
        return false ; 
    }

    if ( key == arr[0]){
        return true ;
    }
    else { 
        linearSearch(arr+1 , size -1, key); 
    }


}

int main(){

    int arr[5] = { 3, 34 ,5,6,7} ; 
    int size = 5 ; 
    int key = 6; 

    bool ans = linearSearch( arr , size , key ) ; 

    cout << ans << endl; 
 
    return 0;
}