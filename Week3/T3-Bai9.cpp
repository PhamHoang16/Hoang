#include<iostream>

using namespace std;

int main(){
    string text;
    getline(cin, text);
    int countStartSpaces = 0;
    while(text[countStartSpaces] == ' '){
        countStartSpaces++;
        cout << ' ';
    }
    for(int i = countStartSpaces; i < text.size(); i++){
        if(text[i] != ' ') {
            cout << text[i];
        }
        else{
            cout << text[i];
            int temp = i+1;
            while(text[temp] == ' '){
                i++;
                temp++;
            }
        }
    }
    return 0;
}
