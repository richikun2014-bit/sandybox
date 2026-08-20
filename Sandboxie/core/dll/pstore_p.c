

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#include "ndr64types.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "pstore_h.h"

#define TYPE_FORMAT_STRING_SIZE   279                               
#define PROC_FORMAT_STRING_SIZE   1419                              
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

typedef struct _pstore_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } pstore_MIDL_TYPE_FORMAT_STRING;

typedef struct _pstore_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } pstore_MIDL_PROC_FORMAT_STRING;

typedef struct _pstore_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } pstore_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax_2_0 = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax_1_0 = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};

#if defined(_CONTROL_FLOW_GUARD_XFG)
#define XFG_TRAMPOLINES(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree(pFlags, (ObjectType *)pObject);\
}
#define XFG_TRAMPOLINES64(ObjectType)\
NDR_SHAREABLE unsigned long ObjectType ## _UserSize64_XFG(unsigned long * pFlags, unsigned long Offset, void * pObject)\
{\
return  ObjectType ## _UserSize64(pFlags, Offset, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserMarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserMarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE unsigned char * ObjectType ## _UserUnmarshal64_XFG(unsigned long * pFlags, unsigned char * pBuffer, void * pObject)\
{\
return ObjectType ## _UserUnmarshal64(pFlags, pBuffer, (ObjectType *)pObject);\
}\
NDR_SHAREABLE void ObjectType ## _UserFree64_XFG(unsigned long * pFlags, void * pObject)\
{\
ObjectType ## _UserFree64(pFlags, (ObjectType *)pObject);\
}
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)\
static void* ObjectType ## _bind_XFG(HandleType pObject)\
{\
return ObjectType ## _bind((ObjectType) pObject);\
}\
static void ObjectType ## _unbind_XFG(HandleType pObject, handle_t ServerHandle)\
{\
ObjectType ## _unbind((ObjectType) pObject, ServerHandle);\
}
#define XFG_TRAMPOLINE_FPTR(Function) Function ## _XFG
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol ## _XFG
#else
#define XFG_TRAMPOLINES(ObjectType)
#define XFG_TRAMPOLINES64(ObjectType)
#define XFG_BIND_TRAMPOLINES(HandleType, ObjectType)
#define XFG_TRAMPOLINE_FPTR(Function) Function
#define XFG_TRAMPOLINE_FPTR_DEPENDENT_SYMBOL(Symbol) Symbol
#endif



extern const pstore_MIDL_TYPE_FORMAT_STRING pstore__MIDL_TypeFormatString;
extern const pstore_MIDL_PROC_FORMAT_STRING pstore__MIDL_ProcFormatString;
extern const pstore_MIDL_EXPR_FORMAT_STRING pstore__MIDL_ExprFormatString;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IEnumPStoreItems_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEnumPStoreItems_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IEnumPStoreTypes_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IEnumPStoreTypes_ProxyInfo;

#ifdef __cplusplus
namespace {
#endif

extern const MIDL_STUB_DESC Object_StubDesc;
#ifdef __cplusplus
}
#endif


extern const MIDL_SERVER_INFO IPStore_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IPStore_ProxyInfo;



#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const pstore_MIDL_PROC_FORMAT_STRING pstore__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure Next */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x3 ),	/* 3 */
/*  8 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 10 */	NdrFcShort( 0x24 ),	/* 36 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 26 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 28 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 30 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 32 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 34 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 36 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter pceltFetched */

/* 38 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 40 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 42 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 44 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 46 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 48 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Skip */


	/* Procedure Skip */

/* 50 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 52 */	NdrFcLong( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x4 ),	/* 4 */
/* 58 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 60 */	NdrFcShort( 0x8 ),	/* 8 */
/* 62 */	NdrFcShort( 0x8 ),	/* 8 */
/* 64 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 66 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 68 */	NdrFcShort( 0x0 ),	/* 0 */
/* 70 */	NdrFcShort( 0x0 ),	/* 0 */
/* 72 */	NdrFcShort( 0x0 ),	/* 0 */
/* 74 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */


	/* Parameter celt */

/* 76 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 78 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 80 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */


	/* Return value */

/* 82 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 84 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 86 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Reset */


	/* Procedure Reset */

/* 88 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 90 */	NdrFcLong( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0x5 ),	/* 5 */
/* 96 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x8 ),	/* 8 */
/* 102 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x1,		/* 1 */
/* 104 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 106 */	NdrFcShort( 0x0 ),	/* 0 */
/* 108 */	NdrFcShort( 0x0 ),	/* 0 */
/* 110 */	NdrFcShort( 0x0 ),	/* 0 */
/* 112 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Return value */


	/* Return value */

/* 114 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 116 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 118 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 120 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 122 */	NdrFcLong( 0x0 ),	/* 0 */
/* 126 */	NdrFcShort( 0x6 ),	/* 6 */
/* 128 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 130 */	NdrFcShort( 0x0 ),	/* 0 */
/* 132 */	NdrFcShort( 0x8 ),	/* 8 */
/* 134 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 136 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 138 */	NdrFcShort( 0x0 ),	/* 0 */
/* 140 */	NdrFcShort( 0x0 ),	/* 0 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 146 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 148 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 150 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 152 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 154 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 156 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Next */

/* 158 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 160 */	NdrFcLong( 0x0 ),	/* 0 */
/* 164 */	NdrFcShort( 0x3 ),	/* 3 */
/* 166 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 168 */	NdrFcShort( 0x68 ),	/* 104 */
/* 170 */	NdrFcShort( 0x8 ),	/* 8 */
/* 172 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 174 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 176 */	NdrFcShort( 0x0 ),	/* 0 */
/* 178 */	NdrFcShort( 0x0 ),	/* 0 */
/* 180 */	NdrFcShort( 0x0 ),	/* 0 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter celt */

/* 184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 186 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter rgelt */

/* 190 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 192 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 194 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pceltFetched */

/* 196 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 198 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 200 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 202 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 204 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Clone */

/* 208 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 210 */	NdrFcLong( 0x0 ),	/* 0 */
/* 214 */	NdrFcShort( 0x6 ),	/* 6 */
/* 216 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 218 */	NdrFcShort( 0x0 ),	/* 0 */
/* 220 */	NdrFcShort( 0x8 ),	/* 8 */
/* 222 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 224 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 226 */	NdrFcShort( 0x0 ),	/* 0 */
/* 228 */	NdrFcShort( 0x0 ),	/* 0 */
/* 230 */	NdrFcShort( 0x0 ),	/* 0 */
/* 232 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppenum */

/* 234 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 236 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 238 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 240 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 242 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 244 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetInfo */

/* 246 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 248 */	NdrFcLong( 0x0 ),	/* 0 */
/* 252 */	NdrFcShort( 0x3 ),	/* 3 */
/* 254 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 256 */	NdrFcShort( 0x0 ),	/* 0 */
/* 258 */	NdrFcShort( 0x8 ),	/* 8 */
/* 260 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 262 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 264 */	NdrFcShort( 0x0 ),	/* 0 */
/* 266 */	NdrFcShort( 0x0 ),	/* 0 */
/* 268 */	NdrFcShort( 0x0 ),	/* 0 */
/* 270 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppProperties */

/* 272 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 274 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 276 */	NdrFcShort( 0x50 ),	/* Type Offset=80 */

	/* Return value */

/* 278 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 280 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 282 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetProvParam */

/* 284 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 286 */	NdrFcLong( 0x0 ),	/* 0 */
/* 290 */	NdrFcShort( 0x4 ),	/* 4 */
/* 292 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 294 */	NdrFcShort( 0x10 ),	/* 16 */
/* 296 */	NdrFcShort( 0x51 ),	/* 81 */
/* 298 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 300 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 302 */	NdrFcShort( 0x0 ),	/* 0 */
/* 304 */	NdrFcShort( 0x0 ),	/* 0 */
/* 306 */	NdrFcShort( 0x0 ),	/* 0 */
/* 308 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwParam */

/* 310 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 312 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 314 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pcbData */

