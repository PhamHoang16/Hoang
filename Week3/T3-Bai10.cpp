#include<iostream>

using namespace std;

bool checkUsername(string username);

int main(){
    string username;
    cin >> username;
    
    if(checkUsername(username) == true){
        cout << "Valid username.";
    }
    else if(checkUsername(username) == false){
        cout << "Invalid username.";
    }
    return 0;
}

bool checkUsername(string username){
    
    if(!((username[0] >= 'A' && username[0] <= 'Z') || (username[0] >= 'a' && username[0] <= 'z'))){
        return false;
    }
    //else {return false;}
    if(!(username.size() >= 6 && username.size() <= 15)){
        return false;
    }
    //else {return false;}
    
    for(int i = 0; i < username.size(); i++){
        if(!(((username[i] >= 'A' && username[i] <= 'Z') || (username[i] >= 'a' && username[i] <= 'z') || (username[i] >= '0' && username[i] <= '9')))){
            return false;
            
        }
    }
    return true;
}