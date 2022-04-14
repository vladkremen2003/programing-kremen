#include "lib.h"
#include <check.h>
#include <stdlib.h>
START_TEST(test_nod)
{
  int data_number1 = 1086;
  int data_number2 = 345;
  int expected = 3;
  int actual = nod(data_number1, data_number2);
  ck_assert_int_eq(actual, expected);
}
END_TEST
int main(void)
{
	Suite *s = suite_create("Programing");
	TCase *tc_core = tcase_create("Lab09");

	tcase_add_test(tc_core, test_nod);
	suite_add_tcase(s, tc_core);

	SRunner *sr = srunner_create(s);
	srunner_run_all(sr, CK_VERBOSE);
	int number_failed = srunner_ntests_failed(sr);
	srunner_free(sr);

	return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
