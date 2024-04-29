cmake_minimum_required(VERSION 3.28)

# 这里修改为你的项目名称
project(template_qt)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)



# 这里设置 qt大的版本号
set(QTVersion 6)


# 同时添加你的需要的qt依赖
find_package(Qt${QTVersion}
        COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED
        )



# 这里添加 头文件目录
include_directories(src/subWidget)
# 包含 ui.h
include_directories("${CMAKE_BINARY_DIR}/${PROJECT_NAME}_autogen/include")
#递归查找源文件
file(GLOB_RECURSE   SRCS  RELATIVE ${CMAKE_CURRENT_SOURCE_DIR}  LIST_DIRECTORIES false   src/*.cpp  src/*.ui)
#添加额外的 源文件 例如资源文件等
LIST(APPEND  SRCS res.qrc icon.rc)



# debug 模式带黑框 release不带
if(CMAKE_BUILD_TYPE MATCHES "Debug")
    message("Debug Build")
    add_executable(${PROJECT_NAME}   ${SRCS} )
elseif(CMAKE_BUILD_TYPE MATCHES "Release")
    message("Release Build")
    add_executable(${PROJECT_NAME} WIN32 ${SRCS})
endif()


# 添加你需要连接的库
target_link_libraries(${PROJECT_NAME}
        Qt::Core
        Qt::Gui
        Qt::Widgets
        )