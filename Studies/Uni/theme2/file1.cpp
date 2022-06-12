#include <iostream>

using namespace std;

int main() {
    int * p; 
    int * q; 
    p = new int(35);  // give memory and initialization
    q = new int[10]; // memory for array

    q[0] = 1;

    std::cout << p << std::endl << q[0] << std::endl;
    
    delete p ;
    delete[] q;

    return 0;
}
