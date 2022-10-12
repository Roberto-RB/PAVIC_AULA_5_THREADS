// Pavic Multithreading C++ -2022


#include <iostream>
#include <thread>

using namespace std;

void call_from_thread() {

	//std::cout << "Hello, world from Thread" << endl;
	cout << "Hello, world from Thread" << endl;
}

int main() {
	// Launch a thread
	thread t1(call_from_thread);
	cout << "Hello, world from CPU" << endl;
	t1.join();

	return 0;
}