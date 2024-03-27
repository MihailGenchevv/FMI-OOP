//
// Created by MGenchev on 27.03.24.
//

#ifndef FMI_OOP_PROCESSOR_H
#define FMI_OOP_PROCESSOR_H


class Processor {
public:
    Processor() = default;

    Processor(const Processor &) = default;

    Processor& operator=(const Processor&) = default;

    ~Processor() = default;

    Processor(const double &, const unsigned &, const double & );

    void printProcessorInformation() const;
private:
    double frequency;
    unsigned cores;
    double cashMemory;
};


#endif //FMI_OOP_PROCESSOR_H
