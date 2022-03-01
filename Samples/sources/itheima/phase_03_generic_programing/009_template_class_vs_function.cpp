#include <iostream>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * 类模板与函数模板区别
 *  1. 类模板没有自动类型推导的使用方式
 *  2. 类模板在模板参数列表中可以有默认参数
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

int main()
{
    // 类模板没有自动类型推导的使用方式
    {
        // Person p("孙悟空", 1000); // 错误 类模板使用时候，不可以用自动类型推导
        Person<string, int> p("孙悟空", 1000); //必须使用显示指定类型的方式，使用类模板
        p.showPerson();
    }

    // 类模板在模板参数列表中可以有默认参数
    {
        Person<string> p("猪八戒", 999); //类模板中的模板参数列表 可以指定默认参数
        p.showPerson();
    }

    system("pause");
    return 0;
}