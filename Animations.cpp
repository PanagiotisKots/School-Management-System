#include <windows.h>

//windows function to set console letter size
void setConsoleFontSize(int size) {
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_FONT_INFOEX info = { sizeof(info) };
    GetCurrentConsoleFontEx(hOut, FALSE, &info);
    info.dwFontSize.Y = size; // Set font size Y
    SetCurrentConsoleFontEx(hOut, FALSE, &info);
}



//windows function to manipulate console color
void setConsoleColor(WORD color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
