#include <iostream>
#include "Fixed.hpp"

int main(void) {
    std::cout << "=== COMPARISON OPERATORS ===" << std::endl;
    Fixed c(10);
    Fixed d(10.5f);
    
    std::cout << "c: " << c << " | d: " << d << std::endl;
    std::cout << "c > d  : " << (c > d) << std::endl;
    std::cout << "c < d  : " << (c < d) << std::endl;
    std::cout << "c >= d : " << (c >= d) << std::endl;
    std::cout << "c <= d : " << (c <= d) << std::endl;
    std::cout << "c == d : " << (c == d) << std::endl;
    std::cout << "c != d : " << (c != d) << std::endl;
    std::cout << "c == 10: " << (c == Fixed(10)) << std::endl;

    std::cout << "\n=== ARITHMETIC OPERATORS ===" << std::endl;
    Fixed const a(5.05f);
    Fixed const b(0);

    std::cout << "a: " << a << " | b: " << b << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;

    std::cout << "\n=== INCREMENT / DECREMENT OPERATORS ===" << std::endl;
    Fixed e;

    std::cout << "Start    : " << e << std::endl;
    std::cout << "Pre-inc  : " << ++e << std::endl;
    std::cout << "Current  : " << e << std::endl;
    std::cout << "Post-inc : " << e++ << std::endl;
    std::cout << "Current  : " << e << std::endl;
    std::cout << "Pre-dec  : " << --e << std::endl;
    std::cout << "Current  : " << e << std::endl;
    std::cout << "Post-dec : " << e-- << std::endl;
    std::cout << "Current  : " << e << std::endl;

    std::cout << "\n=== MIN / MAX STATIC FUNCTIONS ===" << std::endl;
    Fixed f1(5.5f);
    Fixed f2(5.0f);
    Fixed const f3(10.1f);
    Fixed const f4(10.2f);

    std::cout << "f1: " << f1 << " | f2: " << f2 << std::endl;
    std::cout << "Max(f1, f2): " << Fixed::max(f1, f2) << std::endl;
    std::cout << "Min(f1, f2): " << Fixed::min(f1, f2) << std::endl;

    std::cout << "f3 (const): " << f3 << " | f4 (const): " << f4 << std::endl;
    std::cout << "Max const(f3, f4): " << Fixed::max(f3, f4) << std::endl;
    std::cout << "Min const(f3, f4): " << Fixed::min(f3, f4) << std::endl;

    return 0;
}

