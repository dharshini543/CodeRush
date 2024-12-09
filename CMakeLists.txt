cmake_minimum_required(VERSION 3.16)

project(Task1 LANGUAGES C)

add_executable(Task1 main.c)

include(GNUInstallDirs)
install(TARGETS Task1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
