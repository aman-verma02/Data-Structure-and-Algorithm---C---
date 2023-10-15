//  This program reverse the elements of the queue

#include <bits/stdc++.h> 
void reverse(queue < int > & q) {
    // Write your code here.

    stack<int> s ; 

    // inserting the elements queue into the stack 
    while(!q.empty()){
        int element = q.front(); 
        q.pop(); 
        s.push(element); 
    }

    // inserting the elements of stack into queue 
    while(!s.empty()){
        int element = s.top(); 
        s.pop(); 
        q.push(element); 
    }


}