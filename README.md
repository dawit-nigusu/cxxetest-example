# cxxetest-example
this  is a  small  codebase  for  for expermenting on  c++ unittesting  using cxxtest framework 
1. Create a test suite header file:

  in my case it is MyTestSuite.h:

2. Generate the tests file:

 # cxxtestgen --error-printer -o tests.cpp MyTestSuite.h

3. Compile and run!

  # g++ -o main tests.cpp
  # ./main
  Running cxxtest tests (1 test).OK!
