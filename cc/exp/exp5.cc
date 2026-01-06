#include <iostream>
#include <string>
using namespace std;

class Person
{
    private:
        string name = "";
        string gender = "";
        int age = 0;
        
    public:
        Person() = default;
        Person(string na, string gn, int ag) : name{na}, gender{gn}, age{ag} {}
        void outPerson() const
        {
            cout << "姓名：" << name << '\n'
                 << "性别：" << gender << '\n'
                 << "年龄：" << age<< endl;
        }
};

class Student :Person
{
    private:
        string id = "";
        string major = "";
        
    public:
        Student() = default;
        Student(string na, string gn, int ag, string iD, string mj) : Person(na, gn, ag), id{iD}, major{mj} {};
        void outStudent() const
        {
            outPerson();
            cout << "学号：" << id << '\n'
                 << "专业：" << major << endl;
        }
};

class Teacher :Person
{
    private:
        string lesson = "";
        
    public:
        Teacher() = default;
        Teacher(string na, string gn, int ag, string ls) : Person(na, gn, ag), lesson{ls} {};
        void outTeacher() const
        {
            outPerson();
            cout << "课程：" << lesson << endl;
        }
};



int main()
{
    Person ps;
    Student stu;
    Teacher tea;
    string name, id, major, lesson, sex;
    int age;
    cout << "无参构造函数输出" << endl;
    cout << "Person类" << endl;
    ps.outPerson();
    cout << "Student类" << endl;
    stu.outStudent();
    cout << "Teacher类" << endl;
    tea.outTeacher();
    cout << "有参构造函数输出" << endl;
    cout << "Person类" << endl;
    cin >> name;
    cin >> sex;
    //cin.clear();
    //cin.ignore(10000, '\n');
    cin >> age;
    ps = Person(name, sex, age);
    cout << "--信息输出--"<< endl;
    ps.outPerson();
    cout << "Student类" << endl;
    cin >> name;
    cin >> sex;
    cin >> age;
    cin >> id;
    cin >> major;
    stu = Student(name, sex, age, id, major);
    cout << "--信息输出--" << endl;
    stu.outStudent();
    cout << "Teacher类" << endl;
    cin >> name;
    cin >> sex;
    cin >> age;
    cin >> lesson;
    tea = Teacher(name, sex, age, lesson);
    cout << "--信息输出--" << endl;
    tea.outTeacher();
    return 0;
}
