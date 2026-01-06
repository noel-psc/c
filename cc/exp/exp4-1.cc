#include <iostream>
#include <string>
#define NC 3
using namespace std;

class Student
{
    public:
        int No;
    private:
        string name;
        float score1, score2, score3;
    public:
        Student() {}
        Student(int no, string na, float s1, float s2, float s3) ;
        Student(const Student &st) ;
        ~Student() { cout << "No:" << No << "析构了" << endl; }
    
        void show() const ;
        float avr() {return (score1 + score2 + score3) / 3.0; }
        friend void sort(Student* s, size_t lens) ;
};

Student::Student(int no, string na, float s1, float s2, float s3) : No{no}, name{na}, score1{s1}, score2{s2}, score3{s3} {};
Student::Student(const Student &st) : No{st.No}, name{st.name}, score1{st.score1}, score2{st.score2}, score3{st.score3} {}
void Student::show() const
{
    cout << "No:" << No << '\n'
         << "name:" << name << '\n'
         << "score1:" << score1 << '\n'
         << "score2:" << score2 << '\n'
         << "score3:" << score3 << endl;
}

void sort(Student *s, size_t lens)
{
    for (int i = 0; i < lens - 1; i++)
    {
        size_t tmp = i;
        for (int j = i + 1; j < lens; j++)
        {
            if (s[tmp].avr() < s[j].avr())
                tmp = j;
        }
        if (tmp != i)
            swap(s[i], s[tmp]);
    }
}

int main()
{
    int i;
    //无参构造函数调用
    Student stu[3];
    //有参构造函数调用
    stu[0] = Student(103, "Chen", 77, 70, 83);
    stu[1] = Student(102, "Yang", 85, 80, 78);
    stu[2] = Student(101, "Zhou", 93, 89, 87);
    //深拷贝构造函数调用
    Student s = Student(stu[0]);
    s.No = 999;
    cout << "显示深拷贝修改结果：" << endl;
    s.show();
    cout << "显示被拷贝结果：" << endl;
    stu[0].show();
    //调用排序函数
    cout << "显示原来序列" << endl;
    for (i = 0; i < 3; i++)
    {
        stu[i].show();
    }
    sort(stu, 3);
    cout << "显示排序序列" << endl;
    for (i = 0; i < 3; i++)
    {
        stu[i].show();
    }
    return 0;
}
