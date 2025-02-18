#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    int marks;
    char hobby[50];
};

int main()
{

    struct student deep, aayu, ak;
    deep.id = 20;
    deep.marks = 70;
    strcpy(deep.hobby, "game");
    aayu.id = 12;
    aayu.marks = 60;
    strcpy(aayu.hobby, "dance");
    ak.id = 30;
    ak.marks = 30;
    strcpy(ak.hobby, "sports");

    printf("id of deep is %d\n", deep.id);
    printf("marks of deep is %d\n", deep.marks);
    printf("hobby of aayu is %s\n",aayu.hobby);
    printf("marks of ak is %d\n",ak.marks);
    return 0;
}