/*
  Maker: Shaylin C.
  Created: 10-31-2020
  Last Updated: 11-13-2020

  About:
    A collection of functions for special 
    diaplay, such as 'type' which is built to
    make text appear as if being typed, And 
    easier handling of data, such as 
    'to_lower'.
    
    Built to rely on as few other files as 
    possible, with the exception of windows.h.

  Notes:
    Currently this header file is OS specific
    and will only work on Windows. Hopefully
    this will be changed in the future. For 
    know the 'Sleep()' function can be 
    removed in order to run on Linux.

  Change Log:
    11-3-2020
    Added 'to_lower' and 'to_upper' functions
    for easy string changes. 
    
    11-4-20
    Added `all_int` and `all_alpha` functions
    to test string characters.

    11-13-2020
    Added 'to_const_char`, a function for 
    changing variables of type std::string
    to const char*.

*/



#include <cstdlib>
#include <iostream>
#include <windows.h>  // Sleep() function for timed delays
                      // Hopefull Linux support will be included soon



/*###########################################################*/
// Resource Functions

// More time saving display method. Less flexible but saves much typing

template <typename T>
void print(T word, std::string end="\n") {
    std::cout << word << end;
}



// Displays characters with a delay to make them appear as if being typed.

void type(std::string to_print, std::string end="\n", int delay=50, int extra_delay=0) {
    for (int i=0; i < to_print.size(); i++) {
        print(to_print[i], "");
        Sleep(delay);
    }
    Sleep(extra_delay);
    std::cout << end;
}



// Clear console on windows and linux

void clear(bool newline=true) {
    system("CLS");
    if (newline) {
        std::cout << "\n";
    }
}



// Replaces the previous character with a space and moves the cursor back. 
// Again with a slight Sleep for effect

void backspace(int times, int delay=50, int extra_delay=0) {
    for (int i=0; i < times; i++) {
        print("\b \b", "");
        Sleep(delay);
    }
}



// Displays spinning object

void spinner(int rotations, int delay=120) {
    for (int i = 0; i < rotations; i++) {
        std::cout << "\b|";
        Sleep(delay);
        std::cout << "\b/";
        Sleep(delay);
        std::cout << "\b-";
        Sleep(delay);
        std::cout << "\b\\";
        Sleep(delay);
    }
}

// Compact input method whichs allows you to print a message and gather input with one function

std::string input(std::string message = "") {
    print(message, "");
    std::string result;
    std::cin >> result;
    return result;
}



void WAIT(std::string message="Press [ENTER] to continue...") {
    Sleep(200);
    std::cout << message;
    std::cin;
}



const char* to_const_char(std::string in) {
    char work[in.size()];
    for (int i = 0; i < in.size(); i++) {
      work[i] = in[i];
    }
    const char* result = work;
    return result;
}



// convert string to integer

int to_int(std::string str) {
    int multiplier = 1;
    int result = 0;
    int current = 0;

    for (int i = str.size() - 1; i >= 0; i--) {

        switch (str[i]) {
            case '0':
                current = 0;
                break;
            case '1':
                current = 1;
                break;
            case '2':
                current = 2;
                break;
            case '3':
                current = 3;
                break;
            case '4':
                current = 4;
                break;
            case '5':
                current = 5;
                break;
            case '6':
                current = 6;
                break;
            case '7':
                current = 7;
                break;
            case '8':
                current = 8;
                break;
            case '9': 
                current = 9;
                break;   
        }
        result += (current * multiplier);
        multiplier *= 10;
    }

    return result;
    
}



// Convert all alphebetical characters in a string to upper case

std::string to_upper(std::string origional) {
    std::string result;
    for (int i = 0; i < origional.size(); i++) {
        switch (origional[i]) {
            case 'a':
                result += 'A';
                break;
            case 'b':
                result += 'B';
                break;
            case 'c':
                result += 'C';
                break;
            case 'd':
                result += 'D';
                break;
            case 'e':
                result += 'E';
                break;
            case 'f':
                result += 'F';
                break;
            case 'g':
                result += 'G';
                break;
            case 'h':
                result += 'H';
                break;
            case 'i':
                result += 'I';
                break;
            case 'j':
                result += 'J';
                break;
            case 'k':
                result += 'K';
                break;
            case 'l':
                result += 'L';
                break;
            case 'm':
                result += 'M';
                break;
            case 'n':
                result += 'N';
                break;
            case 'o':
                result += 'O';
                break;
            case 'p':
                result += 'P';
                break;
            case 'q':
                result += 'Q';
                break;
            case 'r':
                result += 'R';
                break;
            case 's':
                result += 'S';
                break;
            case 't':
                result += 'T';
                break;
            case 'u':
                result += 'U';
                break;
            case 'v':
                result += 'V';
                break;
            case 'w':
                result += 'W';
                break;
            case 'x':
                result += 'X';
                break;
            case 'y':
                result += 'Y';
                break;
            case 'z':
                result += 'Z';
                break;
            default:
                result += origional[i];
                break;
        }
    }
    return result;
} 



