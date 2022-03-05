#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <ctime>
#include <random>
#include <numeric>
using namespace std;

/**********************************************************************************************************************
 * STL- 常用算法
 *  算法主要是由头文件<algorithm> <functional> <numeric>组成
 *      <algorithm>  是所有STL头文件中最大的一个，范围涉及到比较、 交换、查找、遍历操作、复制、修改等等
 *      <numeric>    体积很小，只包括几个在序列上面进行简单数学运算的模板函数
 *      <functional> 定义了一些模板类,用以声明函数对象。
 *
 *  遍历算法
 *      - for_each                                                          // 遍历容器
 *          for_each(iterator beg, iterator end, _func);
 *              beg     开始迭代器
 *              end     结束迭代器
 *              _func   函数或者函数对象
 *
 *      - transform                                                         // 搬运容器到另一个容器中
 *          transform(iterator beg1, iterator end1, iterator beg2, _func);
 *              beg1    源容器开始迭代器
 *              end1    源容器结束迭代器
 *              beg2    目标容器开始迭代器
 *              _func   函数或者函数对象
 *
 *  查找算法
 *      - find                                                              // 查找元素
 *          find(iterator beg, iterator end, value);
 *              按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
 *              beg     开始迭代器
 *              end     结束迭代器
 *              value   查找的元素
 *      - find_if                                                           // 按条件查找元素
 *          find_if(iterator beg, iterator end, _Pred);
 *              按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
 *              beg     开始迭代器
 *              end     结束迭代器
 *              _Pred   函数或者谓词（返回bool类型的仿函数）
 *      - adjacent_find                                                     // 查找相邻重复元素
 *          adjacent_find(iterator beg, iterator end);
 *              查找相邻重复元素,返回相邻元素的第一个位置的迭代器
 *              beg     开始迭代器
 *              end     结束迭代器
 *      - binary_search                                                     // 二分查找法
 *          bool binary_search(iterator beg, iterator end, value);
 *              查找指定的元素，查到 返回true  否则false
 *              注意: 在 无序序列中不可用
 *              beg     开始迭代器
 *              end     结束迭代器
 *              value   查找的元素
 *      - count                                                             // 统计元素个数
 *          count(iterator beg, iterator end, value);
 *              统计元素出现次数
 *              beg     开始迭代器
 *              end     结束迭代器
 *              value   查找的元素
 *      - count_if                                                          // 按条件统计元素个数
 *          count_if(iterator beg, iterator end, _Pred);
 *              按条件统计元素出现次数
 *              beg     开始迭代器
 *              end     结束迭代器
 *              _Pred   函数或者谓词（返回bool类型的仿函数）
 *
 *  排序算法
 *      - sort                                                              // 对容器内元素进行排序
 *          sort(iterator beg, iterator end, _Pred);
 *          对容器内指定范围的数据进行排序
 *          beg     开始迭代器
 *          end     结束迭代器
 *          _Pred   函数或者谓词
 *      - random_shuffle                                                    // 洗牌   指定范围内的元素随机调整次序
 *          random_shuffle(iterator beg, iterator end);
 *          指定范围内的元素随机调整次序
 *          beg 开始迭代器
 *          end 结束迭代器
 *              std::random_shuffle 在 C++14 已经标记 Deprecated ，C++ 17 已经 Removed。
 *              用 std::shuffle 代替，显式实例化一个随机数生成器。
 *      - merge                                                             // 容器元素合并，并存储到另一容器中
 *          merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
 *          容器元素合并，并存储到另一容器中(两个容器必须是 有序的 )
 *              beg1   容器1开始迭代器
 *              end1   容器1结束迭代器
 *              beg2   容器2开始迭代器
 *              end2   容器2结束迭代器
 *              dest   目标容器开始迭代器
 *      - reverse                                                           // 反转指定范围的元素
 *          reverse(iterator beg, iterator end);
 *              反转指定范围的元素
 *              beg     开始迭代器
 *              end     结束迭代器
 *
 *  拷贝和替换
 *      - copy                                                              // 容器内指定范围的元素拷贝到另一容器中
 *          copy(iterator beg, iterator end, iterator dest);
 *              按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
 *              beg     开始迭代器
 *              end     结束迭代器
 *              dest    目标起始迭代器
 *      - replace                                                           // 将容器内指定范围的旧元素修改为新元素
 *          replace(iterator beg, iterator end, oldvalue, newvalue);
 *              将区间内旧元素 替换成 新元素
 *              beg     开始迭代器
 *              end     结束迭代器
 *              oldvalue 旧元素
 *              newvalue 新元素
 *      - replace_if                                                        // 容器内指定范围满足条件的元素替换为新元素
 *          replace_if(iterator beg, iterator end, _pred, newvalue);
 *              按条件替换元素，满足条件的替换成指定元素
 *              beg      开始迭代器
 *              end      结束迭代器
 *              _pred    谓词
 *              newvalue 替换的新元素
 *      - swap                                                              // 互换两个容器的元素
 *          swap(container c1, container c2);
 *              互换两个容器的元素
 *                  c1  容器1
 *                  c2  容器2
 *  算术生成算法
 *      注意：
 *          算术生成算法属于小型算法，使用时包含的头文件为 #include <numeric>
 *
 *      - accumulate                                                        // 计算容器元素累计总和
 *          accumulate(iterator beg, iterator end, value);
 *              计算容器元素累计总和
 *                  beg     开始迭代器
 *                  end     结束迭代器
 *                  value   起始值
 *      - fill                                                              // 向容器中添加元素
 *          fill(iterator beg, iterator end, value);
 *              向容器中填充元素
 *                  beg     开始迭代器
 *                  end     结束迭代器
 *                  value   填充的值
 *
 *  集合算法
 *      - set_intersection                                                  // 求两个容器的交集
 *          set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
 *              求两个集合的交集
 *              注意:
 *                  两个集合必须是有序序列
 *                  目标容器开辟空间需要从 两个容器中取小值
 *                  set_intersection返回值是交集中最后一个元素的位置
 *              beg1    容器1开始迭代器
 *              end1    容器1结束迭代器
 *              beg2    容器2开始迭代器
 *              end2    容器2结束迭代器
 *              dest    目标容器开始迭代器
 *      - set_union                                                         // 求两个容器的并集
 *          set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
 *              求两个集合的并集
 *              注意:
 *                  两个集合必须是有序序列
 *                  目标容器开辟空间需要 两个容器相加
 *                  set_union返回值是并集中最后一个元素的位置
 *              beg1    容器1开始迭代器
 *              end1    容器1结束迭代器
 *              beg2    容器2开始迭代器
 *              end2    容器2结束迭代器
 *              dest    目标容器开始迭代器
 *      - set_difference                                                    // 求两个容器的差集
 *          set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
 *              求两个集合的差集
 *              注意:
 *                  两个集合必须是有序序列
 *                  目标容器开辟空间需要 两个容器取最大值
 *                  set_difference返回值是并集中最后一个元素的位置
 *              beg1    容器1开始迭代器
 *              end1    容器1结束迭代器
 *              beg2    容器2开始迭代器
 *              end2    容器2结束迭代器
 *              dest    目标容器开始迭代器
 *********************************************************************************************************************/
