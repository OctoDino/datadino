#ifndef COMMANDS_H    // To make sure you don't declare the function more than once by including the header multiple times.
#define COMMANDS_H

#pragma once
#include <filesystem>
    namespace fs = std::filesystem;
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int cmdHelp(string secondArg);

int createDatabase(string name);
int deleteDatabase(string name);
int listDatabases();

#endif