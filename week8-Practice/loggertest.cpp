//
// Created by MGenchev on 29.03.24.
//

#include "Logger.h"


int main() {
    Logger<int> logger("./test.txt");

    int a = 7;

    logger.write(&a);
}