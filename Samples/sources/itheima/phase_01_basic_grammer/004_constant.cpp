#include<iostream>
using namespace std;

/**********************************************************************************************************************
 * 常量
 *  作用：
 *      用于记录程序中不可更改的数据
 * 
 * 两种方式
 *  - #define 宏常量： 
 *      #define 常量名 常量值
 *      通常在文件上方定义，表示一个常量
 *  - const 修饰的变量 
 *      const 数据类型 常量名 = 常量值
 *      通常在变量定义前加关键字const，修饰该变量为常量，不可修改
 *********************************************************************************************************************/
// 宏常量
#define day 7

int main()
{
    // 方式一
    std::cout << "A week has  " << day << " days" << std::endl;

    // 方式二
    const int month = 12;
	cout << "A year has " << month << " monthes" << endl;
    
    system("pause");
    return 0;
}