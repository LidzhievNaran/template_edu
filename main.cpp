#include <iostream>
template <typename T >
void my_swap( T & first, T & second)
{
    T temp(first);
    first = second;
    second = temp;
}
int main() {
    int a = 5;
    int b = 10;
    std::cout << a << " " << b << std::endl;
    my_swap<int>(a , b);
    std::cout << a << " " << b << std::endl;
    double c = 77.89;
    double d = 54.22 ;
    std::cout << c << " " << d << std::endl;
    my_swap<double>(c , d);
    std::cout << c << " " << d << std::endl;
    return 0;
}
