/**
* @file course.h
* @author Amanda Sullivan
* @date 2023-03-28
* @brief Header file for the Course struct and its related functions
*/

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

/**
* @brief Enrolls a student into the given course
*
* This function adds a given student to the list of students enrolled in a course.
*
* @param course A pointer to the course object
* @param studnet A point to the student object
*/
void enroll_student(Course *course, Student *student);

/**
* @brief Prints the details of the given course
*
* This function prints the details of the given course, including its name, code, and the names of all the students enrolled in the course
*
* @param course A pointer to the course object
*/
void print_course(Course *course);

/**
* @brief Finds the top performing student in the given course
*
* This function returns a point to the top performing student in the given course
*
* @param course A pointer to the course object
* @return A point to the top performing student in the course
*/
Student *top_student(Course* course);

/**
* @brief Finds all the passing sutdents in the given course
*
* This function returns a pointer to an array of Students objects representating all the passing students in the given course
*
* @param course A pointer to the course object
* @param total_passing A pointer to an integer representing the toatl number of students who passed the course
* @return A pointer to an array of Student objects representing the passing students in the course
*/
Student *passing(Course* course, int *total_passing);

