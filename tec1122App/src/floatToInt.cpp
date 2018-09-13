#include <stdio.h>
#include <subRecord.h>
#include <registryFunction.h>
#include <epicsExport.h>

union ifconv{
    float float_val;
    unsigned int  int_val;
};

static long floatToInt(subRecord *prec) {
	  union ifconv myconf;
	  myconf.float_val = prec->val;
	  prec->a = myconf.int_val;
	  return 0;
}


/* Note the function must be registered at the end!*/
epicsRegisterFunction(floatToInt);
