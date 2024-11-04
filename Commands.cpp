#include "Commands.h"
#include "Config.h"
#include "ConsoleManager.h"
#include <iostream>
#include <cstdlib>
#include <sstream>

void displayHeader() {
    std::cout << "  ____ ____   ___  ____  _____ ______   __\n"
        " / ___/ ___| / _ \\|  _ \\| ____/ ___\\ \\ / /\n"
        "| |   \\___ \\| | | | |_) |  _| \\___ \\\\ V / \n"
        "| |___ ___) | |_| |  __/| |___ ___) || |  \n"
        " \\____|____/ \\___/|_|   |_____|____/ |_|  \n";

    std::cout << "\033[1;32m"; // green text
    std::cout << "Hi, Welcome to the CSOPESY command line!" << std::endl;

    std::cout << "\033[1;33m"; // yellow text
    std::cout << "Type 'exit' to quit, 'clear' to clear the screen" << std::endl;
    std::cout << "\033[0m"; 

}

void clearScreen() {
    system("cls");
    displayHeader();
}
