#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int n;
    cin >> n;
    double k;
    double a[n+3];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cin >> k;
    a[n] = k;
    
    if(a[0] > a[1]){
        for(int i = n; i > 0; i--){
            for(int j = i-1; j >= 0; j--){
                if(a[i] > a[j]){
                    swap(a[i], a[j]);
                }
            }
        }
    }
    else if(a[0] < a[1]){
        for(int i = n; i > 0; i--){
            for(int j = i-1; j >= 0; j--){
                if(a[i] < a[j]){
                    swap(a[i], a[j]);
                }
            }
        }
    }
    for(int i = 0; i <= n; i++){
        cout << setprecision(2) << fixed << a[i] << " ";
    }
    return 0;
}