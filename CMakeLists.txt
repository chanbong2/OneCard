cmake_minimum_required(VERSION 3.30)
project(OneCard)

set(CMAKE_CXX_STANDARD 14)

add_executable(OneCard main.cpp
        rule/include/Game.hpp
        include/main.hpp
        rule/include/Card.hpp
        rule/include/Deck.hpp
        rule/include/Enum.hpp
        rule/include/Player.hpp
        rule/src/Card.cpp
        rule/src/Deck.cpp
        rule/src/Game.cpp
        rule/src/Player.cpp
        src/main.cpp)
