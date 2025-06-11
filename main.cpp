//
// Created by kun on 25-6-11.
//

# include "phone.h"
#include <iostream>
using namespace std;

int main() {
    Phone myPhone("17808838488", "黑色", "2025-06-01");

    // 输出原始信息
    cout << "初始手机信息:" << endl;
    myPhone.printInfo();

    // 修改手机号
    myPhone.writeNumber("15108412958");

    cout << "\n更新后手机信息:" << endl;
    myPhone.printInfo();

    return 0;
}