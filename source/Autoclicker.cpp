#include "../headers/autoclicker.hpp"

int main() {
    setlocale(LC_ALL, "Russian");

    unsigned long long count{};

    startProgramAfterCountdown();

    while (true) {
        pressLeftMouseButton();
        std::cout << "������ ������\n";
        std::this_thread::sleep_for(std::chrono::minutes(2));

        releaseLeftMouseButton();
        std::cout << "������ ��������\n";

        std::cout << "�������� ����� #" << count++ << "\n";
        std::this_thread::sleep_for(std::chrono::minutes(17));
    }

    return 0;
}
