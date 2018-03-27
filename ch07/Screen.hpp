//
// Created by Bourne on 2018/3/20.
//

#ifndef CPP_PRIMER_SCREEN_HPP
#define CPP_PRIMER_SCREEN_HPP

#include <string>
#include <iostream>
#include "Window_mgr.hpp"

class Screen {
    friend class Window_mgr;
    friend void Window_mgr::clear(ScreenIndex);
public:
    typedef std::string::size_type pos;

    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht* wd, c) {}

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const;
    Screen& move(pos r, pos c);

    Screen& set(char);
    Screen& set(pos, pos, char);

    Screen& display(std::ostream &os) { do_display(os); return *this; }
    const Screen& display(std::ostream& os) const { do_display(os); return *this; }

private:
    void do_display(std::ostream& os) const { os << contents; }

    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};


#endif //CPP_PRIMER_SCREEN_HPP
