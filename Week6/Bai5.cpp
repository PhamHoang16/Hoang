#include<iostream>

using namespace std;

class rectangle{
public:
    int length;
    int width;

    void getInfor(){
        cin >> width;
        cin >> length;
    }
    double getArea(){
        return width*length;
    }
    void print(){
        cout << "Area: " << getArea();
    }
};

int main(){
    rectangle a;
    a.getInfor();
    a.print();
    return 0;
}
