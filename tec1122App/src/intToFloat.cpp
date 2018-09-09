#include <stdio.h>
#include <subRecord.h>
#include <registryFunction.h>
#include <epicsExport.h>

union ficonv{
    float float_val;
    unsigned int  int_val;
};

static long intToFloat(subRecord *prec) {
	  union ficonv myconf;
	  myconf.int_val = prec->a;
	  prec->b   = myconf.float_val;
	  prec->val = myconf.float_val;
	  return 0;
}


/* Note the function must be registered at the end!*/
epicsRegisterFunction(intToFloat);
