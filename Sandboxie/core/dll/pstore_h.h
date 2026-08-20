

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for pstore.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0628 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __pstore_h_h__
#define __pstore_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IEnumPStoreItems_FWD_DEFINED__
#define __IEnumPStoreItems_FWD_DEFINED__
typedef interface IEnumPStoreItems IEnumPStoreItems;

#endif 	/* __IEnumPStoreItems_FWD_DEFINED__ */


#ifndef __IEnumPStoreTypes_FWD_DEFINED__
#define __IEnumPStoreTypes_FWD_DEFINED__
typedef interface IEnumPStoreTypes IEnumPStoreTypes;

#endif 	/* __IEnumPStoreTypes_FWD_DEFINED__ */


#ifndef __IPStore_FWD_DEFINED__
#define __IPStore_FWD_DEFINED__
typedef interface IPStore IPStore;

#endif 	/* __IPStore_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_pstore_0000_0000 */
/* [local] */ 

#define PST_KEY_CURRENT_USER    0
#define PST_KEY_LOCAL_MACHINE   1
#define PST_E_OK                     0x00000000L
#define PST_E_TYPE_EXISTS            0x800C0004L
#define PST_E_TYPE_NO_EXISTS		0x800C0005L
#define PST_E_ITEM_EXISTS            0x800C000FL
#define PST_E_ITEM_NO_EXISTS		0x800C0010L
#define PST_NO_OVERWRITE             0x00000002L
#define PST_UNRESTRICTED_ITEMDATA    0x00000004L
#define PST_AUTHENTICODE        1
#define PST_BINARY_CHECK        2
#define PST_SECURITY_DESCRIPTOR 4
typedef DWORD PST_ACCESSMODE;

typedef DWORD PST_ACCESSCLAUSETYPE;

typedef DWORD PST_KEY;

typedef DWORD PST_PROVIDERCAPABILITIES;

typedef GUID PST_PROVIDERID;

typedef GUID *PPST_PROVIDERID;

typedef struct _PST_PROVIDERINFO
    {
    DWORD cbSize;
    PST_PROVIDERID ID;
    PST_PROVIDERCAPABILITIES Capabilities;
    LPWSTR szProviderName;
    } 	PST_PROVIDERINFO;

typedef struct _PST_PROVIDERINFO *PPST_PROVIDERINFO;

typedef /* [public][public][public][public][public] */ struct __MIDL___MIDL_itf_pstore_0000_0000_0001
    {
    DWORD cbSize;
    PST_ACCESSCLAUSETYPE ClauseType;
    DWORD cbClauseData;
    BYTE *pbClauseData;
    } 	PST_ACCESSCLAUSE;

typedef struct __MIDL___MIDL_itf_pstore_0000_0000_0001 *PPST_ACCESSCLAUSE;

typedef /* [public][public][public][public][public][public] */ struct __MIDL___MIDL_itf_pstore_0000_0000_0002
    {
    DWORD cbSize;
    PST_ACCESSMODE AccessModeFlags;
    DWORD cClauses;
    PST_ACCESSCLAUSE *rgClauses;
    } 	PST_ACCESSRULE;

typedef struct __MIDL___MIDL_itf_pstore_0000_0000_0002 *PPST_ACCESSRULE;

typedef /* [public] */ struct __MIDL___MIDL_itf_pstore_0000_0000_0003
    {
    DWORD cbSize;
    DWORD cClause;
    PST_ACCESSRULE *rgRules;
    } 	PST_ACCESSRULESET;

typedef struct __MIDL___MIDL_itf_pstore_0000_0000_0003 *PPST_ACCESSRULESET;

typedef /* [public] */ struct __MIDL___MIDL_itf_pstore_0000_0000_0004
    {
    DWORD cbSize;
    LPWSTR szDisplayName;
    } 	PST_TYPEINFO;

typedef struct __MIDL___MIDL_itf_pstore_0000_0000_0004 *PPST_TYPEINFO;

