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

/*
Output:
X: 1    Y: 3
X: 0    Y: 5
X: 6    Y: 1
X: 3    Y: 3
*/
