#include <iostream>

int main(int argc, char *argv[])
{
    // (a)
    int input_value;
    std::cin >> input_value;

    // (b)
    double salary, wage;
    salary = wage = 9999.99;
    
    return 0;
}

// (a) ���뱨��expected primary-expression before ��int��
// �޸ķ�ʽ�뿴����

// (b) �ó�ʼ���б�ʹ��double���ͳ�ʼ��int���ڶ�ʧ��Ϣ�ķ��գ��������ᱨ���޸�Ϊ int i = 3.14; / int i(3.14) / double i = {3.14};

// (c) wageΪ����

// (d) ��ȷ������3.14�ᱻ�ض�Ϊ3�������޸�Ϊ��double i = 3.14;
