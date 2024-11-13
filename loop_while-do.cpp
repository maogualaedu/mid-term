#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "請輸入一個正整數 n：";
    cin >> n;

    int i = 2;
    do {
        if (i > n) break;
        sum += i;
        i += 2;
    } while (true);

    cout << "使用 do-while 迴圈計算結果：小於等於 " << n << " 的偶數和為 " << sum << endl;
    return 0;
}
