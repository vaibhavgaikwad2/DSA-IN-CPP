#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number of rats
int minRats(int n)
{
    return ceil(log2(n));
}

// Driver Code
int main()
{
    // Number of bottles
    int n = 1025;

    cout << "Minimum " << minRats(n)
         << " rat(s) are required"
         << endl;

    return 0;
}