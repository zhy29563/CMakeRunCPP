#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 空指针访问成员函数
 *
 *  C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
 *
 *  如果用到this指针，需要加以判断保证代码的健壮性
 *********************************************************************************************************************/
//空指针访问成员函数
class Person
{
public:
    void ShowClassName()
    {
        cout << "我是Person类!" << endl;
    }

    void ShowPerson()
    {
        if (this == NULL)
        {
            return;
        }
        cout << mAge << endl;
    }

public:
    int mAge;
};

int main()
{
    {
        Person *p = NULL;
        p->ShowClassName(); //空指针，可以调用成员函数
        p->ShowPerson();    //但是如果成员函数中用到了this指针，就不可以了
    }

    system("pause");
    return 0;
}