project(polux)
cmake_minimum_required(VERSION 2.6)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(polux_SRCS
    adjective.cpp
    adverb.cpp
    dictionnary.cpp
    main.cpp
    nominalgroup.cpp
    noun.cpp
    object.cpp
    polux.cpp
    propertie.cpp
    sentence.cpp
    sentencepattern.cpp
    thing.cpp
    thingsindex.cpp
    verbalgroup.cpp
    verb.cpp
    word.cpp
    wordgroup.cpp
  )
qt4_automoc(${polux_SRCS})
add_executable(polux ${polux_SRCS})
target_link_libraries(polux ${QT_QTCORE_LIBRARY})

install(TARGETS polux RUNTIME DESTINATION bin)
