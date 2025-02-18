// #include <stdio.h>
// #include <string.h>

// struct student
// {
//     int id;
//     int marks;
//     char hobby[50];
// };

// int main()
// {

//     struct student deep, aayu, ak;
//     deep.id = 20;
//     deep.marks = 70;
//     strcpy(deep.hobby, "game");
//     aayu.id = 12;
//     aayu.marks = 60;
//     strcpy(aayu.hobby, "dance");
//     ak.id = 30;
//     ak.marks = 30;
//     strcpy(ak.hobby, "sports");

//     printf("id of deep is %d\n", deep.id);
//     printf("marks of deep is %d\n", deep.marks);
//     printf("hobby of aayu is %s\n",aayu.hobby);
//     printf("marks of ak is %d\n",ak.marks);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct std{
//     int roll;
//     char name[20];
//     float marks;
// };


// int main(){
//     struct std x[20];
//     int n;
//     printf("enter number of students: ");
//     scanf("%d",&n);
//     printf("enter details of %d students: \n",n);

//     for (int i = 0; i < n; i++){
//         scanf("%d%s%f",&x[i].roll,x[i].name,&x[i].marks);
//     }

//     printf("diaplaing the arrays using struct:\n ");

//     for (int i = 0; i < n; i++){
//         printf("%d\t%s\t%.2f\n",x[i].roll,x[i].name,x[i].marks);
//     }

//     char sname[20];
//     int flag;
//     printf("enter a name to search: ");
//     scanf("%s",sname);
//     for (int i = 0; i < n; i++){
//         if (strcmp(x[i].name,sname)==0){
//             flag=1;
//             printf("found\n roll=%d\tname=%s\tmarks=%d",x[i].roll,x[i].name,x[i].marks);
//             break;
//         }

//         else{
//             flag=0;
//         }
    
//     }
//     if (flag==0){
//         printf("not found: ");
//     }
    
//     return 0;
// }

// #include <stdio.h>

// struct std
// {
//     int roll;
//     char name[20];
//     int marks[3];
//     int total;
//     float per;
// };


// int main()
// {
//     struct std x[20];
//     int n;
//     printf("enter number of students: ");
//     scanf("%d",&n);
//     for (int i = 0; i < n; i++)
//     {
        
//         printf("enter roll and name: ");
//         scanf("%d%s",&x[i].roll,x[i].name);
//         printf("enter marks of maths, physics, chemistry: ");
//         x[i].total=0;
//         for (int k = 0; k < 3; k++)
//         {
//             scanf("%d",&x[i].marks[k]);
//             x[i].total=x[i].total+x[i].marks[k];
//         }
        
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d\t%s\t%d\n",x[i].roll,x[i].name,x[i].total);
//     }
    

    
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// struct date
// {
//     int day;
//     int month;
//     int year;
// };

// struct std{
//     int roll;
//     char name[20];
//     int marks;
//     struct date dao;
// };


// int main()
// {

//       struct std x;
//       printf("enter roll name marks: ");
//       scanf("%d%s%d",&x.roll,x.name,&x.marks);
//       printf("enter date of birth: ");
//       scanf("%d%d%d",&x.dao.day,&x.dao.month,&x.dao.year);

//       printf("roll is %d\n",x.roll);
//       printf("name is %s\n",x.name);
//       printf("marks is %d\n",x.marks);
//       printf("date of admission is %d/%d/%d",x.dao.day,x.dao.month,x.dao.year);
//       return 0;
// }

// #include <stdio.h>

// struct point{
//     int x;
//     int y;
// };

// void sum(int x,int y){
//     printf("sum of given number is %d\n",x+y);
// }

// void sub(struct point p){
//     printf("difference of numbers is %d\n",p.x-p.y);
// }

// int main()
// {
//     struct point p;
//     // struct point s;
//     printf("enter value of x: ");
//     scanf("%d",&p.x);
//     printf("enter value of y: ");
//     scanf("%d",&p.y);

//     sum(p.x,p.y);
//     sub(p);
    
//     return 0;
// }

#include <stdio.h>

struct std{
    int roll;
    char name[20];
    int marks;
};

int main()
{
    struct std x;
    struct std *xp;
    xp=&x;
    printf("enter roll name and marks: ");
    scanf("%d%s%d",&x.roll,x.name,&x.marks);
    printf("roll is %d\n",xp->roll);
    printf("name is %s\n",xp->name);
    printf("marks is %d\n",xp->marks);

    return 0;
}