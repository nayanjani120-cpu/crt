#include <iostream>
using namespace std;

class College {
protected:
    string name;
    int age;

public:
    College(string n, int a) {
        name = n;
        age = a;
    }

    virtual void partOfCollege() {
        cout << name << " is part of the college." << endl;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public College {
private:
    string course;
    string cls;
    int rollno;

public:
    Student(string n, int a, string c, string cl, int r)
        : College(n, a) {
        course = c;
        cls = cl;
        rollno = r;
    }

    void partOfCollege() override {
        cout << name << " is part of the student section." << endl;
    }

    void display() override {
        College::display();
        cout << "Course: " << course << endl;
        cout << "Class: " << cls << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

class Teacher : public College {
private:
    string subject;
    int empid;

public:
    Teacher(string n, int a, string s, int e)
        : College(n, a) {
        subject = s;
        empid = e;
    }

    void partOfCollege() override {
        cout << name << " is part of the teacher section." << endl;
    }

    void display() override {
        College::display();
        cout << "Subject: " << subject << endl;
        cout << "Employee ID: " << empid << endl;
    }
};

int main() {
    College *p;

    Student s("Nayan", 19, "CRT", "10-M", 101);
    Teacher t("Sharma Sir", 40, "C++", 501);

    p = &s;
    p->display();
    p->partOfCollege();

    cout << endl;

    p = &t;
    p->display();
    p->partOfCollege();

    return 0;
}