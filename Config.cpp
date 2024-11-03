#include "Config.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

Config::ConfigParameters Config::config_parameters_;

void Config::Initialize() {
    // Read config.txt file
    std::ifstream config_file("config.txt");
    if (!config_file.is_open()) {
        std::cout << "Failed to open file \"config.txt\"" << std::endl;
        return;
    }

    // Read parameters line-by-line.
    std::string key_value;
    while (getline(config_file, key_value)) {
        // Read line.
        std::stringstream key_value_stream(key_value);
        std::string key, value;
        // Get parameter key and value.
        key_value_stream >> key >> value;
        value.erase(std::remove(value.begin(), value.end(), '\"'), value.end());

        if (key == "num-cpu") {
            config_parameters_.num_cpu = std::stoi(value);
        }
        else if (key == "scheduler") {
            if (value == "fcfs" || value == "rr") {
                config_parameters_.scheduler = value;
            }
            else {
                std::cout << "Key \"" << key << "\" with value of \"" << value << "\" is invalid." << std::endl;
            }
        }
        else if (key == "quantum-cycles") {
            config_parameters_.quantum_cycles = std::stoi(value);
        }
        else if (key == "batch-process-freq") {
            config_parameters_.batch_process_freq = std::stod(value);
        }
        else if (key == "min-ins") {
            config_parameters_.min_ins = std::stoi(value);
        }
        else if (key == "max-ins") {
            config_parameters_.max_ins = std::stoi(value);
        }
        else if (key == "delay-per-exec") {
            config_parameters_.delay_per_exec = std::stod(value);
        }
        else {
            std::cout << "File \"config.txt\" key of " << "\"" << key << "\" is invalid." << std::endl;
        }
    }
}

Config::ConfigParameters Config::GetConfigParameters()
{
    return config_parameters_;
}