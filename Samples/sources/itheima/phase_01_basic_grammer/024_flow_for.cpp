#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * for循环语句
 *  作用：
 *      满足循环条件，执行循环语句
 *  语法：
 *      for(起始表达式;条件表达式;末尾循环体)
 *      {
 *          循环语句;
 *      }
 *
 *  执行顺序：
 *      - 起始表达式
 *      - 条件表达式
 *      - 循环语句
 *      - 末尾循环体
 *
 *  注意：
 *      for循环中的表达式，要用分号进行分隔
 *  总结：
 *      while , do...while, for都是开发中常用的循环语句，for循环结构比较清晰，比较常用
 *
 * 嵌套循环
 *  作用：
 *      在循环体中再嵌套一层循环，解决一些实际问题
 *********************************************************************************************************************/

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }

    // 嵌套循环
    // 外层循环执行1次，内层循环执行1轮
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}