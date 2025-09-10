#include <iostream> 
using namespace std;

void permutationWith_(string ip, string op) {
    if(ip.length() == 1) {
        op.push_back(ip[0]);
        cout<<op<<endl;
        return;
    }
    string op1 = op;
    op1.push_back(ip[0]);
    string op2 = op;
    op2.push_back(ip[0]);
    op2.push_back('_');
    ip.erase(ip.begin());
    permutationWith_(ip, op1);
    permutationWith_(ip, op2);
    return;
}

int main() 
{ 
    string ip = "abc";
    string op = "";
    permutationWith_(ip, op);
} 
