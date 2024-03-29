//
// Created by MGenchev on 29.03.24.
//

#ifndef FMI_OOP_LOGGER_H
#define FMI_OOP_LOGGER_H

#include <string>
#include <fstream>

using namespace std;

template <typename T>
class Logger {
    string filename;

public:
    Logger(string filename="log.txt") : filename(filename) {}
    void write(const char* output){
        ofstream file;

        file.open(filename);
        file << output;
        file.close();

    }

    void write(const T* output){
        ofstream file;

        file.open(filename);
        file << *output;
        file.close();
    }

    void writeLine(const char* output){
        ofstream file;

        file.open(filename);
        file << output << '\n';
        file.close();
    }

    void writeLine(const T* output){
        ofstream file;

        file.open(filename);
        file << output;
        file.close();
    }
};


#endif //FMI_OOP_LOGGER_H
