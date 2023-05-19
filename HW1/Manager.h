#ifndef MANAGER_H
#define MANAGER_H

#include<vector>
#include<string>
#include<iostream>
#include<queue>
#include "ProcessCompare.h"

class Manager{
public:


    void add(const Process& p);

    bool start();

protected:
    float TotalTime = 0;

    std::vector<float> Report();

    std::priority_queue<Process, std::vector<Process> , ProcessCompare > ProcessQueue;
};



#endif