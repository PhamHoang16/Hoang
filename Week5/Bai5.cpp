#include<iostream>

using namespace std;

struct mark{
    double chem;
    double math;
    double phys;
};
int main(){
    mark a[5];
    for(int i = 0; i < 5; i++){
        cout << "nhap diem cua sinh vien thu " << i+1 << endl;
        cout << "chemistry: ";
        cin >> a[i].chem;
        cout << endl << "Math: ";
        cin >> a[i].math;
        cout << endl << "Physics: ";
        cin >> a[i].phys;
    }
    for(int i = 0; i < 5; i++){
        cout << "diem cua sinh vien thu " << i << " la" << endl;
        cout << "chemistry: " << a[i].chem << endl;
        cout << "mathematics:" << a[i].math << endl;
        cout << "physics: " << a[i].phys << endl;
    }
    return 0;
}
