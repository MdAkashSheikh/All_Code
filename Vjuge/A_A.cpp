#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    using namespace std;

    cin.tie(nullptr)->sync_with_stdio(false);

    int n, k;
    cin >> n >> k;

    struct state {
        int l, r;
        int mn;
    };

    const auto calc = [](state x, state y, int j) -> state {
        return {min(x.l, (1 << j) + y.l), min((1 << j) + x.r, y.r),
                min({x.mn, y.mn, x.r + y.l + 1})};
    };

    vector<state> t((1 << k), {(1 << k), (1 << k), (1 << k)});
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        t[a].l = t[a].r = 0;
    }

    for (int j = 0; j < k; ++j) {
        for (int i = 0; i < (1 << k); ++i) if (((i>>j) & 1) == 0) {
            state r1 = calc(t[i], t[i ^ (1 << j)], j);
            state r2 = calc(t[i ^ (1 << j)], t[i], j);
            t[i] = r1;
            t[i ^ (1 << j)] = r2;
        }
    }

    for (auto &s : t) cout << s.mn << " ";
    cout << endl;
}
