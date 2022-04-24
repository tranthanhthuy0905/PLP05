#include <iostream>
using namespace std;

// Object Person; attributes: name, age, address, walk(), sleep()
class Person
{
    // Access specifier
public:
    string name;
    int age;
    string address;

    // object functions
    int walk()
    {
        cout << name << " is walking" << endl;
    }

    int sleep()
    {
        cout << name << " is sleeping" << endl;
    }

    // Default constructor
    Person()
    {
        cout << "Initializing empty person" << endl;
    }
    // Parameterized Constructor
    Person(string inputName, int inputAge, string inputAddress)
    {
        name = inputName;
        age = inputAge;
        address = inputAddress;
    }
};

class Student : public Person
{
public:
    int grade;
    string school;

    int study()
    {
        cout << name << " is studying" << endl;
    }

    // Parameterized Constructor
    Student(string inputName, int inputAge, string inputAddress, int inputGrade, string inputSchool)
    {
        name = inputName;
        age = inputAge;
        address = inputAddress;
        grade = inputGrade;
        school = inputSchool;
    }
};

int main()
{
    // instance of object class
    Person firstPerson = Person("Thuy", 19, "HCM");
    cout << "Person's name is: " << firstPerson.name << endl;
    cout << firstPerson.walk() << endl;

    // In order to pass inheritance, the base class must have the default constructor
    // otherwise, the derived class must explicitly initialize the base class
    Student student1 = Student("Uyen", 20, "HN", 2, "Fulbright");
    cout << student1.name << "'s age is: " << student1.age << endl;
    cout << student1.name << "'s school is: " << student1.school << endl;
    cout << student1.study() << endl;
    return 0;
}