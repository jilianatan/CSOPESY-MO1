#pragma once

#include "process.h"
#include <queue>
#include <thread>
#include <vector>
#include <atomic>
#include <mutex>
#include <condition_variable>
#include <list>

class FCFS_Scheduler {
private:

    std::queue<Process*> process_queue;
    std::vector<std::thread> cpu_threads;
    std::atomic<bool> running;
    std::mutex mtx;
    std::condition_variable cv;
    int num_cores;
    std::list<Process*> running_processes;
    std::list<Process*> finished_processes;

    void cpu_worker(int core_id);

public:

    FCFS_Scheduler(int cores);
    ~FCFS_Scheduler();

    void add_process(Process* proc);
    void start();
    void stop();
    void screen_ls();
    void print_running_processes();
    void print_finished_processes();
    void print_process_details(const std::string& process_name, int screen);
    void print_process_queue_names();
    void SetCpuCore(int cpu_core);
    void ReportUtil();

    bool isValidProcessName(const std::string& process_name);
    void print_CPU_UTIL();
};