#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 拷贝构造函数调用时机
 *  C++中拷贝构造函数调用时机通常有三种情况
 *      - 使用一个已经创建完毕的对象来初始化一个新对象
 *      - 值传递的方式给函数参数传值
 *      - 以值方式返回局部对象
 *********************************************************************************************************************/
class Person
{
public:
    Person()
    {
        cout << "无参构造函数!" << endl;
        mAge = 0;
    }

    Person(int age)
    {
        cout << "有参构造函数!" << endl;
        mAge = age;
    }

    Person(const Person &p)
    {
        cout << "拷贝构造函数!" << endl;
        mAge = p.mAge;
    }

    //析构函数在释放内存之前调用
    ~Person()
    {
        cout << "析构函数!" << endl;
    }

public:
    int mAge;
};

//相当于Person p1 = p;
void doWork(Person p1)
{
}

Person doWork2()
{
    Person p1;
    cout << (int *)&p1 << endl;
    return p1;
}

int main()
{
    // 使用一个已经创建完毕的对象来初始化一个新对象
    {
        Person man(100);      // p对象已经创建完毕
        Person newman(man);   // 调用拷贝构造函数
        Person newman2 = man; // 拷贝构造

        // Person newman3;
        // newman3 = man; //不是调用拷贝构造函数，赋值操作
    }
    cout << "=================================================" << endl;
    // 值传递的方式给函数参数传值
    {
        Person p; //无参构造函数
        doWork(p);
    }
    cout << "=================================================" << endl;
    // 以值方式返回局部对象
    {
        Person p = doWork2();
        cout << (int *)&p << endl;
    }

    system("pause");
    return 0;
}