#include <bits/stdc++.h> 
using namespace std;

void insert_num(vector<int> &v, int num) {
    if(v.size()==0 || *(v.end()-1)<=num) {
        v.push_back(num);
        return;
    }
    int last = *(v.end()-1);
    v.pop_back();
    insert_num(v, num);
    v.push_back(last);
}

void sort_using_recursion(vector<int> &v) {
    if(v.size() <= 1) return;
    int last = *(v.end()-1);
    v.pop_back();
    sort_using_recursion(v);
    insert_num(v, last); // insert last element using recursion
}

int main() 
{ 
    vector<int> v = {2, 3, 7, 6, 4, 9, 5, 2};
    sort_using_recursion(v);
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
} 
