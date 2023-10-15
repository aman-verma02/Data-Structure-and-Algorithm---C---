// introduction to character array
#include <iostream>
using namespace std;

char tolower ( char ch ) { 
    if (ch >= 'a' && ch <= 'z'){
        return ch ; 

    }
    else {
        char temp = ch- 'A' + 'a' ; 
        return temp ;
    }
}

bool checkPalindrome( char a[] , int n){ 
    int s = 0;
    int e = n-1; 

    while(  s <= e ) { 
        if ( a[s] !=  a[e] ){
            return false;
        }
        else { 
            s++;
            e--;
        }
    }
    return true;
}

void reverse (char name[] , int n) {
    int s = 0 ; 
    int e = n-1; 

    while (s < e) { 
        swap (name[s++], name[e--]); 

    }
}  

int getLength ( char name[] ) { 

    int count = 0; 
    for (int i = 0 ; name[i] != '\0' ; i++) { 
        count++; 
    }
    return count; 
}


char getMaxOccCharacter ( string s) { 
     
    int arr[26] = { 0 };

    // create an array to count the number of characters----------
    for (int i = 0; i < s.length(); i++){
        char ch = s[i];

        // coverting to lower case --------

        int num = 0;
        if (ch >= 'a' && ch <= 'z'){ 
            int n = ch - 'a';
        }
        else {
            num = ch - 'A';
            

        }

        arr[num]++; 

    }

    int maxi = -1 , ans = 0; 
    for (int i = 0; i < 26; i++) {
        if( maxi < arr[i]) {
            ans =i ; 
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans; 
    return finalAns; 

}


int main(){

    char name[20];

    cout << "Enter your name: " << endl; 
    cin >> name ; 

    // name [2] = '\0';

    cout << "Your name is " << name << endl;
    cout << "Length of your name is " << getLength( name ) << endl;

    reverse( name, getLength(name)); 
    cout << "reverse of your name is " << name  << endl;

    return 0;
}