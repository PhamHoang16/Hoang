#include<iostream>

using namespace std;
int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2){
    int *merge = new int[lenArr1 + lenArr2];
    int size = lenArr1 + lenArr2;
    for(int i = 0; i < lenArr1; i++){
        *(merge + i) = *(firstArr+i);
    }
    for(int i = 0; i < lenArr2; i++){
        *(merge + lenArr1-1 + i) = *(secondArr + i);
    }
    return merge;
}
int main(){
    int l1, l2;
    cin >> l1;
    int* a1;
    int* a2;
    int m, n;
    for(int i = 0; i < l1; i++){
        cin >> *(a1+i);
    }
    cin >> l2;
    for(int i = 0; i < l2; i++){
        cin >> n;
        *(a2+i) = n;
    }
    int * x = merge(a1, l1, a2, l2);
    for(int i = 0; i < l1+l2; i++){
        cout << *(x+i) << " ";
    }
    return 0;
}


/*#include<iostream>

using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int b[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[i][j] = a[j][i];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;

bool check(vector<char> a, int n){
    for(int i = 0; i < n-1; i++){
        if(a[i] == a[i+i]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    string a;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << a[0];
    }

    else{
        int size = n;
        int k = n;
        for(int i = 0; i <= n-k; i++){
            vector<char> x;
            for(int j = i; j < k; j++){
                x.push_back(a[j]);
            }
            if(check(x, x.size()) == true){
                for(int m = 0; m < x.size(); m++){
                    cout << x[m];
                }
                return 0;
            }
        k--;
        }
    }
}*/


