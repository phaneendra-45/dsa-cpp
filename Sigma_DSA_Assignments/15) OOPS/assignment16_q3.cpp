#include <bits/stdc++.h>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};
class Student : public Person
{
private:
    string studentID;

public:
    Student(string n, int a, string id) : Person(n, a)
    {
        studentID = id;
    }
    void displayStudentInfo()
    {
        cout << "name : " << this->name << endl;
        cout << "age : " << this->age << endl;
        cout << "studentId : " << this->studentID << endl;
    }
};
int main()
{
    Student student("Alice", 20, "S12345");
    student.displayStudentInfo();
    return 0;
}