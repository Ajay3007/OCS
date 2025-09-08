#include <iostream> 
using namespace std;

void insert_num(stack<int> &s, int num) {
    if(s.size()==0) {
        s.push(num);
        return;
    }
    int last = s.top();
    s.pop();
    insert_num(s, num);
    s.push(last);
}

void reverse_stack(stack<int> &s) {
    if(s.size() <= 1) return;
    int last = s.top();
    s.pop();
    reverse_stack(s);
    insert_num(s, last);
}

int main() 
{ 
    stack<int> s;
    s.push(6);
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(5);
    s.push(15);
    reverse_stack(s);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
} 
