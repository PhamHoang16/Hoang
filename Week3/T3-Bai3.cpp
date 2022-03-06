#include<iostream>

using namespace std;

int main(){
    int n, k(1);
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] >= a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    b[0] = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1]){
            continue;
        }
        else{
            b[k] = a[i];
            k++;
        }
    }
    for(int i = 0; i < k; i++){
        cout << b[i] << " ";
    }
    return 0;
}