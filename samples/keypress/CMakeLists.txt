# Module step I: Set up project name
# ------------------------------------------------------------------------------------------------------
set(PROJ_NAME keypress-lib)  # Front-end with functionality

project(${PROJ_NAME})

# Module step II: Add the given directories to those the compiler uses to search for include files
# ------------------------------------------------------------------------------------------------------
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include )	    	            # This projects' includes
include_directories(${PROJECT_BINARY_DIR})                                      # Look for ui generated
include_directories(${${PROJ_MAIN_NAME}_EXTRA_INCS})                               # Dependencies

# Module step III: Create variables with all includes and sources. You can add them manually in a VAR.
# ------------------------------------------------------------------------------------------------------
file(GLOB ${PROJ_NAME}_HEADERS
    "include/*.h"
    "include/*.hpp"
)
file(GLOB ${PROJ_NAME}_SRC
    "src/*.c"
    "src/*.cpp"
)
file(GLOB ${PROJ_NAME}_UI
    "ui/*.ui"
)

qt5_wrap_cpp(${PROJ_NAME}_HEADERS_MOC ${${PROJ_NAME}_HEADERS})
qt5_wrap_ui(${PROJ_NAME}_UI_MOC ${${PROJ_NAME}_UI})

# Module step IV: List of linker search directories. Path to headers needed by the project.
# ------------------------------------------------------------------------------------------------------
#link_directories( ${DIR1} ${DIR2} ...)

# Module step V: Create a library using the specified source files and build type in current project.
# ------------------------------------------------------------------------------------------------------
add_library(${PROJ_NAME} SHARED ${${PROJ_NAME}_HEADERS_MOC} ${${PROJ_NAME}_UI_MOC} ${${PROJ_NAME}_SRC})

# Module step VI: Link a target to given libraries. Set the name of libraries needed by the project.
# ------------------------------------------------------------------------------------------------------
target_link_libraries(${PROJ_NAME} Qt5::Widgets)

############################
# Link binary with front-end
############################
set(PROJ_NAME_BIN keypress-bin)
project(${PROJ_NAME_BIN})

add_executable(${PROJ_NAME_BIN} main.cpp)
target_link_libraries (${PROJ_NAME_BIN} ${PROJ_NAME})
