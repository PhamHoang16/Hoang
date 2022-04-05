#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector<char> v;
    for(int i = 0; i < s.size(); i++){
        v.push_back(s[i]);
    }
    for(int i = 0; i < v.size(); i++){
        if(v[i] == v[i+1]){
            v.insert(v.begin()+i, '*');
        }
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
    }
    return 0;
}

