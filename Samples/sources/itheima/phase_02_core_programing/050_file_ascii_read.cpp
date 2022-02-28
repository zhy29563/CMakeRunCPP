#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**********************************************************************************************************************
 * 读文本文件
 *  读文件步骤如下：
 *      1. 包含头文件
 *          #include <fstream>
 *      2. 创建流对象
 *          ifstream ifs;
 *      3. 打开文件并判断文件是否打开成功
 *          ifs.open("文件路径",打开方式);
 *          ifs.is_open();
 *      4. 读数据
 *          四种方式读取
 *      5. 关闭文件
 *          ifs.close();
 *********************************************************************************************************************/

int main()
{
    ifstream ifs;
    ifs.open("test.txt", ios::in);

    if (!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return EXIT_FAILURE;
    }

    // 第一种
    // char buf[1024] = { 0 };
    // while (ifs >> buf)
    //{
    //	cout << buf << endl;
    //}

    // 第二种
    // char buf[1024] = { 0 };
    // while (ifs.getline(buf,sizeof(buf)))
    //{
    //	cout << buf << endl;
    //}

    // 第三种
    // string buf;
    // while (getline(ifs, buf))
    //{
    //	cout << buf << endl;
    //}

    // 第四种
    char c;
    while ((c = ifs.get()) != EOF)
    {
        cout << c;
    }

    ifs.close();

    system("pause");
    return 0;
}