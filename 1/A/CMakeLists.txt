## cmake 최소 버전 정의
cmake_minimum_required(VERSION 2.0)
## 모든 출력 메시지 표시 옵션: CMAKE_VERBOSE_MAKEFILE
# set(CMAKE_VERBOSE_MAKEFILE true/false)

## C++ 버전
set(CMAKE_CXX_STANDARD 17)
## C++ 컴파일러 정의
#set(CMAKE_C_COMPILER "g++")

# 컴파일 옵션
ADD_COMPILE_OPTIONS(-g -Wall)

## 프로젝트 이름
project(aTest)
## 프로젝트 이름, 언어, 버전을 지정할 수 있음.
# project(BookTest LANGUAGE CXX VERSION 0.1)

## 
include_directories(/usr/local/boost/include)
link_libraries(pthread)
set(SOURCE A.cpp A.hpp aTest.cpp)

add_executable(${PROJECT_NAME} ${SOURCE})



## 변수 선언 및 사용
# set (SOURCE file1.c file2.cpp ...)
# add_library(${PROJECT_NAME} SHARED ${SOURCE})
## 컴파일러 지정
# set(CMAKE_C_COMPILER c_compiler_path)
## 검퍼일어의 옵션 지정
# add_compile_option(-g -Wall  ...)
## 컴파일 중 사용할 헤더 디렉토리 추가
# include_directories(my_include_directory your_include_directory his_include_directory ...)
## 링크에 사용할 라이브러리 파일 지정
# link_libraries(mine yours his her ...)
# link_libraries(libmine libyours libhis libher -static ...)
## 실행 파일 출력 경로: RUNTIME_OUTPUT_DIRECTORY
# set(LIBRARY_OUTPUT_DIRECTORY my_lib_output_path)
## 공통 라이브러리, 패키지
# find_package(Boost 1.60 COMPONENT system filesystem thread REQUIRED)
## ??
# target_link_libraries(hoGarden ${SOURCE_FILES})
## 링크 라이브러리
# LINK_LIBRARIES(boost_thread boost_asio)
## 공통 헤더 파일, 패키지
# find_package(Boost 1.60 COMPONENTS system filesystem thread REQUIRED)
# include_directories($(Boost_INCLUDE_DIRS))
## ??
# set(CMAKE_EXE_LINKER_FLAGS "-static -Wl, --gc-sections")
