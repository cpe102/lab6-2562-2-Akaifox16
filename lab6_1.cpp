#include <iostream>

int main() {
    int a  =  20, b = 30;
    int c = 4;
    float output;

    output = a - float(b)/c;
    std::cout << "output: " << output << "\n";
    return 0;
}
