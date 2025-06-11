//
// Created by kun on 25-6-11.
//

#ifndef HOTPOT_PHONE_H
#define HOTPOT_PHONE_H

#include <string>

class Phone {
private:
    std::string number;
    std::string color;
    std::string productDate;

public:
    // 构造函数
    Phone(const std::string& number, const std::string& color, const std::string& date);

    // 输出基本信息方法
    void printInfo() const;

    // 写号方法
    void writeNumber(const std::string& newNumber);
};

#endif //HOTPOT_PHONE_H
