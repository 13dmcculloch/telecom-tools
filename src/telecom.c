#include "telecom.h"

#include <math.h>

/* Conversions */
double ftow(double f)
{
    return C_MS / f;
}

double wtof(double w)
{
    return C_MS / w;
}

double radtodeg(double rad)
{
    return rad * 180.0 / M_PI;
}

double degtorad(double deg)
{
    return deg * M_PI / 180.0;
}

double dbmtomw(double dbm)
{
    return pow(10.0, dbm / 10.0);
}

double mwtodbm(double mw)
{
    return 10.0 * log10(mw);
}
