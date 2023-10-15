#include <bits/stdc++.h>
using namespace std;

//----------------------------------------------------------------

void insertAtBottom(stack<int>& s, int x ){
    // base case 
    // check if stack is empty
    if(s.empty()){
        s.push(x); 
        return ; 
    }
    int num = s.top(); 
    s.pop(); 
    

    // recursive call 
    insertAtBottom(s,  x);
    s.push(num); 

}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    insertAtBottom(myStack , x); 
    return myStack ; 
}

//----------------------------------------------
