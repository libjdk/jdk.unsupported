#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.com.sun.nio.file_SRCS)
file(GLOB classes.com.sun.nio.file_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.com.sun.nio.file_HEADERS}) 
list(LENGTH classes.com.sun.nio.file_SRCS classes.com.sun.nio.file_SRCS_LENGTH)
if(classes.com.sun.nio.file_SRCS_LENGTH)
	add_library(classes.com.sun.nio.file OBJECT "${classes.com.sun.nio.file_SRCS}" "${classes.com.sun.nio.file_HEADERS}")
	jcpp_enable_bigobj(classes.com.sun.nio.file)
endif()