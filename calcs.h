#ifndef CALCS_H
#define CALCS_H

#include "soapH.h"

int ns2__add(struct soap *soap, double a, double b, double *result);
int ns2__sub(struct soap *soap, double a, double b, double *result);
int ns2__mul(struct soap *soap, double a, double b, double *result);
int ns2__div(struct soap *soap, double a, double b, double *result);
int ns2__pow(struct soap *soap, double a, double b, double *result);

#endif
