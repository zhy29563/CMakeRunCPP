#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 逻辑运算符
 *  作用：
 *      用于根据表达式的值返回真值或假值
 *
 * 逻辑运算符有以下符号：
 * | **运算符** | **术语** | **示例** | **结果**                                                  |
 * | ---------- | -------- | -------- | -------------------------------------------------------- |
 * | !          | 非       | !a       | 如果a为假，则!a为真；  如果a为真，则!a为假。               |
 * | &&         | 与       | a && b   | 如果a和b都为真，则结果为真，否则为假。                     |
 * | ||         | 或       | a \|\| b | 如果a和b有一个为真，则结果为真，二者都为假时，结果为假。    |
 *********************************************************************************************************************/

int main()
{
    // 非 (真变假，假变真)
    {
        int a = 10;
        cout << !a << endl;  // 0
        cout << !!a << endl; // 1
    }

    // 与(逻辑 与 运算符总结： 同真为真，其余为假)
    {
        int a = 10;
        int b = 10;

        cout << (a && b) << endl; // 1

        a = 10;
        b = 0;

        cout << (a && b) << endl; // 0

        a = 0;
        b = 0;

        cout << (a && b) << endl; // 0
    }

    // 或(逻辑 或 运算符总结： 同假为假，其余为真)
    {
        int a = 10;
        int b = 10;

        cout << (a || b) << endl; // 1

        a = 10;
        b = 0;

        cout << (a || b) << endl; // 1

        a = 0;
        b = 0;

        cout << (a || b) << endl; // 0
    }

    system("pause");
    return 0;
}