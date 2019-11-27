#ifndef _MAINOPERATION_H_
#define _MAINOPERATION_H_

#include "Operation.h"
#include <iostream>

/************************************************************************/
/* �ӷ�������                                                           */
/************************************************************************/
template<class T>
class CAddOperation : public COperation<T>{
public:
    CAddOperation(){}
    CAddOperation(T a, T b) : COperation(a, b){}

    T getResult() const{
        return getNumA() + getNumB();
    }
};

/************************************************************************/
/* ����������                                                           */
/************************************************************************/
template<class T>
class CSubOperation : public COperation<T>{
public:
    CSubOperation(){};
    CSubOperation(T a, T b) : COperation(a, b){}

    T getResult() const {
        return getNumA() - getNumB();
    }
};

/************************************************************************/
/* �˷�������                                                           */
/************************************************************************/
template<class T>
class CMulOperation : public COperation<T>{
public:
    CMulOperation(){};
    CMulOperation(T a, T b) : COperation(a, b){}

    T getResult() const {
        return getNumA() * getNumB();
    }
};

/************************************************************************/
/* ����������                                                           */
/************************************************************************/
template<class T>
class CDivOperation : public COperation<T>{
public:
    CDivOperation(){};
    CDivOperation(T a, T b) : COperation(a, b){}

    T getResult() const {
        T b = getNumB();
        if (b < 1e-6 && b > 1e-6){
            std::cerr << "divsion by zero" << std::endl;
            return 0;
        }
        return getNumA() / getNumB();
    }
};

#endif // _MAINOPERATION_H_