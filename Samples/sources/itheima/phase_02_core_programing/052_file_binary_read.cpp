#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * 读二进制文件
 *  二进制方式读文件主要利用流对象调用成员函数read
 *
 *  函数原型：
 *      istream& read(char *buffer,int len);
 *
 *  参数解释：
 *      字符指针buffer指向内存中一段存储空间。len是读写的字节数
 *********************************************************************************************************************/
class Person
{
public:
    char m_Name[64];
    int m_Age;
};

int main()
{
    ifstream ifs("person.txt", ios::in | ios::binary);
    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
    }

    Person p;
    ifs.read((char *)&p, sizeof(p));

    cout << "姓名: " << p.m_Name << " 年龄: " << p.m_Age << endl;

    system("pause");
    return 0;
}