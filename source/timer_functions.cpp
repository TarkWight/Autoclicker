#include "../headers/timer_functions.hpp"

void startProgramAfterCountdown() {
    int waitingTime{};
    std::cout << "Enter the time in seconds when the program should start: ";
    std::cin >> waitingTime;

    int roundedWaitingTime = ((waitingTime + 9) / 10) * 10;

    std::cout << "There are " << roundedWaitingTime << " seconds left before the program starts.";

    for (int i = roundedWaitingTime; i >= 0; --i) {
        std::cout << "\rThere are " << i << " seconds left before the program starts.";

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    std::cout << "\nThe program started.\n";
}
