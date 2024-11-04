#include "process.h"
#include <iomanip>
#include <ctime>
#include <sstream>
#include <iostream>

int Process::next_process_id = 1; 
Process::Process(const std::string& pname, int commands)
    : name(pname), total_commands(commands), executed_commands(0), core_id(-1), process_id(next_process_id++) {
    start_time = std::chrono::system_clock::now();
}

Process::~Process() {
    log_file.close();
}

std::string Process::get_start_time() const {
    auto now = std::chrono::system_clock::to_time_t(start_time);
    std::tm local_tm;
    localtime_s(&local_tm, &now);
    std::ostringstream oss;
    oss << std::put_time(&local_tm, "%m/%d/%Y %I:%M:%S%p");
    return oss.str();
}

std::string Process::get_status() const {
    std::ostringstream oss;
    if (executed_commands == total_commands) {
        oss << "Finished " << total_commands << "/" << total_commands;
    }
    else {
        oss << "Core: " << (core_id == -1 ? "N/A" : std::to_string(core_id)) << " " << executed_commands << " / " << total_commands;
    }
    return oss.str();
}
void Process::displayProcessInfo() const {
    //print the process information

    std::cout << "Process name: " << name << "\n";
    std::cout << "Process ID: " << process_id << "\n\n";

    if (executed_commands < total_commands) {
        std::cout << "Current Instruction Line: " << executed_commands << "\n";
        std::cout << "Lines of Code: " << total_commands << "\n";

    }
    else {
        std::cout << "Finished!\n";
    }

}