// Intro to stack using recursion 

#include <iostream>
#include <stack>
using namespace std;


int main(){

    // Creation of stack 
    stack<int> s; 

    // push operation 
    s.push(1);
    s.push(2);

    // pop operation 
    s.pop();

    cout << s.top() << endl;
    

    return 0;
}