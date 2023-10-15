// This is the introduction to the Queues in C++ 

#include <bits/stdc++.h>
using namespace std;



int main(){

    // Create a queue
    queue<int> q; 

    // Pushing/inserting the elements into the queue
    q.push(1); 
    q.push(2); 

    // Getting the size of the queue
    cout << "Queue size " << q.size() << endl;

    // pop/remove elements from the queue
    q.pop();

    cout << "Queue size " << q.size() << endl;

    // Getting the front element of the queue
    cout << "Front element " << q.front() << endl;

    // Checking if the queue is empty
    if(q.empty()){
        cout << "Queue empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }



    return 0;
}