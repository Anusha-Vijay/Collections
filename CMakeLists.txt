cmake_minimum_required(VERSION 3.8)
project(Collections)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Node.h LinkedLists.h NodeDLinked.h DoublyLinkedList.h ILinkedLists.h Stack.h IStack.h)
add_executable(Collections ${SOURCE_FILES})