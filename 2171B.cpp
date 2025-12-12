#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Determine minimal possible |a[n-1] - a[0]|
        bool first_known = (a[0] != -1);
        bool last_known  = (a[n-1] != -1);
        long long ans;

        if (first_known && last_known) {
            ans = llabs(a[n-1] - a[0]);
        } else {
            ans = 0; // we can set endpoints equal
        }

        // Build lexicographically smallest array achieving that ans:
        // 1) Fix endpoints as needed (prefer smaller values)
        if (first_known && last_known) {
            // both fixed -> nothing to do
        } else if (first_known && !last_known) {
            // set last = first to make difference 0
            a[n-1] = a[0];
        } else if (!first_known && last_known) {
            // set first = last
            a[0] = a[n-1];
        } else {
            // both unknown -> set both to 0 (lexicographically smallest)
            a[0] = 0;
            a[n-1] = 0;
        }

        // 2) Set every other unknown to 0 (lexicographically smallest nonnegative)
        for (int i = 0; i < n; ++i) {
            if (a[i] == -1) a[i] = 0;
        }

        cout << ans << '\n';
        for (int i = 0; i < n; ++i) {
            if (i) cout << ' ';
            cout << a[i];
        }
        cout << '\n';
    }
    return 0;
}
