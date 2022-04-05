#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int n; 
    cout << "nhap n: ";
    cin >> n;
    double a[n+3];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i] < a[j]){
                swap(a[i],a[j]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << setprecision(2) << fixed << a[i] << " ";
    }
    
    return 0;
}
