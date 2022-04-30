cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

set (PROJECT_NAME Main)
project(${PROJECT_NAME})

# Avant de configurer le build de mon programme, je configure le build de ma lib static dans le dossier lib_math.
# Dans ce dossier il y a un autre fichier CMakeLists.txt qui va prendre le relai.
# Quand ce dernier aura finit paramètrer la lib, il rendra la main ici.
add_subdirectory(lib_math)

# Very important, otherwise your executable will be considered as a shared library by your OS
set (CMAKE_CXX_FLAGS "-no-pie")

set( SOURCES
    main.cpp
)

# j'indique où se trouvent les fichiers de la lib Maths dont j'ai besoin
set(MATHS_INCLUDE_DIR lib_math/)
set(MATHS_LIB_DIR lib_math/)
include_directories(${MATHS_INCLUDE_DIR})
link_directories(${PROJECT_NAME} ${MATHS_LIB_DIR})

add_executable(Main
    ${SOURCES}
)

#Je donne le nom du fichier contenant ma lib
#Le fichier en question est libMaths.a
#Il faut omettre 'lib' et '.a' pour indiquer le nom de la lib que je veux utiliser
target_link_libraries(${PROJECT_NAME}
    Maths
)
