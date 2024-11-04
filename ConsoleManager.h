#pragma once
#include "Console.h"
#include <string>
#include <vector>
#include <memory>
#include <windows.h>

class ConsoleManager {
private:
    static std::shared_ptr<Console> currentConsole;
    static std::shared_ptr<Console> previousConsole;
    static std::vector<std::shared_ptr<Console>> consoles;

public:

    ConsoleManager();
    ~ConsoleManager();

    void addConsole(const std::shared_ptr<Console>& console);
    void drawAllConsoles();
    std::vector<std::shared_ptr<Console>> getConsoles();
    std::shared_ptr<Console> getCurrentConsole();
    static std::string getCurrentConsoleName();
    void setCurrentConsole(std::shared_ptr<Console> console);

    bool handleCommand(const std::string& command);
};
