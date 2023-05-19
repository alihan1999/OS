#include "Manager.h"

bool Manager::start() {
    if (!ProcessQueue.size()) {

        return false;
    }

    std::vector<float> avg(2);

    avg = Report();

    std::cout<<avg[0]<<", "<<avg[1]<<std::endl;
    return true;
}

void Manager::add(const Process &p)    {
    ProcessQueue.push(p);

}

std::vector<float> Manager::Report() {

    std::vector<float> result(2);

    float wait=0,num = (float) Manager::ProcessQueue.size();
    float turn=0;

    while(ProcessQueue.size()){


        auto p =ProcessQueue.top();
        ProcessQueue.pop();



        if(TotalTime <= p.arrival) TotalTime = p.arrival;


        turn+= TotalTime - p.arrival + p.ex_time;

        wait += TotalTime - p.arrival;
        TotalTime += p.ex_time;

    }
    float AvgWait= wait/num;
    float AvgTurn = turn/num;

    result[0]=AvgWait;
    result[1]=AvgTurn;


    return result;
}