/* 316 */	NdrFcShort( 0x2150 ),	/* Flags:  out, base type, simple ref, srv alloc size=8 */
/* 318 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 320 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppbData */

/* 322 */	NdrFcShort( 0x2012 ),	/* Flags:  must free, out, srv alloc size=8 */
/* 324 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 326 */	NdrFcShort( 0x70 ),	/* Type Offset=112 */

	/* Parameter dwFlags */

/* 328 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 330 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 332 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 334 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 336 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 338 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure SetProvParam */

/* 340 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 342 */	NdrFcLong( 0x0 ),	/* 0 */
/* 346 */	NdrFcShort( 0x5 ),	/* 5 */
/* 348 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 350 */	NdrFcShort( 0x45 ),	/* 69 */
/* 352 */	NdrFcShort( 0x8 ),	/* 8 */
/* 354 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 356 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 358 */	NdrFcShort( 0x0 ),	/* 0 */
/* 360 */	NdrFcShort( 0x0 ),	/* 0 */
/* 362 */	NdrFcShort( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter dwParam */

/* 366 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 368 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 370 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter cbData */

/* 372 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 374 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 376 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbData */

/* 378 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 380 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 382 */	0x1,		/* FC_BYTE */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 384 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 386 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 388 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 390 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 392 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 394 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateType */

/* 396 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 398 */	NdrFcLong( 0x0 ),	/* 0 */
/* 402 */	NdrFcShort( 0x6 ),	/* 6 */
/* 404 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 406 */	NdrFcShort( 0x54 ),	/* 84 */
/* 408 */	NdrFcShort( 0x8 ),	/* 8 */
/* 410 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 412 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 414 */	NdrFcShort( 0x0 ),	/* 0 */
/* 416 */	NdrFcShort( 0x0 ),	/* 0 */
/* 418 */	NdrFcShort( 0x0 ),	/* 0 */
/* 420 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 422 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 424 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 426 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 428 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 430 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 432 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pInfo */

/* 434 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 436 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 438 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter dwFlags */

/* 440 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 442 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 444 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 446 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 448 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 450 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetTypeInfo */

/* 452 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 454 */	NdrFcLong( 0x0 ),	/* 0 */
/* 458 */	NdrFcShort( 0x7 ),	/* 7 */
/* 460 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 462 */	NdrFcShort( 0x54 ),	/* 84 */
/* 464 */	NdrFcShort( 0x8 ),	/* 8 */
/* 466 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 468 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 470 */	NdrFcShort( 0x0 ),	/* 0 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	NdrFcShort( 0x0 ),	/* 0 */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 478 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 480 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 482 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 484 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 486 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 488 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ppInfo */

/* 490 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 492 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 494 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter dwFlags */

/* 496 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 498 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 500 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 502 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 504 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 506 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteType */

/* 508 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 510 */	NdrFcLong( 0x0 ),	/* 0 */
/* 514 */	NdrFcShort( 0x8 ),	/* 8 */
/* 516 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 518 */	NdrFcShort( 0x54 ),	/* 84 */
/* 520 */	NdrFcShort( 0x8 ),	/* 8 */
/* 522 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x4,		/* 4 */
/* 524 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 526 */	NdrFcShort( 0x0 ),	/* 0 */
/* 528 */	NdrFcShort( 0x0 ),	/* 0 */
/* 530 */	NdrFcShort( 0x0 ),	/* 0 */
/* 532 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 534 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 536 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 538 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 540 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 542 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 544 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter dwFlags */

/* 546 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 548 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 550 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 552 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 554 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 556 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CreateSubtype */

/* 558 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 560 */	NdrFcLong( 0x0 ),	/* 0 */
/* 564 */	NdrFcShort( 0x9 ),	/* 9 */
/* 566 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 568 */	NdrFcShort( 0x98 ),	/* 152 */
/* 570 */	NdrFcShort( 0x8 ),	/* 8 */
/* 572 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 574 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 576 */	NdrFcShort( 0x0 ),	/* 0 */
/* 578 */	NdrFcShort( 0x0 ),	/* 0 */
/* 580 */	NdrFcShort( 0x0 ),	/* 0 */
/* 582 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 584 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 586 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 588 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 590 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 592 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 594 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pSubtype */

/* 596 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 598 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 600 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pInfo */

/* 602 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 604 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 606 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter pRules */

/* 608 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 610 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 612 */	NdrFcShort( 0xc4 ),	/* Type Offset=196 */

	/* Parameter dwFlags */

/* 614 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 616 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 618 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 620 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 622 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 624 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure GetSubtypeInfo */

/* 626 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 628 */	NdrFcLong( 0x0 ),	/* 0 */
/* 632 */	NdrFcShort( 0xa ),	/* 10 */
/* 634 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 636 */	NdrFcShort( 0x98 ),	/* 152 */
/* 638 */	NdrFcShort( 0x8 ),	/* 8 */
/* 640 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 642 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 644 */	NdrFcShort( 0x0 ),	/* 0 */
/* 646 */	NdrFcShort( 0x0 ),	/* 0 */
/* 648 */	NdrFcShort( 0x0 ),	/* 0 */
/* 650 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 652 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 654 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 656 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 658 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 660 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 662 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pSubtype */

/* 664 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 666 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 668 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter ppInfo */

/* 670 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 672 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 674 */	NdrFcShort( 0x90 ),	/* Type Offset=144 */

	/* Parameter dwFlags */

/* 676 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 678 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 680 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 682 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 684 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 686 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteSubtype */

/* 688 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 690 */	NdrFcLong( 0x0 ),	/* 0 */
/* 694 */	NdrFcShort( 0xb ),	/* 11 */
/* 696 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 698 */	NdrFcShort( 0x98 ),	/* 152 */
/* 700 */	NdrFcShort( 0x8 ),	/* 8 */
/* 702 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x5,		/* 5 */
/* 704 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 706 */	NdrFcShort( 0x0 ),	/* 0 */
/* 708 */	NdrFcShort( 0x0 ),	/* 0 */
/* 710 */	NdrFcShort( 0x0 ),	/* 0 */
/* 712 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 714 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 716 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 718 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 720 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 722 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 724 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pSubtype */

/* 726 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 728 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 730 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter dwFlags */

/* 732 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 734 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 736 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 738 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 740 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 742 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadAccessRuleset */

/* 744 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 746 */	NdrFcLong( 0x0 ),	/* 0 */
/* 750 */	NdrFcShort( 0xc ),	/* 12 */
/* 752 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 754 */	NdrFcShort( 0x98 ),	/* 152 */
/* 756 */	NdrFcShort( 0x8 ),	/* 8 */
/* 758 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 760 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 762 */	NdrFcShort( 0x0 ),	/* 0 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x0 ),	/* 0 */
/* 768 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 770 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 772 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 774 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 776 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 778 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 780 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pSubtype */

/* 782 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 784 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 786 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pInfo */

/* 788 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 790 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 792 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter ppRules */

/* 794 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 796 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 798 */	NdrFcShort( 0xd4 ),	/* Type Offset=212 */

	/* Parameter dwFlags */

/* 800 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 802 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 804 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 806 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 808 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 810 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteAccessRuleset */

/* 812 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 814 */	NdrFcLong( 0x0 ),	/* 0 */
/* 818 */	NdrFcShort( 0xd ),	/* 13 */
/* 820 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 822 */	NdrFcShort( 0x98 ),	/* 152 */
/* 824 */	NdrFcShort( 0x8 ),	/* 8 */
/* 826 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 828 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 830 */	NdrFcShort( 0x0 ),	/* 0 */
/* 832 */	NdrFcShort( 0x0 ),	/* 0 */
/* 834 */	NdrFcShort( 0x0 ),	/* 0 */
/* 836 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 838 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 840 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 842 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 844 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 846 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 848 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pSubtype */

/* 850 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 852 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 854 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pInfo */

/* 856 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 858 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 860 */	NdrFcShort( 0x80 ),	/* Type Offset=128 */

	/* Parameter pRules */

/* 862 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 864 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 866 */	NdrFcShort( 0xc4 ),	/* Type Offset=196 */

	/* Parameter dwFlags */

/* 868 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 870 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 872 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 874 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 876 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 878 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumTypes */

/* 880 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 882 */	NdrFcLong( 0x0 ),	/* 0 */
/* 886 */	NdrFcShort( 0xe ),	/* 14 */
/* 888 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 890 */	NdrFcShort( 0x10 ),	/* 16 */
/* 892 */	NdrFcShort( 0x8 ),	/* 8 */
/* 894 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x4,		/* 4 */
/* 896 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 898 */	NdrFcShort( 0x0 ),	/* 0 */
/* 900 */	NdrFcShort( 0x0 ),	/* 0 */
/* 902 */	NdrFcShort( 0x0 ),	/* 0 */
/* 904 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 906 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 908 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 910 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 912 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 914 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 916 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppenum */

/* 918 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 920 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 922 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 924 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 926 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 928 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumSubtypes */

/* 930 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 932 */	NdrFcLong( 0x0 ),	/* 0 */
/* 936 */	NdrFcShort( 0xf ),	/* 15 */
/* 938 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 940 */	NdrFcShort( 0x54 ),	/* 84 */
/* 942 */	NdrFcShort( 0x8 ),	/* 8 */
/* 944 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 946 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 948 */	NdrFcShort( 0x0 ),	/* 0 */
/* 950 */	NdrFcShort( 0x0 ),	/* 0 */
/* 952 */	NdrFcShort( 0x0 ),	/* 0 */
/* 954 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 956 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 958 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 960 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pType */

/* 962 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 964 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 966 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter dwFlags */

/* 968 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 970 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 972 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppenum */

/* 974 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 976 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 978 */	NdrFcShort( 0x3a ),	/* Type Offset=58 */

	/* Return value */

/* 980 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 982 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 984 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure DeleteItem */

/* 986 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 988 */	NdrFcLong( 0x0 ),	/* 0 */
/* 992 */	NdrFcShort( 0x10 ),	/* 16 */
/* 994 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 996 */	NdrFcShort( 0x98 ),	/* 152 */
/* 998 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1000 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x7,		/* 7 */
/* 1002 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1004 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1006 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1008 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1010 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 1012 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1014 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1016 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemType */

/* 1018 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1020 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1022 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pItemSubType */

/* 1024 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1026 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1028 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter szItemName */

/* 1030 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1032 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1034 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter pPromptInfo */

/* 1036 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1038 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1040 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter dwFlags */

/* 1042 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1044 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1046 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1048 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1050 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1052 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure ReadItem */

/* 1054 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1056 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1060 */	NdrFcShort( 0x11 ),	/* 17 */
/* 1062 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1064 */	NdrFcShort( 0xe1 ),	/* 225 */
/* 1066 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1068 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x9,		/* 9 */
/* 1070 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1072 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1074 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1076 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1078 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 1080 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1082 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1084 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemType */

/* 1086 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1088 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1090 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pItemSubtype */

/* 1092 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1094 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1096 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter szItemName */

/* 1098 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1100 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1102 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter cbData */

/* 1104 */	NdrFcShort( 0x148 ),	/* Flags:  in, base type, simple ref, */
/* 1106 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1108 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppbData */

/* 1110 */	NdrFcShort( 0x200a ),	/* Flags:  must free, in, srv alloc size=8 */
/* 1112 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1114 */	NdrFcShort( 0xfe ),	/* Type Offset=254 */

	/* Parameter pPromptInfo */

/* 1116 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1118 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1120 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter dwFlags */

/* 1122 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1124 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1126 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1128 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1130 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1132 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure WriteItem */

/* 1134 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1136 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1140 */	NdrFcShort( 0x12 ),	/* 18 */
/* 1142 */	NdrFcShort( 0x58 ),	/* X64 Stack size/offset = 88 */
/* 1144 */	NdrFcShort( 0xa8 ),	/* 168 */
/* 1146 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1148 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0xa,		/* 10 */
/* 1150 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 1152 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1154 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1156 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1158 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 1160 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1162 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1164 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemType */

/* 1166 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1168 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1170 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pItemSubtype */

/* 1172 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1174 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1176 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter szItemName */

/* 1178 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1180 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1182 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter cbData */

/* 1184 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1186 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1188 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pbData */

/* 1190 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1192 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1194 */	NdrFcShort( 0x10a ),	/* Type Offset=266 */

	/* Parameter pPromptInfo */

/* 1196 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1198 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1200 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter dwDefaultConfirmationStyle */

/* 1202 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1204 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1206 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter dwFlags */

/* 1208 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1210 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1212 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1214 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1216 */	NdrFcShort( 0x50 ),	/* X64 Stack size/offset = 80 */
/* 1218 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure OpenItem */

/* 1220 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1222 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1226 */	NdrFcShort( 0x13 ),	/* 19 */
/* 1228 */	NdrFcShort( 0x48 ),	/* X64 Stack size/offset = 72 */
/* 1230 */	NdrFcShort( 0xa0 ),	/* 160 */
/* 1232 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1234 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x8,		/* 8 */
/* 1236 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1238 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1240 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1242 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1244 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 1246 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1248 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1250 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemType */

/* 1252 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1254 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1256 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pItemSubtype */

/* 1258 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1260 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1262 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter szItemName */

/* 1264 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1266 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1268 */	NdrFcShort( 0xe2 ),	/* Type Offset=226 */

	/* Parameter ModeFlags */

/* 1270 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1272 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1274 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pProomptInfo */

/* 1276 */	NdrFcShort( 0x10b ),	/* Flags:  must size, must free, in, simple ref, */
/* 1278 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1280 */	NdrFcShort( 0xe8 ),	/* Type Offset=232 */

	/* Parameter dwFlags */

/* 1282 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1284 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1286 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1288 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1290 */	NdrFcShort( 0x40 ),	/* X64 Stack size/offset = 64 */
/* 1292 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure CloseItem */

/* 1294 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1296 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1300 */	NdrFcShort( 0x14 ),	/* 20 */
/* 1302 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1304 */	NdrFcShort( 0x98 ),	/* 152 */
/* 1306 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1308 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1310 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1312 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1314 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1316 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1318 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 1320 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1322 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1324 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemType */

/* 1326 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1328 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1330 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pItemSubtype */

/* 1332 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1334 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1336 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter szItemName */

/* 1338 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 1340 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1342 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Parameter dwFlags */

/* 1344 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1346 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1348 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Return value */

/* 1350 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1352 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1354 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure EnumItems */

/* 1356 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 1358 */	NdrFcLong( 0x0 ),	/* 0 */
/* 1362 */	NdrFcShort( 0x15 ),	/* 21 */
/* 1364 */	NdrFcShort( 0x38 ),	/* X64 Stack size/offset = 56 */
/* 1366 */	NdrFcShort( 0x98 ),	/* 152 */
/* 1368 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1370 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x6,		/* 6 */
/* 1372 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 1374 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1376 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1378 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1380 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter Key */

/* 1382 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1384 */	NdrFcShort( 0x8 ),	/* X64 Stack size/offset = 8 */
/* 1386 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter pItemType */

/* 1388 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1390 */	NdrFcShort( 0x10 ),	/* X64 Stack size/offset = 16 */
/* 1392 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter pItemSubtype */

/* 1394 */	NdrFcShort( 0x10a ),	/* Flags:  must free, in, simple ref, */
/* 1396 */	NdrFcShort( 0x18 ),	/* X64 Stack size/offset = 24 */
/* 1398 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Parameter dwFlags */

/* 1400 */	NdrFcShort( 0x48 ),	/* Flags:  in, base type, */
/* 1402 */	NdrFcShort( 0x20 ),	/* X64 Stack size/offset = 32 */
/* 1404 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Parameter ppenum */

/* 1406 */	NdrFcShort( 0x200b ),	/* Flags:  must size, must free, in, srv alloc size=8 */
/* 1408 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 1410 */	NdrFcShort( 0xe ),	/* Type Offset=14 */

	/* Return value */

/* 1412 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 1414 */	NdrFcShort( 0x30 ),	/* X64 Stack size/offset = 48 */
/* 1416 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const pstore_MIDL_TYPE_FORMAT_STRING pstore__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/*  8 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 10 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 12 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 14 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 16 */	NdrFcShort( 0x2 ),	/* Offset= 2 (18) */
/* 18 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 20 */	NdrFcLong( 0x4c83b307 ),	/* 1283699463 */
/* 24 */	NdrFcShort( 0xb70 ),	/* 2928 */
/* 26 */	NdrFcShort( 0x4726 ),	/* 18214 */
/* 28 */	0x8f,		/* 143 */
			0x75,		/* 117 */
/* 30 */	0x39,		/* 57 */
			0x6e,		/* 110 */
/* 32 */	0xbb,		/* 187 */
			0xda,		/* 218 */
/* 34 */	0xa4,		/* 164 */
			0x1,		/* 1 */
/* 36 */	
			0x11, 0x0,	/* FC_RP */
/* 38 */	NdrFcShort( 0x8 ),	/* Offset= 8 (46) */
/* 40 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 46 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 48 */	NdrFcShort( 0x10 ),	/* 16 */
/* 50 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 52 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 54 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (40) */
			0x5b,		/* FC_END */
/* 58 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 60 */	NdrFcShort( 0x2 ),	/* Offset= 2 (62) */
/* 62 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 64 */	NdrFcLong( 0x4c83b307 ),	/* 1283699463 */
/* 68 */	NdrFcShort( 0xb70 ),	/* 2928 */
/* 70 */	NdrFcShort( 0x4726 ),	/* 18214 */
/* 72 */	0x8f,		/* 143 */
			0x75,		/* 117 */
/* 74 */	0x39,		/* 57 */
			0x6e,		/* 110 */
/* 76 */	0xbb,		/* 187 */
			0xda,		/* 218 */
/* 78 */	0xa4,		/* 164 */
			0x2,		/* 2 */
/* 80 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 82 */	NdrFcShort( 0x2 ),	/* Offset= 2 (84) */
/* 84 */	
			0x12, 0x0,	/* FC_UP */
/* 86 */	NdrFcShort( 0x2 ),	/* Offset= 2 (88) */
/* 88 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 90 */	NdrFcShort( 0x20 ),	/* 32 */
/* 92 */	NdrFcShort( 0x0 ),	/* 0 */
/* 94 */	NdrFcShort( 0xa ),	/* Offset= 10 (104) */
/* 96 */	0x8,		/* FC_LONG */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 98 */	0x0,		/* 0 */
			NdrFcShort( 0xffcb ),	/* Offset= -53 (46) */
			0x8,		/* FC_LONG */
/* 102 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 104 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 106 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 108 */	
			0x11, 0xc,	/* FC_RP [alloced_on_stack] [simple_pointer] */
/* 110 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 112 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 114 */	NdrFcShort( 0x2 ),	/* Offset= 2 (116) */
/* 116 */	
			0x13, 0x8,	/* FC_OP [simple_pointer] */
/* 118 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 120 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 122 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 124 */	
			0x11, 0x0,	/* FC_RP */
/* 126 */	NdrFcShort( 0x2 ),	/* Offset= 2 (128) */
/* 128 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 130 */	NdrFcShort( 0x10 ),	/* 16 */
/* 132 */	NdrFcShort( 0x0 ),	/* 0 */
/* 134 */	NdrFcShort( 0x6 ),	/* Offset= 6 (140) */
/* 136 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 138 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 140 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 142 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 144 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 146 */	NdrFcShort( 0x2 ),	/* Offset= 2 (148) */
/* 148 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 150 */	NdrFcShort( 0x2 ),	/* Offset= 2 (152) */
/* 152 */	
			0x12, 0x0,	/* FC_UP */
/* 154 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (128) */
/* 156 */	
			0x11, 0x0,	/* FC_RP */
/* 158 */	NdrFcShort( 0x26 ),	/* Offset= 38 (196) */
/* 160 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 162 */	NdrFcShort( 0x18 ),	/* 24 */
/* 164 */	NdrFcShort( 0x0 ),	/* 0 */
/* 166 */	NdrFcShort( 0x8 ),	/* Offset= 8 (174) */
/* 168 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 170 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 172 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 174 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 176 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 178 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 180 */	NdrFcShort( 0x18 ),	/* 24 */
/* 182 */	NdrFcShort( 0x0 ),	/* 0 */
/* 184 */	NdrFcShort( 0x8 ),	/* Offset= 8 (192) */
/* 186 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 188 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 190 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 192 */	
			0x12, 0x0,	/* FC_UP */
/* 194 */	NdrFcShort( 0xffde ),	/* Offset= -34 (160) */
/* 196 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 198 */	NdrFcShort( 0x10 ),	/* 16 */
/* 200 */	NdrFcShort( 0x0 ),	/* 0 */
/* 202 */	NdrFcShort( 0x6 ),	/* Offset= 6 (208) */
/* 204 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 206 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 208 */	
			0x12, 0x0,	/* FC_UP */
/* 210 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (178) */
/* 212 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 214 */	NdrFcShort( 0x2 ),	/* Offset= 2 (216) */
/* 216 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 218 */	NdrFcShort( 0x2 ),	/* Offset= 2 (220) */
/* 220 */	
			0x12, 0x0,	/* FC_UP */
/* 222 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (196) */
/* 224 */	
			0x11, 0x8,	/* FC_RP [simple_pointer] */
/* 226 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 228 */	
			0x11, 0x0,	/* FC_RP */
/* 230 */	NdrFcShort( 0x2 ),	/* Offset= 2 (232) */
/* 232 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 234 */	NdrFcShort( 0x18 ),	/* 24 */
/* 236 */	NdrFcShort( 0x0 ),	/* 0 */
/* 238 */	NdrFcShort( 0x8 ),	/* Offset= 8 (246) */
/* 240 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 242 */	0x36,		/* FC_POINTER */
			0x36,		/* FC_POINTER */
/* 244 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 246 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 248 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 250 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 252 */	
			0x25,		/* FC_C_WSTRING */
			0x5c,		/* FC_PAD */
/* 254 */	
			0x11, 0x14,	/* FC_RP [alloced_on_stack] [pointer_deref] */
/* 256 */	NdrFcShort( 0x2 ),	/* Offset= 2 (258) */
/* 258 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 260 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 262 */	
			0x11, 0x0,	/* FC_RP */
/* 264 */	NdrFcShort( 0x2 ),	/* Offset= 2 (266) */
/* 266 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 268 */	NdrFcShort( 0x1 ),	/* 1 */
/* 270 */	0x29,		/* Corr desc:  parameter, FC_ULONG */
			0x0,		/*  */
/* 272 */	NdrFcShort( 0x28 ),	/* X64 Stack size/offset = 40 */
/* 274 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 276 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */

			0x0
        }
    };


