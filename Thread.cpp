#include "Thread.h"
#include <thread>

Thread::Thread() {}

Thread::~Thread() {}

void Thread::Sleep(int ms) {
	std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

void Thread::Start() {
	std::thread(&Thread::Run, this).detach();
}