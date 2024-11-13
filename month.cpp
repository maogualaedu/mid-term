#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "請輸入月份（1-12）：";
    cin >> month;

    if (month < 1 || month > 12) {
        cout << "無效的月份，請輸入 1 到 12 之間的數字。" << endl;
    } else {
        if (month >= 3 && month <= 5) {
            cout << "春季" << endl;
        } else if (month >= 6 && month <= 8) {
            cout << "夏季" << endl;
        } else if (month >= 9 && month <= 11) {
            cout << "秋季" << endl;
        } else {
            cout << "冬季" << endl;
        }
    }

    return 0;
}
