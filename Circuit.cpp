#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int m;
        cin >> m;

        int sum = 0;
        for (int i = 0; i < 2 * m; i++) {
            int x;
            cin >> x;
            sum += x;
        }
        int ans = sum % 2;
        int ans1 = min(sum, 2 * m - sum);

        cout << ans << " " << ans1 << endl;
    }

    return 0;
}
