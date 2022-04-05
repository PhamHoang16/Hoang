#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool checkRepeat(vector<int> v, int n, int x){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(x == v.at(i)){
            count++;
        }
        if(count == 2){
            return true;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int y;
        cin >> y;
        v.push_back(y);
    }
    vector<int> temp;
    for(int i = 0; i < n; i++){
        if(checkRepeat(v, n, v.at(i)) == false){
            temp.push_back(v.at(i));
        }
        else continue;
    }
    sort(temp.begin(), temp.end());
    for(int i = temp.size()-1; i >= 0; i--){
        cout << temp[i] << " ";
    }
    return 0;
}
