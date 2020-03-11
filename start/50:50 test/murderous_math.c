#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    printf("\n");
    printf("################################################\n");
    printf("##                                            ##\n");
    printf("################################################\n");
    printf("\n");
    printf("Welcome to murderous math! Do take note that there are a total of 3 T/F question and 3 MCQ question. Please answer all the questions in UPPER CASE letters. Answer all of them correcly to earn the password to the next stage! Good luck.\n\n");
    char * result = calloc(100, sizeof(char));
    char * a = calloc(100, sizeof(char));
    char * b = calloc(100, sizeof(char));;
    char * c = calloc(100, sizeof(char));;
    char * d = calloc(100, sizeof(char));;
    char * e = calloc(100, sizeof(char));;
    char * f = calloc(100, sizeof(char));;

    printf("1) √2 is a rational number (T/F)?\n");
    scanf("%c", a);
    strncat(result, a, 2);

    printf("The negation of “he is healthy only if he runs” means “he is healthy but he does not run”. (T/F)?\n");
    scanf("%c", b);
    strncat(result, b, 2);

    printf("%s\n", result);

    free(result);
    free(a);
    free(b);
    free(c);
    free(d);
    free(e);
    free(f);
}
