#include <iostream>
using namespace std;
void Person(int n);
void Student();


class Student
{
    string dept;
    int roll;
public:
    Student(string Dept, int Roll) : dept(Dept), roll(Roll) {} 
    void display() const
    {
        cout << dept << endl;
        cout << roll << endl;
    }

};

struct Person {
    string name;
    int age;

    void display() const
    {
        cout << "Name: " << name << " Age: " << age << "\n" << endl;
    }
};

int main()
{
    void (*details)(int);
    details = &Person;
    details(2);

    void (*branch)();
    branch = &Student;
    branch();

    return 0;
}

void Student()
{
    class Student *xyz = new class Student("IT", 24);
    xyz->display();

    class Student *yzx = new class Student("DS", 53);
    yzx->display();

}

void Person(int n)
{
    struct Person *ptr = new struct Person[n];

    ptr[0].name = "Student 1";
    ptr[0].age = 20;

    ptr[1].name = "Student 2";
    ptr[1].age = 18;

    for (int i = 0; i < n; ++i)
    {
        cout << "Student: " << i + n-1 << endl;
        ptr[i].display();
    }
    delete [] ptr;
}
