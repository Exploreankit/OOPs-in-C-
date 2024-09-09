#include <bits/stdc++.h>
using namespace std;
//Inheritance

class Person {
    public:
      string name;
      int age;

      Person(string name, int age) {
        this->name = name;
        this->age = age;
      }
      Person(){
        cout<<"parent constructor.....\n";
      }
};
class Student : public Person {
  public:
  int rollno;
  void getinfo(){
    cout<<"name: "<< name << endl;
    cout<<"age: "<< age << endl;
    cout<<"rollno: "<< rollno << endl;
  }  
};

int main() {
    Student s1;
    s1.name = "A S";
    s1.age = 22;
    s1.rollno = 1234;

    return 0;
}