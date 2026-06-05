cmake_minimum_required(VERSION 3.16)
project(sanddice_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. ALWAYS enable AUTOMOC *before* declaring find_package or add_executable
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# 2. Find Qt
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

# 3. Create your single executable target
add_executable(sanddice_cpp main.cpp window.h)

# 4. Link everything cleanly using the versionless target
target_link_libraries(sanddice_cpp PRIVATE Qt::Widgets)
