#include<iostream>
#include<string>

using namespace std;

int main(){
    string text;
    getline(cin, text);
    for(int i = 0; i < text.size(); i++){
        if(text.substr(i,4) == "Zues"){
            //swap(text[i+1], text[i+2]);
            cout << "Zeus";
            i += 3;
        }
        else cout << text[i];
    }
}