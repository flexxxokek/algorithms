if(EXISTS "/home/daniel/code/vk/sem1/sorted_array_merge/build/out[1]_tests.cmake")
  include("/home/daniel/code/vk/sem1/sorted_array_merge/build/out[1]_tests.cmake")
else()
  add_test(out_NOT_BUILT out_NOT_BUILT)
endif()
