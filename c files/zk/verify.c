#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removeChar(char *str, char c);
int check_public();
int check_circuit();

int main()
{

    int public = check_public();
    int circuit = check_circuit();

    if (public == 1 && circuit == 13) {
        printf("{w31c0m3_t0_Z3R0_KN0W13D63}");
        return 0;
    }

    printf("[-] Incorrect");
    return 0;

}

void removeChar(char *str, char c) {
    int i, j;
    int len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int check_public () {

    FILE * fp;
    char * line = NULL;
    char * answer = NULL;
    char * in1 = NULL;
    char * in2 = NULL;
    char * in3 = NULL;
    size_t len = 0;
    ssize_t read;
    char quote = '"';
    char comma = ',';


    fp = fopen("public.json", "r");

    if (fp == NULL)
        exit(EXIT_FAILURE);

    getline(&line, &len, fp);
    getline(&answer, &len, fp);
    getline(&in1, &len, fp);
    getline(&in2, &len, fp);
    getline(&in3, &len, fp);

    removeChar(answer, quote);
    removeChar(answer, comma);

    removeChar(in1, quote);
    removeChar(in1, comma);

    removeChar(in2, quote);
    removeChar(in2, comma);

    removeChar(in3, quote);
    removeChar(in3, comma);

    int product = atoi(answer);
    int a = atoi(in1);
    int b = atoi(in2);
    int c = atoi(in3);

    if ((a * b * c == product) && (a == 10 && b == 131 && c == 4)) {
        fclose(fp);
        if (line)
            free(line);
            free(answer);
            free(in1);
            free(in2);
            free(in3);
        return 1;
    }

    fclose(fp);
    if (line)
        free(line);
        free(answer);
        free(in1);
        free(in2);
        free(in3);
    return 0;

}

int check_circuit () {

    FILE * fp;
    char * line1 = NULL;
    char * line2 = NULL;
    char * line3 = NULL;
    char * line4 = NULL;
    char * line5 = NULL;
    char * line6 = NULL;
    char * line7 = NULL;
    size_t len = 0;
    ssize_t read;


    fp = fopen("circuit.circom", "r");

    if (fp == NULL)
        exit(EXIT_FAILURE);

    getline(&line1, &len, fp);
    getline(&line2, &len, fp);
    getline(&line3, &len, fp);
    getline(&line4, &len, fp);
    getline(&line5, &len, fp);
    getline(&line6, &len, fp);
    getline(&line7, &len, fp);

    char  str1[] = "    out <== in1 * in2;";

    int val = strcmp (line7, str1);

    fclose(fp);
    if (line1)
        free(line1);
        free(line2);
        free(line3);
        free(line4);
        free(line5);
        free(line6);
        free(line7);
    
    return val;

}