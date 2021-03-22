#include <stdio.h>
#include <string.h>

void doSpecialFunc(char *value) {
    size_t length = strlen(value);
    printf("string %s length %zu\n", value,length);
}
