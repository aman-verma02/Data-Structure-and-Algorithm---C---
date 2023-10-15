// This is the program for the Reverse First K elements of Queue

//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}
// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    //algorithm
    // step 1: pop first k element from q and put into the stack
    stack<int> s;
    
    for(int i = 0; i<k; i++) {
        int element = q.front();
        q.pop();
        s.push(element);
    }
    
    // Step 2: fetch the element from stack and put into the Queue
    while(!s.empty()) {
        int element = s.top();
        s.pop();
        q.push(element);
    }
    
    // Step 3: fetch the n-k first element from Q & puch_back
    int n = q.size()-k;
    
    while(n--) {
        int element = q.front();
        q.pop();
        q.push(element);
    }
    
    return q;
}

















/*

    // algorithm
    // step 1: pop first k element from q and put into the stack
    stack <int> s; 
    for(int i = 0; i<k ; i++){
        int element = q.front(); 
        q.pop(); 
        s.push(element); 
    }
    
    // Step 2: fetch the element from stack and put into the Queue
    while(!s.empty()){
        int element = s.top(); 
        s.pop(); 
        q.push(element); 
    }

    // Step 3: fetch the n-k first element from Q & puch_back
    int n = q.size() -k; 
    while(n != 0){        // This condition is not optimal here you use instead of n-- ;
        int element = q.front(); 
        q.pop(); 
        q.push(element); 
    }

    return q;




*/