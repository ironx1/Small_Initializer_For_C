#include "ky_interface.h"
#include <stdio.h>

typedef struct
{
    int x;
    int y;
}point_t;

int main(void)
{
    point_t *myPoints = iky_INITIALIZE(point_t, {1,3}, {0, 5}, {6,1}, {3, 3});

    for (int i = 0; i < 4; i++)
    {
        printf("X: %d\tY: %d\n", myPoints[i].x, myPoints[i].y);
    }
    
    iky_FREE(myPoints);
    return 0;
}
