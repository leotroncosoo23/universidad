#include <stdio.h>

int recursion (int n){
    if (n == 0)  
    {
        return printf("Despegando \n") ;  
    }
    else{
         printf("%d \n",n);
        return recursion(n-1);
    }
}


int main(int argc, char *argv[]) {
    int n;
    printf("Ingrese un numero para realizar despegue\n");
    scanf("%d",&n);

    recursion(n);
    return 0;
}
