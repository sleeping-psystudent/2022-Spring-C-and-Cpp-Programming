#include <stdio.h>
#include <stdlib.h>
#include "score.h"

int main()
{
    int n;
    scanf("%d", &n);
    int score[n];
    inputAry(n, score);
    printAry(n, score);
    return 0;
}
