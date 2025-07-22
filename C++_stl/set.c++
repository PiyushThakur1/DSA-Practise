#include<bits/stdc++.h>

using namespace std;
// set --> in sorted order and unique
void explainSet() {
    set<int>st;
    st.insert(1);// 1
    st.insert(2);// 1, 2
    st.insert(2);// 1, 2
    st.insert(4);// 1, 2, 4
    st.emplace(5);// 1, 2, 4, 5

    // Functionality of insert in vector
    // can be used also, that only increases
    // efficiently.

    // begin(), end(), rbegin(), rend(), size(),
    // empty() and swap()  are same as others

    // {1,2,3,4,5}
    auto it = st.find(3); // --> return iteraator that points to 3
    // {1,2,3,4,5}
    auto it = st.find(6); // --? return st.end()

    st.erase(5); // erases 5 -- takes logarithimic time

    int cnt = st.count(1); // f it is ther it will give if not it will give 0 as it is unique

    auto it = st.find(3);
    st.erase(it); // it takes constant time

    // {1,2,3,4,5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1,4,5} { first last}

    //lower_bound() and upper_bound() function works in the same way
    // as in vector it does

    // This is the syntax
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}

// everything is same as set
// only stores duplicates elements also

void multiSet(){
    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // all 1's are erased

    // only a single one erased
    ms.erase(ms.find(1)); 

    ms.erase(ms.find(1), ms.find(1)+2);
    //  rest all functions are same


}

//(logn)
