#include <iostream>
#include <cstdint>

using namespace std;

class RGBA {
    private:
        uint8_t m_red = 0;
        uint8_t m_green = 0;
        uint8_t m_blue = 0;
        uint8_t m_alpha = 255;
    public:
        RGBA(uint8_t red, uint8_t  green, uint8_t  blue, uint8_t  alpha): m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {};
        friend void print(RGBA &);
};

void print(RGBA &object) {
    cout << "List:" << endl;
    cout << unsigned(object.m_red) << endl;
    cout << unsigned(object.m_green) << endl;
    cout << unsigned(object.m_blue) << endl;
    cout << unsigned(object.m_alpha) << endl;
}

int main() {
    RGBA object = RGBA(70,0,80,255);
    print(object);
    return 0;
}