typedef /* [public] */ struct __MIDL___MIDL_itf_pstore_0000_0000_0005
    {
    DWORD cbSize;
    DWORD dwPromptFlags;
    DWORD *hwndApp;
    LPCWSTR szPrompt;
    } 	PST_PROMPTINFO;

typedef struct __MIDL___MIDL_itf_pstore_0000_0000_0005 *PPST_PROMPTINFO;



extern RPC_IF_HANDLE __MIDL_itf_pstore_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_pstore_0000_0000_v0_0_s_ifspec;

#ifndef __IEnumPStoreItems_INTERFACE_DEFINED__
#define __IEnumPStoreItems_INTERFACE_DEFINED__

/* interface IEnumPStoreItems */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumPStoreItems;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C83B307-0B70-4726-8F75-396EBBDAA401")
    IEnumPStoreItems : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ DWORD celt,
            /* [in] */ LPWSTR *rgelt,
            /* [in] */ DWORD *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ DWORD celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [in] */ IEnumPStoreItems **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumPStoreItemsVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumPStoreItems * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumPStoreItems * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumPStoreItems * This);
        
        DECLSPEC_XFGVIRT(IEnumPStoreItems, Next)
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumPStoreItems * This,
            /* [in] */ DWORD celt,
            /* [in] */ LPWSTR *rgelt,
            /* [in] */ DWORD *pceltFetched);
        
        DECLSPEC_XFGVIRT(IEnumPStoreItems, Skip)
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumPStoreItems * This,
            /* [in] */ DWORD celt);
        
        DECLSPEC_XFGVIRT(IEnumPStoreItems, Reset)
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumPStoreItems * This);
        
        DECLSPEC_XFGVIRT(IEnumPStoreItems, Clone)
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumPStoreItems * This,
            /* [in] */ IEnumPStoreItems **ppenum);
        
        END_INTERFACE
    } IEnumPStoreItemsVtbl;

    interface IEnumPStoreItems
    {
        CONST_VTBL struct IEnumPStoreItemsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumPStoreItems_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumPStoreItems_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumPStoreItems_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumPStoreItems_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumPStoreItems_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumPStoreItems_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumPStoreItems_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumPStoreItems_INTERFACE_DEFINED__ */


#ifndef __IEnumPStoreTypes_INTERFACE_DEFINED__
#define __IEnumPStoreTypes_INTERFACE_DEFINED__

/* interface IEnumPStoreTypes */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IEnumPStoreTypes;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C83B307-0B70-4726-8F75-396EBBDAA402")
    IEnumPStoreTypes : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ DWORD celt,
            /* [in] */ GUID *rgelt,
            /* [in] */ DWORD *pceltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ DWORD celt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [in] */ IEnumPStoreTypes **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumPStoreTypesVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumPStoreTypes * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumPStoreTypes * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumPStoreTypes * This);
        
        DECLSPEC_XFGVIRT(IEnumPStoreTypes, Next)
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumPStoreTypes * This,
            /* [in] */ DWORD celt,
            /* [in] */ GUID *rgelt,
            /* [in] */ DWORD *pceltFetched);
        
        DECLSPEC_XFGVIRT(IEnumPStoreTypes, Skip)
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumPStoreTypes * This,
            /* [in] */ DWORD celt);
        
        DECLSPEC_XFGVIRT(IEnumPStoreTypes, Reset)
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumPStoreTypes * This);
        
        DECLSPEC_XFGVIRT(IEnumPStoreTypes, Clone)
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumPStoreTypes * This,
            /* [in] */ IEnumPStoreTypes **ppenum);
        
        END_INTERFACE
    } IEnumPStoreTypesVtbl;

    interface IEnumPStoreTypes
    {
        CONST_VTBL struct IEnumPStoreTypesVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumPStoreTypes_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumPStoreTypes_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumPStoreTypes_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumPStoreTypes_Next(This,celt,rgelt,pceltFetched)	\
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) ) 

