#include <stdio.h>

struct Student {
    char name[50];
    int id;
    char major[50];
    float gpa;
};

void StudentInfo(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Major: %s\n", s.major);
    printf("GPA: %.2f\n", s.gpa);
}

    int main() {
        struct Student s1 = {"Ben Dover", 6758265, "Finance", 2.81};
        struct Student s2 = {"Jim Halpert", 6969696, "Computer Science", 3.72};
        struct Student s3 = {"Patrick Star", 1234567, "Marine Biology", 4.0};
    
        s1.gpa -= 0.1;
        s2.gpa -= 0.1;
        s3.gpa -= 0.1;
    
        printf("GPA Update: \n");
        StudentInfo(s1);
        StudentInfo(s2);
        StudentInfo(s3);
        
        return 0;
    }