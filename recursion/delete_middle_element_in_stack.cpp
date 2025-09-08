#include <iostream> 
using namespace std;

void delete_middle(stack<int> &s, int k) {
    if(k == 1) {
        s.pop();
        return;
    }
    int last = s.top();
    s.pop();
    delete_middle(s, k-1);
    s.push(last);
}

int main() 
{ 
    stack<int> s;
    s.push(6);
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(5);
    s.push(8);
    int k = s.size()/2 + 1;
    delete_middle(s, k);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
} 
