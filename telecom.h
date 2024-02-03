/* This library contains functions used in telecom tools.
 *
 * Douglas McCulloch, Jan 2024
 */

#ifndef _TELECOM_H_
#define _TELECOM_H_

/* Scientific constants */
#define C_MS 299792458.0

/* Useful conversions */
extern double ftow(double f);  /* Frequency -> wavelength */
extern double wtof(double w);  /* Wavelength -> frequency */

extern double radtodeg(double rad);
extern double degtorad(double deg);

extern double dbmtomw(double dbm);
extern double mwtodbm(double mw);

#endif
