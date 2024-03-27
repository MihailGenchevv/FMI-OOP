//
// Created by MGenchev on 27.03.24.
//

#include "Processor.h"
#include <iostream>


using namespace std;


Processor::Processor(const double &frequency, const unsigned &cores, const double &cashMemory)
        : frequency(frequency), cores(cores), cashMemory(cashMemory){

}

void Processor::printProcessorInformation() const {
    cout << "Frequency: " << this->frequency << " GHz" << endl;
    cout << this->cores << " cores" << endl;
    cout << "Cash: " << this->cashMemory << endl;
}