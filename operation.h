#ifndef _OPERATION_H_
#define _OPERATION_H_

template<class T>
class COperation
{
public:
    COperation(){}
    COperation(T a, T b) :numberA(a), numberB(b){}

    /************************************************************************/
    /* 私有数据的访问方法                                                   */
    /************************************************************************/
    T getNumA() const{ return numberA; }
    T getNumB() const{ return numberB; }
    void setNumA(const T & a){ numberA = a; }
    void setNumB(const T & b){ numberB = b; }

    /************************************************************************/
    /* 获取计算结果                                                         */
    /************************************************************************/
    virtual T getResult() const = 0;

private:
    T numberA;
    T numberB;  
};

#endif // !_OPERATION_H_
