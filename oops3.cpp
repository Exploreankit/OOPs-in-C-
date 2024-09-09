#include <bits/stdc++.h>
using namespace std;
//polymorphism
class Student {
public:
    string name;

    Student() {
        cout<< "non-parameterzed\n";
    }

    Student(string name) {
        this->name = name;
    }
};
int main(){
    Student s1("Ironman");
return 0; 
}