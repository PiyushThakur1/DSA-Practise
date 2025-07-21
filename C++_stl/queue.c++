#include<bits/stdc++.h>

using namespace std;

// LIFO
void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(3);

    q.back()+=5;

    cout<<q.back(); //8
    cout<<q.front(); //1

    q.pop(); //2,8

    cout<<q.front();//prints 2


    //size swap empty same as stack

}