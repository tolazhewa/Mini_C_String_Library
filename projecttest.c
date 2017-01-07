#include <stdio.h>
#include "project.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

int SIGN(int x) {
    if(x < 0) { return -1; }
    if(x > 0) { return +1; }
    return 0;
}

/* Gold testing: compare the results of your functions to the results
 of functions known correct for the same computational problem. */

int main() {
    int i, j;
    int M = 200;
    
    char* s1 = malloc((M+1) * sizeof(char));
    char* s2 = malloc((M+1) * sizeof(char));
    char* s3 = malloc((M+1) * sizeof(char));
    
    printf("Starting out the CPS 393 project test program.\n");
    
    for(i = 0; i < M; i++) {
        s1[i] = 'a' + (rand() % 26);
    }
    s1[i] = '\0';
    assert(strlen(s1) == my_strlen(s1));
    
    printf("Passed stage one. Current score: 3\n");
    fflush(stdout);
    
    for(i = 0; i < M; i++) {
        for(j = i; j < M; j++) {
            my_strcpy(s2, s1 + j);
            strcpy(s3, s1 + j);
            assert(SIGN(strcmp(s2, s3)) == SIGN(my_strcmp(s2, s3)));
        }
    }
    
    printf("Passed stage two. Current score: 8\n");
    fflush(stdout);
    
    for(i = 0; i < M; i++) {
        assert(strlen(s1 + i) == my_strlen(s1 + i));
        for(j = 0; j < M; j++) {
            assert(SIGN(strcmp(s1 + i, s1 + j)) == SIGN(my_strcmp(s1 + i, s1 + j)));
        }
    }
    
    printf("Passed stage three. Current score: 12\n");
    fflush(stdout);
    
    for(i = 0; i < M; i++) {
        for(j = 'a'; j <= 'z'; j++) {
            assert(strchr(s1 + i, j) == my_strchr(s1 + i, j));
            assert(strrchr(s1 + i, j) == my_strrchr(s1 + i, j));
        }
    }
    free(s2);
    free(s3);
    
    printf("Passed stage four. Current score: 16\n");
    fflush(stdout);
    
    s2 = malloc(M*M*sizeof(char));
    s3 = malloc(M*M*sizeof(char));
    s2[0] = '\0';
    s3[0] = '\0';
    for(i = 0; i < M; i++) {
        strcat(s2, s1 + i);
        my_strcat(s3, s1 + i);
    }
    assert(strcmp(s2, s3) == 0);
    
    printf("Passed stage five. Current score: 20\n");
    fflush(stdout);
    
    free(s1);
    free(s2);
    free(s3);
    printf("Test program for 393 project completed.\n");
    return 0;
}