#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
} Point;

typedef struct circle{
    Point cen;
    double rad;
} Circle;

void ShowCircleInfo(Circle *cptr){
    printf("[%d,%d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
    printf("radius: %g \n\n", cptr->rad);
}

int main(){
    Circle c1={{1,2}, 3.5};
    Circle c2={2,4, 3.9}; // 알아서 순서대로 초기화시킨다. 순서만 맞춰주면 된다.
    ShowCircleInfo(&c1);
    ShowCircleInfo(&c2);
    return 0;
}