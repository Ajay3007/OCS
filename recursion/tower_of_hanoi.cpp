/* PS - https://www.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1 */
#include <iostream> 
using namespace std;

void tower_of_hanoi(int n, char src, char dst, char helper, int &count) {
    count++;
    if(n == 1) {
        cout<<"disk "<<n<<" moved from "<<src<<" to "<<dst<<endl;
        return;
    }
    tower_of_hanoi(n-1, src, helper, dst, count);
    cout<<"disk "<<n<<" moved from "<<src<<" to "<<dst<<endl;
    tower_of_hanoi(n-1, helper, dst, src, count);
    return;
}

int main() 
{ 
    int n = 3;
    int count = 0;
    tower_of_hanoi(n, 'A', 'B', 'C', count);
    cout<<"Total number of steps involved = "<<count<<endl;
} 
