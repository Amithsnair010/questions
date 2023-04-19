#include <stdio.h>
// Function to calculate GPA
float calculateGPA(int marks[], int n) {
    int totalMarks = 0;
    for (int i = 0; i < n; i++) {
        totalMarks += marks[i];
    }
    // Assuming 1 credit hour for each subject
    float gpa = (float)totalMarks / (n * 10);
    return gpa;
}
// Function to calculate rank
int calculateRank(int marks[], int n, int studentMarks) {
    int rank = 1;
    for (int i = 0; i < n; i++) {
        if (marks[i] > studentMarks) {
            rank++;
        }
    }
    return rank;
}
int main() {
    int n = 5; // Number of subjects
    int marks[] = {85, 92, 78, 89, 95}; // Array of marks for each subject
    int studentMarks = 91; // Marks of the student

    // Calculate GPA
    float gpa = calculateGPA(marks, n);
    printf("GPA: %.2f\n", gpa);
    // Calculate rank
    int rank = calculateRank(marks, n, studentMarks);
    printf("Rank: %d\n", rank);
    return 0;
}
