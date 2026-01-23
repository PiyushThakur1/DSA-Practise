#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p = 0, neg = 0, e = 0, o = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x > 0) p++;
        else if (x < 0) neg++;

        if (x % 2 == 0) e++;
        else o++;
    }

    cout << p << endl << neg << endl << e <<endl << o;
}