//
// Created by Bourne on 2018/1/2.
//

#ifndef CPP_PRIMER_NO_DTOR_H
#define CPP_PRIMER_NO_DTOR_H

class NoDtor {
public:
    NoDtor() = default;
    ~NoDtor() = delete;
};

#endif //CPP_PRIMER_NO_DTOR_H
