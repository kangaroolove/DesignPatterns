cmake_minimum_required(VERSION 3.14)

project(DesignPattern LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(StrategyPattern)
add_subdirectory(ObserverPatternJavaUtil)
add_subdirectory(ObserverPattern)
add_subdirectory(DecoratorPattern)
add_subdirectory(FactoryPattern)
add_subdirectory(AbstractFactoryPattern)
add_subdirectory(SingletonPattern)
add_subdirectory(CommandPattern)
add_subdirectory(AdapterPattern)
add_subdirectory(FacadePattern)
add_subdirectory(TemplateMethod)
add_subdirectory(IteratorPattern)