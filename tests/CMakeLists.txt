project(libft-tests)

add_executable(${PROJECT_NAME}
		tests_main.c)
target_include_directories(${PROJECT_NAME} PRIVATE .)
target_include_directories(${PROJECT_NAME} PRIVATE ../include)
target_link_libraries(${PROJECT_NAME} ft)
