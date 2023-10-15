// Quick sort using recursion
#include <iostream>
using namespace std;

int partition( int arr[] , int s , int e ) { 
    int pivot = arr[s] ; 
    int count = 0 ;
    for ( int i = s+1 ; i <= e ; i++ ) {
        if( arr[i] <= pivot ){
            count++;
        }
    }
    // Placing the pivot at the right index after count 
    int pivotIndex = s + count; 
    swap ( arr[pivotIndex], arr[s] );

    // arranging the left and right part of the array
    int i = s , j = e  ; 

    while( i < pivotIndex && j > pivotIndex ){ 
        
        while ( arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;    
        }
        
        if( i < pivotIndex && j > pivotIndex ){ 
            swap( arr[i++] , arr[j--] ) ; 

        }
    } 

    return pivotIndex; 

}
void quickSort( int arr[] , int s , int e ) { 

    // base case 
    if( s >= e) { 
        return ; 
    }

    // applying the Partition 
    int p = partition( arr , s , e );

    // Sorting the left part of the array 
    quickSort( arr , s , p-1) ; 

    // Sorting the right part of the array
    quickSort( arr , p+ 1 , e ) ; 
}

int main(){

    int arr [5] = { 3,5,7,2,6}; 
    int n = 5 ; 

    quickSort( arr , 0 , n-1); 

    for ( int i : arr ) { 
        cout << i << " " ; 
    }


    return 0;
}