#define IEnumPStoreTypes_Skip(This,celt)	\
    ( (This)->lpVtbl -> Skip(This,celt) ) 

#define IEnumPStoreTypes_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumPStoreTypes_Clone(This,ppenum)	\
    ( (This)->lpVtbl -> Clone(This,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumPStoreTypes_INTERFACE_DEFINED__ */


#ifndef __IPStore_INTERFACE_DEFINED__
#define __IPStore_INTERFACE_DEFINED__

/* interface IPStore */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4C83B307-0B70-4726-8F75-396EBBDAA403")
    IPStore : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetInfo( 
            /* [in] */ PPST_PROVIDERINFO *ppProperties) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetProvParam( 
            /* [in] */ DWORD dwParam,
            /* [out] */ DWORD *pcbData,
            /* [out] */ BYTE **ppbData,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetProvParam( 
            /* [in] */ DWORD dwParam,
            /* [in] */ DWORD cbData,
            /* [in] */ BYTE *pbData,
            /* [in] */ DWORD *dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateType( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ PPST_TYPEINFO pInfo,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTypeInfo( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ PPST_TYPEINFO **ppInfo,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteType( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateSubtype( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ PPST_TYPEINFO pInfo,
            /* [in] */ PPST_ACCESSRULESET pRules,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSubtypeInfo( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ PPST_TYPEINFO **ppInfo,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteSubtype( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadAccessRuleset( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ PPST_TYPEINFO pInfo,
            /* [in] */ PPST_ACCESSRULESET **ppRules,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteAccessRuleset( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ PPST_TYPEINFO pInfo,
            /* [in] */ PPST_ACCESSRULESET pRules,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumTypes( 
            /* [in] */ PST_KEY Key,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IEnumPStoreTypes **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumSubtypes( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IEnumPStoreTypes **ppenum) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DeleteItem( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubType,
            /* [in] */ LPCWSTR szItemName,
            /* [in] */ PPST_PROMPTINFO pPromptInfo,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReadItem( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ LPCWSTR szItemName,
            /* [in] */ DWORD *cbData,
            /* [in] */ BYTE **ppbData,
            /* [in] */ PPST_PROMPTINFO pPromptInfo,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE WriteItem( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ LPCWSTR szItemName,
            /* [in] */ DWORD cbData,
            /* [size_is][in] */ BYTE *pbData,
            /* [in] */ PPST_PROMPTINFO pPromptInfo,
            /* [in] */ DWORD dwDefaultConfirmationStyle,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OpenItem( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ LPCWSTR szItemName,
            /* [in] */ PST_ACCESSMODE ModeFlags,
            /* [in] */ PPST_PROMPTINFO pProomptInfo,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CloseItem( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ LPCWSTR *szItemName,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE EnumItems( 
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IEnumPStoreItems **ppenum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPStoreVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPStore * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPStore * This);
        
        DECLSPEC_XFGVIRT(IPStore, GetInfo)
        HRESULT ( STDMETHODCALLTYPE *GetInfo )( 
            IPStore * This,
            /* [in] */ PPST_PROVIDERINFO *ppProperties);
        
        DECLSPEC_XFGVIRT(IPStore, GetProvParam)
        HRESULT ( STDMETHODCALLTYPE *GetProvParam )( 
            IPStore * This,
            /* [in] */ DWORD dwParam,
            /* [out] */ DWORD *pcbData,
            /* [out] */ BYTE **ppbData,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, SetProvParam)
        HRESULT ( STDMETHODCALLTYPE *SetProvParam )( 
            IPStore * This,
            /* [in] */ DWORD dwParam,
            /* [in] */ DWORD cbData,
            /* [in] */ BYTE *pbData,
            /* [in] */ DWORD *dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, CreateType)
        HRESULT ( STDMETHODCALLTYPE *CreateType )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ PPST_TYPEINFO pInfo,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ PPST_TYPEINFO **ppInfo,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, DeleteType)
        HRESULT ( STDMETHODCALLTYPE *DeleteType )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, CreateSubtype)
        HRESULT ( STDMETHODCALLTYPE *CreateSubtype )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ PPST_TYPEINFO pInfo,
            /* [in] */ PPST_ACCESSRULESET pRules,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, GetSubtypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetSubtypeInfo )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ PPST_TYPEINFO **ppInfo,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, DeleteSubtype)
        HRESULT ( STDMETHODCALLTYPE *DeleteSubtype )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, ReadAccessRuleset)
        HRESULT ( STDMETHODCALLTYPE *ReadAccessRuleset )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ PPST_TYPEINFO pInfo,
            /* [in] */ PPST_ACCESSRULESET **ppRules,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, WriteAccessRuleset)
        HRESULT ( STDMETHODCALLTYPE *WriteAccessRuleset )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ const GUID *pSubtype,
            /* [in] */ PPST_TYPEINFO pInfo,
            /* [in] */ PPST_ACCESSRULESET pRules,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, EnumTypes)
        HRESULT ( STDMETHODCALLTYPE *EnumTypes )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IEnumPStoreTypes **ppenum);
        
        DECLSPEC_XFGVIRT(IPStore, EnumSubtypes)
        HRESULT ( STDMETHODCALLTYPE *EnumSubtypes )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pType,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IEnumPStoreTypes **ppenum);
        
        DECLSPEC_XFGVIRT(IPStore, DeleteItem)
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubType,
            /* [in] */ LPCWSTR szItemName,
            /* [in] */ PPST_PROMPTINFO pPromptInfo,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, ReadItem)
        HRESULT ( STDMETHODCALLTYPE *ReadItem )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ LPCWSTR szItemName,
            /* [in] */ DWORD *cbData,
            /* [in] */ BYTE **ppbData,
            /* [in] */ PPST_PROMPTINFO pPromptInfo,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, WriteItem)
        HRESULT ( STDMETHODCALLTYPE *WriteItem )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ LPCWSTR szItemName,
            /* [in] */ DWORD cbData,
            /* [size_is][in] */ BYTE *pbData,
            /* [in] */ PPST_PROMPTINFO pPromptInfo,
            /* [in] */ DWORD dwDefaultConfirmationStyle,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, OpenItem)
        HRESULT ( STDMETHODCALLTYPE *OpenItem )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ LPCWSTR szItemName,
            /* [in] */ PST_ACCESSMODE ModeFlags,
            /* [in] */ PPST_PROMPTINFO pProomptInfo,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, CloseItem)
        HRESULT ( STDMETHODCALLTYPE *CloseItem )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ LPCWSTR *szItemName,
            /* [in] */ DWORD dwFlags);
        
        DECLSPEC_XFGVIRT(IPStore, EnumItems)
        HRESULT ( STDMETHODCALLTYPE *EnumItems )( 
            IPStore * This,
            /* [in] */ PST_KEY Key,
            /* [in] */ const GUID *pItemType,
            /* [in] */ const GUID *pItemSubtype,
            /* [in] */ DWORD dwFlags,
            /* [in] */ IEnumPStoreItems **ppenum);
        
        END_INTERFACE
    } IPStoreVtbl;

    interface IPStore
    {
        CONST_VTBL struct IPStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPStore_GetInfo(This,ppProperties)	\
    ( (This)->lpVtbl -> GetInfo(This,ppProperties) ) 

#define IPStore_GetProvParam(This,dwParam,pcbData,ppbData,dwFlags)	\
    ( (This)->lpVtbl -> GetProvParam(This,dwParam,pcbData,ppbData,dwFlags) ) 

#define IPStore_SetProvParam(This,dwParam,cbData,pbData,dwFlags)	\
    ( (This)->lpVtbl -> SetProvParam(This,dwParam,cbData,pbData,dwFlags) ) 

#define IPStore_CreateType(This,Key,pType,pInfo,dwFlags)	\
    ( (This)->lpVtbl -> CreateType(This,Key,pType,pInfo,dwFlags) ) 

#define IPStore_GetTypeInfo(This,Key,pType,ppInfo,dwFlags)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,Key,pType,ppInfo,dwFlags) ) 

#define IPStore_DeleteType(This,Key,pType,dwFlags)	\
    ( (This)->lpVtbl -> DeleteType(This,Key,pType,dwFlags) ) 

#define IPStore_CreateSubtype(This,Key,pType,pSubtype,pInfo,pRules,dwFlags)	\
    ( (This)->lpVtbl -> CreateSubtype(This,Key,pType,pSubtype,pInfo,pRules,dwFlags) ) 

#define IPStore_GetSubtypeInfo(This,Key,pType,pSubtype,ppInfo,dwFlags)	\
    ( (This)->lpVtbl -> GetSubtypeInfo(This,Key,pType,pSubtype,ppInfo,dwFlags) ) 

#define IPStore_DeleteSubtype(This,Key,pType,pSubtype,dwFlags)	\
    ( (This)->lpVtbl -> DeleteSubtype(This,Key,pType,pSubtype,dwFlags) ) 

#define IPStore_ReadAccessRuleset(This,Key,pType,pSubtype,pInfo,ppRules,dwFlags)	\
    ( (This)->lpVtbl -> ReadAccessRuleset(This,Key,pType,pSubtype,pInfo,ppRules,dwFlags) ) 

#define IPStore_WriteAccessRuleset(This,Key,pType,pSubtype,pInfo,pRules,dwFlags)	\
    ( (This)->lpVtbl -> WriteAccessRuleset(This,Key,pType,pSubtype,pInfo,pRules,dwFlags) ) 

#define IPStore_EnumTypes(This,Key,dwFlags,ppenum)	\
    ( (This)->lpVtbl -> EnumTypes(This,Key,dwFlags,ppenum) ) 

#define IPStore_EnumSubtypes(This,Key,pType,dwFlags,ppenum)	\
    ( (This)->lpVtbl -> EnumSubtypes(This,Key,pType,dwFlags,ppenum) ) 

#define IPStore_DeleteItem(This,Key,pItemType,pItemSubType,szItemName,pPromptInfo,dwFlags)	\
    ( (This)->lpVtbl -> DeleteItem(This,Key,pItemType,pItemSubType,szItemName,pPromptInfo,dwFlags) ) 

#define IPStore_ReadItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,ppbData,pPromptInfo,dwFlags)	\
    ( (This)->lpVtbl -> ReadItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,ppbData,pPromptInfo,dwFlags) ) 

#define IPStore_WriteItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,pbData,pPromptInfo,dwDefaultConfirmationStyle,dwFlags)	\
    ( (This)->lpVtbl -> WriteItem(This,Key,pItemType,pItemSubtype,szItemName,cbData,pbData,pPromptInfo,dwDefaultConfirmationStyle,dwFlags) ) 

#define IPStore_OpenItem(This,Key,pItemType,pItemSubtype,szItemName,ModeFlags,pProomptInfo,dwFlags)	\
    ( (This)->lpVtbl -> OpenItem(This,Key,pItemType,pItemSubtype,szItemName,ModeFlags,pProomptInfo,dwFlags) ) 

#define IPStore_CloseItem(This,Key,pItemType,pItemSubtype,szItemName,dwFlags)	\
    ( (This)->lpVtbl -> CloseItem(This,Key,pItemType,pItemSubtype,szItemName,dwFlags) ) 

#define IPStore_EnumItems(This,Key,pItemType,pItemSubtype,dwFlags,ppenum)	\
    ( (This)->lpVtbl -> EnumItems(This,Key,pItemType,pItemSubtype,dwFlags,ppenum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPStore_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


