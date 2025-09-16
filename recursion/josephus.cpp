#include <iostream> 
using namespace std;

int josephus(vector<int> &v, int k, int i) {
    if(v.size() == 1) {
        return v[0];
    }
    int sz = v.size();
    i = (i+k)%sz;
    v.erase(v.begin()+i);
    return josephus(v, k, i);
}

int main() 
{ 
    int n = 40, k = 7;
    vector<int> v(n);
    for(int i=0; i<n; i++)
        v[i] = i+1;
    int res = josephus(v, k-1, 0);
    cout<<res<<endl;
} 
