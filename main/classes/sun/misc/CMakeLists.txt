#machine generated

aux_source_directory("${CMAKE_CURRENT_SOURCE_DIR}" classes.sun.misc_SRCS)
file(GLOB classes.sun.misc_HEADERS *.h *.hpp)
source_group("Include" FILES ${classes.sun.misc_HEADERS}) 
list(LENGTH classes.sun.misc_SRCS classes.sun.misc_SRCS_LENGTH)
if(classes.sun.misc_SRCS_LENGTH)
	add_library(classes.sun.misc OBJECT "${classes.sun.misc_SRCS}" "${classes.sun.misc_HEADERS}")
	jcpp_enable_bigobj(classes.sun.misc)
endif()