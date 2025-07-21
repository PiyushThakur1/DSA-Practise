#include<bits/stdc++.h>

using namespace std;

void explainPq() {
    // max heap
    priority_queue<int>pq;

    pq.push(3); //3
    pq.push(2);//3,2
    pq.push(8);//8,3,2
    pq.emplace(10);//10,8,3,2

    cout<<pq.top();//10

    pq.pop(); // 8,3,2
    cout<<pq.top(); // 8

    //size swap empty same function same as others

    //Minimum heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(3); //3
    pq.push(2);//2,3
    pq.push(8);//2,3,8
    pq.emplace(10);//2,3,8,10

    cout<<pq.top();//2
}

// complexity
// push --> logn
// top --> 0(1)
// pop --> log(n)