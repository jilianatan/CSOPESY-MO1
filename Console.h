#pragma once
#include <string>
class Console {
private:
    std::string name;
    int currentLine;
    int totalLines;
    std::string timestamp;
    int processId;

public:
    Console(std::string n, int cLine, int tLines, int id);

    void drawProcess();

    std::string getName() const;

    int getCurrentLine() const { return currentLine; }
    int getTotalLines() const { return totalLines; }
    int getProcessId() const { return processId; }

    void setName(const std::string& n) { name = n; }
    void setCurrentLine(int cLine) { currentLine = cLine; }
    void setTotalLines(int tLines) { totalLines = tLines; }
    void setProcessId(int id) { processId = id; }
};
