// check the array is sorted or not
#include <iostream>
using namespace std;

bool isSorted ( int arr[] , int size){

    // base case 
    if(size==0 || size==1) {
        return true;
    } 

    // processing part 
    if( arr[0] > arr[1])
    {
        return false;
    }
    else {
        bool remainingPart = isSorted( arr+1 , size -1);
        return remainingPart ; 
    }
 
}
 
int main(){

    int arr[5] = {1,5,9 ,7,8}; 
    int size = 5; 

    bool ans = isSorted(arr, size) ; 
     
    cout << ans << endl; 

    return 0;
}