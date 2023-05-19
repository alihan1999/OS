#ifndef PROCESS_COMPARE_H
#define PROCESS_COMPARE_H

#include "Process.h"


class ProcessCompare
{
public:
    bool operator() (const Process& p1,const Process& p2) const;
};


#endif