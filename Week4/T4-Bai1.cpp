int maxThree(int a, int b, int c){
    int max = a;
    if(b > a && b > c){
        max = b;
    }
    else if(c > a && c > b){
        max = c;
    }
    return max;
}