class print02
{
public:
    void operator()(int val)
    {
        cout << val << " ";
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
    //重载==
    bool operator==(const Person &p)
    {
        if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;
        }
        return false;
    }

public:
    string m_Name;
    int m_Age;
};


int main()
{
    std::cout << "==========================================================" << std::endl;
    std::cout << "for_each" << std::endl;
    {
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            v.push_back(i);
        }

        // 函数方式
        for_each(v.begin(), v.end(), [](int val) -> void
                 { cout << val << " "; });
        cout << endl;

        // 仿函数
        for_each(v.begin(), v.end(), print02());
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "transform" << std::endl;
    {
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            v.push_back(i);
        }

        vector<int> vTarget;      // 目标容器
        vTarget.resize(v.size()); // 目标容器需要提前开辟空间

        transform(v.begin(), v.end(), vTarget.begin(), [](const int val) -> int
                  { return val; });

        for_each(vTarget.begin(), vTarget.end(), [](const int val) -> void
                 { cout << val << " "; });
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "find(内置类型)" << std::endl;
    {
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            v.push_back(i + 1);
        }
        // 查找容器中是否有 5 这个元素
        vector<int>::iterator it = find(v.begin(), v.end(), 5);
        if (it == v.end())
        {
            cout << "没有找到!" << endl;
        }
        else
        {
            cout << "找到:" << *it << endl;
        }
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "find(自定义类型)" << std::endl;
    {
        vector<Person> v;

        //创建数据
        Person p1("aaa", 10);
        Person p2("bbb", 20);
        Person p3("ccc", 30);
        Person p4("ddd", 40);

        v.push_back(p1);
        v.push_back(p2);
        v.push_back(p3);
        v.push_back(p4);

        vector<Person>::iterator it = find(v.begin(), v.end(), p2);
        if (it == v.end())
        {
            cout << "没有找到!" << endl;
        }
        else
        {
            cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << endl;
        }
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "find_if(内置类型)" << std::endl;
    {
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            v.push_back(i + 1);
        }

        vector<int>::iterator it = find_if(v.begin(), v.end(), [](const int val) -> bool
                                           { return val > 5; });
        if (it == v.end())
        {
            cout << "没有找到!" << endl;
        }
        else
        {
            cout << "找到大于5的数字:" << *it << endl;
        }
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "find_if(自定义类型)" << std::endl;
    {
        vector<Person> v;

        //创建数据
        Person p1("aaa", 10);
        Person p2("bbb", 20);
        Person p3("ccc", 30);
        Person p4("ddd", 40);

        v.push_back(p1);
        v.push_back(p2);
        v.push_back(p3);
        v.push_back(p4);

        vector<Person>::iterator it = find_if(v.begin(), v.end(), [](const Person &person) -> bool
                                              { return person.m_Age > 20; });
        if (it == v.end())
        {
            cout << "没有找到!" << endl;
        }
        else
        {
            cout << "找到姓名:" << it->m_Name << " 年龄: " << it->m_Age << endl;
        }
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "adjacent_find" << std::endl;
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(5);
        v.push_back(2);
        v.push_back(4);
        v.push_back(4);
        v.push_back(3);

        //查找相邻重复元素
        vector<int>::iterator it = adjacent_find(v.begin(), v.end());
        if (it == v.end())
        {
            cout << "找不到!" << endl;
        }
        else
        {
            cout << "找到相邻重复元素为:" << *it << endl;
        }
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "binary_search" << std::endl;
    {
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            v.push_back(i);
        }

        //二分查找
        bool ret = binary_search(v.begin(), v.end(), 2);
        if (ret)
        {
            cout << "找到了" << endl;
        }
        else
        {
            cout << "未找到" << endl;
        }
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "count(内置类型)" << std::endl;
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(4);
        v.push_back(5);
        v.push_back(3);
        v.push_back(4);
        v.push_back(4);

        ptrdiff_t num = count(v.begin(), v.end(), 4);

        cout << "4的个数为: " << num << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "count(自定义类型)" << std::endl;
    {
        vector<Person> v;

        Person p1("刘备", 35);
        Person p2("关羽", 35);
        Person p3("张飞", 35);
        Person p4("赵云", 30);
        Person p5("曹操", 25);

        v.push_back(p1);
        v.push_back(p2);
        v.push_back(p3);
        v.push_back(p4);
        v.push_back(p5);

        Person p("诸葛亮", 35);

        ptrdiff_t num = count(v.begin(), v.end(), p);
        cout << "num = " << num << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "count_if(内置类型)" << std::endl;
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(4);
        v.push_back(5);
        v.push_back(3);
        v.push_back(4);
        v.push_back(4);

        ptrdiff_t num = count_if(v.begin(), v.end(), [](const int val)->bool {return val >= 4; });
        cout << "大于4的个数为: " << num << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "count(自定义类型)" << std::endl;
    {
        vector<Person> v;

        Person p1("刘备", 35);
        Person p2("关羽", 35);
        Person p3("张飞", 35);
        Person p4("赵云", 30);
        Person p5("曹操", 25);

        v.push_back(p1);
        v.push_back(p2);
        v.push_back(p3);
        v.push_back(p4);
        v.push_back(p5);

        ptrdiff_t num = count_if(v.begin(), v.end(), [](const Person& person)->bool {return person.m_Age < 35; });
        cout << "小于35岁的个数:" << num << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "sort" << std::endl;
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(30);
        v.push_back(50);
        v.push_back(20);
        v.push_back(40);

        // sort默认从小到大排序
        sort(v.begin(), v.end());
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;

        //从大到小排序
        sort(v.begin(), v.end(), greater<int>());
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "random_shuffle" << std::endl;
    {
        srand((unsigned int)time(NULL));
        vector<int> v;
        for (int i = 0; i < 10; i++)
        {
            v.push_back(i);
        }
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;

        // 打乱顺序
        std::default_random_engine generator{std::random_device{}()};
        std::shuffle(v.begin(), v.end(), generator);

        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "merge" << std::endl;
    {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < 10; i++)
        {
            v1.push_back(i);
            v2.push_back(i + 1);
        }

        vector<int> vtarget;
        //目标容器需要提前开辟空间
        vtarget.resize(v1.size() + v2.size());
        //合并  需要两个有序序列
        merge(v1.begin(), v1.end(), v2.begin(), v2.end(), vtarget.begin());
        for_each(vtarget.begin(), vtarget.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "reverse" << std::endl;
    {
        vector<int> v;
        v.push_back(10);
        v.push_back(30);
        v.push_back(50);
        v.push_back(20);
        v.push_back(40);

        cout << "反转前: " << endl;
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;

        cout << "反转后: " << endl;

        reverse(v.begin(), v.end());
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "copy" << std::endl;
    {
        vector<int> v1;
        for (int i = 0; i < 10; i++)
        {
            v1.push_back(i + 1);
        }
        vector<int> v2;
        v2.resize(v1.size());
        copy(v1.begin(), v1.end(), v2.begin());

        for_each(v2.begin(), v2.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "replace" << std::endl;
    {
        vector<int> v;
        v.push_back(20);
        v.push_back(30);
        v.push_back(20);
        v.push_back(40);
        v.push_back(50);
        v.push_back(10);
        v.push_back(20);

        cout << "替换前:" << endl;
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;

        //将容器中的20 替换成 2000
        cout << "替换后:" << endl;
        replace(v.begin(), v.end(), 20, 2000);
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "replace_if" << std::endl;
    {
        vector<int> v;
        v.push_back(20);
        v.push_back(30);
        v.push_back(20);
        v.push_back(40);
        v.push_back(50);
        v.push_back(10);
        v.push_back(20);

        cout << "替换前:" << endl;
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;

        //将容器中大于等于的30 替换成 3000
        cout << "替换后:" << endl;
        replace_if(v.begin(), v.end(), [](const int val)->bool {return val >= 30; }, 3000);
        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "swap" << std::endl;
    {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < 10; i++)
        {
            v1.push_back(i);
            v2.push_back(i + 100);
        }

        cout << "交换前: " << endl;
        for_each(v1.begin(), v1.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
        for_each(v2.begin(), v2.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;

        cout << "交换后: " << endl;
        swap(v1, v2);
        for_each(v1.begin(), v1.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
        for_each(v2.begin(), v2.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "accumulate" << std::endl;
    {
        vector<int> v;
        for (int i = 0; i <= 100; i++)
        {
            v.push_back(i);
        }

        int total = accumulate(v.begin(), v.end(), 0);

        cout << "total = " << total << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "fill" << std::endl;
    {

        vector<int> v;
        v.resize(10);
        //填充
        fill(v.begin(), v.end(), 100);

        for_each(v.begin(), v.end(), [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "set_intersection" << std::endl;
    {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < 10; i++)
        {
            v1.push_back(i);
            v2.push_back(i + 5);
        }

        vector<int> vTarget;
        //取两个里面较小的值给目标容器开辟空间
        vTarget.resize(min(v1.size(), v2.size()));

        //返回目标容器的最后一个元素的迭代器地址
        vector<int>::iterator itEnd =
            set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

        for_each(vTarget.begin(), itEnd, [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "set_union" << std::endl;
    {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < 10; i++)
        {
            v1.push_back(i);
            v2.push_back(i + 5);
        }

        vector<int> vTarget;
        //取两个容器的和给目标容器开辟空间
        vTarget.resize(v1.size() + v2.size());

        //返回目标容器的最后一个元素的迭代器地址
        vector<int>::iterator itEnd =
            set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());

        for_each(vTarget.begin(), itEnd, [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }

    std::cout << "==========================================================" << std::endl;
    std::cout << "set_difference" << std::endl;
    {
        vector<int> v1;
        vector<int> v2;
        for (int i = 0; i < 10; i++)
        {
            v1.push_back(i);
            v2.push_back(i + 5);
        }

        vector<int> vTarget;
        //取两个里面较大的值给目标容器开辟空间
        vTarget.resize(max(v1.size(), v2.size()));

        //返回目标容器的最后一个元素的迭代器地址
        cout << "v1与v2的差集为： " << endl;
        vector<int>::iterator itEnd =
            set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
        for_each(vTarget.begin(), itEnd, [](const int val)->void {std::cout << val << " "; });
        cout << endl;

        cout << "v2与v1的差集为： " << endl;
        itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
        for_each(vTarget.begin(), itEnd, [](const int val)->void {std::cout << val << " "; });
        cout << endl;
    }
    system("pause");
    return 0;
}