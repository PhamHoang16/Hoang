#include<bits/stdc++.h>

using namespace std;

int main(){
    double n;
    double sum = 0, mean = 0, sigma, phsai;
    cin >> n;
    double a[1000];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    mean = sum / n;
    for(int i = 0; i < n; i++){
        sigma += (a[i] - mean)*(a[i] - mean);
    }
    phsai = sigma / n;
    
    cout << setprecision(2) << fixed << phsai;

    return 0;
}