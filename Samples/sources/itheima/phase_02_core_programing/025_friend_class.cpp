#include <iostream>
using namespace std;

/**********************************************************************************************************************
 * 友元
 *  在程序里，有些 私有属性 也想让 类外 特殊的一些 函数 或者 类 进行访问，就需要用到友元的技术
 *
 *  友元的目的就是让一个函数或者类 访问另一个类中私有成员
 *
 *      关键字:
 *          friend
 *
 *  友元的三种实现
 *      - 全局函数做友元
 *      - 类做友元
 *      - 成员函数做友元
 *********************************************************************************************************************/
class Building;

class goodGay
{
public:
    goodGay();
    void visit();

private:
    Building *building;
};

class Building
{
    //告诉编译器 goodGay类是Building类的好朋友，可以访问到Building类中私有内容
    friend class goodGay;

public:
    Building();

public:
    string m_SittingRoom; //客厅
private:
    string m_BedRoom; //卧室
};

Building::Building()
{
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
}

goodGay::goodGay()
{
    building = new Building;
}

void goodGay::visit()
{
    cout << "好基友正在访问" << building->m_SittingRoom << endl;
    cout << "好基友正在访问" << building->m_BedRoom << endl;
}

int main()
{
    {
        goodGay gg;
        gg.visit();
    }

    system("pause");
    return 0;
}