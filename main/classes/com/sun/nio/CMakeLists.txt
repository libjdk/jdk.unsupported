#machine generated

add_subdirectory("file")

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.nio_SRCS)
file(GLOB classes.com.sun.nio_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.nio_HEADERS}) 
list(LENGTH classes.com.sun.nio_SRCS classes.com.sun.nio_SRCS_LENGTH)
if(classes.com.sun.nio_SRCS_LENGTH)
	add_library(classes.com.sun.nio OBJECT "${classes.com.sun.nio_SRCS}" "${classes.com.sun.nio_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.nio)
endif()