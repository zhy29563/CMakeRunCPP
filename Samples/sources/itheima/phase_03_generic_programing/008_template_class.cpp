#include <iostream>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * 类模板
 *  作用：
 *      建立一个通用类，类中的成员 数据类型可以不具体制定，用一个 虚拟的类型 来代表。
 *
 *  语法：
 *  template<typename T>
 *  类
 *
 *  解释：
 *      template  ---  声明创建模板
 *      typename  ---  表面其后面的符号是一种数据类型，可以用class代替
 *           T    ---  通用的数据类型，名称可以替换，通常为大写字母
 *********************************************************************************************************************/
template <class NameType, class AgeType>
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
    // 指定NameType 为string类型，AgeType 为 int类型
    Person<string, int> P1("孙悟空", 999);
    P1.showPerson();

    system("pause");
    return 0;
}