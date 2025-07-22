#include<bits/stdc++.h>

using namespace std;

void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;
    vec.push_back({1,2}); // need to give curly bractest so it take the numbers as pair
    vec.emplace_back(1,2); // dont need to give curly braces it automatically assumes it as pair 

    vector<int> v(5, 100);// every instance will have 100 value

    vector<int> v(5);//5 instance with 0 value or any garbage value

      
    vector<int> v1(5,20);// even after intilizing its sixe we can still add more value to it.
    // copy of vector
    vector<int> v2(v1);

    //elements of vector can be accessed same way as array
    //other way is through iterator
    vector<int>::iterator it = v.begin();
    it++;
    cout<<*(it)<<" ";

    it+=2;
    cout<<*(it)<<" ";

    vector<int>::iterator it = v.end(); //it end points to memory location right after last element and if we want to print the last element we need to do - it--
    vector<int>::reverse_iterator it = v.rend();
    vector<int>::reverse_iterator it = v.rbegin();
    
    cout<<v[0] << " " << v.at(0);//v[0] accesses the first element using array-style indexing.
//v.at(0) accesses the first element using the .at() member function.
    cout<< v.back() <<" ";//will print the last element of the vector v.

    // peint the vector using loop
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++);

    for(auto it = v.begin(); it != v.end(); it++); //auto assign datatype automatically

    for(auto it : v){
        cout << it <<" ";
    }

    // deletion in a vector
    // 1, 2,3 ,4,5
    v.erase(v.begin()+1);

    // 1, 2,3 ,4,5
    v.erase(v.begin()+2,v.begin()+3);

    // insert function
    vector<int> v(2, 100); // 100,100
    v.insert(v.begin(),300); // 300,100,100
    v.insert(v.begin() + 1,2, 18); //300,18,18,100,100

    vector<int> copy(2,50);//50, 50
    v.insert(v.begin(), copy.begin(), copy.end()); // 50, 50,300, 18,18,100,100
    cout<<v.size();// 7
    v.pop_back();//pops the alst element

    //v1 10,20
    //v2 30, 40
    v1.swap(v2);//v1--> 30, 40 , v2 --> 10, 20

    v1.clear(); //trims down town to empty vector

    cout<<v.empty();// prints  true  vector is empty
} 

int main(){

    return 0;   
}