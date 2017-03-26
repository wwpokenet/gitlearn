//
//  main.cpp
//  exp1.2(Managment)
//
//  Created by Madistia on 2017/2/20.
//  Copyright © 2017年 Madistia. All rights reserved.
//
#include <iostream>
using namespace std;
#include <iomanip>
#include "employee.hpp"

int main(int argc, const char * argv[]) {
    employee a[20] = {
        employee(2357231.44),
        employee(2301231.0),
        employee(4213213.23),
        employee(53453),
        employee(2353210),
        employee(5352310),
        employee(64362310),
        employee(22432310),
        employee(77752310),
        employee(52310),
        employee(88652310),
        employee(2365310),
        employee(231076),
        employee(231863670),
        employee(23531360),
        employee(235310),
        employee(275310),
        employee(2334710),
        employee(2310865),
        employee(23345610)
    };
    for (int i = 0; i < NUM; i++) {
        cout << a[i];
    }
    employee test;
    cin >> test;
    cout << test;
    cout << "Tested vi."
    return 0;
}
