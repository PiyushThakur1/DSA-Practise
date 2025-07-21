#include<bits/stdc++.h>

using namespace std;

void explainList() {
    list<int> ls;

    ls.push_back(2); //2
    ls.emplace_back(1); //2,1
    
    ls.push_front(4); //4,1,2
    ls.emplace_front();
}