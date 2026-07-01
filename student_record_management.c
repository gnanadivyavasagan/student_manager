/*
 * MINI PROJECT - Student Record Management System
 * Language: C
 * Platform: Linux (tested with gcc)
 *
 * Compile:
 *   gcc student_record_management.c -o student_manager
 *
 * Run:
 *   ./student_manager
 *
 * Data is stored persistently in "students.dat" in the same folder.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "students.dat"
#define NAME_LEN  50
#define ADDR_LEN  100

typedef struct {
    int roll_no;
    char name[NAME_LEN];
    char branch[NAME_LEN];
    int age;
    float marks;
    char address[ADDR_LEN];
} Student;

/* ---------- Utility functions ---------- */

void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void pause_screen() {
    printf("\nPress Enter to continue...");
    clearInputBuffer();
    getchar();
}

/* ---------- Core functions ---------- */

void addStudent() {
    FILE *fp = fopen(FILE_NAME, "ab");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    Student s;
    printf("\n--- Add New Student ---\n");

    printf("Enter Roll No: ");
    scanf("%d", &s.roll_no);
    clearInputBuffer();

    printf("Enter Name: ");
    fgets(s.name, NAME_LEN, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter Branch: ");
    fgets(s.branch, NAME_LEN, stdin);
    s.branch[strcspn(s.branch, "\n")] = '\0';

    printf("Enter Age: ");
    scanf("%d", &s.age);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    clearInputBuffer();

    printf("Enter Address: ");
    fgets(s.address, ADDR_LEN, stdin);
    s.address[strcspn(s.address, "\n")] = '\0';

    fwrite(&s, sizeof(Student), 1, fp);
    fclose(fp);

    printf("\nStudent record added successfully!\n");
}

void displayAll() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("\nNo records found. Add a student first.\n");
        return;
    }

    Student s;
    int found = 0;

    printf("\n%-10s %-20s %-15s %-5s %-8s %-30s\n",
           "Roll No", "Name", "Branch", "Age", "Marks", "Address");
    printf("--------------------------------------------------------------------------------------\n");

    while (fread(&s, sizeof(Student), 1, fp)) {
        printf("%-10d %-20s %-15s %-5d %-8.2f %-30s\n",
               s.roll_no, s.name, s.branch, s.age, s.marks, s.address);
        found = 1;
    }

    if (!found) {
        printf("No records found.\n");
    }

    fclose(fp);
}

void searchStudent() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    int roll, found = 0;
    Student s;

    printf("\nEnter Roll No to search: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.roll_no == roll) {
            printf("\n--- Student Found ---\n");
            printf("Roll No : %d\n", s.roll_no);
            printf("Name    : %s\n", s.name);
            printf("Branch  : %s\n", s.branch);
            printf("Age     : %d\n", s.age);
            printf("Marks   : %.2f\n", s.marks);
            printf("Address : %s\n", s.address);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nStudent with Roll No %d not found.\n", roll);
    }

    fclose(fp);
}

void updateStudent() {
    FILE *fp = fopen(FILE_NAME, "rb+");
    if (fp == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    int roll, found = 0;
    Student s;

    printf("\nEnter Roll No to update: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.roll_no == roll) {
            found = 1;
            clearInputBuffer();

            printf("Enter new Name: ");
            fgets(s.name, NAME_LEN, stdin);
            s.name[strcspn(s.name, "\n")] = '\0';

            printf("Enter new Branch: ");
            fgets(s.branch, NAME_LEN, stdin);
            s.branch[strcspn(s.branch, "\n")] = '\0';

            printf("Enter new Age: ");
            scanf("%d", &s.age);

            printf("Enter new Marks: ");
            scanf("%f", &s.marks);
            clearInputBuffer();

            printf("Enter new Address: ");
            fgets(s.address, ADDR_LEN, stdin);
            s.address[strcspn(s.address, "\n")] = '\0';

            /* Move file pointer back to overwrite this record */
            fseek(fp, -(long)sizeof(Student), SEEK_CUR);
            fwrite(&s, sizeof(Student), 1, fp);

            printf("\nRecord updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("\nStudent with Roll No %d not found.\n", roll);
    }

    fclose(fp);
}

void deleteStudent() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) {
        printf("\nNo records found.\n");
        return;
    }

    FILE *temp = fopen("temp.dat", "wb");
    if (temp == NULL) {
        printf("Error creating temp file!\n");
        fclose(fp);
        return;
    }

    int roll, found = 0;
    Student s;

    printf("\nEnter Roll No to delete: ");
    scanf("%d", &roll);

    while (fread(&s, sizeof(Student), 1, fp)) {
        if (s.roll_no == roll) {
            found = 1;
            continue; /* skip writing this record -> deletes it */
        }
        fwrite(&s, sizeof(Student), 1, temp);
    }

    fclose(fp);
    fclose(temp);

    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);

    if (found) {
        printf("\nStudent with Roll No %d deleted successfully!\n", roll);
    } else {
        printf("\nStudent with Roll No %d not found.\n", roll);
    }
}

int countStudents() {
    FILE *fp = fopen(FILE_NAME, "rb");
    if (fp == NULL) return 0;

    int count = 0;
    Student s;
    while (fread(&s, sizeof(Student), 1, fp)) {
        count++;
    }
    fclose(fp);
    return count;
}

/* ---------- Menu ---------- */

void showMenu() {
    printf("\n===================================\n");
    printf("   MINJ PROJECT - Student Manager\n");
    printf("===================================\n");
    printf("1. Add Student\n");
    printf("2. Display All Students\n");
    printf("3. Search Student by Roll No\n");
    printf("4. Update Student\n");
    printf("5. Delete Student\n");
    printf("6. Total Student Count\n");
    printf("7. Exit\n");
    printf("-----------------------------------\n");
    printf("Enter your choice: ");
}

int main() {
    int choice;

    while (1) {
        showMenu();
        if (scanf("%d", &choice) != 1) {
            clearInputBuffer();
            printf("Invalid input!\n");
            continue;
        }

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: printf("\nTotal students: %d\n", countStudents()); break;
            case 7:
                printf("\nExiting... Goodbye!\n");
                exit(0);
            default:
                printf("\nInvalid choice! Try again.\n");
        }
        pause_screen();
    }

    return 0;
}
