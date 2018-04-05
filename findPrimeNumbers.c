#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void find_prime(int Lb, int Ub){
    int i, j;
    for (i = Lb; i <= Ub; ++i){
        int prime = 1; //prime starts off as true
        for (j=2; j <=sqrt(i); ++j){
            if (i%j == 0){
                prime = 0; //prime is not true
                break;
            }
        }
        if (prime == 1){ //if prime is true, print this number
            printf("%d\n", i);
        }
    }
}

int str2int(char string[]){
      long int x;
      char* m;
      x = strtol(string, &m, 10);
      if (*m != '\0'){
          printf("Error message.\n");
          return 1;
      }
      return x;
}

int main(int argc, char** argv){

    long int a, b;

    if (argc != 3){
        printf("Error - wrong number of arguments.\n");
        return 1;
    }

    a = str2int(argv[1]);
    b = str2int(argv[2]);

    if (b>1000000 || a>b || a<2){
        printf("Error - wrong input.\n");
        return 1;
    }
    else{
        find_prime(a, b);
        return 0;
    }
}
