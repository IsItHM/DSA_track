#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(8);
    v.pop_back();
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.at(2)<<endl;

    vector<int> a(5,1);
    vector<int> last(a);
    for(int i:last){
        cout<<i<<" ";
    }



}
