#include <iostream> 
using namespace std;

void subset(string ip, string op) {
    if(ip.length() == 0) {
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin());
    subset(ip, op1);
    subset(ip, op2);
    return;
}

int main() 
{ 
    string ip = "abc";
    string op = "";
    subset(ip, op);
} 
