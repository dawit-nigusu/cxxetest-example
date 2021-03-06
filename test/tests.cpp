

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_MyTestSuite_init = false;
#include "MyTestSuite.h"

static MyTestSuite suite_MyTestSuite;

static CxxTest::List Tests_MyTestSuite = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_MyTestSuite( "MyTestSuite.h", 3, "MyTestSuite", suite_MyTestSuite, Tests_MyTestSuite );

static class TestDescription_suite_MyTestSuite_testAddition : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testAddition() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 6, "testAddition" ) {}
 void runTest() { suite_MyTestSuite.testAddition(); }
} testDescription_suite_MyTestSuite_testAddition;

static class TestDescription_suite_MyTestSuite_testSubtraction : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testSubtraction() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 14, "testSubtraction" ) {}
 void runTest() { suite_MyTestSuite.testSubtraction(); }
} testDescription_suite_MyTestSuite_testSubtraction;

static class TestDescription_suite_MyTestSuite_testEqual : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testEqual() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 22, "testEqual" ) {}
 void runTest() { suite_MyTestSuite.testEqual(); }
} testDescription_suite_MyTestSuite_testEqual;

static class TestDescription_suite_MyTestSuite_testLink : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_MyTestSuite_testLink() : CxxTest::RealTestDescription( Tests_MyTestSuite, suiteDescription_MyTestSuite, 28, "testLink" ) {}
 void runTest() { suite_MyTestSuite.testLink(); }
} testDescription_suite_MyTestSuite_testLink;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
