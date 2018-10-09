#include <iostream>

using namespace std;

int sumOfSquares(int n) {
    if (n == 0)
        return 0;
    return n*n + sumOfSquares(n-1);
}

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int fibo(int n) {
    if (n == 1 || n == 2)
        return 1;
    return fibo(n - 1) + fibo(n - 2);
}

int main() {
    cout << sumOfSquares(3) << endl;
    cout << gcd(12, 6) << endl;
    cout << fibo(4) << endl;
}
