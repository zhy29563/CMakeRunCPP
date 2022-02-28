#pragma once
#include <iostream>
#include <iostream>
#include <string>
#include "999_example_worker.h"
using namespace std;

/**********************************************************************************************************************
 * 经理类
 *
 *  经理类 继承 职工抽象类，并重写父类中纯虚函数
 *********************************************************************************************************************/
//经理类
class Manager : public Worker
{
public:
    Manager(int id, string name, int dId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual string getDeptName();
};