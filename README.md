# CSOPESY Process Scheduler and CLI
This project features a Process Scheduler with a Command Line Interface (CLI), enabling users to explore and manage various CPU scheduling algorithms. Designed to mimic the process scheduling within an operating system, the emulator provides a hands-on experience with core scheduling concepts, allowing users to perform system-level operations and interact with the scheduler through a simple CLI.

## Members (S11, Group 5)
- Ang, Mark Kevin 
- Latosa, Jose Romulo
- Tan, Jiliana Amibelle

## Getting Started
1. Download or clone the repository to your local machine.
2. Compile the program using your preferred C++ compiler.
3. Run the application to begin using the OS Emulator.

## Entry Class
The main entry point for the application is located in the Main.cpp file, where the main function is defined.

## Project Structure
### Relevant Files
- Main.cpp: Entry class where the main function is located.
- Commands.cpp / Commands.h: Manages command processing for the CLI.
- Console.cpp / Console.h: Handles console output and input operations.
- ConsoleManager.cpp / ConsoleManager.h: Oversees console-specific functionalities.
- FCFSScheduler.cpp / FCFSScheduler.h: Implements the First-Come, First-Served (FCFS) scheduling algorithm.
- RRScheduler.cpp / RRScheduler.h: Implements the Round Robin (RR) scheduling algorithm.
- Process.cpp / Process.h: Defines and manages processes within the scheduler.
- Thread.cpp / Thread.h: Provides threading utilities.
- Config.cpp / Config.h: Manages configuration settings, such as loading parameters from config.txt.
### Configuration File
- config.txt: Contains configuration settings for the emulator.




