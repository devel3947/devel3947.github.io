#include <stdio.h>

int main(){
    int num1, num2, gcd, lcm;
    
    scanf("%d %d", &num1, &num2);
    
    if (num1 < num2){
        gcd = num1;
        lcm = num2;
    }
    else{
        gcd = num2; 
        lcm = num1;
    }
    
    while (gcd > 0){
        if (num1 % gcd == 0 && num2 % gcd == 0)
            break;
        gcd--;
    }
    
    while (1){
        if (lcm % num1 == 0 && lcm % num2 == 0)
            break;
        lcm++;
    }
    
    printf("%d\n%d", gcd, lcm);
    return 0;
}