/* Standard interface: __MIDL_itf_pstore_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IEnumPStoreItems, ver. 0.0,
   GUID={0x4C83B307,0x0B70,0x4726,{0x8F,0x75,0x39,0x6E,0xBB,0xDA,0xA4,0x01}} */

#pragma code_seg(".orpc")
static const unsigned short IEnumPStoreItems_FormatStringOffsetTable[] =
    {
    0,
    50,
    88,
    120
    };



/* Object interface: IEnumPStoreTypes, ver. 0.0,
   GUID={0x4C83B307,0x0B70,0x4726,{0x8F,0x75,0x39,0x6E,0xBB,0xDA,0xA4,0x02}} */

#pragma code_seg(".orpc")
static const unsigned short IEnumPStoreTypes_FormatStringOffsetTable[] =
    {
    158,
    50,
    88,
    208
    };



/* Object interface: IPStore, ver. 0.0,
   GUID={0x4C83B307,0x0B70,0x4726,{0x8F,0x75,0x39,0x6E,0xBB,0xDA,0xA4,0x03}} */

#pragma code_seg(".orpc")
static const unsigned short IPStore_FormatStringOffsetTable[] =
    {
    246,
    284,
    340,
    396,
    452,
    508,
    558,
    626,
    688,
    744,
    812,
    880,
    930,
    986,
    1054,
    1134,
    1220,
    1294,
    1356
    };



