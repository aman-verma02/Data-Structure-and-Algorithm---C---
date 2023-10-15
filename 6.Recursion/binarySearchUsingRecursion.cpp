
// Binary search using the recursion 
include <iostream>

using namespace std;

bool binarySearch ( int arr[] , int s , int e  , int key) { 
    // base case 
    if (s>e) {
        return false ;
    }   

    int mid = s+ (e-s)/2 ;
    
    // element is not found in the array  
    if (arr[mid] == key) { 
        return true ;
    }

 
    if ( arr[mid] < key){
        return binarySearch(arr , mid+1 , e , key) ;
    }
    else {
        return binarySearch(arr ,s , mid-1 , key) ;
    }
}
 
int main(){

    int arr[] = {3,5,6,7,8,9}; 
    int size = 6; 
    int key = 7 ;

    int ans = binarySearch(arr, 0 , 6 ,key) ; 

    cout << ans << endl; 
 

    return 0;
}