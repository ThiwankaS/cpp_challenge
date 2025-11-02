#include <iostream>

void pass_by_value(int x){
    x = 10;
}

void pass_by_refernce(int& x){
    x = 20;
}

void pass_by_pointer(int* x){
    if(!x) {
        return;
    }
    *x = 30;
}

int main(void) {
    int a = 0, b = 0, c = 0;

    std::cout << "Previous : \n";
    std::cout << " a: " << a << " b: " << b << " c : " << c << "\n";

    pass_by_value(a);
    pass_by_refernce(b);
    pass_by_pointer(&c);

    std::cout << "After : \n";
    std::cout << " a: " << a << " b: " << b << " c : " << c << "\n";
    return (EXIT_SUCCESS);
}
