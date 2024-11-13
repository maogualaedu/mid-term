#include <iostream>
using namespace std;

int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "請輸入一個非負整數 n：";
    cin >> n;

    if (n < 0) {
        cout << "請輸入一個非負整數！" << endl;
    } else {
        cout << "非遞迴方式計算 " << n << "! = " << factorialIterative(n) << endl;
    }

    return 0;
}
