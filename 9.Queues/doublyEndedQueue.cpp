// Introduction to doubly ended queue using the STL

#include <bits/stdc++.h>
using namespace std;



int main(){

    // creating doubly ended queue
    deque<int> d; 

    // inserting the first element
    d.push_front(12); 
    d.push_back(14); 

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_front();

    cout << d.front() << endl;
    cout << d.back() << endl;

    d.pop_back();

    if(d.empty()){
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
        
    }

    return 0;
}