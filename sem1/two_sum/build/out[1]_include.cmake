if(EXISTS "/home/daniel/code/vk/algorithms/sem1/two_sum/build/out[1]_tests.cmake")
  include("/home/daniel/code/vk/algorithms/sem1/two_sum/build/out[1]_tests.cmake")
else()
  add_test(out_NOT_BUILT out_NOT_BUILT)
endif()
