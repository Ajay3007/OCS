#include <iostream> 
using namespace std;

void insert_num(stack<int> &s, int num) {
    if(s.size()==0 || s.top()>=num) {
        s.push(num);
        return;
    }
    int last = s.top();
    s.pop();
    insert_num(s, num);
    s.push(last);
}

void sort_using_recursion(stack<int> &s) {
    if(s.size() <= 1) return;
    int last = s.top();
    s.pop();
    sort_using_recursion(s);
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
    s.push(6);
    sort_using_recursion(s);
    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
} 
