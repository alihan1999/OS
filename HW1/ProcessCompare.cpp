#include "ProcessCompare.h"

bool ProcessCompare::operator()(const Process &p1, const Process &p2) const   {
    if( p1.get_arrival()!= p2.get_arrival()) return p1.get_arrival() >= p2.get_arrival();
    else return p1.get_id() >= p2.get_id();
}