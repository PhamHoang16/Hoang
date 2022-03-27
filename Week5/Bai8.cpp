#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

struct customers{
    string name;
    int accNumber;
    int balance;
};
void print(customers a, int i){
    cout << a.name << " ( " << a.balance << " )" << endl;
}
void getInfor(customers &s){
    cout << "Enter customer information" << endl << endl;
    cout << "Enter customer name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter customer account number: ";
    cin >> s.accNumber;
    cout << "Enter customer balance: ";
    cin >> s.balance;
    cout << endl;
}
void printLessThan200(customers a[], int n){
    cout << "List of customers with balance less than 200: " << endl;
    for(int i = 0; i < n; i++){
        if(a[i].balance < 200){
            print(a[i], n);
        }
    }
}
void add(customers a[], int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i].balance >= 1000){
            a[i].balance += 100;
        }
    }
}
void printIncremented(customers a[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(a[i].balance > a[j].balance){
                swap(a[i], a[j]);
            }
        }
    }
    cout << "List of customers by balance sorted in ascending order: " << endl;
    for(int i = 0; i < n; i++){
        print(a[i], n);
    }
}
int main(){
    int numberOfCustomers;
    cout << "Enter total number of customer: ";
    cin >> numberOfCustomers;
    if(numberOfCustomers <= 1){
        cout << "Invalid";
    }
    else {
        customers a[numberOfCustomers];
        for(int i = 0; i < numberOfCustomers; i++){
            getInfor(a[i]);
        }

        printLessThan200(a, numberOfCustomers);

        add(a, numberOfCustomers);

        printIncremented(a, numberOfCustomers);
    }
    return 0;
}
