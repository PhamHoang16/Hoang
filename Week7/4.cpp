int* getPointerToArray(int n){
    int * ptr;
    ptr = new int [n];
    for(int i = 0; i < n; i++){
        cin >> *(ptr + i);
    }
    return ptr;
}