#endif /* defined(_M_AMD64)*/



/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if defined(_M_AMD64)




#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"
#ifdef __cplusplus
namespace {
#endif


typedef 
NDR64_FORMAT_CHAR
__midl_frag212_t;
extern const __midl_frag212_t __midl_frag212;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag211_t;
extern const __midl_frag211_t __midl_frag211;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag210_t;
extern const __midl_frag210_t __midl_frag210;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag209_t;
extern const __midl_frag209_t __midl_frag209;

typedef 
NDR64_FORMAT_CHAR
__midl_frag208_t;
extern const __midl_frag208_t __midl_frag208;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag207_t;
extern const __midl_frag207_t __midl_frag207;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag204_t;
extern const __midl_frag204_t __midl_frag204;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag201_t;
extern const __midl_frag201_t __midl_frag201;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag200_t;
extern const __midl_frag200_t __midl_frag200;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag199_t;
extern const __midl_frag199_t __midl_frag199;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag195_t;
extern const __midl_frag195_t __midl_frag195;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag192_t;
extern const __midl_frag192_t __midl_frag192;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag189_t;
extern const __midl_frag189_t __midl_frag189;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag185_t;
extern const __midl_frag185_t __midl_frag185;

typedef 
NDR64_FORMAT_CHAR
__midl_frag180_t;
extern const __midl_frag180_t __midl_frag180;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag179_t;
extern const __midl_frag179_t __midl_frag179;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag178_t;
extern const __midl_frag178_t __midl_frag178;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag177_t;
extern const __midl_frag177_t __midl_frag177;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
}
__midl_frag170_t;
extern const __midl_frag170_t __midl_frag170;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag165_t;
extern const __midl_frag165_t __midl_frag165;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag164_t;
extern const __midl_frag164_t __midl_frag164;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag162_t;
extern const __midl_frag162_t __midl_frag162;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
}
__midl_frag156_t;
extern const __midl_frag156_t __midl_frag156;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag151_t;
extern const __midl_frag151_t __midl_frag151;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag144_t;
extern const __midl_frag144_t __midl_frag144;

