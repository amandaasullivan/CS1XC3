/**
* @file student.h
* @author Amanda Sullivan
* @date 2023-03-28
* @brief Header file for the Student struct and its related functions
*/

/**
* @brief Holds data for student information including student name, ID, and grades
*
* This struct is used to store student information, including their first and  last name, student ID, an array of grades, and the total number of grades.
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

/**
* @brief Adds a grade to the given student's array of grades
*
* This function adds a given grade to the array of grades for a given student
*
* @param student A pointer to the student object
* @param grade The grade to be added to the student's array of grades
*/
void add_grade(Student *student, double grade);

/**
* @brief Calculates the average grade for the given student
* 
* This function calculates the average grade for the given student based on their array of grades.
*
* @param student A pointer to the student object
* @return The average grade for the student
*/
double average(Student *student);

/**
* @brief Prints the details of the given student
*
* This function prints the details of the given student
*
* @param student A pointer to the student object
*/
void print_student(Student *student);

/**
* @brief Generates a random student object with a given number of grades
*
* This function generates a random sutdent object with a given number of grades
*
* @param grades The number of grades to be generated for the student
* @return A pointer to the randomly generated student object
*/
Student* generate_random_student(int grades); 
