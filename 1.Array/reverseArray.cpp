// This is the program for reversing

#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse (vector<int> v , int key) {
    int s =key+1 , e= v.size()-1; 

    while(s<=e ){

        swap (v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print (vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){

    vector<int> v ; 

    v.push_back(1);
    v.push_back(5);
    v.push_back(6);
    v.push_back(74);

    int key;
    cin >> key;

    vector<int> ans = reverse (v , key); 

    print(ans); 
    return 0;
}