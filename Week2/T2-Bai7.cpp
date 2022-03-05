#include<bits/stdc++.h>

using namespace std;

double factorial(double n){
    double fac = 1;
    for(int i = 1; i <= n; i++){
        fac *= i;
    }
    return fac;
}
int main(){
    double x;
    int k = 1;
    cin >> x;
    double sum(1), oldSum(0);
    while(sum - oldSum > 0.001){
        oldSum = sum;
        sum += (pow(x, k)/factorial(k));
        k++;
    }
    cout << setprecision(4) << fixed<< sum;
    
    return 0;
}