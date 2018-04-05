#include <stdio.h>
#include <stdlib.h>

/* Function definition */
long long fact(int n);

//Function to calculate factorial//
long long fact(int n)
{
    long long factorial = 1;
    while(n>=1){
        factorial *= n;
        n--;
    }

    return factorial;
}

int str2int(char string[]){

    int x;
    x = strtol(string, NULL, 10);
    return x;

}

int main(int argc, char* argv[])
{
    int n, k, num, i;
    long long term;


    if (argc != 2){
        printf("Wrong number of arguments\n.");
        return 1;
    }

    num = str2int(argv[1]);

    if (num>20 || num<1){
        printf("Number outside of range\n.");
        return 1;
    }

    for(n=num-1; n>=0; n--)    {

        for(i=n; i<=num-1; i++)/* Prints 3 spaces */
            printf("%3c", ' ');

        /* Generate term for current row */
        for(k=0; k<=n; k++)
        {
            term = fact(n) / (fact(k) * fact(n-k));

            printf("%6lld", term);
        }

        printf("\n");
    }

    return 0;
}
