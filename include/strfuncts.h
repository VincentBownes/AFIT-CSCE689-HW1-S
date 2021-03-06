#pragma once
#include <string>

// Remove /r and /n from a string
void clrNewlines(std::string &str);

// Takes the orig string and splits it into left and right sides around a delimiter
bool split(std::string &orig, std::string &left, std::string &right, const char delimiter);

// Turns a string into lowercase
void lower(std::string &str);

// Turns off local echo from a user's terminal
int hideInput(int fd, bool hide);


