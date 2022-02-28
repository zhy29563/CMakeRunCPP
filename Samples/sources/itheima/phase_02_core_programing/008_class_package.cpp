#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 封装的意义：
 *      - 将属性和行为作为一个整体，表现生活中的事物
 *      - 将属性和行为加以权限控制
 *
 * 封装意义一：
 *      在设计类的时候，属性和行为写在一起，表现事物
 *
 *      语法：
 *          class 类名
 *          {
 *          访问权限：
 *              属性  / 行为
 *          };
 *
 * 封装意义二：
 *      类在设计时，可以把属性和行为放在不同的权限下，加以控制
 *
 *      访问权限有三种：
 *          1. public       公共权限
 *          2. protected    保护权限
 *          3. private      私有权限
 *********************************************************************************************************************/
// 圆周率
const double PI = 3.14;

// 封装一个圆类，求圆的周长
class Circle
{
public: //访问权限  公共的权限
    //属性
    int m_r; //半径

    //行为
    //获取到圆的周长
    double calculateZC()
    {
        // 2 * pi  * r
        //获取圆的周长
        return 2 * PI * m_r;
    }
};

//学生类
class Student
{
public:
    void setName(string name)
    {
        m_name = name;
    }
    void setID(int id)
    {
        m_id = id;
    }

    void showStudent()
    {
        cout << "name:" << m_name << " ID:" << m_id << endl;
    }

public:
    string m_name;
    int m_id;
};

//三种权限
//公共权限  public     类内可以访问  类外可以访问
//保护权限  protected  类内可以访问  类外不可以访问
//私有权限  private    类内可以访问  类外不可以访问
class Person
{
    //姓名  公共权限
public:
    string m_Name;

    //汽车  保护权限
protected:
    string m_Car;

    //银行卡密码  私有权限
private:
    int m_Password;

public:
    void func()
    {
        m_Name = "张三";
        m_Car = "拖拉机";
        m_Password = 123456;
    }
};

int main()
{
    // 案例一
    {
        //通过圆类，创建圆的对象
        // c1就是一个具体的圆
        Circle c1;
        c1.m_r = 10; //给圆对象的半径 进行赋值操作

        // 2 * pi * 10 = = 62.8
        cout << "圆的周长为： " << c1.calculateZC() << endl;
    }

    // 案例二
    {
        Student stu;
        stu.setName("德玛西亚");
        stu.setID(250);
        stu.showStudent();
    }

    // 访问级别
    {
        Person p;
        p.m_Name = "李四";
        // p.m_Car = "奔驰";  //保护权限类外访问不到
        // p.m_Password = 123; //私有权限类外访问不到
    }

    system("pause");
    return 0;
}