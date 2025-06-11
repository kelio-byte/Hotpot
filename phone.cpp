//
// Created by kun on 25-6-11.
//

#include "phone.h"
#include <iostream>
using namespace std;

// 构造函数实现
Phone::Phone(const string& number, const string& color, const string& date)
        : number(number), color(color), productDate(date) {}

void Phone::printInfo() const {
    cout << "手机号: " << number << endl;
    cout << "手机颜色: " << color << endl;
    cout << "生产日期: " << productDate << endl;
}

void Phone::writeNumber(const string& newNumber) {
    this->number = newNumber;
    cout<<"\n手机号修改为："<<newNumber<<endl;
}