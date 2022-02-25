#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * switch
 *  作用：
 *      执行多条件分支语句
 *
 *  语法：
 *      switch(表达式)
 *      {
 *          case 结果1：\
 *              执行语句;
 *              break;
 *          case 结果2：
 *              执行语句;
 *              break;
 *          ...
 *          default:
 *              执行语句;
 *              break;
 *      }
 *
 *  注意1：
 *      switch语句中表达式类型只能是整型或者字符型
 *  注意2：
 *      case里如果没有break，那么程序会一直向下执行
 *
 *  总结：
 *      与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间
 *********************************************************************************************************************/

int main()
{
    //请给电影评分
    // 10 ~ 9   经典
    // 8 ~ 7   非常好
    // 6 ~ 5   一般
    // 5分以下 烂片

    int score = 0;
    cout << "请给电影打分" << endl;
    cin >> score;

    switch (score)
    {
    case 10:
    case 9:
        cout << "经典" << endl;
        break;
    case 8:
        cout << "非常好" << endl;
        break;
    case 7:
    case 6:
        cout << "一般" << endl;
        break;
    default:
        cout << "烂片" << endl;
        break;
    }

    system("pause");
    return 0;
}