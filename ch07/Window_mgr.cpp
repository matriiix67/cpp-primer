//
// Created by Bourne on 2018/3/20.
//

#include "Window_mgr.hpp"

#include <string>

void Window_mgr::clear(ScreenIndex i) {
    Screen& s = screens[i];
    s.contents = std::string(s.height * s.width, ' ');
}