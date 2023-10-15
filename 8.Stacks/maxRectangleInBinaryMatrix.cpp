// Max area of rectangle in the binary matrin of order n x m 

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


// } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  private: 
    vector<int> nextSmallerElement(int *arr , int n ){
        // creating stack 
        stack<int> s ; 
        s.push(-1);   // intialising the stack with -1; 
        vector<int> ans(n) ; // for storing the answers
        for (int i= n-1; i>=0 ; i--){

            int curr = arr[i] ;  // taking the elements from the end of the array;

            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            // now the s.top() element can be store in our ans array
            ans[i]= s.top();

            // now pushing the current element in the stack  
            s.push(i); 
        }
        return ans;
    }
    
     vector<int> prevSmallerElement( int *arr  , int n){
        // creating stack 
        stack<int> s ; 
        s.push(-1);   // intialising the stack with -1; 
        vector<int> ans(n) ; // for storing the answers

        for (int i= 0; i<n  ; i++){

            int curr = arr[i] ;  // taking the elements from the end of the array;

            while(s.top() != -1 && arr[s.top()] >= curr){
                s.pop();
            }
            // now the s.top() element can be store in our ans array
            ans[i]= s.top();

            // now pushing the current element in the stack  
            s.push(i); 
        }
        return ans;
    }
    

      int largestRectangleArea(int *heights , int n ) {
        vector<int> next(n);
        next= nextSmallerElement(heights , n);
        vector <int> prev(n); 
        prev = prevSmallerElement(heights , n); 
        int area = INT_MIN; 

        for(int i = 0; i< n ; i++){
            int l = heights[i]; 

            if(next[i] == -1){
                next[i] = n; 
            }
            int b = next[i] - prev[i] - 1; 
            int newArea = l*b; 
            area = max ( area , newArea); 
        }
        return area; 
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        
        // compute area for first row 
        int area = largestRectangleArea(M[0] , m );
        
        for ( int i=1 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                
                // row update: by adding the previous rows value 
                if(M[i][j] != 0){
                
                    M[i][j] = M[i][j] + M[i-1][j] ;
                }
                else{
                    M[i][j] = 0;
                }
            }
            // now entire row is updated 
            area = max (area , largestRectangleArea(M[i] ,m));
        }
        
        return area;
    }
};


//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}

// } Driver Code Ends