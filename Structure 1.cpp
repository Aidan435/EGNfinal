#include <stdio.h>
#include <string.h>

    struct employee {
        char name[50];
        int id;
        float wage;
        int age;
        int hours;
    };
    
    int main(){
        struct employee e1 = {"Mary", 46294, 27.50, 23, 40};
        struct employee e2 = {"Andrew", 19349, 20.00, 19, 20};
        struct employee e3 = {"Peter (Spiderman)", 00001, 0.00, 25, 50};

        printf("Employee 1: \n");
        printf("Name: %s\n", e1.name);
        printf("ID: %d\n", e1.id);
        printf("Wage: %.2f\n", e1.wage);
        printf("Age: %d\n", e1.age);
        printf("Hours: %d\n", e1.hours);
        printf("\n");

        printf("Employee 2: \n");
        printf("Name: %s\n", e2.name);
        printf("ID: %d\n", e2.id);
        printf("Wage: %.2f\n", e2.wage);
        printf("Age: %d\n", e2.age);
        printf("Hours: %d\n", e2.hours);
        printf("\n");

        printf("Employee 3: \n");
        printf("Name: %s\n", e3.name);
        printf("ID: %d\n", e3.id);
        printf("Wage: %.2f\n", e3.wage);
        printf("Age: %d\n", e3.age);
        printf("Hours: %d\n", e3.hours);
        printf("\n");

        return 0;

    }




