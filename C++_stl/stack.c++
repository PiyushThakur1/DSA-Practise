#include<bits/stdc++.h>

using namespace std;
//LIFO
void explainStack() {
    stack<int> st;

    st.push(1);//1
    st.push(2);//2,1
    st.push(3); //3,2,1
    st.emplace(4); //4,3,2,1

    cout << st.top(); // print 4 " ** str[2] is invalid here"

    st.pop(); // st looks like 3,2,1..remove 4

    cout <<st.top();//3
    cout <<st.size(); //3

    cout <<st.empty(); //false as it has 3 elements

    stack<int> st1, st2;
    st1.swap(st2);
}

/// complexity of all the operations --> 0(1)
