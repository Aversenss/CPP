#include <iostream>


template<typename _CharT, typename _Traits>
inline std::basic_ostream<_CharT, _Traits>&
endll(std::basic_ostream<_CharT, _Traits>& __os) { 
    return flush((__os.put(__os.widen('\n'))).put(__os.widen('\n'))); 
}

int main() {
    std::cout << "Test1" << endll << "Test2";
    return 0;
}
