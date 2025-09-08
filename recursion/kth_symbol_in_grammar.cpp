/* https://leetcode.com/problems/k-th-symbol-in-grammar/description/ */
#include <iostream> 
using namespace std;

int kth_symbol(int n, int k){
    if(n==1) return 0;
    int ret = kth_symbol(n-1, (k+1)/2);
    if(ret == 0) {
        ret = (k%2==0) ? 1 : 0;
    } else {
        ret = (k%2==0) ? 0 : 1;
    }
    return ret;
}

int main() 
{ 
    int n = 4, k = 7;
    int ans = kth_symbol(n, k);
    cout<<ans<<endl;
} 
