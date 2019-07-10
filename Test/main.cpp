#include<stdio.h>
extern "C"
{
#include"Com_leak_i.h"
#include"Com_leak_i.c"
};

#include"vld.h"

int main(int argc,char *argv[])
{
	//char *buf = new char[1024];
	ICLeak_Test *p = nullptr;

	CoInitialize(NULL);

	HRESULT hr = CoCreateInstance(CLSID_CLeak_Test,NULL,CLSCTX_INPROC_SERVER,IID_ICLeak_Test,(void **)&p);
	if(FAILED(hr))
	{
		printf("CoCreateInstance Failed.\n");
	}
	p->AddRef();

	p->Test_Leak();

	CoUninitialize();

	return 0;
}