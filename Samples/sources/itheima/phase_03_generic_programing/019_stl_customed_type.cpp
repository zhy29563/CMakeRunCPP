#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * 存放自定义数据类型
 *********************************************************************************************************************/
class Person
{
public:
    Person(string name, int age)
    {
        mName = name;
        mAge = age;
    }

public:
    string mName;
    int mAge;
};

int main()
{
    std::cout << "==========================================================" << std::endl;
    std::cout << "存放对象" << std::endl;
    {
        vector<Person> v;
        v.push_back(Person ("aaa", 10));
        v.push_back(Person ("bbb", 20));
        v.push_back(Person ("ccc", 30));
        v.push_back(Person ("ddd", 40));
        v.push_back(Person ("eee", 50));

        for (vector<Person>::iterator iter = v.begin(); iter != v.end(); iter++)
        {
            cout << "Name:" << (*iter).mName << " Age:" << iter->mAge << endl;
        }
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "存放指针" << std::endl;
    {
        vector<Person *> v;

        //创建数据
        Person p1("aaa", 10);
        Person p2("bbb", 20);
        Person p3("ccc", 30);
        Person p4("ddd", 40);
        Person p5("eee", 50);

        v.push_back(&p1);
        v.push_back(&p2);
        v.push_back(&p3);
        v.push_back(&p4);
        v.push_back(&p5);

        for (vector<Person *>::iterator it = v.begin(); it != v.end(); it++)
        {
            Person *p = (*it);
            cout << "Name:" << p->mName << " Age:" << (*it)->mAge << endl;
        }
    }
    system("pause");
    return 0;
}