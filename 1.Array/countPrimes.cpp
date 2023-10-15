//  count the prime number 
#include <iostream>
#include <vector>
using namespace std;

class solution {
    public:
        int countPrimes(int n ){
            int cnt = 0;
            vector<bool> prime(n+1 , true); 

            prime[0] = prime[1] = false;

            for (int i = 2; i < n; i++){
                if(prime[i] == true){
                    cnt++;
                    
                    for (int  j = 2*i ; j < n; j = j + i)
                    {
                        prime[j] = false; 
                    }
                    
                }
            }
            return cnt;
        }
};

int main(){

    

    return 0;
}