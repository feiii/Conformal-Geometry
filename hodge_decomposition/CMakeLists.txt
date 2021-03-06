project(HodgeDecomposition)

if(APPLE)
  add_definitions(-DMAC_OS)
endif(APPLE)

find_package(OpenCV REQUIRED)
include_directories( ${OpenCV_INCLUDE_DIRS})
link_directories(${OpenCV_LIBS_DIRS})
# Include the 'include' of the project itself
include_directories("include")
# Include MeshLib core and Eigen in 3rdparty
include_directories("${MeshLib_DIR}/core"
                    "${CMAKE_SOURCE_DIR}/3rdparty/eigen")

# Include the directory of OpenGL and GLUT
if(MSVC)
  include_directories("${freeglut_DIR}/include")
else(MSVC)
  include_directories(${OPENGL_INCLUDE_DIR} ${GLUT_INCLUDE_DIR})
endif(MSVC)

# Manually add the sources
#set(SOURCES_ONE ${MeshLib_DIR}/core/bmp/RgbImage.cpp)

# Also, the file(GLOB...) allows for wildcard additions
file(GLOB SOURCES_TWO
    "include/*.h"
    "src/*.cpp")

# Add an executable target called MyDemo to be build from 
# the source files.
add_executable(HodgeDecomposition ${SOURCES_ONE} ${SOURCES_TWO})

# Link the libraries of freeglut
if(MSVC)
  if(CMAKE_CL_64)
    target_link_libraries(HodgeDecomposition "${freeglut_DIR}/lib/x64/freeglut.lib")
  else(CMAKE_CL_64)
    target_link_libraries(HodgeDecomposition "${freeglut_DIR}/lib/freeglut.lib")
  endif(CMAKE_CL_64)
else(MSVC)
  target_link_libraries(HodgeDecomposition ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} ${OpenCV_LIBS})
endif(MSVC)

add_executable(video_test test_video.cpp)
target_link_libraries(video_test ${OpenCV_LIBS})

# Install the executeable program in the bin folder of the
# current project directory.
install(TARGETS HodgeDecomposition DESTINATION ${CMAKE_SOURCE_DIR}/bin)
