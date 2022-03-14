void printArrow(int n, bool left){
    int leftSpace = 0,
        rightSpace = n-1,
        star = n,
        rightSpace2 = 1,
        star2 = 2,
        leftSpace2 = 2*n - 1 - rightSpace2 - star2;
    if(left == 0){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= leftSpace; j++){
                cout << " ";
            }
            for(int k = 1; k <= star; k++){
                cout << "*";
            }
            for(int l = 1; l <= rightSpace; l++){
                cout << " ";
            }
            cout << endl;
            leftSpace += 2;
            star--;
            rightSpace--;
        }
        for(int i = 1; i < n; i++){
            for(int j = leftSpace2; j >= 1; j--){
                cout << " ";
            }
            for(int k = 1; k <= star2; k++){
                cout << "*";
            }
            for(int l = 1; l <= rightSpace2; l++){
                cout << " ";
            }
            cout << endl;
            leftSpace2 -= 2;
            star2++;
            rightSpace2++;
        }
    }
    else {
        swap(leftSpace, rightSpace);
        swap(leftSpace2, rightSpace2);
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= leftSpace; j++){
                cout << " ";
            }
            for(int k = 1; k <= star; k++){
                cout << "*";
            }
            for(int l = 1; l <= rightSpace; l++){
                cout << " ";
            }
            cout << endl;
            leftSpace--;
            star--;
            rightSpace += 2;
        }
        for(int i = 1; i < n; i++){
            for(int j = leftSpace2; j >= 1; j--){
                cout << " ";
            }
            for(int k = 1; k <= star2; k++){
                cout << "*";
            }
            for(int l = 1; l <= rightSpace2; l++){
                cout << " ";
            }
            cout << endl;
            leftSpace2++;
            star2++;
            rightSpace2 -= 2;
        }
    }
}
