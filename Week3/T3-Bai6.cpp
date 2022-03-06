#include<iostream>

using namespace std;

int main(){
    string s;
    getline(cin, s);
    int num_word = 0;
    s = " " + s; // Thêm dấu cách vào đầu xâu kí tự.
    for (int i = 1; i < s.length(); i++) { // s.length() trả về độ dài của xâu kí tự.
        if (s[i] != ' ' && s[i-1] == ' ') {
            num_word++;
        }
    }
    cout << num_word;
    return 0;
}