#include<iostream>
using namespace std;

struct student{
    string name;
    int age;
    string address;
    double mark;
};

int main(){
    student a[15];
    for(int i = 0; i < 15; i++){
        cout << "nhap thong tin sinh vien thu " << i+1 << endl;
        getline(cin, a[i].name);
        cin >> a[i].age;
        getline(cin, a[i].address);
        cin >> a[i].mark;
    }
    for(int i = 0; i < 15; i++){
        cout << "name: " << a[i].name << endl
             << "age: " << a[i].age << endl
             << "address: "<< a[i].address << endl
             << "mark: " << a[i].mark << endl;
    }
    return 0;
}
