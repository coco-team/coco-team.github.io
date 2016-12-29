#include<stdio.h>
#include "seahorn.h"

extern int nd();

void foo ()
{
    int a = nd();
    int y=0;

    if (a != 0){
        y=1;
    }
    if (y==0){
        sassert (a != 0);
    } else {
        y++;
    }
}
