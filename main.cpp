#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long start, end;
    cin >> start >> end;

    vector<long long> res;

    long long a = 0;
    long long b = 1;

    while (a <= end) {
        if (a >= start) {
            if (res.empty() || res.back() != a) {
                res.push_back(a);
            }
        }

        long long next = a + b;
        a = b;
        b = next;
    }
    if (res.empty()) {
        cout << "В заданном диапазоне нет чисел Фибоначчи";
    }
    else {
        for (int i = 0; i < res.size(); ++i) {
            cout << res[i];
            if (i < res.size() - 1) {
                cout << " ";
            }
        }
    }
}
