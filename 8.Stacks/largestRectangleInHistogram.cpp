class Solution {
private: 
    vector<int> nextSmallerElement(vector<int> arr , int n ){
        // creating 
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

    vector<int> prevSmallerElement(vector<int> arr  , int n){
        // creating 
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

public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size(); 

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
};