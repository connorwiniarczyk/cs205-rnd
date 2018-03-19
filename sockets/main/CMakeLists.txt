include_directories(~/Documents/cpp-libs/cpp-httplib)

# include_directories(~/Documents/boost/boost_1_66_0)

# set ( CMAKE_PREFIX_PATH ${CMAKE_PREFIX_PATH} ~/Desktop/netlib )
# find_package ( cppnetlib 0.11.0 REQUIRED )
# include_directories ( ${CPPNETLIB_INCLUDE_DIRS} )
# target_link_libraries ( main ${CPPNETLIB_LIBRARIES} )


set(Main_SRCS
    main.cpp
)

add_executable(main
    ${Main_SRCS}
)

# Specify here the libraries this program depends on
target_link_libraries(main

)

install(TARGETS main DESTINATION bin)