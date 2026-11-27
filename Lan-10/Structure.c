#include<stdio.h>
#include<string.h>
struct Student {
        char name[50];
        int age;
        float cgpa;
    }x,y,z;
int main() {
    for(int i = 1; i <= 3; i++) {
        printf("Enter name, age and cgpa of student %d: ", i );
        if (i == 1) {
            scanf("%s %d %f", x.name, &x.age, &x.cgpa);
        } else if (i == 2) {
            scanf("%s %d %f", y.name, &y.age, &y.cgpa);
        } else if (i == 3) {
            scanf("%s %d %f", z.name, &z.age, &z.cgpa);
        }}
    for(int i = 1; i <= 3; i++) {
        if (i == 1) {
            printf("Student %d: Name: %s, Age: %d, CGPA: %.2f\n", i, x.name, x.age, x.cgpa);
        } else if (i == 2) {
            printf("Student %d: Name: %s, Age: %d, CGPA: %.2f\n", i, y.name, y.age, y.cgpa);
        } else if (i == 3) {
            printf("Student %d: Name: %s, Age: %d, CGPA: %.2f\n", i , z.name, z.age, z.cgpa);
        }
    }
    return 0;
}
