#include <stdio.h>
#include <string.h>
void copy(char *psource, char *ptarget, unsigned num_char)
{unsigned count = 0;
   while (count < num_char && *psource != '\0') {
        *ptarget = *psource;
        psource++;
        ptarget++;
        count++;
   }
    // Always null-terminate the target string safely
    *ptarget = '\0';
}


void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    // TODO: write your code here
    unsigned remaining = buffer_size - 1;
    char *dst = ptarget;

    while (*psrc1 != '\0' && remaining > 0) {
        *dst = *psrc1;
        dst++;
        psrc1++;
        remaining--;
    }

    while (*psrc2 != '\0' && remaining > 0) {
        *dst = *psrc2;
        dst++;
        psrc2++;
        remaining--;
    }

    *dst = '\0';
}

int main(void) {
    char source[] = "This is the first sentence. ";
    char target[] = "This is the second sentence.";

    char buffer[70];

    concatenate(source, target, buffer, 70);

    printf("Result: %s\n", buffer);

    return 0;
}
// DO NOT change the code above