//
// Created by Bourne on 2018/3/20.
//

#ifndef CPP_PRIMER_WINDOW_MGR_HPP
#define CPP_PRIMER_WINDOW_MGR_HPP

#include "Screen.hpp"
#include <vector>


class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type ;

    void clear(ScreenIndex);

private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};

};


#endif //CPP_PRIMER_WINDOW_MGR_HPP
