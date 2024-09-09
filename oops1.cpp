#include <bits/stdc++.h>
using namespace std;


class Student {
    public:
    string name;
    double* cgpaPtr;

    Student(string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
        
        //this->cgpa = cgpa;
    }
    //destructor
    ~Student() {
     cout << "Hi,I delete everything\n";
     delete cgpaPtr;//if not then memory leak. 
    }
    void getinfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Cgpa: "<<*cgpaPtr<<endl;
    }
}

int main() {
    Student s1("ankit singh", 8.9);
    s1.getinfo();
    Student s2(s1);
    *(s2.cgpaPtr) = 9.2;
    return 0;
}