// Convert all alphebetical characters in a string to lower case

std::string to_lower(std::string origional) {
    std::string result;
    for (int i = 0; i < origional.size(); i++) {
        switch (origional[i]) {
            case 'A':
                result += 'a';
                break;
            case 'B':
                result += 'b';
                break;
            case 'C':
                result += 'c';
                break;
            case 'D':
                result += 'd';
                break;
            case 'E':
                result += 'e';
                break;
            case 'F':
                result += 'f';
                break;
            case 'G':
                result += 'g';
                break;
            case 'H':
                result += 'h';
                break;
            case 'I':
                result += 'i';
                break;
            case 'J':
                result += 'j';
                break;
            case 'K':
                result += 'k';
                break;
            case 'L':
                result += 'l';
                break;
            case 'M':
                result += 'm';
                break;
            case 'N':
                result += 'n';
                break;
            case 'O':
                result += 'o';
                break;
            case 'P':
                result += 'p';
                break;
            case 'Q':
                result += 'q';
                break;
            case 'R':
                result += 'r';
                break;
            case 'S':
                result += 's';
                break;
            case 'T':
                result += 't';
                break;
            case 'U':
                result += 'u';
                break;
            case 'V':
                result += 'v';
                break;
            case 'W':
                result += 'w';
                break;
            case 'X':
                result += 'x';
                break;
            case 'Y':
                result += 'y';
                break;
            case 'Z':
                result += 'z';
                break;
            default:
                result += origional[i];
                break;
        }
    }
    return result;
}



// Test string characters to see if they are all integers.

bool all_int(std::string str) {
    if (str.size() > 0) {
        for (int i = 0; i < str.size(); i++) {
            switch (str[i]) {
                case '1':
                  break;
                case '2':
                  break;
                case '3':
                  break;
                case '4':
                  break;
                case '5':
                  break;
                case '6':
                  break;
                case '7':
                  break;
                case '8':
                  break;
                case '9':
                  break;
                case '0':
                  break;
                default:
                  return false;
            }
        }
        return true;
    }
}
  


// Test string characters to see if they are all alpha.

bool all_alpha(std::string str) {
    if (str.size() > 0) {
        for (int i = 0; i < str.size(); i++) {
            switch (str[i]) {
                case 'a':
                  break;
                case 'b':
                  break;
                case 'c':
                  break;
                case 'd':
                  break;
                case 'e':
                  break;
                case 'f':
                  break;
                case 'g':
                  break;
                case 'h':
                  break;
                case 'i':
                  break;
                case 'j':
                  break;
                case 'k':
                  break;
                case 'l':
                  break;
                case 'm':
                  break;
                case 'n':
                  break;
                case 'o':
                  break;
                case 'p':
                  break;
                case 'q':
                  break;
                case 'r':
                  break;
                case 's':
                  break;
                case 't':
                  break;
                case 'u':
                  break;
                case 'v':
                  break;
                case 'w':
                  break;
                case 'x':
                  break;
                case 'y':
                  break;
                case 'z':
                  break;
                case 'A':
                  break;
                case 'B':
                  break;
                case 'C':
                  break;
                case 'D':
                  break;
                case 'E':
                  break;
                case 'F':
                  break;
                case 'G':
                  break;
                case 'H':
                  break;
                case 'I':
                  break;
                case 'J':
                  break;
                case 'K':
                  break;
                case 'L':
                  break;
                case 'M':
                  break;
                case 'N':
                  break;
                case 'O':
                  break;
                case 'P':
                  break;
                case 'Q':
                  break;
                case 'R':
                  break;
                case 'S':
                  break;
                case 'T':
                  break;
                case 'U':
                  break;
                case 'V':
                  break;
                case 'W':
                  break;
                case 'X':
                  break;
                case 'Y':
                  break;
                case 'Z':
                  break;
                default:
                  return false;
            }
        }
        return true;
    }
}
