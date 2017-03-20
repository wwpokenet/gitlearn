//
//  employee.hpp
//  exp1.2(Managment)
//
//  Created by Madistia on 2017/2/27.
//  Copyright © 2017年 Madistia. All rights reserved.
//

#ifndef employee_hpp
#define employee_hpp
#define NUM (employee::originalID - 2016000000)
#include <iostream>
using namespace std;
class employee{
public:
    static int originalID;
    employee();     //构造函数1（用户输入值）
    employee(double aP, int gd = 1);    //构造函数2（程序预设值）
    static void search(employee *a);     // 查询函数
    friend ostream& operator << (ostream&, employee&);  //重载cout
    friend istream& operator >> (istream&, employee&);  //重载cin
    ~employee();    //析构函数，打印结束语
private:
    int individualEmpNo;
    int grade;
    double accumPay;
};
#endif /* employee_hpp */
