# Meerstetter Engineering TEC-1122 Driver
Example IOC with stream driver for TEC-1122 using MeCom protocol from
Meerstetter engineering.

This IOC is an instance of the xxx IOC from synApps 6.0 modified to include the
stream support for the TEC-1122.

Modified/Added files:

 - xxxApp/src/Makefile - build intToFloat.cpp for use in subroutine
record. Specific changes listed in Makefile.patch.
 - xxxApp/src/intToFloat.cpp
 - xxxApp/src/intToFloat.dbd
 - xxxApp/Db/meer.db
 - xxxApp/op/adl/meer... 
 - iocBoot/iocxxx/meer.iocsh
 - iocBoot/iocxxx/meer.proto



