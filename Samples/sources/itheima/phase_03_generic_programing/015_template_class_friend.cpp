#include <iostream>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * 类模板与友元
 *  掌握类模板配合友元函数的类内和类外实现
 *
 *  全局函数类内实现 - 直接在类内声明友元即可
 *  全局函数类外实现 - 需要提前让编译器知道全局函数的存在
 *
 *  总结：
 *      建议全局函数做类内实现，用法简单，而且编译器可以直接识别
 *********************************************************************************************************************/
// 全局函数配合友元  类外实现 - 先做函数模板声明，下方在做函数模板定义，再做友元
template <class T1, class T2>
class Person;

//如果声明了函数模板，可以将实现写到后面，否则需要将实现体写到类的前面让编译器提前看到
// template<class T1, class T2> void printPerson2(Person<T1, T2> & p);

template <class T1, class T2>
void printPerson2(Person<T1, T2> &p)
{
    cout << "类外实现 ---- 姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;
}

template <class T1, class T2>
class Person
{
    // 全局函数配合友元   类内实现
    friend void printPerson(Person<T1, T2> &p)
    {
        cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;
    }

    //全局函数配合友元  类外实现
    friend void printPerson2<>(Person<T1, T2> &p);

public:
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

private:
    T1 m_Name;
    T2 m_Age;
};
int main()
{
    // 全局函数在类内实现
    {
        Person<string, int> p("Tom", 20);
        printPerson(p);
    }

    // 全局函数在类外实现
    {
        Person<string, int> p("Jerry", 30);
        printPerson2(p);
    }

    system("pause");
    return 0;
}