//gotoxy source file
//system libs
#include <iostream>
#include <windows.h>

//custom libs
#include "gotoxy.h"

using namespace std;

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


/////// Add in the box beautifull line combintions and also add info about creators version etc.......+++ animated text to all of it 
////displaying firstly the box and then the text in it or all together using animation.....



/*void loginlogobox() {
    int i;
    char ch;

    // Top left corner of the box
    ch = 201;
    gotoxy(45, 4);//1st orozontia 2nd katheta
    cout << ch;

    // Top border of the box
    ch = 205;
    for (i = 46; i < 100; i++) {
        gotoxy(i, 4);
        cout << ch;
    }

    // Top right corner of the box
    ch = 187;
    gotoxy(100, 4);
    cout << ch;

    // Side borders of the box
    ch = 186;
    for (i = 5; i < 10; i++) {
        gotoxy(45, i);
        cout << ch;
        gotoxy(100, i);
        cout << ch;
    }

    // Bottom left corner of the box
    ch = 200;
    gotoxy(45, 10);
    cout << ch;

    // Bottom border of the box
    ch = 205;
    for (i = 46; i < 100; i++) {
        gotoxy(i,10);
        cout << ch;
    }

    // Bottom right corner of the box
    ch = 188;
    gotoxy(100, 10);
    cout << ch;
}
*/


//function about small boxes around username and password login page inputs for future use

/*void credentialboxes(){
	
	int i;
    char ch;

    // Top left corner of the box
    ch = 201;
    gotoxy(45, 20);//1st orozontia 2nd katheta
    cout << ch;

    // Top border of the box
    ch = 205;
    for (i = 46; i < 100; i++) {
        gotoxy(i, 20);
        cout << ch;
    }

    // Top right corner of the box
    ch = 187;
    gotoxy(100, 20);
    cout << ch;

    // Side borders of the box
    ch = 186;
    for (i = 21; i < 31; i++) {
        gotoxy(45, i);
        cout << ch;
        gotoxy(100, i);
        cout << ch;
    }

    // Bottom left corner of the box
    ch = 200;
    gotoxy(45,31);
    cout << ch;

    // Bottom border of the box
    ch = 205;
    for (i = 46; i < 100; i++) {
        gotoxy(i,31);
        cout << ch;
    }

    // Bottom right corner of the box
    ch = 188;
    gotoxy(100, 31);
    cout << ch;
	
}*/




























