#include "../headers/timer_functions.hpp"

void startProgramAfterCountdown() {
    int waitingTime{};
    std::cout << "Введите время в секундах, когда программе начать работу: ";
    std::cin >> waitingTime;

    int roundedWaitingTime = ((waitingTime + 9) / 10) * 10;

    std::cout << "До старта программы осталось " << roundedWaitingTime << " секунд";

    for (int i = roundedWaitingTime; i >= 0; --i) {
        std::cout << "\rДо старта программы осталось ";
        if (i < 10 || i % 10 == 0)
            std::cout << i << " секунд";
        else
            std::cout << i << " секунд";

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "\nПрограмма начала работу\n";
}
