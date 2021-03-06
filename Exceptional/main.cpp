// Exceptional.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "RangeInt.h"	

int main()
{
try
{
	RangeInt test( 5, 17);
	test.setValue(22);
}
catch (std::out_of_range &error)
{
	error.what();
}

	try
{
	RangeInt test(17, 5);
	test.setValue(3);
}
	catch(std::out_of_range &error)
	{
		error.what();
	}

	try
	{
		RangeInt test( 0, 10);
		test.setValue(3);
	}
	catch (std::out_of_range &error)
	{
		error.what();
	}

	try
	{
		RangeInt test(0, 5);
		test.setValue(10L);
	}
	catch (std::out_of_range &error)
	{
		error.what();
	}

catch(...)
{
}
    return 0;
}

