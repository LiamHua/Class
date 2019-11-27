#include "OperFactory.h"
#include <iostream>

using namespace std;

/************************************************************************/
/* �����򵥹���ģʽ�� ʵ�� �������ֵļӼ��˳������������               */
/************************************************************************/

int main(){
    shared_ptr<COperation<double>> oper = COperFactory<double>::createOperation('/');
    oper->setNumA(3.0);
    oper->setNumB(4.0);
    cout << oper->getResult() << endl;

    system("pause");
    return 0;
}