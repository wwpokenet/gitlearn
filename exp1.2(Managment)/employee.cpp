//
//  employee.cpp
//  exp1.2(Managment)
//
//  Created by Madistia on 2017/2/27.
//  Copyright © 2017年 Madistia. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include "employee.hpp"
using namespace std;
int employee::originalID = 2016000000;
employee::employee(){}
employee::employee(double aP, int gd){
    individualEmpNo = originalID;
    originalID++;
    grade = gd;
    accumPay = aP;
}
void employee::search(employee *a){
    int kind;
    double data;
    cout << "Which kind of searching do you want ? /n" << "1 = ID; 2 = grade; 3 = Pay" << endl;
    cin >> kind;
    cout << "Input your data" << endl;
    cin >> data;
    cout << setw(15) << "individualEmoNo" << setw(15) << "grade" << setw(15) << "accumPay(RMB)" << endl;
    if (kind == 1) {
        for (int i = 0; i < NUM; i++) {
            if (a[i].individualEmpNo == data) {
                cout << a[i];
                break;
            }
            else continue;
        }
    }
    if (kind == 2) {
        for (int i = 0; i < NUM; i++) {
            if (a[i].grade == data) {
                cout << a[i];
                break;
            }
            else continue;
        }
    }
    if (kind == 3) {
        for (int i = 0; i < NUM; i++) {
            if (a[i].accumPay == data) {
                cout << a[i];
                break;
            }
            else continue;
        }
    }
    
}
ostream& operator << (ostream& cout, employee& a){
    cout << '(' << a.individualEmpNo << ", " << a.grade << ", ";
    cout << setprecision(2) << setiosflags(ios::fixed) << a.accumPay << " Yuan)" << endl;
    return cout;
}
istream& operator >> (istream& cin, employee& a){
    cout << "ID: ";
    cin >> a.individualEmpNo;
    cout <<"Grade: ";
    cin >> a.grade;
    cout << "aPay: ";
    cin >> a.accumPay;
    return cin;
}
employee::~employee(){
    cout << "欢迎使用，再见" << endl;
}
