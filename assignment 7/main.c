#include "string2.h"
#include <stdio.h>
#include <assert.h>

int main(void) {
    /* ───────── strlen checks ───────── */
    assert(strlen("hello") == 5);
    assert(strlen("I love dhelmise!!") == 17);
    assert(strlen("el     chalissimo") == 17);
    assert(strlen("") == 0);
    assert(strlen("\n") == 1);
    assert(strlen("I am 67") == 7);
    assert(strlen("123456") == 6);

    strlen((const char *)NULL);

    /* ───────── strstr checks ───────── */

    const char *haystack = "Chalice Heviiryn";

    assert(strstr(haystack, "chalice") == NULL);
    assert(strstr(haystack, "Chal") == haystack);
    assert(strstr(haystack, "ice") == haystack+4);
    assert(strstr(haystack, " ") == haystack+7);
    assert(strstr(haystack, "y") == haystack+14);
    assert(strstr(haystack, "i") == haystack+4);
    
    assert(strstr(haystack, "") == haystack);
    haystack = "";

    assert(strstr(haystack, "") == haystack);
    assert(strstr(haystack, "s") == NULL);
    strstr(NULL, "abc");
    
    /* ───────── strncpy checks ───────── */
    char dest[32];
    const char *src = "I want to go home.";
    strncpy(dest,src,3);
    assert(dest[0] == 'I');
    assert(dest[1] == ' ');
    assert(dest[2] == 'w');

    src = "hi";
    strncpy(dest,src,4);
    assert(dest[0] == 'h');
    assert(dest[1] == 'i');
    assert(dest[2] == '\0');
    assert(dest[3] == '\0');

    src = "";
    strncpy(dest,src,3);
    assert(dest[0] == '\0');
    assert(dest[1] == '\0');
    assert(dest[2] == '\0');
    
    strncpy(NULL, "abc", 5);

    /* ───────── strcmp checks ───────── */
    assert(strcmp("chalice","fredrico") < 0);
    assert(strcmp("1","2") < 0);
    assert(strcmp("#!!!!", "$1") < 0);
    assert(strcmp("", "\n") < 0);
    assert(strcmp("wahoo", "wahoo") == 0);
    assert(strcmp("\n", "\n") == 0);
    assert(strcmp("xyzabc", "xyzcde") < 0);
    assert(strcmp("p", "P") > 0);
    assert(strcmp("        hi", "hi") < 0);
    assert(strcmp("", "") == 0);

    strcmp(NULL, "abc");

    return 0;
}