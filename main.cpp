#include "OperFactory.h"
#include <iostream>

using namespace std;

/************************************************************************/
/* 借助简单工厂模式， 实现 两个数字的加减乘除四则运算操作               */
/************************************************************************/

int main(){
    shared_ptr<COperation<double>> oper = COperFactory<double>::createOperation('/');
    oper->setNumA(3.0);
    oper->setNumB(4.0);
    cout << oper->getResult() << endl;

    system("pause");
    return 0;
}