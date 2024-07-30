//system libs
#include <iostream>
#include <chrono>
#include <thread>

//custom libs
#include "loading.h"

using namespace std;


//spiner and dots loading animation function
void loadinganimation() {
    const char spinner[] = {'|', '/', '-', '\\'};
    const int numFrames = sizeof(spinner) / sizeof(spinner[0]);
    const int animationDurationMs = 100; // Duration of each frame in milliseconds
    const int numDots = 6; // Number of dots in the loading animation
    cout<<endl;
    cout << "\t\t\t\t\t\tLoading ";
    bool stopSpinner = false;
    int spinnerCounter = 0;

    for (int i = 0; i < 100; ++i) { // Adjust the loop to control the duration of the animation
        if (!stopSpinner) {
            cout << spinner[spinnerCounter % numFrames] << "\b"; // Print the spinner and move the cursor back
            cout.flush(); // Flush the output buffer to show the spinner immediately
            this_thread::sleep_for(chrono::milliseconds(animationDurationMs)); // Wait for the animation duration
            spinnerCounter++;
        }

        if (i == 50) { // Stop the spinner after a certain number of iterations
            stopSpinner = true;
        }
    }

    // Display loading dots after stopping the spinner
    for (int j = 0; j < numDots; ++j) {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::milliseconds(animationDurationMs)); // Wait for the animation duration
    }
    
    cout << endl;
}

