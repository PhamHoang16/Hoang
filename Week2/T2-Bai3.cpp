#include<bits/stdc++.h>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int sqrtOfa, sqrtOfb;
    sqrtOfa = sqrt(a);
    sqrtOfb = sqrt(b);
    for(int i = sqrtOfa; i <= sqrtOfb; i++){
        cout << i*i << " ";
    }
    return 0;
}
