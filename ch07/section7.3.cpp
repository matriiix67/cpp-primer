#include <string>

class Screen
{
public:
     typedef std::string::size_type pos; // = using pos = std::string::size_type
     Screen() = default;
     Screen(pos ht, pow wd, char c): height(ht), width(wd), contents(ht * wd, c){}

     Screen& move(pos r, posc);
     char get(pos r, pos c) const;
     Screen& set(char c);
     Screen& set(pos r, pos col, char ch);

private:
     pos cursor = 0;
     pos height = 0, width = 0;
     std::string contents;
}


inline
Screen &Screen::move(pos r, pos c)
{
     pos row = r * width;
     cursor = row + c;
     return *this;
}

char Screen::get(pos r, pos c) const
{
     pos row = r * width;
     return contents[row + c];
}

inline
Screen &Screen::set(char c)
{
     contents[cursor] = c;
     return *this;
}

inline
Screen &Screen::set(pos r, pos col, char ch)
{
     contents[r * width + col] = ch;
     return *this;
}
