#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
} Point;

Point SwapPoint(Point *pos1, Point *pos2){
    Point temp;

    temp=*pos1;
    *pos1=*pos2;
    *pos2=temp;
}

int main(){
    Point pos1={2,4};
    Point pos2={5,7};

    SwapPoint(&pos1,&pos2);
    
    printf("[%d,%d] \n", pos1.xpos, pos1.ypos);
    printf("[%d,%d] \n", pos2.xpos, pos2.ypos);

    Point pos3={3,5};
    Point pos4={1,2};

    Point temp;
    temp=pos3;
    pos3=pos4;
    pos4=temp;

    printf("[%d,%d] \n", pos3.xpos, pos3.ypos);
    printf("[%d,%d] \n", pos4.xpos, pos4.ypos);
    return 0;
}