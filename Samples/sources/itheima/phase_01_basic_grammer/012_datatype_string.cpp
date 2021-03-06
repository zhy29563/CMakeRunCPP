#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 字符串型
 *  作用：
 *      用于表示一串字符
 *
 * 两种风格
 *
 *  - C  风格字符串： char    变量名[] = "字符串值"
 *  - C++风格字符串： string  变量名   = "字符串值"
 *
 * 注意：
 *  C  风格的字符串要用双引号括起来
 *  C++风格字符串，需要加入头文件 #include<string>
 *********************************************************************************************************************/

int main()
{
    // C风格
    char str1[] = "C  Style: hello world";
    cout << str1 << endl;

    // C++风格
    string str = "C++ Style: hello world";
    cout << str << endl;

    system("pause");
    return 0;
}