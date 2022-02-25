#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 引用做函数参数
 *  作用：
 *      函数传参时，可以利用引用的技术让形参修饰实参
 *
 *  优点：
 *      可以简化指针修改实参
 *
 *  总结：
 *      通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单
 *
 * 引用做函数返回值
 *  作用：
 *      引用是可以作为函数的返回值存在的
 *
 *  注意：
 *      不要返回局部变量引用
 *
 *  用法：
 *      函数调用作为左值
 *********************************************************************************************************************/

// 值传递
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 地址传递
void mySwap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 引用传递
void mySwap03(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// 返回局部变量引用
int &test01()
{
    int a = 10; //局部变量
    return a;
}

// 返回静态变量引用
int &test02()
{
    static int a = 20;
    return a;
}

int main()
{
    // 引用做函数参数
    {
        int a = 10;
        int b = 20;

        mySwap01(a, b);
        cout << "a:" << a << " b:" << b << endl;

        mySwap02(&a, &b);
        cout << "a:" << a << " b:" << b << endl;

        mySwap03(a, b);
        cout << "a:" << a << " b:" << b << endl;
    }

    // 引用做函数返回值
    {
        // 不能返回局部变量的引用
        int &ref = test01();
        cout << "ref = " << ref << endl;
        cout << "ref = " << ref << endl;

        // 如果函数做左值，那么必须返回引用
        int &ref2 = test02();
        cout << "ref2 = " << ref2 << endl;
        cout << "ref2 = " << ref2 << endl;

        test02() = 1000;

        cout << "ref2 = " << ref2 << endl;
        cout << "ref2 = " << ref2 << endl;
    }

    system("pause");
    return 0;
}