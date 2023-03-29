/**
* @brief holds data for student information including student name, ID, grades
*
* This struct is used to store student information student first name, last name, id, and grades. This file also includes parameters for functions to add grades, generate GPA, and print student details which are used in the main file
*
**/

typedef struct _student 
{ 
  char first_name[50]; /**< The first name of the student */
  char last_name[50]; /**< The last name of the student */
  char id[11]; /**< The student identification */
  double *grades; /**< A memory address to an array of Grade objects representing the grades in the course. */
  int num_grades; /**< The grade of the student */
} Student;

void add_grade(Student *student, double grade);
double average(Student *student);
void print_student(Student *student);
Student* generate_random_student(int grades); 
