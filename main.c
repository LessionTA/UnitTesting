#include "CuTest.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *StrToUpper(char *str)
{
    system("pause"); 
     
    return str;
}

void TestStrToUpper(CuTest *tc)
{
    char *input = strdup("hello world");
    char *actual = StrToUpper(input);
    char *expected = "HELLO WORLD";
    CuAssertStrEquals(tc, expected, actual);
    
 system("PAUSE");
        
}

CuSuite *StrUtilGetSuite()
{
    CuSuite *suite = CuSuiteNew();
    SUITE_ADD_TEST(suite, TestStrToUpper);
    
    system("pause");
    
    return suite;
}
