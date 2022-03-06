#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    int t = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i <= n/2; i++){
        if(a[i] != a[n-1-i]){
            t = 0;
            break;
        }
    }
    if(t == 0){
        cout << "Asymmetric array.";
    }
    else if(t == 1){
    cout << "Symmetric array.";
    }
    return 0;
}