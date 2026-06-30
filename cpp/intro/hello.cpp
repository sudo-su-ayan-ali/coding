#include <iostream>
#include <string>
using namespace std;
int main (){
    cout << "hello";
    int age;
    cout << "enter your age: ";
    cin >> age;
    cout << "your age is: " << age << endl;
    string name;
    cout << "enter your name: ";
    cin.ignore();
    getline(cin , name);
    cout  << "your name is: " << name << endl;
    return 0;
}
