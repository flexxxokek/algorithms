add_test( solution.1 /home/daniel/code/vk/sem1/zerobackward/build/out [==[--gtest_filter=solution.1]==] --gtest_also_run_disabled_tests)
set_tests_properties( solution.1 PROPERTIES WORKING_DIRECTORY /home/daniel/code/vk/sem1/zerobackward/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( solution.2 /home/daniel/code/vk/sem1/zerobackward/build/out [==[--gtest_filter=solution.2]==] --gtest_also_run_disabled_tests)
set_tests_properties( solution.2 PROPERTIES WORKING_DIRECTORY /home/daniel/code/vk/sem1/zerobackward/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( out_TESTS solution.1 solution.2)
