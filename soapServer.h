#ifndef SOAPSERVER_H
#define SOAPSERVER_H

int soap_serve_ns2__add(struct soap*);
int soap_serve_ns2__sub(struct soap*);
int soap_serve_ns2__mul(struct soap*);
int soap_serve_ns2__div(struct soap*);
int soap_serve_ns2__pow(struct soap*);

#endif
