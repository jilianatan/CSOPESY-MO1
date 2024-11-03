#include "Console.h"
#include <iostream>
#include <ctime>
#include <string>

// constructor
Console::Console(std::string n, int cLine, int tLines, int id) : name(n), currentLine(cLine), totalLines(tLines), processId(id) {
	// Get current timestamp
	std::time_t now = std::time(nullptr);
	struct tm timeInfo;
	localtime_s(&timeInfo, &now);
	char timeStr[64];
	std::strftime(timeStr, sizeof(timeStr), "%m/%d/%Y, %I:%M:%S %p", &timeInfo);
	timestamp = timeStr;
}

std::string Console::getName() const {
	return name;
}

void Console::drawProcess() {
	system("cls");
	std::cout << "Process: " << name << std::endl;
	std::cout << "ID: " << processId << std::endl;
	std::cout << "Current Instruction Line: " << currentLine << std::endl;
	std::cout << "Total Lines of Instruction: " << totalLines << std::endl;
	std::cout << "Timestamp: " << timestamp << std::endl;
}


