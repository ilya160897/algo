add_library(custom_graph graph.cpp)
add_catch(bin/graph test.cpp graph.cpp)
