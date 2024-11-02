#pragma once

class Thread {
public:
	Thread();
	~Thread();

	static void Sleep(int ms);
	void Start();

protected:
	virtual void Run() = 0;
};