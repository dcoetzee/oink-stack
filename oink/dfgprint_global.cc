// see License.txt for copyright and terms of use

#include "dfgprint_global.h"    // this module

// An aliased global reference to oinkCmd, but downcast ahead of time
// for convenience.  I didn't want to have to create this globally,
// but there is no other way to get it into a few places like the ctor
// of Var_Q;
DfgPrintCmd *dfgPrintCmd = NULL;
