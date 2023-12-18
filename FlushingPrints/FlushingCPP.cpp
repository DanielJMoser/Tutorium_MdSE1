#include <iostream>
#include <thread>
#include <chrono>

// std::endl impliziert, dass direkt "geflushed" und eine neue Zeile begonnen werden soll.
void printWithEndl() {
    std::cout << "Never gonna give you up" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna let you down" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna run around and desert you" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna make you cry" << std::endl;
}


// \n flushed etwa unter Win + CLion nicht sofort.
void printWithNewline() {
    std::cout << "Never gonna give you up\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna let you down\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna run around and desert you\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna make you cry\n";
}


// Hier weisen wir manuell eine neue Zeile an und "flushen" im Anschluss.
void printWithNewlineAndFlush() {
    std::cout << "Never gonna give you up\n" << std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna let you down\n" << std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna run around and desert you\n" << std::flush;
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << "Never gonna make you cry\n" << std::flush;
}

int main() {
    std::cout << "Printing with std::endl:\n";
    printWithEndl();
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "\nPrinting with \\n:\n";
    printWithNewline();
    std::this_thread::sleep_for(std::chrono::seconds(2));

    std::cout << "\nPrinting with \\n and std::flush:\n";
    printWithNewlineAndFlush();

    return 0;
}