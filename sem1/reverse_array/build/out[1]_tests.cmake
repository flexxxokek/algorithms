add_test( solution.1 /home/daniel/code/vk/sem1/reverse_array/build/out [==[--gtest_filter=solution.1]==] --gtest_also_run_disabled_tests)
set_tests_properties( solution.1 PROPERTIES WORKING_DIRECTORY /home/daniel/code/vk/sem1/reverse_array/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( out_TESTS solution.1)
