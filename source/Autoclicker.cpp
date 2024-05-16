#include "../headers/autoclicker.hpp"

int main() {
    setlocale(LC_ALL, "Russian");

    unsigned long long count{};

    startProgramAfterCountdown();

    while (true) {
        pressLeftMouseButton();
        std::cout << " нопка нажата\n";
        std::this_thread::sleep_for(std::chrono::minutes(2));

        releaseLeftMouseButton();
        std::cout << " нопка отпущена\n";

        std::cout << "»тераци€ цикла #" << count++ << "\n";
        std::this_thread::sleep_for(std::chrono::minutes(17));
    }

    return 0;
}
