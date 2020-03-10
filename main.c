#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int _input){
    int inputSqrt = sqrt(_input);
    bool prime = true;
    if(_input == 0 || _input == 1 || _input == 2){
        prime = false;
    }
    for(int i=2; i<=inputSqrt; i++){
        int answer = _input%i;
        if(answer == 0) {
            prime = false;
        }
    }
    return prime;
}

int main() {
    int input;
    scanf("%d",&input);
    bool result = isPrime(input);
    if(result){
        printf("It's a prime number");
    }else{
        printf("It's not a prime number");
    }
    return 0;
}
