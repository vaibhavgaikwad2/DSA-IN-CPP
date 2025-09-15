#include <iostream>
using namespace std;

int countPairs(int n) {
    int count = 0;
    for (int a = 1; a <= n; a++) {
        for (int b = 0; b <= n; b++) {
            if (a * a * a + b * b * b == n) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n = 9;
    cout << countPairs(n) << endl;
    return 0;
}