typedef 
struct _NDR64_CONSTANT_IID_FORMAT
__midl_frag142_t;
extern const __midl_frag142_t __midl_frag142;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag141_t;
extern const __midl_frag141_t __midl_frag141;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag140_t;
extern const __midl_frag140_t __midl_frag140;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag136_t;
extern const __midl_frag136_t __midl_frag136;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag129_t;
extern const __midl_frag129_t __midl_frag129;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag126_t;
extern const __midl_frag126_t __midl_frag126;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag125_t;
extern const __midl_frag125_t __midl_frag125;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag121_t;
extern const __midl_frag121_t __midl_frag121;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag118_t;
extern const __midl_frag118_t __midl_frag118;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag117_t;
extern const __midl_frag117_t __midl_frag117;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag116_t;
extern const __midl_frag116_t __midl_frag116;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
}
__midl_frag111_t;
extern const __midl_frag111_t __midl_frag111;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag105_t;
extern const __midl_frag105_t __midl_frag105;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag102_t;
extern const __midl_frag102_t __midl_frag102;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag101_t;
extern const __midl_frag101_t __midl_frag101;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag92_t;
extern const __midl_frag92_t __midl_frag92;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
    } frag2;
}
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_MEMPAD_FORMAT frag4;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag5;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag6;
    } frag2;
}
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct 
{
    struct _NDR64_POINTER_FORMAT frag1;
}
__midl_frag66_t;
extern const __midl_frag66_t __midl_frag66;

typedef 
struct 
{
    struct _NDR64_BOGUS_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag1;
        struct _NDR64_MEMPAD_FORMAT frag2;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag3;
        struct _NDR64_SIMPLE_MEMBER_FORMAT frag4;
    } frag2;
}
__midl_frag64_t;
extern const __midl_frag64_t __midl_frag64;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag52_t;
extern const __midl_frag52_t __midl_frag52;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag48_t;
extern const __midl_frag48_t __midl_frag48;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag47_t;
extern const __midl_frag47_t __midl_frag47;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag45_t;
extern const __midl_frag45_t __midl_frag45;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag43_t;
extern const __midl_frag43_t __midl_frag43;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag40_t;
extern const __midl_frag40_t __midl_frag40;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag38_t;
extern const __midl_frag38_t __midl_frag38;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag32_t;
extern const __midl_frag32_t __midl_frag32;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
}
__midl_frag30_t;
extern const __midl_frag30_t __midl_frag30;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag27_t;
extern const __midl_frag27_t __midl_frag27;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag20_t;
extern const __midl_frag20_t __midl_frag20;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_PARAM_FORMAT frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag212_t __midl_frag212 =
0x5    /* FC64_INT32 */;

static const __midl_frag211_t __midl_frag211 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x4c83b307,
        0x0b70,
        0x4726,
        {0x8f, 0x75, 0x39, 0x6e, 0xbb, 0xda, 0xa4, 0x01}
    }
};

static const __midl_frag210_t __midl_frag210 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag211
};

static const __midl_frag209_t __midl_frag209 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag210
};

static const __midl_frag208_t __midl_frag208 =
0x5    /* FC64_INT32 */;

static const __midl_frag207_t __midl_frag207 =
{ 
/* *GUID */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag23
};

