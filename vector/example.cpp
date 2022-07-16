// example of vector
#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(1110);
    v.push_back(20);
    v.push_back(330);
    v.push_back(140);
    v.push_back(150);
    v.push_back(120);
    v.push_back(7);
    cout<<"============================>";
    for (auto x: v) {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;
    v.pop_back();
    v.pop_back();
    cout<<"============================>";
    for (auto x: v) {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"At: "<<v.at(2)<<endl;
}