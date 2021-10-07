#include <iostream>

using namespace std;
//creat Person class
class Person {
public:
    int birthYear;
    string name;
    int age;
    //default constructor
    Person()
    {
        birthYear = 0;
        name = "none";
        age = 0;
    }
    //constructor
    Person(string n, int b, int a) {
        birthYear = b;
        name = n;
        age = a;
    }
    //class method to calculate birth year relative to cpp release
    int relativeTocpp() {
        return birthYear - 1985;
    }
    //string method for Person
    void stringFunction(){
     cout << "Name: " << name << "\nAge: " << age << "\nBirth Year: " << birthYear << endl;
    }
}; //close class, follow by ";"
//Student class that inherits Person
class Student : public Person {
public:
    string major;
    int gradYear;
	//another way to construct variables
    Student(string m, int g) : major(m), gradYear(g) {}
	//constructor for student class + person class attributes
    Student(string name, int yearBorn, int age, string major, int yearGrad)
    {
    	//pointers to reference Person attributes (and student)
        this->name = name;
        this->birthYear = yearBorn;
        this->age = age;
        this->major = major;
        this->gradYear = yearGrad;
    }
	//string method
    void stringFunction() {
        cout << "Name: " << name << "\nAge: " << age << "\nBirth Year: " << birthYear << "\nMajor: " << major << "\nGraduation Year: " << gradYear << endl;
    }
};

int main() {
	//create a person p
    Person p("Megan", 2000, 21);
    //call relativeTocpp() for p, save as y
    int y = p.relativeTocpp();
    //if/else for y
    if (y < 0) {
        cout << "Born " << -1 * y << " years before C++ was created\n";
    }
    else {
        cout << "Born " << y << " years after C++ was created\n";
    }
    //call string method for p
    p.stringFunction();
    //create student s
    Student s("Kyle", 1999, 21, "Comp Sci", 2022);
    //call string function for s
	s.stringFunction()

    return 0;
}