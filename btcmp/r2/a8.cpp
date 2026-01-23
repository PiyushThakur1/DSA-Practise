#include<bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    int n;
    long long result = 1;
    cin >>x>>n;
    for(int i =1; i<=n; i++){
        result*=x;
    }
    cout << result;
}