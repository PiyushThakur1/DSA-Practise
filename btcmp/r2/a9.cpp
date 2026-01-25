#include<bits/stdc++.h>
using namespace std;

int main() {
    // string n;
    long long n;
    long long rev = 0;
    cin>>n;
    // reverse(n.begin(), n.end());
    while(n> 0){
        rev = (rev*10) + n % 10;
        n/=10;
    }
    cout<<rev;

}