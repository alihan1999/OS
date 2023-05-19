#ifndef PROCESS_H
#define PROCESS_H

#include<string>

class Process{
private:
    long long id;
    float arrival;
    float ex_time;
    float ex_var;



public:
    Process(){};
    Process(long long id,float ex_time,float arrival):id(id),ex_time(ex_time),arrival(arrival)
    {
        ex_var = ex_time;
    }

    friend class Manager;
    friend class RRM;


    float get_arrival() const
    {
        return arrival;
    };

    float get_ex() const{
        return ex_time;
    }

    int get_id() const
    {
        return id;
    }

};
#endif
