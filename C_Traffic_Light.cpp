#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        char ch;
        cin >> n >> ch;
        cin >> s;
 
        set<int> green_pos;
        for (int i = 0;i < n;i++) {
            if (s[i] == 'g') {
                green_pos.insert(i + 1);
            }
        }
 
        int ans = INT_MIN;
        for (int i = 0;i < n;i++) {
            if (s[i] == ch) {
                auto LB = green_pos.lower_bound(i + 1);;
                if (LB != green_pos.end()) {
                    int diff = (*LB - (i + 1));
                    ans = max(ans, diff);
                }
                else {
                    int x = n - (i + 1), y = *green_pos.begin();
                    ans = max(ans, x + y);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}