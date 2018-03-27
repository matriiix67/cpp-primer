//
// Created by Bourne on 2018/1/2.
//

#include "default_copy_control.h"

int main(int argc, char* argv[])
{
    DefaultCopyControl default_copy_control;

    DefaultCopyControl* p_default_copy_contorl = new DefaultCopyControl();
    delete p_default_copy_contorl;
    return 0;
}
