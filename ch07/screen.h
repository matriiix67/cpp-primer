#ifndef _SCREEN_H
#define _SCREEN_H

#include <string>

class Screen {
public:
    //typedef std::string::size_type pos;
    using pos = std::string::size_type;

    Screen() = default;
    Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
    char get() const
        { return contents[cursor]; }
    inline char get(pos ht, pos wd) const;
    Screen &move(pos r, pos c);

    void some_member() const;
    Screen &set(char);
    Screen &set(pos, pos, char);

    Screen &display(std::ostream &os)
        { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const
        { do_display(os); return *this; }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(std::ostream &os) const { os << contents; }
};


#endif
