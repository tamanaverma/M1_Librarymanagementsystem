#include "unity.h"
#include <libary_management_system.h>

/* Modify these two lines according to the project */
#include <libary_management_system.h>
#define PROJECT_NAME    "Library Management System"

/* Prototypes for all the test functions */

struct books{
    int id;
    char bookName[50];
    char authorName[50];
    char date[12];
}b;

struct student{
    int id;
    char sName[50];
    char sClass[50];
    int sRoll;
    char bookName[50];
    char date[12];
}s;

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
    /* Initiate the Unity Test Framework */
  UNITY_BEGIN();

  /* Run Test functions */
  RUN_TEST(books);
  RUN_TEST(student);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */
struct test_books(void)
{
    TEST_ASSERT_EQUAL(books, books(Class));

    /* Dummy fail*/
  TEST_ASSERT_EQUAL(books , books(Students));

}
struct students(void) {
  TEST_ASSERT_EQUAL(Name, student(Class));

  /* Dummy fail*/
  TEST_ASSERT_EQUAL(class ,student(booksName));
}

© 2022 GitHub, Inc.
Terms
Privacy


