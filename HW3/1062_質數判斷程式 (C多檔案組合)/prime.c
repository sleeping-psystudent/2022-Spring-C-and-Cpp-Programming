#include "prime.h"
#include <stdio.h>
#include <stdbool.h>

int IsPrime(int n){
    for(int i=2; i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
