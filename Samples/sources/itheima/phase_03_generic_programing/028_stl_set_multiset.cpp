#include <iostream>
#include <set>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * set/ multiset 容器
 *  所有元素都会在插入时自动被排序
 *
 * 本质：
 *  set/multiset属于 关联式容器 ，底层结构是用 二叉树 实现
 *
 * set和multiset区别：
 *  - set不允许容器中有重复的元素
 *  - multiset允许容器中有重复的元素
 *
 * 构造和赋值
 *  - set<T> st;                            // 默认构造函数：
 *  - set(const set &st);                   // 拷贝构造函数
 *  - set& operator=(const set &st);        // 重载等号操作符
 *
 * 大小和交换
 *  - size();                               // 返回容器中元素的数目
 *  - empty();                              // 判断容器是否为空
 *  - swap(st);                             // 交换两个集合容器
 *
 * 插入和删除
 *  - insert(elem);                         // 在容器中插入元素
 *  - clear();                              // 清除所有元素
 *  - erase(pos);                           // 删除pos迭代器所指的元素，返回下一个元素的迭代器
 *  - erase(beg, end);                      // 删除区间[beg,end)的所有元素 ，返回下一个元素的迭代器
 *  - erase(elem);                          // 删除容器中值为elem的元素
 *
 * 查找和统计
 *  - find(key);                            // 查找key是否存在,若存在，返回该键的元素的迭代器；若不存在，返回set.end();
 *  - count(key);                           // 统计key的元素个数
 *
 * set和multiset区别
 *  - set不可以插入重复数据，而multiset可以
 *  - set插入数据的同时会返回插入结果，表示插入是否成功
 *  - multiset不会检测数据，因此可以插入重复数据
 *
 * pair对组创建
 *  成对出现的数据，利用对组可以返回两个数据
 *      - pair<type, type> p ( value1, value2 );
 *      - pair<type, type> p = make_pair( value1, value2 );
 *********************************************************************************************************************/
void printSet(set<int> &s)
{
    for (set<int>::iterator it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

class MyCompare
{
public:
    bool operator()(int v1, int v2) const
    {
        return v1 > v2;
    }
};

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }

    string m_Name;
    int m_Age;
};

class comparePerson
{
public:
    bool operator()(const Person &p1, const Person &p2) const
    {
        //按照年龄进行排序  降序
        return p1.m_Age > p2.m_Age;
    }
};

int main()
{
    std::cout << "==========================================================" << std::endl;
    std::cout << "构造函数" << std::endl;
    {
        set<int> s1;

        s1.insert(10);
        s1.insert(30);
        s1.insert(20);
        s1.insert(40);
        printSet(s1);

        // 拷贝构造
        set<int> s2(s1);
        printSet(s2);

        // 赋值
        set<int> s3;
        s3 = s2;
        printSet(s3);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "大小" << std::endl;
    {
        set<int> s1;

        s1.insert(10);
        s1.insert(30);
        s1.insert(20);
        s1.insert(40);

        std::cout << "set.empty(): " << s1.empty() << std::endl;
        std::cout << "set.size() : " << s1.size() << std::endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "交换" << std::endl;
    {
        set<int> s1;

        s1.insert(10);
        s1.insert(30);
        s1.insert(20);
        s1.insert(40);

        set<int> s2;

        s2.insert(100);
        s2.insert(300);
        s2.insert(200);
        s2.insert(400);

        cout << "交换前" << endl;
        printSet(s1);
        printSet(s2);
        cout << endl;

        cout << "交换后" << endl;
        s1.swap(s2);
        printSet(s1);
        printSet(s2);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "插入和删除" << std::endl;
    {
        set<int> s1;
        //插入
        s1.insert(10);
        s1.insert(30);
        s1.insert(20);
        s1.insert(40);
        printSet(s1);

        //删除
        s1.erase(s1.begin());
        printSet(s1);

        s1.erase(30);
        printSet(s1);

        //清空
        // s1.erase(s1.begin(), s1.end());
        s1.clear();
        printSet(s1);
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "查找和统计" << std::endl;
    {
        set<int> s1;
        // 插入
        s1.insert(10);
        s1.insert(30);
        s1.insert(20);
        s1.insert(40);

        // 查找
        set<int>::iterator pos = s1.find(30);

        if (pos != s1.end())
            cout << "找到了元素: " << *pos << endl;
        else
            cout << "未找到元素" << endl;

        // 统计
        int num = s1.count(30);
        cout << "num = " << num << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "set和multiset区别" << std::endl;
    {
        set<int> s;
        pair<set<int>::iterator, bool> ret = s.insert(10);
        if (ret.second)
            cout << "第一次插入成功!" << endl;
        else
            cout << "第一次插入失败!" << endl;

        ret = s.insert(10);
        if (ret.second)
            cout << "第二次插入成功!" << endl;
        else
            cout << "第二次插入失败!" << endl;

        // multiset
        multiset<int> ms;
        ms.insert(10);
        ms.insert(10);

        for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "对组创建" << std::endl;
    {
        pair<std::string, int> p(std::string("Tom"), 20);
        cout << "姓名: " << p.first << " 年龄: " << p.second << endl;

        pair<std::string, int> p2 = std::make_pair("Jerry", 10);
        cout << "姓名: " << p2.first << " 年龄: " << p2.second << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "排序(内置类型)" << std::endl;
    {
        set<int> s1;
        s1.insert(10);
        s1.insert(40);
        s1.insert(20);
        s1.insert(30);
        s1.insert(50);

        // 默认从小到大
        for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;

        // 指定排序规则
        set<int, MyCompare> s2;
        s2.insert(10);
        s2.insert(40);
        s2.insert(20);
        s2.insert(30);
        s2.insert(50);

        for (set<int, MyCompare>::iterator it = s2.begin(); it != s2.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "排序(自定义类型)" << std::endl;
    {
        set<Person, comparePerson> s;

        Person p1("刘备", 23);
        Person p2("关羽", 27);
        Person p3("张飞", 25);
        Person p4("赵云", 21);

        s.insert(p1);
        s.insert(p2);
        s.insert(p3);
        s.insert(p4);

        for (set<Person, comparePerson>::const_iterator it = s.begin(); it != s.end(); it++)
        {
            cout << "姓名: " << it->m_Name << " 年龄: " << it->m_Age << endl;
        }
    }

    system("pause");
    return 0;
}