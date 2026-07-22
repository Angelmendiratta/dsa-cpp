#include <iostream>
using namespace std;

class Solution {
public:
    void pattern1(int n) {
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "*";
            }
            cout << "\n";
        }
    }
};

int main() {
    int n = 5; 
    Solution sol;
    sol.pattern1(n);
    return 0;
}