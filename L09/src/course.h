#include "student.h"
#include <stdbool.h>

/**
*@brief Holds data for course information including the course code and students enrolled
*
*This struct is used to store course information. It defines variables for student names, course codes, and the total number of students in a course. It also includes parameters for functions relating to course information that are used in the main file.
*
**/
 
typedef struct _course 
{
  char name[100]; /**< The name of the course */
  char code[10]; /**< The course code. */
  Student *students; /**< A pointer to an array of Student objects representing the students enrolled in the course */
  int total_students; /**< The totalnumber of students enrolled in the course. */
} Course;

void enroll_student(Course *course, Student *student);
void print_course(Course *course);
Student *top_student(Course* course);
Student *passing(Course* course, int *total_passing);

