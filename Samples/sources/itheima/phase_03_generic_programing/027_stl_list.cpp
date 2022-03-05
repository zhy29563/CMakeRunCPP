#include <iostream>
#include <list>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * list容器
 *  功能：
 *      将数据进行链式存储
 *
 *  链表（list）是一种物理存储单元上非连续的存储结构，数据元素的逻辑顺序是通过链表中的指针链接实现的
 *
 *  链表的组成：
 *      链表由一系列 结点 组成
 *
 *  结点的组成：
 *      一个是存储数据元素的 数据域，另一个是存储下一个结点地址的 指针域
 *
 *  注意：
 *      STL中的链表是一个双向循环链表
 *      由于链表的存储方式并不是连续的内存空间，因此链表list中的迭代器只支持前移和后移，属于 双向迭代器
 *
 *  优点：
 *      - 采用动态存储分配，不会造成内存浪费和溢出
 *      - 链表执行插入和删除操作十分方便，修改指针即可，不需要移动大量元素
 *
 *  缺点：
 *      链表灵活，但是空间(指针域) 和 时间（遍历）额外耗费较大
 *
 *  注意：
 *      List有一个重要的性质，插入操作和删除操作都不会造成原有list迭代器的失效，这在vector是不成立的
 *
 *  构造函数
 *      - list<T> lst;                              // list采用采用模板类实现,对象的默认构造形式
 *      - list(beg,end);                            // 构造函数将[beg, end)区间中的元素拷贝给本身
 *      - list(n,elem);                             // 构造函数将n个elem拷贝给本身
 *      - list(const list &lst);                    // 拷贝构造函数
 *
 *  赋值和交换
 *      - assign(beg, end);                         // 将[beg, end)区间中的数据拷贝赋值给本身
 *      - assign(n, elem);                          // 将n个elem拷贝赋值给本身
 *      - list& operator=(const list &lst);         // 重载等号操作符
 *      - swap(lst);                                // 将lst与本身的元素互换
 *
 *  大小操作
 *      - size();                                   // 返回容器中元素的个数
 *      - empty();                                  // 判断容器是否为空
 *      - resize(num);                              // 重新指定容器的长度为num，若容器变长，则以默认值填充新位置
 *                                                  // 如果容器变短，则末尾超出容器长度的元素被删除
 *      - resize(num, elem);                        // 重新指定容器的长度为num，若容器变长，则以elem值填充新位置
 *                                                  // 如果容器变短，则末尾超出容器长度的元素被删除
 *
 *  插入和删除
 *      - push_back(elem);                          // 在容器尾部加入一个元素
 *      - pop_back();                               // 删除容器中最后一个元素
 *      - push_front(elem);                         // 在容器开头插入一个元素
 *      - pop_front();                              // 从容器开头移除第一个元素
 *      - insert(pos,elem);                         // 在pos位置插elem元素的拷贝，返回新数据的位置
 *      - insert(pos,n,elem);                       // 在pos位置插入n个elem数据，无返回值
 *      - insert(pos,beg,end);                      // 在pos位置插入[beg,end)区间的数据，无返回值
 *      - clear();                                  // 移除容器的所有数据
 *      - erase(beg,end);                           // 删除[beg,end)区间的数据，返回下一个数据的位置
 *      - erase(pos);                               // 删除pos位置的数据，返回下一个数据的位置
 *      - remove(elem);                             // 删除容器中所有与elem值匹配的元素
 *
 *  数据存取
 *      - front();                                  // 返回第一个元素
 *      - back();                                   // 返回最后一个元素
 *
 *  数据和排序
 *      - reverse();                                // 反转链表
 *      - sort();                                   // 链表排序
 *********************************************************************************************************************/
