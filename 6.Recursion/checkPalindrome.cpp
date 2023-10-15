// check Palindrome using the recursion 
#include <iostream>
using namespace std;

bool checkPalindrome( string str , int i , int j ) { 
    
    // base case 
    if( i> j ){ 
        return true; 
    }

    if( str[i] != str[j] ){ 
        return false;  
    }
    else {
        i++;
        j--;
        // Recursive call 
        return checkPalindrome( str , i , j );
    }

    
} 

int main(){

    string name = "abbccbba" ; 


    bool isPalindrome = checkPalindrome(name , 0 , name.length()-1 ); 
    cout << isPalindrome << endl ; 

    return 0;
}