// Bubble sort using the resursion 
#include <iostream>
using namespace std;

void sortArray( int arr[] , int size) { 

    // base case - already sorted
    if ( size == 0 || size == 1 ) { 
        return ;
    }

    // largest element of the array is placed in the end of the array
    for ( int i = 0; i < size; i++ ) { 
        if( arr[i] > arr[i+1] ) { 
            swap( arr[i], arr[i+1] );
        }
    }

    sortArray ( arr , size -1) ; 


} 
 
int main(){

    int arr[] = {35,6,7,32,3} ; 
    

    sortArray(arr, 5);

    for( int i: arr) { 
        cout << i << " " ; 
    }

    return 0;
}