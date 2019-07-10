

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Jul 10 10:26:26 2019
 */
/* Compiler settings for Com_leak.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __Com_leak_i_h__
#define __Com_leak_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ICLeak_Test_FWD_DEFINED__
#define __ICLeak_Test_FWD_DEFINED__
typedef interface ICLeak_Test ICLeak_Test;
#endif 	/* __ICLeak_Test_FWD_DEFINED__ */


#ifndef __CLeak_Test_FWD_DEFINED__
#define __CLeak_Test_FWD_DEFINED__

#ifdef __cplusplus
typedef class CLeak_Test CLeak_Test;
#else
typedef struct CLeak_Test CLeak_Test;
#endif /* __cplusplus */

#endif 	/* __CLeak_Test_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ICLeak_Test_INTERFACE_DEFINED__
#define __ICLeak_Test_INTERFACE_DEFINED__

/* interface ICLeak_Test */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICLeak_Test;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BF9E7870-EEDA-4653-B3A7-3D59FC404DE0")
    ICLeak_Test : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Test_Leak( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ICLeak_TestVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICLeak_Test * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICLeak_Test * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICLeak_Test * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICLeak_Test * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICLeak_Test * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICLeak_Test * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICLeak_Test * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Test_Leak )( 
            ICLeak_Test * This);
        
        END_INTERFACE
    } ICLeak_TestVtbl;

    interface ICLeak_Test
    {
        CONST_VTBL struct ICLeak_TestVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICLeak_Test_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICLeak_Test_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICLeak_Test_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICLeak_Test_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICLeak_Test_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICLeak_Test_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICLeak_Test_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICLeak_Test_Test_Leak(This)	\
    ( (This)->lpVtbl -> Test_Leak(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICLeak_Test_INTERFACE_DEFINED__ */



#ifndef __Com_leakLib_LIBRARY_DEFINED__
#define __Com_leakLib_LIBRARY_DEFINED__

/* library Com_leakLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_Com_leakLib;

EXTERN_C const CLSID CLSID_CLeak_Test;

#ifdef __cplusplus

class DECLSPEC_UUID("FFADF853-955D-450C-9CCE-1597849973D1")
CLeak_Test;
#endif
#endif /* __Com_leakLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


