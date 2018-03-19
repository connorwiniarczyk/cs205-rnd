# include_directories(/usr/local/lib)

# find_package(Threads REQUIRED)

# # Enable ExternalProject CMake module
# include(ExternalProject)

# # Download and install GoogleTest
# ExternalProject_Add(
#     sockets
#     URL https://github.com/uNetworking/uWebSockets/archive/master.zip
#     PREFIX ${CMAKE_CURRENT_BINARY_DIR}/sockets
#     # Disable install step
#     INSTALL_COMMAND ""
# )

# # Get GTest source and binary directories from CMake project
# ExternalProject_Get_Property(gtest source_dir binary_dir)

# # Create a libgtest target to be used as a dependency by test programs
# add_library(libgtest IMPORTED STATIC GLOBAL)
# add_dependencies(libgtest gtest)

# # Set libgtest properties
# set_target_properties(libgtest PROPERTIES
#     "IMPORTED_LOCATION" "${binary_dir}/googlemock/gtest/libgtest.a"
#     "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
# )

# # Set libgmock properties
# set_target_properties(libgmock PROPERTIES
#     "IMPORTED_LOCATION" "${binary_dir}/googlemock/libgmock.a"
#     "IMPORTED_LINK_INTERFACE_LIBRARIES" "${CMAKE_THREAD_LIBS_INIT}"
# )

# # I couldn't make it work with INTERFACE_INCLUDE_DIRECTORIES
# include_directories("${source_dir}/googletest/include"
#                     "${source_dir}/googlemock/include")
