// dllmain.h : 模块类的声明。

class CCom_leakModule : public ATL::CAtlDllModuleT< CCom_leakModule >
{
public :
	DECLARE_LIBID(LIBID_Com_leakLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_COM_LEAK, "{26337AF4-236C-489F-990F-6425A98EC1FE}")
};

extern class CCom_leakModule _AtlModule;
