#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    char a[2*n + 1][2*n + 1];
    for(int i = 0; i <= 2*n; i++){
        for(int j = 0; j <= 2*n; j++){
            if(j == i || j == 2*n - i){
                a[i][j] = '*';
            }
            else{
                a[i][j] = '.';
            }
        }
    }
    for(int i = 0; i <= 2*n; i++){
        for(int j = 0; j <= 2*n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}