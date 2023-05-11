%{
#include <stdio.h>
%}



%%
int total=0; /* declare and initialize the total variable */

[a-zA-Z][a-zA-Z0-9]*    total += 1;
                     

\n                   ; /* ignore newlines */

.                    ; /* ignore all other characters */

<<EOF>>              { /* handle end of file */
                        return total;
                      }

%%

int main(int argc, char** argv) {
    if (argc < 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    FILE* file = fopen(argv[1], "r"); /* open the file for reading */
    if (file == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    yyin = file; /* set the input stream to the file */

    int result = yylex(); /* tokenize the input file */

    fclose(file); /* close the file */

    printf("%d", result);


    return 0;
}
