#include <iostream> 
using namespace std;

void remove_duplicates(string &s) {
    if(s.length() == 0) return;
    char last = *(s.end()-1);
    s.pop_back();
    remove_duplicates(s);
    if(!s.contains(last)) {
        s.push_back(last);
    }
}

int main() 
{ 
    string str = "cabbacv";
    remove_duplicates(str);
    cout<<str<<endl;
} 
