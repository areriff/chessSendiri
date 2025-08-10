cmake_minimum_required(VERSION 3.24)  # Make sure you have a recent CMake
project(chessSendiri LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find Qt6 components you need (Core, Gui, Widgets for typical GUI apps)
find_package(Qt6 COMPONENTS Core Gui Widgets REQUIRED)

# Sources
set(SOURCES
        main.cpp
        # Add your other source files here
)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Link Qt libraries
target_link_libraries(${PROJECT_NAME} PRIVATE Qt6::Core Qt6::Gui Qt6::Widgets)

# Enable Qt6 automatic features (moc, uic, rcc)
set_target_properties(${PROJECT_NAME} PROPERTIES
        AUTOMOC ON
        AUTOUIC ON
        AUTORCC ON
)

# Optional: add definitions or compile options if needed
# target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -pedantic)
