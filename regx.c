#include <stdio.h>
#include <stdlib.h>
#include <regex.h>

int main() 
{
    int i;
    regex_t regex;
    int reti;
    char msgbuf[100];
    char *tests[] = {
        "180E-2",
        ".5",
        "180.100",
        "7.0",
        "0HA.",
        "0B1.0010",
        "0H0.00B9CF",
        "180E-2.2",
        ".Ε-2 .5.",
        "7.00",
        ".5G-2",
        "05.2Ε-05",
        "0ΗΒΕ-2",
        "0Β01.1 1001"
    };
    // Compile the regular expression
    reti = regcomp(&regex, ".[0-9]*", 0);
    if (reti) {
        fprintf(stderr, "Could not compile regex\n");
        return 1;
    }

    // Execute the regular expressions
    int testsLen = sizeof(tests) / sizeof(tests[0]);
    for(i = 0; i < testsLen; i++)
    {
        reti = regexec(&regex, tests[i], 0, NULL, 0);
        if (!reti) {
            printf("%-20s match\n", tests[i]);
        } else if (reti == REG_NOMATCH) {
            printf("%-20s no match\n", tests[i]);
        } else {
            regerror(reti, &regex, msgbuf, sizeof(msgbuf));
            fprintf(stderr, "Regex match failed: %s\n", msgbuf);
            return 1;
        }
    }
    

    // Free the compiled regular expression
    regfree(&regex);

    return 0;
}
