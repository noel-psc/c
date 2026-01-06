#include <iostream>
#include <string>
using namespace std;

class Person
{
    protected:
        string name{};
        string sex{};
        int age{0};
    public:
        Person() = default;
        Person(string _name, string _sex, int _age) : name{_name}, sex{_sex}, age{_age} {}
	virtual ~Person() = default;
        virtual void show() const
        {
            cout << "姓名：" << name << '\n'
                 << "性别：" << sex << '\n'
                 << "年龄：" << age<< endl;
        }
        
};

class Student :public Person
{
    protected:
        string id{};
        string major{};
    public:
        Student() = default;
        Student(string _name, string _sex, int _age, string _id, string _major) : Person(_name, _sex, _age), id{_id}, major{_major} {}
        void show() const override
        {
		Person::show();
		cout	<< "学号：" << id << '\n'
			<< "专业：" << major << endl;
        }

};

class Teacher :public Person
    {
    protected:
        string lesson{};
    public:
        Teacher() = default;
        Teacher(string _name, string _sex, int _age, string _lesson) :Person(_name, _sex, _age), lesson{_lesson} {}
        void show() const override
        {
		Person::show();
		cout << "课程：" << lesson << endl;
        }
};

int main()
{
    Person *p;
    Person ps;
    Student stu;
    Teacher tea;
    string name, sex, id, major, lesson;
    int age;
    cout << "Person类" << endl;
    cout << "姓名：";
    cin >> name;
    cout << "性别：";
    cin >> sex;
    cout << "年龄：";
    cin >> age;
    ps = Person(name, sex, age);
    cout << "--信息输出--"<< endl;
    p = &ps;
    p->show();
    cout << "Student类" << endl;
    cout << "学号：" ;
    cin >> id;
    cout << "专业：" ;
    cin >> major;
    stu = Student(name, sex, age, id, major);
    cout << "--信息输出--" << endl;
    p = &stu;
    p->show();
    cout << "Teacher类" << endl;
    cout << "课程：" ;
    cin >> lesson;
    tea = Teacher(name, sex, age, lesson);
    cout << "--信息输出--" << endl;
    p = &tea;
    p->show();
}
