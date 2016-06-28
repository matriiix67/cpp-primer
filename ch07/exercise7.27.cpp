#include <string>

class Screen {
public:
    using pos = std::string::size_type;

    Screen() = default; // 1
    Screen(pos ht, pos wd):height(ht), width(wd), contents(ht*wd, ' '){ } // 2
    Screen(pos ht, pos wd, char c):height(ht), width(wd), contents(ht*wd, c){ } // 3

    char get() const { return contents[cursor]; }
    char get(pos r, pos c) const { return contents[r*width+c]; }

    Screen &move(pos r, pos s);
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &display(std::ostream &os) { do_display(os); return *this; }
    const Screen &display(std::ostream &os) const { do_display(os); return *this; }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;

    void do_display(std::ostream &os) const { os << contents; }
};
