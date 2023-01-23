/* Created by :- Gursagar Singh
   Dated :- 22.01.2023 
*/

#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    int age;
    int roll_no;
};

struct student s[50];
int n;

void input() {
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter the details of student %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", s[i].name);
        printf("Enter age: ");
        scanf("%d", &s[i].age);
        printf("Enter roll number: ");
        scanf("%d", &s[i].roll_no);
    }
}

void display(int rn) {
    int flag = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == rn) {
            printf("Name: %s\n", s[i].name);
            printf("Age: %d\n", s[i].age);
            printf("Roll Number: %d\n", s[i].roll_no);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        printf("Roll number not found!\n");
}

int main() {
    input();
    int rn;
    printf("Enter the roll number of the student whose details you want to see: ");
    scanf("%d", &rn);
    display(rn);
    return 0;
}
