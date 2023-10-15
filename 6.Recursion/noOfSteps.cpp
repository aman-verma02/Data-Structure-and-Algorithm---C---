
// counting Distinct Way to climb Stairs
 
#include <iostream>
using namespace std;

 int countDistinctWayToClimbStairs( long long nStairs){

    // base case 
    if (nStairs == 0) {
        return 1;
    }
    if (nStairs < 0) {
        return 0 ; 
    }

    // recusive relation 
    return countDistinctWayToClimbStairs(nStairs-1) + countDistinctWayToClimbStairs(nStairs-2); 
}
