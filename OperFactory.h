#ifndef _OPERFACTORY_H_
#define _OPERFACTORY_H_

#include <memory>
#include "MainOperation.h"

template <class T>
class COperFactory{
public:
    /************************************************************************/
    /* 对外提供一个创建运算操作的工厂函数接口                               */
    /************************************************************************/
    static std::shared_ptr<COperation<T>> createOperation(char oper){
        COperation<T> * ptr = nullptr;
        switch (oper)
        {
            case '+':
                ptr = new CAddOperation<T>();
                break;
            case '-':
                ptr = new CSubOperation<T>();
                break;
            case '*':
                ptr = new CMulOperation<T>();
                break;
            case '/':
                ptr = new CDivOperation<T>();
                break;
            default:
                ptr = nullptr;
                break;
        }

        return std::shared_ptr<COperation<T>>(ptr);
    }
};


#endif // _OPERFACTORY_H_