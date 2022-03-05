#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    int temp = n-1;
    char a[2*n + 1][2*n + 1];
    for(int i = 0; i <= 2*n; i++){
        if(i <= n)
        for(int j = 0; j <= 2*n; j++){
            if(j == n || (j >= n-i && j <= n+i)){
                a[i][j] = '*';
            }
            else{
                a[i][j] = '.';
            }
        }
        else{
            for(int j = 0; j <= 2*n; j++){
                if(j == n || (j >= n-temp && j <= n+temp)){
                    a[i][j] = '*';
                }
                else{
                    a[i][j] = '.';
                }
            }
            temp--;
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