
add_executable(test_add test_add.cpp)
add_test(NAME AddTest COMMAND test_add)

add_executable(test_subtract test_subtract.cpp)
add_test(NAME SubtractTest COMMAND test_subtract)
