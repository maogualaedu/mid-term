#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "請輸入一個正整數 n：";
    cin >> n;

    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    cout << "使用 for 迴圈計算結果：小於等於 " << n << " 的偶數和為 " << sum << endl;
    return 0;
}