static const __midl_frag204_t __midl_frag204 =
{ 
/* EnumItems */
    { 
    /* EnumItems */      /* procedure EnumItems */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 160 /* 0xa0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pItemType */      /* parameter pItemType */
        &__midl_frag23,
        { 
        /* pItemType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pItemSubtype */      /* parameter pItemSubtype */
        &__midl_frag23,
        { 
        /* pItemSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ppenum */      /* parameter ppenum */
        &__midl_frag209,
        { 
        /* ppenum */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag212,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag201_t __midl_frag201 =
{ 
/* *WCHAR */
    { 
    /* *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag200_t __midl_frag200 =
{ 
/* *WCHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag201
};

static const __midl_frag199_t __midl_frag199 =
{ 
/* **WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag200
};

static const __midl_frag195_t __midl_frag195 =
{ 
/* CloseItem */
    { 
    /* CloseItem */      /* procedure CloseItem */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 160 /* 0xa0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pItemType */      /* parameter pItemType */
        &__midl_frag23,
        { 
        /* pItemType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pItemSubtype */      /* parameter pItemSubtype */
        &__midl_frag23,
        { 
        /* pItemSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* szItemName */      /* parameter szItemName */
        &__midl_frag199,
        { 
        /* szItemName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag192_t __midl_frag192 =
{ 
/* *__MIDL___MIDL_itf_pstore_0000_0000_0005 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag151
};

static const __midl_frag189_t __midl_frag189 =
{ 
/* *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag201
};

static const __midl_frag185_t __midl_frag185 =
{ 
/* OpenItem */
    { 
    /* OpenItem */      /* procedure OpenItem */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 72 /* 0x48 */ ,  /* Stack size */
        (NDR64_UINT32) 168 /* 0xa8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pItemType */      /* parameter pItemType */
        &__midl_frag23,
        { 
        /* pItemType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pItemSubtype */      /* parameter pItemSubtype */
        &__midl_frag23,
        { 
        /* pItemSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* szItemName */      /* parameter szItemName */
        &__midl_frag201,
        { 
        /* szItemName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ModeFlags */      /* parameter ModeFlags */
        &__midl_frag208,
        { 
        /* ModeFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pProomptInfo */      /* parameter pProomptInfo */
        &__midl_frag151,
        { 
        /* pProomptInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    }
};

static const __midl_frag180_t __midl_frag180 =
0x2    /* FC64_INT8 */;

static const __midl_frag179_t __midl_frag179 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag178_t __midl_frag178 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag179
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag180
    }
};

static const __midl_frag177_t __midl_frag177 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag178
};

static const __midl_frag170_t __midl_frag170 =
{ 
/* WriteItem */
    { 
    /* WriteItem */      /* procedure WriteItem */
        (NDR64_UINT32) 2883907 /* 0x2c0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn, ServerCorrelation */
        (NDR64_UINT32) 88 /* 0x58 */ ,  /* Stack size */
        (NDR64_UINT32) 176 /* 0xb0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 10 /* 0xa */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pItemType */      /* parameter pItemType */
        &__midl_frag23,
        { 
        /* pItemType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pItemSubtype */      /* parameter pItemSubtype */
        &__midl_frag23,
        { 
        /* pItemSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* szItemName */      /* parameter szItemName */
        &__midl_frag201,
        { 
        /* szItemName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbData */      /* parameter cbData */
        &__midl_frag208,
        { 
        /* cbData */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pbData */      /* parameter pbData */
        &__midl_frag178,
        { 
        /* pbData */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pPromptInfo */      /* parameter pPromptInfo */
        &__midl_frag151,
        { 
        /* pPromptInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* dwDefaultConfirmationStyle */      /* parameter dwDefaultConfirmationStyle */
        &__midl_frag208,
        { 
        /* dwDefaultConfirmationStyle */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    }
};

static const __midl_frag165_t __midl_frag165 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag180
};

static const __midl_frag164_t __midl_frag164 =
{ 
/* **BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag165
};

static const __midl_frag162_t __midl_frag162 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag208
};

static const __midl_frag156_t __midl_frag156 =
{ 
/* ReadItem */
    { 
    /* ReadItem */      /* procedure ReadItem */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 80 /* 0x50 */ ,  /* Stack size */
        (NDR64_UINT32) 245 /* 0xf5 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 9 /* 0x9 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pItemType */      /* parameter pItemType */
        &__midl_frag23,
        { 
        /* pItemType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pItemSubtype */      /* parameter pItemSubtype */
        &__midl_frag23,
        { 
        /* pItemSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* szItemName */      /* parameter szItemName */
        &__midl_frag201,
        { 
        /* szItemName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* cbData */      /* parameter cbData */
        &__midl_frag208,
        { 
        /* cbData */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* ppbData */      /* parameter ppbData */
        &__midl_frag164,
        { 
        /* ppbData */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pPromptInfo */      /* parameter pPromptInfo */
        &__midl_frag151,
        { 
        /* pPromptInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    }
};

static const __midl_frag151_t __midl_frag151 =
{ 
/* __MIDL___MIDL_itf_pstore_0000_0000_0005 */
    { 
    /* __MIDL___MIDL_itf_pstore_0000_0000_0005 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* __MIDL___MIDL_itf_pstore_0000_0000_0005 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DWORD */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag208
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag201
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag144_t __midl_frag144 =
{ 
/* DeleteItem */
    { 
    /* DeleteItem */      /* procedure DeleteItem */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 160 /* 0xa0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pItemType */      /* parameter pItemType */
        &__midl_frag23,
        { 
        /* pItemType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pItemSubType */      /* parameter pItemSubType */
        &__midl_frag23,
        { 
        /* pItemSubType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* szItemName */      /* parameter szItemName */
        &__midl_frag201,
        { 
        /* szItemName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pPromptInfo */      /* parameter pPromptInfo */
        &__midl_frag151,
        { 
        /* pPromptInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag142_t __midl_frag142 =
{ 
/* struct _NDR64_CONSTANT_IID_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 1 /* 0x1 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    {
        0x4c83b307,
        0x0b70,
        0x4726,
        {0x8f, 0x75, 0x39, 0x6e, 0xbb, 0xda, 0xa4, 0x02}
    }
};

static const __midl_frag141_t __midl_frag141 =
{ 
/* *struct _NDR64_POINTER_FORMAT */
    0x24,    /* FC64_IP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag142
};

static const __midl_frag140_t __midl_frag140 =
{ 
/* **struct _NDR64_POINTER_FORMAT */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag141
};

static const __midl_frag136_t __midl_frag136 =
{ 
/* EnumSubtypes */
    { 
    /* EnumSubtypes */      /* procedure EnumSubtypes */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 88 /* 0x58 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pType */      /* parameter pType */
        &__midl_frag23,
        { 
        /* pType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppenum */      /* parameter ppenum */
        &__midl_frag140,
        { 
        /* ppenum */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag129_t __midl_frag129 =
{ 
/* EnumTypes */
    { 
    /* EnumTypes */      /* procedure EnumTypes */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppenum */      /* parameter ppenum */
        &__midl_frag140,
        { 
        /* ppenum */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag126_t __midl_frag126 =
{ 
/* *__MIDL___MIDL_itf_pstore_0000_0000_0003 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag88
};

static const __midl_frag125_t __midl_frag125 =
{ 
/* *__MIDL___MIDL_itf_pstore_0000_0000_0004 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag64
};

static const __midl_frag121_t __midl_frag121 =
{ 
/* WriteAccessRuleset */
    { 
    /* WriteAccessRuleset */      /* procedure WriteAccessRuleset */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 160 /* 0xa0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pType */      /* parameter pType */
        &__midl_frag23,
        { 
        /* pType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pSubtype */      /* parameter pSubtype */
        &__midl_frag23,
        { 
        /* pSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pInfo */      /* parameter pInfo */
        &__midl_frag64,
        { 
        /* pInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* pRules */      /* parameter pRules */
        &__midl_frag88,
        { 
        /* pRules */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag118_t __midl_frag118 =
{ 
/* *__MIDL___MIDL_itf_pstore_0000_0000_0003 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag88
};

static const __midl_frag117_t __midl_frag117 =
{ 
/* **__MIDL___MIDL_itf_pstore_0000_0000_0003 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag118
};

static const __midl_frag116_t __midl_frag116 =
{ 
/* ***__MIDL___MIDL_itf_pstore_0000_0000_0003 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag117
};

static const __midl_frag111_t __midl_frag111 =
{ 
/* ReadAccessRuleset */
    { 
    /* ReadAccessRuleset */      /* procedure ReadAccessRuleset */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 160 /* 0xa0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pType */      /* parameter pType */
        &__midl_frag23,
        { 
        /* pType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pSubtype */      /* parameter pSubtype */
        &__midl_frag23,
        { 
        /* pSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pInfo */      /* parameter pInfo */
        &__midl_frag64,
        { 
        /* pInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* ppRules */      /* parameter ppRules */
        &__midl_frag116,
        { 
        /* ppRules */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag105_t __midl_frag105 =
{ 
/* DeleteSubtype */
    { 
    /* DeleteSubtype */      /* procedure DeleteSubtype */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 160 /* 0xa0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pType */      /* parameter pType */
        &__midl_frag23,
        { 
        /* pType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pSubtype */      /* parameter pSubtype */
        &__midl_frag23,
        { 
        /* pSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag102_t __midl_frag102 =
{ 
/* *__MIDL___MIDL_itf_pstore_0000_0000_0004 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag64
};

static const __midl_frag101_t __midl_frag101 =
{ 
/* **__MIDL___MIDL_itf_pstore_0000_0000_0004 */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 16 /* 0x10 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag102
};

static const __midl_frag100_t __midl_frag100 =
{ 
/* ***__MIDL___MIDL_itf_pstore_0000_0000_0004 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag101
};

static const __midl_frag96_t __midl_frag96 =
{ 
/* GetSubtypeInfo */
    { 
    /* GetSubtypeInfo */      /* procedure GetSubtypeInfo */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 56 /* 0x38 */ ,  /* Stack size */
        (NDR64_UINT32) 160 /* 0xa0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 6 /* 0x6 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pType */      /* parameter pType */
        &__midl_frag23,
        { 
        /* pType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pSubtype */      /* parameter pSubtype */
        &__midl_frag23,
        { 
        /* pSubtype */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* ppInfo */      /* parameter ppInfo */
        &__midl_frag100,
        { 
        /* ppInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    }
};

static const __midl_frag93_t __midl_frag93 =
{ 
/*  */
    { 
    /* *PST_ACCESSCLAUSE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag90
    }
};

static const __midl_frag92_t __midl_frag92 =
{ 
/*  */
    { 
    /* *BYTE */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag180
    }
};

static const __midl_frag90_t __midl_frag90 =
{ 
/* PST_ACCESSCLAUSE */
    { 
    /* PST_ACCESSCLAUSE */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PST_ACCESSCLAUSE */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag92,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag89_t __midl_frag89 =
{ 
/* PST_ACCESSRULE */
    { 
    /* PST_ACCESSRULE */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* PST_ACCESSRULE */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */,
        0,
        0,
        &__midl_frag93,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* __MIDL___MIDL_itf_pstore_0000_0000_0003 */
    { 
    /* __MIDL___MIDL_itf_pstore_0000_0000_0003 */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* __MIDL___MIDL_itf_pstore_0000_0000_0003 */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *PST_ACCESSRULE */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag89
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/* DeleteType */
    { 
    /* DeleteType */      /* procedure DeleteType */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 88 /* 0x58 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pType */      /* parameter pType */
        &__midl_frag23,
        { 
        /* pType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag69_t __midl_frag69 =
{ 
/* GetTypeInfo */
    { 
    /* GetTypeInfo */      /* procedure GetTypeInfo */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 88 /* 0x58 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pType */      /* parameter pType */
        &__midl_frag23,
        { 
        /* pType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppInfo */      /* parameter ppInfo */
        &__midl_frag100,
        { 
        /* ppInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag66_t __midl_frag66 =
{ 
/*  */
    { 
    /* *WCHAR */
        0x21,    /* FC64_UP */
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        &__midl_frag201
    }
};

static const __midl_frag64_t __midl_frag64 =
{ 
/* __MIDL___MIDL_itf_pstore_0000_0000_0004 */
    { 
    /* __MIDL___MIDL_itf_pstore_0000_0000_0004 */
        0x35,    /* FC64_FORCED_BOGUS_STRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* __MIDL___MIDL_itf_pstore_0000_0000_0004 */
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        0,
        0,
        &__midl_frag66,
    },
    { 
    /*  */
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x5,    /* FC64_INT32 */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_MEMPAD_FORMAT */
            0x90,    /* FC64_STRUCTPADN */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 4 /* 0x4 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x14,    /* FC64_POINTER */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_SIMPLE_MEMBER_FORMAT */
            0x93,    /* FC64_END */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        }
    }
};

static const __midl_frag60_t __midl_frag60 =
{ 
/* CreateType */
    { 
    /* CreateType */      /* procedure CreateType */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 88 /* 0x58 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* Key */      /* parameter Key */
        &__midl_frag208,
        { 
        /* Key */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pType */      /* parameter pType */
        &__midl_frag23,
        { 
        /* pType */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pInfo */      /* parameter pInfo */
        &__midl_frag64,
        { 
        /* pInfo */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag55_t __midl_frag55 =
{ 
/* *BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag180
};

static const __midl_frag52_t __midl_frag52 =
{ 
/* SetProvParam */
    { 
    /* SetProvParam */      /* procedure SetProvParam */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 77 /* 0x4d */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwParam */      /* parameter dwParam */
        &__midl_frag208,
        { 
        /* dwParam */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* cbData */      /* parameter cbData */
        &__midl_frag208,
        { 
        /* cbData */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pbData */      /* parameter pbData */
        &__midl_frag180,
        { 
        /* pbData */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag48_t __midl_frag48 =
{ 
/* *BYTE */
    0x22,    /* FC64_OP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag180
};

static const __midl_frag47_t __midl_frag47 =
{ 
/* **BYTE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag48
};

static const __midl_frag45_t __midl_frag45 =
{ 
/* *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag208
};

static const __midl_frag43_t __midl_frag43 =
{ 
/* GetProvParam */
    { 
    /* GetProvParam */      /* procedure GetProvParam */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 93 /* 0x5d */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* dwParam */      /* parameter dwParam */
        &__midl_frag208,
        { 
        /* dwParam */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pcbData */      /* parameter pcbData */
        &__midl_frag208,
        { 
        /* pcbData */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* ppbData */      /* parameter ppbData */
        &__midl_frag47,
        { 
        /* ppbData */
            0,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustFree, [out], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag208,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag40_t __midl_frag40 =
{ 
/* _PST_PROVIDERINFO */
    { 
    /* _PST_PROVIDERINFO */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* _PST_PROVIDERINFO */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag201
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag39_t __midl_frag39 =
{ 
/* *_PST_PROVIDERINFO */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag40
};

static const __midl_frag38_t __midl_frag38 =
{ 
/* **_PST_PROVIDERINFO */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 20 /* 0x14 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag39
};

static const __midl_frag37_t __midl_frag37 =
{ 
/* GetInfo */
    { 
    /* GetInfo */      /* procedure GetInfo */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppProperties */      /* parameter ppProperties */
        &__midl_frag38,
        { 
        /* ppProperties */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag32_t __midl_frag32 =
{ 
/* Clone */
    { 
    /* Clone */      /* procedure Clone */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppenum */      /* parameter ppenum */
        &__midl_frag140,
        { 
        /* ppenum */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag30_t __midl_frag30 =
{ 
/* Reset */
    { 
    /* Reset */      /* procedure Reset */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag27_t __midl_frag27 =
{ 
/* Skip */
    { 
    /* Skip */      /* procedure Skip */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* celt */      /* parameter celt */
        &__midl_frag208,
        { 
        /* celt */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* GUID */
    { 
    /* GUID */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* GUID */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag20_t __midl_frag20 =
{ 
/* Next */
    { 
    /* Next */      /* procedure Next */
        (NDR64_UINT32) 524611 /* 0x80143 */,    /* auto handle */ /* IsIntrepreted, [object], HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 112 /* 0x70 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* celt */      /* parameter celt */
        &__midl_frag208,
        { 
        /* celt */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* rgelt */      /* parameter rgelt */
        &__midl_frag23,
        { 
        /* rgelt */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pceltFetched */      /* parameter pceltFetched */
        &__midl_frag208,
        { 
        /* pceltFetched */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag15_t __midl_frag15 =
{ 
/* Clone */
    { 
    /* Clone */      /* procedure Clone */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* ppenum */      /* parameter ppenum */
        &__midl_frag209,
        { 
        /* ppenum */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* Next */
    { 
    /* Next */      /* procedure Next */
        (NDR64_UINT32) 786755 /* 0xc0143 */,    /* auto handle */ /* IsIntrepreted, [object], ClientMustSize, HasReturn */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 0 /* 0x0 */
    },
    { 
    /* celt */      /* parameter celt */
        &__midl_frag208,
        { 
        /* celt */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* rgelt */      /* parameter rgelt */
        &__midl_frag199,
        { 
        /* rgelt */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [in], UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pceltFetched */      /* parameter pceltFetched */
        &__midl_frag208,
        { 
        /* pceltFetched */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag208,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;
#ifdef __cplusplus
}
#endif


#include "poppack.h"



/* Standard interface: __MIDL_itf_pstore_0000_0000, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00}} */


/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IEnumPStoreItems, ver. 0.0,
   GUID={0x4C83B307,0x0B70,0x4726,{0x8F,0x75,0x39,0x6E,0xBB,0xDA,0xA4,0x01}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IEnumPStoreItems_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag27,
    &__midl_frag30,
    &__midl_frag15
    };


static const MIDL_SYNTAX_INFO IEnumPStoreItems_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    pstore__MIDL_ProcFormatString.Format,
    &IEnumPStoreItems_FormatStringOffsetTable[-3],
    pstore__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IEnumPStoreItems_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumPStoreItems_ProxyInfo =
    {
    &Object_StubDesc,
    pstore__MIDL_ProcFormatString.Format,
    &IEnumPStoreItems_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IEnumPStoreItems_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IEnumPStoreItems_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    pstore__MIDL_ProcFormatString.Format,
    (unsigned short *) &IEnumPStoreItems_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IEnumPStoreItems_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IEnumPStoreItemsProxyVtbl = 
{
    &IEnumPStoreItems_ProxyInfo,
    &IID_IEnumPStoreItems,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IEnumPStoreItems::Next */ ,
    (void *) (INT_PTR) -1 /* IEnumPStoreItems::Skip */ ,
    (void *) (INT_PTR) -1 /* IEnumPStoreItems::Reset */ ,
    (void *) (INT_PTR) -1 /* IEnumPStoreItems::Clone */
};

const CInterfaceStubVtbl _IEnumPStoreItemsStubVtbl =
{
    &IID_IEnumPStoreItems,
    &IEnumPStoreItems_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IEnumPStoreTypes, ver. 0.0,
   GUID={0x4C83B307,0x0B70,0x4726,{0x8F,0x75,0x39,0x6E,0xBB,0xDA,0xA4,0x02}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IEnumPStoreTypes_Ndr64ProcTable[] =
    {
    &__midl_frag20,
    &__midl_frag27,
    &__midl_frag30,
    &__midl_frag32
    };


static const MIDL_SYNTAX_INFO IEnumPStoreTypes_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    pstore__MIDL_ProcFormatString.Format,
    &IEnumPStoreTypes_FormatStringOffsetTable[-3],
    pstore__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IEnumPStoreTypes_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IEnumPStoreTypes_ProxyInfo =
    {
    &Object_StubDesc,
    pstore__MIDL_ProcFormatString.Format,
    &IEnumPStoreTypes_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IEnumPStoreTypes_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IEnumPStoreTypes_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    pstore__MIDL_ProcFormatString.Format,
    (unsigned short *) &IEnumPStoreTypes_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IEnumPStoreTypes_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(7) _IEnumPStoreTypesProxyVtbl = 
{
    &IEnumPStoreTypes_ProxyInfo,
    &IID_IEnumPStoreTypes,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IEnumPStoreTypes::Next */ ,
    (void *) (INT_PTR) -1 /* IEnumPStoreTypes::Skip */ ,
    (void *) (INT_PTR) -1 /* IEnumPStoreTypes::Reset */ ,
    (void *) (INT_PTR) -1 /* IEnumPStoreTypes::Clone */
};

const CInterfaceStubVtbl _IEnumPStoreTypesStubVtbl =
{
    &IID_IEnumPStoreTypes,
    &IEnumPStoreTypes_ServerInfo,
    7,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};


/* Object interface: IPStore, ver. 0.0,
   GUID={0x4C83B307,0x0B70,0x4726,{0x8F,0x75,0x39,0x6E,0xBB,0xDA,0xA4,0x03}} */

#pragma code_seg(".orpc")
static const FormatInfoRef IPStore_Ndr64ProcTable[] =
    {
    &__midl_frag37,
    &__midl_frag43,
    &__midl_frag52,
    &__midl_frag60,
    &__midl_frag69,
    &__midl_frag77,
    &__midl_frag121,
    &__midl_frag96,
    &__midl_frag105,
    &__midl_frag111,
    &__midl_frag121,
    &__midl_frag129,
    &__midl_frag136,
    &__midl_frag144,
    &__midl_frag156,
    &__midl_frag170,
    &__midl_frag185,
    &__midl_frag195,
    &__midl_frag204
    };


static const MIDL_SYNTAX_INFO IPStore_SyntaxInfo [  2 ] = 
    {
    {
    {{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}},
    0,
    pstore__MIDL_ProcFormatString.Format,
    &IPStore_FormatStringOffsetTable[-3],
    pstore__MIDL_TypeFormatString.Format,
    0,
    0,
    0
    }
    ,{
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) &IPStore_Ndr64ProcTable[-3],
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IPStore_ProxyInfo =
    {
    &Object_StubDesc,
    pstore__MIDL_ProcFormatString.Format,
    &IPStore_FormatStringOffsetTable[-3],
    (RPC_SYNTAX_IDENTIFIER*)&_RpcTransferSyntax_2_0,
    2,
    (MIDL_SYNTAX_INFO*)IPStore_SyntaxInfo
    
    };


static const MIDL_SERVER_INFO IPStore_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    pstore__MIDL_ProcFormatString.Format,
    (unsigned short *) &IPStore_FormatStringOffsetTable[-3],
    0,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax_1_0,
    2,
    (MIDL_SYNTAX_INFO*)IPStore_SyntaxInfo
    };
CINTERFACE_PROXY_VTABLE(22) _IPStoreProxyVtbl = 
{
    &IPStore_ProxyInfo,
    &IID_IPStore,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    (void *) (INT_PTR) -1 /* IPStore::GetInfo */ ,
    (void *) (INT_PTR) -1 /* IPStore::GetProvParam */ ,
    (void *) (INT_PTR) -1 /* IPStore::SetProvParam */ ,
    (void *) (INT_PTR) -1 /* IPStore::CreateType */ ,
    (void *) (INT_PTR) -1 /* IPStore::GetTypeInfo */ ,
    (void *) (INT_PTR) -1 /* IPStore::DeleteType */ ,
    (void *) (INT_PTR) -1 /* IPStore::CreateSubtype */ ,
    (void *) (INT_PTR) -1 /* IPStore::GetSubtypeInfo */ ,
    (void *) (INT_PTR) -1 /* IPStore::DeleteSubtype */ ,
    (void *) (INT_PTR) -1 /* IPStore::ReadAccessRuleset */ ,
    (void *) (INT_PTR) -1 /* IPStore::WriteAccessRuleset */ ,
    (void *) (INT_PTR) -1 /* IPStore::EnumTypes */ ,
    (void *) (INT_PTR) -1 /* IPStore::EnumSubtypes */ ,
    (void *) (INT_PTR) -1 /* IPStore::DeleteItem */ ,
    (void *) (INT_PTR) -1 /* IPStore::ReadItem */ ,
    (void *) (INT_PTR) -1 /* IPStore::WriteItem */ ,
    (void *) (INT_PTR) -1 /* IPStore::OpenItem */ ,
    (void *) (INT_PTR) -1 /* IPStore::CloseItem */ ,
    (void *) (INT_PTR) -1 /* IPStore::EnumItems */
};

const CInterfaceStubVtbl _IPStoreStubVtbl =
{
    &IID_IPStore,
    &IPStore_ServerInfo,
    22,
    0, /* pure interpreted */
    CStdStubBuffer_METHODS
};

#ifdef __cplusplus
namespace {
#endif
static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    pstore__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x8010274, /* MIDL Version 8.1.628 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };
#ifdef __cplusplus
}
#endif

const CInterfaceProxyVtbl * const _pstore_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IEnumPStoreItemsProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IEnumPStoreTypesProxyVtbl,
    ( CInterfaceProxyVtbl *) &_IPStoreProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _pstore_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IEnumPStoreItemsStubVtbl,
    ( CInterfaceStubVtbl *) &_IEnumPStoreTypesStubVtbl,
    ( CInterfaceStubVtbl *) &_IPStoreStubVtbl,
    0
};

PCInterfaceName const _pstore_InterfaceNamesList[] = 
{
    "IEnumPStoreItems",
    "IEnumPStoreTypes",
    "IPStore",
    0
};


#define _pstore_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _pstore, pIID, n)

int __stdcall _pstore_IID_Lookup( const IID * pIID, int * pIndex )
{
    IID_BS_LOOKUP_SETUP

    IID_BS_LOOKUP_INITIAL_TEST( _pstore, 3, 2 )
    IID_BS_LOOKUP_NEXT_TEST( _pstore, 1 )
    IID_BS_LOOKUP_RETURN_RESULT( _pstore, 3, *pIndex )
    
}

EXTERN_C const ExtendedProxyFileInfo pstore_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _pstore_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _pstore_StubVtblList,
    (const PCInterfaceName * ) & _pstore_InterfaceNamesList,
    0, /* no delegation */
    & _pstore_IID_Lookup, 
    3,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

