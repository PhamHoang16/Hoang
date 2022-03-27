#include<iostream>

using namespace std;

struct student{
    string name;
    int age;
    double marks;
};

int main(){
    student student;
    getline(cin, student.name);
    cin >> student.age >> student.marks;
    cout << student.name <<endl;
    cout << student.age <<endl;
    cout << student.marks <<endl;
    return 0;
}
