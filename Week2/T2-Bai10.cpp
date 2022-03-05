#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    double a[n], b[n];
    
    for(int i = 0; i  < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i  < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        sum += (a[i]*b[i]);
    }
    cout << setprecision(2) << fixed << sum;
    
    return 0;
}