/* author: Dawit Nigusu
   position: iCog-Labs intern */

 #include <cxxtest/TestSuite.h>

  class MyTestSuite : public CxxTest::TestSuite
  {
  public:
      void testAddition( void )
      {
	 
          TS_ASSERT( 1 + 1 > 1 );
          TS_ASSERT_EQUALS( 1 + 1, 2);
      }

  public:
      void testSubtraction( void )
      {
          TS_ASSERT( 1 - 1 < 1 );
          TS_ASSERT_EQUALS( 1 - 1, 0);

      }

  public:
      void testEqual(void)
	{
	    int a = 3;
	    TS_ASSERT_EQUALS(a,2);
 	}
  public:
	void testString(void)
      {
	 char hell[] = "hello world";
	  TS_ASSERT_EQUALS(hell, "hello world");
      }
  };

