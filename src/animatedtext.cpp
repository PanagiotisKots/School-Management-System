#include <iostream>
#include <string>
#include <chrono>
#include <thread>

#include "animatedtext.h" 

using namespace std;


//animation function
void animateText(const string& text, int delay_ms) {
	
    for (char c : text) {
        
		cout << c;
        
        cout.flush(); // Ensure the character is immediately displayed
        
		this_thread::sleep_for(chrono::milliseconds(delay_ms)); // Introduce a delay
    }
}

