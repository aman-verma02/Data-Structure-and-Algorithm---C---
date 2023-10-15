Pointer in array

#include <iostream>
using namespace std;

void print( int **p) {
    cout << *p << endl;
    cout << **p << endl;
    
}

int main(){

    int value = 5; 

    int *p = &value;
    cout << &value << endl;
    cout << p << endl;
    cout << &p << endl;
    print(&p); 

    return 0;
}


/* ----------------------------------------------------------------


arr[i] = *(arr + i);
i[arr] = *(i + arr); 


-------------------------------------------------------------------*/ 