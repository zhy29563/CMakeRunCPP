#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 继承中的对象模型
 *
 *  问题：
 *      从父类继承过来的成员，哪些属于子类对象中？
 *
 *  工具：
 *      VS20.. 的开发工具命令提示符
 *  命令：
 *      cl /d1 reportSingleClassLayout查看的类名 所属文件名
 *
 *  结论：
 *      父类中私有成员也是被子类继承下去了，只是由编译器给隐藏后访问不到
 *********************************************************************************************************************/
class Base
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son : public Base
{
public:
    int m_D;
};

int main()
{
    {
        cout << "sizeof Son = " << sizeof(Son) << endl;
    }

    system("pause");
    return 0;
}