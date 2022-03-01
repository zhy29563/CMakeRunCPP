#include <iostream>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * 类模板对象做函数参数
 *
 *  类模板实例化出的对象，向函数传参的方式
 *  一共有三种传入方式：
 *  1. 指定传入的类型   --- 直接显示对象的数据类型
 *  2. 参数模板化       --- 将对象中的参数变为模板进行传递
 *  3. 整个类模板化     --- 将这个对象类型 模板化进行传递
 *********************************************************************************************************************/
template <class NameType, class AgeType = int>
class Person
{
public:
    Person(NameType name, AgeType age)
    {
        this->mName = name;
        this->mAge = age;
    }
    void showPerson()
    {
        cout << "name: " << this->mName << " age: " << this->mAge << endl;
    }

public:
    NameType mName;
    AgeType mAge;
};

// 指定传入的类型
void printPerson1(Person<string, int> &p)
{
    p.showPerson();
}

// 参数模板化
template <class T1, class T2>
void printPerson2(Person<T1, T2> &p)
{
    p.showPerson();
    cout << "T1的类型为: " << typeid(T1).name() << endl;
    cout << "T2的类型为: " << typeid(T2).name() << endl;
}

// 整个类模板化
template <class T>
void printPerson3(T &p)
{
    cout << "T的类型为: " << typeid(T).name() << endl;
    p.showPerson();
}

int main()
{
    // 传入指定类型
    {
        Person<string, int> p("孙悟空", 100);
        printPerson1(p);
    }

    // 参数模板化
    {
        Person<string, int> p("猪八戒", 90);
        printPerson2(p);
    }

    // 整个类模板化
    {
        Person<string, int> p("唐僧", 30);
        printPerson3(p);
    }

    system("pause");
    return 0;
}