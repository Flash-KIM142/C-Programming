#include <stdio.h>

typedef struct student{
    char name[20];
    char stdnum[20];
    char school[20];
    char major[20];
} Student;

void ShowStudentInfo(Student *sptr){
    printf("학생이름: %s \n", sptr->name);
    printf("학생 고유번호: %s \n", sptr->stdnum);
    printf("학교 이름: %s \n", sptr->school);
    printf("선택 전공: %s \n", sptr->major);
}

int main(){
    Student arr[3];
    int i;

    for(i=0; i<3; i++){
        printf("이름: "); scanf("%s", arr[i].name);
        printf("번호: "); scanf("%s", arr[i].stdnum);
        printf("학교: "); scanf("%s", arr[i].school);
        printf("전공: "); scanf("%s", arr[i].major);
    }
    printf("\n");

    for(i=0; i<3; i++){
        ShowStudentInfo(&arr[i]);
    }
    return 0;
}