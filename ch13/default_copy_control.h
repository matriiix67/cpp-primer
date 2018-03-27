//
// Created by Bourne on 2018/1/2.
//

#ifndef CPP_PRIMER_DEFAULT_COPY_CONTROL_H
#define CPP_PRIMER_DEFAULT_COPY_CONTROL_H

class DefaultCopyControl {
public:
    DefaultCopyControl() = default;
    ~DefaultCopyControl() = default;
    DefaultCopyControl(const DefaultCopyControl& rhs) = default;
    DefaultCopyControl(DefaultCopyControl&& rhs) = default;
    DefaultCopyControl& operator=(const DefaultCopyControl& rhs) = default;
    DefaultCopyControl&operator=(DefaultCopyControl&& rhs) = default;
};

#endif //CPP_PRIMER_DEFAULT_COPY_CONTROL_H
