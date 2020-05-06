#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
} Point;

typedef struct rectangle{
    Point LD;
    Point RU;
} Rectangle;

int AreaOfRectangle(Rectangle *rec){
    printf("넓이: %d \n", ((rec->RU).xpos-(rec->LD).xpos)*((rec->RU).ypos-(rec->LD).ypos));
    return 0;
}

void ShowRecInfo(Rectangle *rec){
    printf("좌측 하단: [%d,%d] \n", (rec->LD).xpos, (rec->LD).ypos);
    printf("좌측 상단: [%d,%d] \n", (rec->LD).xpos, (rec->RU).ypos);
    printf("우측 상단: [%d,%d] \n", (rec->RU).xpos, (rec->RU).ypos);
    printf("우측 하단: [%d,%d] \n", (rec->RU).xpos, (rec->LD).ypos);
}

int main(){
    Rectangle r={{0,0},{100,100}};

    AreaOfRectangle(&r);
    ShowRecInfo(&r);
    return 0;
}