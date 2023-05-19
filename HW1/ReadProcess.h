#ifndef READ_PROCESS_H
#define READ_PROCESS_H

#include "Process.h"
#include<string>

Process ReadProcess(std::string line)
{

    float arrival = 0,ex=0;

    int c=0;

    long long id=0;
    for(auto x:line)
    {
        if(x==' ')
        {
            c++;
            continue;
        }
        if(c==0)
        {
            if(x=='p'||x=='P')continue;
            id*=1ll*10;
            id+=1ll*(x-'0');
        }
        else if(c==1)
        {
            ex*=10;
            ex+=x-'0';
        }
        else{
            arrival*=10;
            arrival+=x-'0';
        }

    }

std::cout<<"id: "<<id<<" "<<"ex: "<<ex<<" "<<"arr: "<<arrival<<"\n";
    return Process(id,ex,arrival);
}

#endif