void printList(const list<int> &L)
{
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

class Person
{
public:
    Person(string name, int age, int height)
    {
        m_Name = name;
        m_Age = age;
        m_Height = height;
    }

public:
    string m_Name; //姓名
    int m_Age;     //年龄
    int m_Height;  //身高
};

int main()
{
    std::cout << "==========================================================" << std::endl;
    std::cout << "构造函数" << std::endl;
    {
        list<int> L1;
        L1.push_back(10);
        L1.push_back(20);
        L1.push_back(30);
        L1.push_back(40);

        printList(L1);

        list<int> L2(L1.begin(), L1.end());
        printList(L2);

        list<int> L3(L2);
        printList(L3);

        list<int> L4(10, 1000);
        printList(L4);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "赋值" << std::endl;
    {
        list<int> L1;
        L1.push_back(10);
        L1.push_back(20);
        L1.push_back(30);
        L1.push_back(40);
        printList(L1);

        //赋值
        list<int> L2;
        L2 = L1;
        printList(L2);

        list<int> L3;
        L3.assign(L2.begin(), L2.end());
        printList(L3);

        list<int> L4;
        L4.assign(10, 100);
        printList(L4);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "交换" << std::endl;
    {

        list<int> L1;
        L1.push_back(10);
        L1.push_back(20);
        L1.push_back(30);
        L1.push_back(40);

        list<int> L2;
        L2.assign(10, 100);

        cout << "交换前: " << endl;
        printList(L1);
        printList(L2);

        cout << endl;

        L1.swap(L2);

        cout << "交换后: " << endl;
        printList(L1);
        printList(L2);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "大小操作" << std::endl;
    {
        list<int> L1;
        L1.push_back(10);
        L1.push_back(20);
        L1.push_back(30);
        L1.push_back(40);

        if (L1.empty())
        {
            cout << "L1为空" << endl;
        }
        else
        {
            cout << "L1不为空" << endl;
            cout << "L1的大小为: " << L1.size() << endl;
        }

        //重新指定大小
        L1.resize(10);
        printList(L1);

        L1.resize(2);
        printList(L1);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "插入和删除" << std::endl;
    {
        list<int> L;
        //尾插
        L.push_back(10);
        L.push_back(20);
        L.push_back(30);
        //头插
        L.push_front(100);
        L.push_front(200);
        L.push_front(300);

        printList(L);

        //尾删
        L.pop_back();
        printList(L);

        //头删
        L.pop_front();
        printList(L);

        //插入
        list<int>::iterator it = L.begin();
        L.insert(++it, 1000);
        printList(L);

        //删除
        it = L.begin();
        L.erase(++it);
        printList(L);

        //移除
        L.push_back(10000);
        L.push_back(10000);
        L.push_back(10000);
        printList(L);
        L.remove(10000);
        printList(L);

        //清空
        L.clear();
        printList(L);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "数据存取" << std::endl;
    {
        list<int> L1;
        L1.push_back(10);
        L1.push_back(20);
        L1.push_back(30);
        L1.push_back(40);

        // cout << L1.at(0) << endl;//错误 不支持at访问数据
        // cout << L1[0] << endl; //错误  不支持[]方式访问数据
        cout << "第一个元素为: " << L1.front() << endl;
        cout << "最后一个元素为: " << L1.back() << endl;

        // list容器的迭代器是双向迭代器，不支持随机访问
        list<int>::iterator it = L1.begin();
        // it = it + 1;//错误，不可以跳跃访问，即使是+1
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "反转和排序" << std::endl;
    {
        list<int> L;
        L.push_back(90);
        L.push_back(30);
        L.push_back(20);
        L.push_back(70);
        printList(L);

        //反转容器的元素
        L.reverse();
        printList(L);

        //排序
        L.sort(); //默认的排序规则 从小到大
        printList(L);

        L.sort([](int val1, int val2) -> bool
               { return val1 > val2; }); //指定规则，从大到小
        printList(L);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "排序样例" << std::endl;
    {
        // 总结：
        //      对于自定义数据类型，必须要指定排序规则，否则编译器不知道如何进行排序
        //      高级排序只是在排序规则上再进行一次逻辑规则制定，并不复杂
        list<Person> L;

        Person p1("刘备", 35, 175);
        Person p2("曹操", 45, 180);
        Person p3("孙权", 40, 170);
        Person p4("赵云", 25, 190);
        Person p5("张飞", 35, 160);
        Person p6("关羽", 35, 200);

        L.push_back(p1);
        L.push_back(p2);
        L.push_back(p3);
        L.push_back(p4);
        L.push_back(p5);
        L.push_back(p6);

        for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
        {
            cout << "姓名: " << it->m_Name << " 年龄: " << it->m_Age << " 身高: " << it->m_Height << endl;
        }

        cout << "---------------------------------" << endl;
        L.sort([](const Person &p1, const Person &p2) -> bool
               { return p1.m_Age == p2.m_Age ? p1.m_Height > p2.m_Height : p1.m_Age < p2.m_Age; }); //排序

        for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
        {
            cout << "姓名: " << it->m_Name << " 年龄: " << it->m_Age << " 身高: " << it->m_Height << endl;
        }
    }
    system("pause");
    return 0;
}