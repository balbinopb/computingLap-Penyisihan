#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    vector<int> last_dgt_freq(10, 0);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        last_dgt_freq[arr[i] % 10]++;
    }

    long long count = 0;

    for (int i = 0; i < 10; i++) {
        int complement = (k - i + 10) % 10;
        if (i < complement) {
            count += last_dgt_freq[i] * last_dgt_freq[complement];
        } else if (i == complement) {
            count += (last_dgt_freq[i] * (last_dgt_freq[i] - 1)) / 2;
        }
    }

    cout << count << endl;
    return 0;
}
