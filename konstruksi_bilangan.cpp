

#include <iostream>
#include <vector>
using namespace std;

//udh benar
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    int sum = 0;
    for (int i = 1; i <= k; ++i) {
        arr.push_back(i);
        sum += i;
    }

    int difference = n - sum;
    if (difference < 0) {
        cout << "ga bisa" << endl;
        return 0;
    }
    arr[k - 1] += difference;
    for (int i = 0; i < k; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
