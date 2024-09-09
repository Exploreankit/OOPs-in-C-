#include <bits/stdc++.h>
using namespace std;


class Teacher {
private:
   double salary;

public:
    //constructor(non-parameterized)  
    Teacher(){
        dept = "computer science";
    }

    //parameterized
      Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;

      }
      // this pointer
       Teacher(string name, string dept, string subject, double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;

      }

     //copy constructor
     Teacher(Teacher &orgObj) {
        cout<<"I am custom copy constructor";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
     } 
    //properties//attributes
    string name;
    string dept;
    string subject;
   

    //methods/member functions
    void changeDept(string newDept) {
        dept = newDept;
    }
    
    void getInfo() {
       cout<<"name : "<<name<<endl; 
    }

    /*setter
    void setSalary(double s) {
        salary = s;
    }
    getter
    double getSalary() {
        return salary;
    }*/
};

int main() {
    Teacher t1("Ankit", "CS", "C++", 25000);
    //t1.getInfo();
    Teacher t2(t1);//default copy constructor -invoke
    //t2.getInfo;
   /* Teacher t1;//object
     t1.name = "Ankit";
     t1.dept = "CS";
     t1.subject = "C++";*/

     cout<< t1.name << endl;
     //cout<< t1.getSalary() << endl;    
    return 0;
}
//Encapsulation