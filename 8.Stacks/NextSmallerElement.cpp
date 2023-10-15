#include <bits/stdc++.h>
using namespace std;


vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    // creating stack 
    stack<int> s ; 
    s.push(-1);   // intialising the stack with -1; 
    vector<int> ans(n) ; // for storing the answers

    for (int i= n-1; i>=0 ; i--){

        int curr = arr[i] ;  // taking the elements from the end of the array;

        while(s.top() >= curr){
            s.pop();
        }
        // now the s.top() element can be store in our ans array
        ans[i]= s.top();

        // now pushing the current element in the stack  
        s.push(curr); 
    }

    return ans;

}
