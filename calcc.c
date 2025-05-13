#include "calc.nsmap"
#include "soapH.h"

int main(){
    struct soap *soap = soap_new();
    double sum;
    double sub;
    double mul;
    double div;
    double pow;
    
    if(soap_call_ns2__add(soap, NULL, NULL, 1.23, 4.56, &sum) == SOAP_OK){
        printf("Sum = %g \n", sum);
    }else{
        soap_print_fault(soap, stderr);
    }

    if(soap_call_ns2__sub(soap, NULL, NULL, 5.00, 2.00, &sub) == SOAP_OK){
		printf("Sub = %g\n", sub);
	}else{
		soap_print_fault(soap, stderr);
	}

    if(soap_call_ns2__mul(soap, NULL, NULL, 25.00, 4.00, &mul) == SOAP_OK){
        printf("Mul = %g\n", mul);
    }else{
        soap_print_fault(soap, stderr);
    }

    if(soap_call_ns2__div(soap, NULL, NULL, 12.00, 2.00, &div) == SOAP_OK){
        printf("Div = %g\n", div);
    }else{
        soap_print_fault(soap, stderr);
	}

    if(soap_call_ns2__pow(soap, NULL, NULL, 9.00, 2.00, &pow) == SOAP_OK){
        printf("Pow = %g\n", pow);
    }else{
        soap_print_fault(soap, stderr);
    }



    soap_destroy(soap);
    soap_end(soap);
    soap_free(soap);
}