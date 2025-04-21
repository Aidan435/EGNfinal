#include <stdio.h>

struct Student {
    char name[50];
    int id;
    char major[50];
    float gpa;
};

void StudentInfo(scruct student s) {
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Major: %s\n", s.major);
    printf("GPA: %.2f\n", s.gpa);
}

    int main {
    struct student S1 = {"Ben Dover", 6758265, "Finance", 2.81};
    struct student s2 = {"Jim Halpert", 6969696, "Computer Science", 3.72};
    struct student s3 = {"Patrick Star", 1234567, "Marine Biology", 4.0};

    S1.gpa -= 0.1;
    S2.gpa -= 0.1;
    S3.gpa -= 0.1;

    printf("GPA Update: \n");
    StudentInfo(S1);
    StudentInfo(S2);
    StudentInfo(S3);
    
    return 0;
    }