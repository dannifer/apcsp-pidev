struct Student {
        char first[20];
        char last[20];
        char age[100];
        char id[100];
};
void printStudent(struct Student* student) {
        printf("student information:\n");
        printf("first name:%s\n", student->first);
        printf("last name:%s\n", student->last);
        printf("age:%s\n",student->age);
        printf("student id:%s\n", student->id);
}

