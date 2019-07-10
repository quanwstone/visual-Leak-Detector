// CLeak_Test.cpp : CCLeak_Test 的实现

#include "stdafx.h"
#include "CLeak_Test.h"


// CCLeak_Test



STDMETHODIMP CCLeak_Test::Test_Leak(void)
{
	// TODO: 在此添加实现代码
	char *buf = new char[1024];

	return S_OK;
}
