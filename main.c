#include <stdio.h>

int factorial(int a) 
{ 
    int i;
    int res=1;
    for(i=1; i<a; i++)
    {
        res=res*(i+1);
    }
    return res;
}

int combination(int n, int r)
{ 
    int up, down;
    //분자
    up=factorial(n);
    //분모
    down=factorial(r)*factorial(n-r);
    return up/down;
}

int main(void) 
{ 
    int result;
    int n, r;
    //n, r 값 입력 받기
    printf("Input number: ");
    scanf("%i", &n);

    printf("Input number: ");
    scanf("%i", &r);

    result = combination(n, r);    
    printf("Result: %i\n", result);

    return 0;
}
