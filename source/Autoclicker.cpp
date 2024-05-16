#include "../headers/autoclicker.hpp"

int main() {
    startProgramAfterCountdown();

    unsigned long long count{};
    while (true) {
        pressLeftMouseButton();
        std::cout << "Button pressed\n";
        std::this_thread::sleep_for(std::chrono::minutes(2));

        releaseLeftMouseButton();
        std::cout << "Button released\n";

        std::cout << "Iteration of loop #" << count++ << "\n";
        std::this_thread::sleep_for(std::chrono::minutes(17));
    }

    return 0;
}
