# include <iostream>
# include <chrono>
# include <thread>

using namespace std;
using namespace std::chrono;
using namespace std::this_thread;


void TypeWrighter(const string text, int delay) {

	for (char c : text) {
		cout << c << flush;
		sleep_for(milliseconds(delay));
	}
}