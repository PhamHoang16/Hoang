#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+3], b[n+3];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    
    return 0;
}