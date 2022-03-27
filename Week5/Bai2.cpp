#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    int count;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        b.push_back(t);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int x = *b.begin();
    vector<int> y;
    for(int i = 1; i <= x/2; i++){
        if(x % i == 0){
           y.push_back(i);
        }
    }

    for(int j = 0; j < y.size(); j++){
        int test = 1;
        for(int l = 0; l < n; l++){
            if(*(y.begin()+j) % *(a.begin()+l) != 0){
                test = 0;
            }
        }
        if(test == 1){
            count++;
        }
    }
    cout << count;
    return 0;
}
