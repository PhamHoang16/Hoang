#include<iostream>

using namespace std;

int main(){
    int total, leg;
    cin >> total >> leg;
    int chicken, dog;
    if(total <= 0 || leg <= 0 || 4*total <= leg || leg % 2 == 1){
        cout << "invalid";
    }
    else{
        chicken = 2*total - leg/2;
        dog = total - chicken;
        
        cout << "chicken = " << chicken << ", " << "dog = " << dog;
    }
    return 0;
}