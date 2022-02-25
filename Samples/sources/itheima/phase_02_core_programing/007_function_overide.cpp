#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 函数重载
 *  作用：
 *      函数名可以相同，提高复用性
 *
 *  函数重载满足条件：
 *      - 同一个作用域下
 *      - 函数名称相同
 *      - 函数参数 类型不同 或者 个数不同 或者 顺序不同
 *
 *  注意:
 *      函数的返回值不可以作为函数重载的条件
 *
 *  注意事项
 *      引用作为重载条件
 *      函数重载碰到函数默认参数
 *********************************************************************************************************************/
// 函数重载需要函数都在同一个作用域下
void func()
{
    cout << "func 的调用！" << endl;
}
void func(int a)
{
    cout << "func (int a) 的调用！" << endl;
}
void func(double a)
{
    cout << "func (double a)的调用！" << endl;
}
void func(int a, double b)
{
    cout << "func (int a ,double b) 的调用！" << endl;
}
void func(double a, int b)
{
    cout << "func (double a ,int b)的调用！" << endl;
}

//函数返回值不可以作为函数重载条件
// int func(double a, int b)
//{
//	cout << "func (double a ,int b)的调用！" << endl;
//}

//函数重载注意事项
// 1、引用作为重载条件

void func2(int &a)
{
    cout << "func2 (int &a) 调用 " << endl;
}

void func2(const int &a)
{
    cout << "func2 (const int &a) 调用 " << endl;
}

// 2、函数重载碰到函数默认参数

void func22(int a, int b = 10)
{
    cout << "func22(int a, int b = 10) 调用" << endl;
}

void func22(int a)
{
    cout << "func22(int a) 调用" << endl;
}

int main()
{
    // 基本使用
    {
        func();
        func(10);
        func(3.14);
        func(10, 3.14);
        func(3.14, 10);
    }

    // 注意事项
    {
        int a = 10;
        func2(a);  //调用无const
        func2(10); //调用有const

        // func22(10); //碰到默认参数产生歧义，需要避免
    }

    system("pause");

    return 0;
}