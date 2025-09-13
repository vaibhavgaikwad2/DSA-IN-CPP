#include <iostream>
using namespace std;

// Function to calculate x raised 
// to the power y 
int power(int x, int y){
    if (y == 0)
        return 1;
    if (y % 2 == 0)
        return power(x, y / 2) * power(x, y / 2);
    return x * power(x, y / 2) * power(x, y / 2);
}


int order(int n){
    int t = 0;
    while (n) {
        t++;
        n = n / 10;
    }
    return t;
}

// Function to check whether the given 
// number is Armstrong number or not
bool armstrong(int n){
    
    // Calling order function
    int x = order(n);
    int temp = n, sum = 0;
    while (temp) {
        int r = temp % 10;
        sum += power(r, x);
        temp = temp / 10;
    }

    return (sum == n);
}

int main()
{
    int n = 153;
    if(armstrong(n)){
        cout << "true";
    }else{
        cout << "false";
    }
    return 0;
}