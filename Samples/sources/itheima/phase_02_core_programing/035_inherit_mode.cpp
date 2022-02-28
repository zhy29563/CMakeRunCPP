#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 继承方式
 *
 *  语法：
 *      class 子类 : 继承方式  父类
 *
 *  继承方式一共有三种：
 *      - 公共继承
 *      - 保护继承
 *      - 私有继承
 *********************************************************************************************************************/
class Base1
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};

//公共继承
class Son1 : public Base1
{
public:
    void func()
    {
        m_A; //可访问 public权限
        m_B; //可访问 protected权限
             // m_C; //不可访问
    }
};

//保护继承
class Base2
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};
class Son2 : protected Base2
{
public:
    void func()
    {
        m_A; //可访问 protected权限
        m_B; //可访问 protected权限
             // m_C; //不可访问
    }
};

//私有继承
class Base3
{
public:
    int m_A;

protected:
    int m_B;

private:
    int m_C;
};
class Son3 : private Base3
{
public:
    void func()
    {
        m_A; //可访问 private权限
        m_B; //可访问 private权限
             // m_C; //不可访问
    }
};
class GrandSon3 : public Son3
{
public:
    void func()
    {
        // Son3是私有继承，所以继承Son3的属性在GrandSon3中都无法访问到
        // m_A;
        // m_B;
        // m_C;
    }
};

int main()
{
    // 公有继承
    {
        Son1 s1;
        s1.m_A; //其他类只能访问到公共权限
    }

    // 保护继承
    {
        Son2 s;
        // s.m_A; //不可访问
    }

    system("pause");
    return 0;
}