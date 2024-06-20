#include <iostream>

int main() {
    float delta = 0;
    float speed = 0;
    char speed_str [10];
    do {
        std::cin >> delta;
        speed += delta;
        std::sprintf(speed_str, "%.1f", speed);
        std::cout << speed_str << std::endl;
    } while (speed > 0);

}
