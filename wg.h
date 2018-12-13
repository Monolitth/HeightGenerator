#ifndef WG_H
#define WG_H

#include "wg_global.h"

class WGSHARED_EXPORT wg
{
public:

    void ds(int **map, int WS, int NHMax, int NHMin);
    void ds(int **map, int WS, int NHMax, int NHMin, int seed);

    int getseednum(int seed);
};

#endif // WG_H
