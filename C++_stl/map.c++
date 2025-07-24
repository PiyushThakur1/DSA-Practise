#include<bits/stdc++.h>

using namespace std;
// map stores unique keys in sorted order sth similar to set datata structure
// it stores in a sorted order of a key and not value
void explainMap(){
    map<int,int> mpp;

    map<int, pair<int,int>> mpp;

    map<pair<int,int>, int> mpp;
    
    mpp[1] = 2;
    mpp.emplace({3,1});

    mpp.insert({3,4});

    mpp[{2,3}] = 10;

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout <<mpp[1];
    cout <<mpp[3];

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(3);

    auto it = mpp.lower_bound(3);
    auto it = mpp.upper_bound(3);
    // log(n)

}

void explainMultiMap() {
    // everthing same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap (){
    //same as set and unorderd_set difference
    // will have unique keys but be sorted will not
// O(1)
// wrst cs ---> O()
}

bool  comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // they are same
    if(p1.second > p2.second) return true;
    return false;

}

void explainExtra() {
    int a[] = {5, 3, 1, 4, 2};
    int n = sizeof(a) / sizeof(a[0]);

    // Sorting entire array
    sort(a, a + n);

    // Sorting a vector (assuming vector v is defined)
    vector<int> v = {5, 3, 1, 4, 2};
    sort(v.begin(), v.end());

    // Sorting part of the array
    sort(a + 2, a + 4);

    // Sorting in descending order
    sort(a, a + n, greater<int>());

    // Sorting pairs
    pair<int, int> arr[] = {{1, 2}, {2, 1}, {4, 1}, {1, 2}};

    // Sort by second element, and if same then by first in descending
    sort(arr, arr + 4, comp);  // Result: {4,1}, {2,1}, {1,2}, {1,2}

    // Popcount usage
    int num = 7;
    int cnt = __builtin_popcount(num); // counts 1s in binary

    long long bigNum = 165786576867;
    int cnt2 = __builtin_popcountll(bigNum); // for long long

    // Next permutation example
    string s = "123";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    // Finding max element in array
    int maxi = *max_element(a, a + n);
}






