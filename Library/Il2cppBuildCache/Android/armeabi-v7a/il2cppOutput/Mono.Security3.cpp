#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Mono.Security.ASN1
struct ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// System.Collections.CollectionBase
struct CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB;
// System.Security.Cryptography.DSA
struct DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Security.Cryptography.RSA
struct RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842;
// Mono.Security.X509.X509Certificate
struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007;
// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487;
// Mono.Security.Protocol.Tls.SslStreamBase/AsyncHandshakeDelegate
struct AsyncHandshakeDelegate_t4C96AE1F2C98CC54FFE7A4D72E882190CED4A8BF;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8;
// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A;
// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224;
// Mono.Security.X509.X509Stores/Names
struct Names_t734FE4EA7A5338D4CE5A8FB5A63489925870029C;
// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7;
// Mono.Security.X509.X520/CommonName
struct CommonName_t797C08B4FC839CCFCD55F99FA85589997E4A58B3;
// Mono.Security.X509.X520/CountryName
struct CountryName_t58682192C0C1365E9218AD39F4559435DBA1A6E6;
// Mono.Security.X509.X520/DnQualifier
struct DnQualifier_tEC393AB8D9F174345752E011C31ACD0C318315ED;
// Mono.Security.X509.X520/DomainComponent
struct DomainComponent_tE2A8BC5BD632B791318AC8A917ACF4EB7EC7FAE6;
// Mono.Security.X509.X520/EmailAddress
struct EmailAddress_tC135E93658B1E30DD1CFEAD2BC964B343DC1C28A;
// Mono.Security.X509.X520/GivenName
struct GivenName_tF8AAAF5D1F2D338C246189B72E5D3D7E69F59DFD;
// Mono.Security.X509.X520/Initial
struct Initial_t8AE654452093D9E87C473E857C900451D4657C0E;
// Mono.Security.X509.X520/LocalityName
struct LocalityName_t618AA3E1097D0E938897669963FE840A7A51635C;
// Mono.Security.X509.X520/Name
struct Name_t1FFADAA295858B7A96EA023D3F4FD944B086380D;
// Mono.Security.X509.X520/Oid
struct Oid_t993CF959EC73A4D56320FD393D6FF2EE2A3BD893;
// Mono.Security.X509.X520/OrganizationName
struct OrganizationName_t8C2467DD0A5147947C017FA6E6471E948DBA7317;
// Mono.Security.X509.X520/OrganizationalUnitName
struct OrganizationalUnitName_t1B37932ECFE6B1E88C35308450D416D0A96EC9FF;
// Mono.Security.X509.X520/SerialNumber
struct SerialNumber_t0174FC974E9E32A6E6E661478289FA1555C4EC07;
// Mono.Security.X509.X520/StateOrProvinceName
struct StateOrProvinceName_tC07359C2B06BBAA69D754FB9622395764923EF8F;
// Mono.Security.X509.X520/Surname
struct Surname_t3D242E171450C07F7CB969508E9E06BCDC84B150;
// Mono.Security.X509.X520/Title
struct Title_tAA081A8464E89A9AAFA08EA949F47BC65D309917;
// Mono.Security.X509.X520/UserId
struct UserId_t9BDC54820A474FAF628875C8974F061913DA5F06;

IL2CPP_EXTERN_C RuntimeClass* ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B491B08D7F3147A54D3A6892A54AE8DC9C9106F;
IL2CPP_EXTERN_C String_t* _stringLiteral14D13302CA125B23FDC663B73325C42B8DA4C1EB;
IL2CPP_EXTERN_C String_t* _stringLiteral1A7FC08E8EB016BAD5A8A8D7B3447DAD63E867BC;
IL2CPP_EXTERN_C String_t* _stringLiteral1E975408BDC3CEEA3B3BBEDC11D8AE5E1FFE9B0B;
IL2CPP_EXTERN_C String_t* _stringLiteral2A9A5AB04CCC916E2271E013ECB39F5CC0DED339;
IL2CPP_EXTERN_C String_t* _stringLiteral453A07B8CC155ECBEB68D277EC848642FFB5F3B6;
IL2CPP_EXTERN_C String_t* _stringLiteral4BD64CDDC726EEC9781AF7725F934C659848D974;
IL2CPP_EXTERN_C String_t* _stringLiteral53B85B740DDFDFB7BB24AB3B12A0E6CC2C75D9FB;
IL2CPP_EXTERN_C String_t* _stringLiteral94227CA8EB4252C21E39FE8CCB2B65A6D01D3CF1;
IL2CPP_EXTERN_C String_t* _stringLiteral99C134A36D015746C32203B98CC495F87311D9DC;
IL2CPP_EXTERN_C String_t* _stringLiteralA3BFC0737E4F6504E6E8C5B00F9FB2F64D65E1A7;
IL2CPP_EXTERN_C String_t* _stringLiteralD0F3B9B4F2F6967A4C936C40E1D9868E492D3EB5;
IL2CPP_EXTERN_C String_t* _stringLiteralDD381BE73F585C3796C220566E891E458F9D6290;
IL2CPP_EXTERN_C String_t* _stringLiteralE2E76050A1D2C1BF365ADD81069B2ACDF5784752;
IL2CPP_EXTERN_C String_t* _stringLiteralEA2AC7DA2122607235D3D7EB8F5258E77B26CA40;
IL2CPP_EXTERN_C String_t* _stringLiteralF24BCEBD3BF54143DC34399B1E3AD4F93496E764;
IL2CPP_EXTERN_C String_t* _stringLiteralFEBD4C8F55D7CC1B6E65FF051696B9E0B128A9EA;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m33A873AE7FA7CD93B19E3B22F9B8909343E3745B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AttributeTypeAndValue_set_Value_m99BB2D2324D1A14C5A1A1FEFB427A9A5B4987B47_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Mono.Security.ASN1
struct ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8  : public RuntimeObject
{
public:
	// System.Byte Mono.Security.ASN1::m_nTag
	uint8_t ___m_nTag_0;
	// System.Byte[] Mono.Security.ASN1::m_aValue
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_aValue_1;
	// System.Collections.ArrayList Mono.Security.ASN1::elist
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___elist_2;

public:
	inline static int32_t get_offset_of_m_nTag_0() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___m_nTag_0)); }
	inline uint8_t get_m_nTag_0() const { return ___m_nTag_0; }
	inline uint8_t* get_address_of_m_nTag_0() { return &___m_nTag_0; }
	inline void set_m_nTag_0(uint8_t value)
	{
		___m_nTag_0 = value;
	}

	inline static int32_t get_offset_of_m_aValue_1() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___m_aValue_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_aValue_1() const { return ___m_aValue_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_aValue_1() { return &___m_aValue_1; }
	inline void set_m_aValue_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_aValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_aValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_elist_2() { return static_cast<int32_t>(offsetof(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8, ___elist_2)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_elist_2() const { return ___elist_2; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_elist_2() { return &___elist_2; }
	inline void set_elist_2(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___elist_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___elist_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.CollectionBase
struct CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Collections.CollectionBase::list
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___list_0;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB, ___list_0)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_list_0() const { return ___list_0; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}
};


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8  : public RuntimeObject
{
public:
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::locker
	RuntimeObject * ___locker_0;
	// System.AsyncCallback Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_userCallback
	AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ____userCallback_1;
	// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_userState
	RuntimeObject * ____userState_2;
	// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_asyncException
	Exception_t * ____asyncException_3;
	// System.Threading.ManualResetEvent Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::handle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___handle_4;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::completed
	bool ___completed_5;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_bytesRead
	int32_t ____bytesRead_6;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_fromWrite
	bool ____fromWrite_7;
	// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_proceedAfterHandshake
	bool ____proceedAfterHandshake_8;
	// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_9;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_offset
	int32_t ____offset_10;
	// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::_count
	int32_t ____count_11;

public:
	inline static int32_t get_offset_of_locker_0() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ___locker_0)); }
	inline RuntimeObject * get_locker_0() const { return ___locker_0; }
	inline RuntimeObject ** get_address_of_locker_0() { return &___locker_0; }
	inline void set_locker_0(RuntimeObject * value)
	{
		___locker_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_0), (void*)value);
	}

	inline static int32_t get_offset_of__userCallback_1() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____userCallback_1)); }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * get__userCallback_1() const { return ____userCallback_1; }
	inline AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA ** get_address_of__userCallback_1() { return &____userCallback_1; }
	inline void set__userCallback_1(AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * value)
	{
		____userCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userCallback_1), (void*)value);
	}

	inline static int32_t get_offset_of__userState_2() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____userState_2)); }
	inline RuntimeObject * get__userState_2() const { return ____userState_2; }
	inline RuntimeObject ** get_address_of__userState_2() { return &____userState_2; }
	inline void set__userState_2(RuntimeObject * value)
	{
		____userState_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____userState_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncException_3() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____asyncException_3)); }
	inline Exception_t * get__asyncException_3() const { return ____asyncException_3; }
	inline Exception_t ** get_address_of__asyncException_3() { return &____asyncException_3; }
	inline void set__asyncException_3(Exception_t * value)
	{
		____asyncException_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncException_3), (void*)value);
	}

	inline static int32_t get_offset_of_handle_4() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ___handle_4)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_handle_4() const { return ___handle_4; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_handle_4() { return &___handle_4; }
	inline void set_handle_4(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___handle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handle_4), (void*)value);
	}

	inline static int32_t get_offset_of_completed_5() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ___completed_5)); }
	inline bool get_completed_5() const { return ___completed_5; }
	inline bool* get_address_of_completed_5() { return &___completed_5; }
	inline void set_completed_5(bool value)
	{
		___completed_5 = value;
	}

	inline static int32_t get_offset_of__bytesRead_6() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____bytesRead_6)); }
	inline int32_t get__bytesRead_6() const { return ____bytesRead_6; }
	inline int32_t* get_address_of__bytesRead_6() { return &____bytesRead_6; }
	inline void set__bytesRead_6(int32_t value)
	{
		____bytesRead_6 = value;
	}

	inline static int32_t get_offset_of__fromWrite_7() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____fromWrite_7)); }
	inline bool get__fromWrite_7() const { return ____fromWrite_7; }
	inline bool* get_address_of__fromWrite_7() { return &____fromWrite_7; }
	inline void set__fromWrite_7(bool value)
	{
		____fromWrite_7 = value;
	}

	inline static int32_t get_offset_of__proceedAfterHandshake_8() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____proceedAfterHandshake_8)); }
	inline bool get__proceedAfterHandshake_8() const { return ____proceedAfterHandshake_8; }
	inline bool* get_address_of__proceedAfterHandshake_8() { return &____proceedAfterHandshake_8; }
	inline void set__proceedAfterHandshake_8(bool value)
	{
		____proceedAfterHandshake_8 = value;
	}

	inline static int32_t get_offset_of__buffer_9() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____buffer_9)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_9() const { return ____buffer_9; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_9() { return &____buffer_9; }
	inline void set__buffer_9(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__offset_10() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____offset_10)); }
	inline int32_t get__offset_10() const { return ____offset_10; }
	inline int32_t* get_address_of__offset_10() { return &____offset_10; }
	inline void set__offset_10(int32_t value)
	{
		____offset_10 = value;
	}

	inline static int32_t get_offset_of__count_11() { return static_cast<int32_t>(offsetof(InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8, ____count_11)); }
	inline int32_t get__count_11() const { return ____count_11; }
	inline int32_t* get_address_of__count_11() { return &____count_11; }
	inline void set__count_11(int32_t value)
	{
		____count_11 = value;
	}
};


// Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_0), (void*)value);
	}
};


// Mono.Security.X509.X509Stores/Names
struct Names_t734FE4EA7A5338D4CE5A8FB5A63489925870029C  : public RuntimeObject
{
public:

public:
};


// Mono.Security.X509.X520/AttributeTypeAndValue
struct AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7  : public RuntimeObject
{
public:
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::oid
	String_t* ___oid_0;
	// System.String Mono.Security.X509.X520/AttributeTypeAndValue::attrValue
	String_t* ___attrValue_1;
	// System.Int32 Mono.Security.X509.X520/AttributeTypeAndValue::upperBound
	int32_t ___upperBound_2;
	// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::encoding
	uint8_t ___encoding_3;

public:
	inline static int32_t get_offset_of_oid_0() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7, ___oid_0)); }
	inline String_t* get_oid_0() const { return ___oid_0; }
	inline String_t** get_address_of_oid_0() { return &___oid_0; }
	inline void set_oid_0(String_t* value)
	{
		___oid_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___oid_0), (void*)value);
	}

	inline static int32_t get_offset_of_attrValue_1() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7, ___attrValue_1)); }
	inline String_t* get_attrValue_1() const { return ___attrValue_1; }
	inline String_t** get_address_of_attrValue_1() { return &___attrValue_1; }
	inline void set_attrValue_1(String_t* value)
	{
		___attrValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attrValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_upperBound_2() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7, ___upperBound_2)); }
	inline int32_t get_upperBound_2() const { return ___upperBound_2; }
	inline int32_t* get_address_of_upperBound_2() { return &___upperBound_2; }
	inline void set_upperBound_2(int32_t value)
	{
		___upperBound_2 = value;
	}

	inline static int32_t get_offset_of_encoding_3() { return static_cast<int32_t>(offsetof(AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7, ___encoding_3)); }
	inline uint8_t get_encoding_3() const { return ___encoding_3; }
	inline uint8_t* get_address_of_encoding_3() { return &___encoding_3; }
	inline void set_encoding_3(uint8_t value)
	{
		___encoding_3 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:

public:
};


// Mono.Security.X509.X509ExtensionCollection
struct X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487  : public CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB
{
public:
	// System.Boolean Mono.Security.X509.X509ExtensionCollection::readOnly
	bool ___readOnly_1;

public:
	inline static int32_t get_offset_of_readOnly_1() { return static_cast<int32_t>(offsetof(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487, ___readOnly_1)); }
	inline bool get_readOnly_1() const { return ___readOnly_1; }
	inline bool* get_address_of_readOnly_1() { return &___readOnly_1; }
	inline void set_readOnly_1(bool value)
	{
		___readOnly_1 = value;
	}
};


// Mono.Security.X509.X520/CommonName
struct CommonName_t797C08B4FC839CCFCD55F99FA85589997E4A58B3  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/CountryName
struct CountryName_t58682192C0C1365E9218AD39F4559435DBA1A6E6  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/DnQualifier
struct DnQualifier_tEC393AB8D9F174345752E011C31ACD0C318315ED  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/DomainComponent
struct DomainComponent_tE2A8BC5BD632B791318AC8A917ACF4EB7EC7FAE6  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/EmailAddress
struct EmailAddress_tC135E93658B1E30DD1CFEAD2BC964B343DC1C28A  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/GivenName
struct GivenName_tF8AAAF5D1F2D338C246189B72E5D3D7E69F59DFD  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/Initial
struct Initial_t8AE654452093D9E87C473E857C900451D4657C0E  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/LocalityName
struct LocalityName_t618AA3E1097D0E938897669963FE840A7A51635C  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/Name
struct Name_t1FFADAA295858B7A96EA023D3F4FD944B086380D  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/Oid
struct Oid_t993CF959EC73A4D56320FD393D6FF2EE2A3BD893  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/OrganizationName
struct OrganizationName_t8C2467DD0A5147947C017FA6E6471E948DBA7317  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/OrganizationalUnitName
struct OrganizationalUnitName_t1B37932ECFE6B1E88C35308450D416D0A96EC9FF  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/SerialNumber
struct SerialNumber_t0174FC974E9E32A6E6E661478289FA1555C4EC07  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/StateOrProvinceName
struct StateOrProvinceName_tC07359C2B06BBAA69D754FB9622395764923EF8F  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/Surname
struct Surname_t3D242E171450C07F7CB969508E9E06BCDC84B150  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/Title
struct Title_tAA081A8464E89A9AAFA08EA949F47BC65D309917  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// Mono.Security.X509.X520/UserId
struct UserId_t9BDC54820A474FAF628875C8974F061913DA5F06  : public AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7
{
public:

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;

public:
	inline static int32_t get_offset_of_waitHandle_3() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___waitHandle_3)); }
	inline intptr_t get_waitHandle_3() const { return ___waitHandle_3; }
	inline intptr_t* get_address_of_waitHandle_3() { return &___waitHandle_3; }
	inline void set_waitHandle_3(intptr_t value)
	{
		___waitHandle_3 = value;
	}

	inline static int32_t get_offset_of_safeWaitHandle_4() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___safeWaitHandle_4)); }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * get_safeWaitHandle_4() const { return ___safeWaitHandle_4; }
	inline SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 ** get_address_of_safeWaitHandle_4() { return &___safeWaitHandle_4; }
	inline void set_safeWaitHandle_4(SafeWaitHandle_tF37EACEDF9C6F350EB4ABC1E1F869EECB0B5ABB1 * value)
	{
		___safeWaitHandle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeWaitHandle_4), (void*)value);
	}

	inline static int32_t get_offset_of_hasThreadAffinity_5() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842, ___hasThreadAffinity_5)); }
	inline bool get_hasThreadAffinity_5() const { return ___hasThreadAffinity_5; }
	inline bool* get_address_of_hasThreadAffinity_5() { return &___hasThreadAffinity_5; }
	inline void set_hasThreadAffinity_5(bool value)
	{
		___hasThreadAffinity_5 = value;
	}
};

struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields
{
public:
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_10;

public:
	inline static int32_t get_offset_of_InvalidHandle_10() { return static_cast<int32_t>(offsetof(WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_StaticFields, ___InvalidHandle_10)); }
	inline intptr_t get_InvalidHandle_10() const { return ___InvalidHandle_10; }
	inline intptr_t* get_address_of_InvalidHandle_10() { return &___InvalidHandle_10; }
	inline void set_InvalidHandle_10(intptr_t value)
	{
		___InvalidHandle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_pinvoke : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842_marshaled_com : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// Mono.Security.X509.X509Certificate
struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4  : public RuntimeObject
{
public:
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::decoder
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___decoder_0;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_encodedcert
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_encodedcert_1;
	// System.DateTime Mono.Security.X509.X509Certificate::m_from
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_from_2;
	// System.DateTime Mono.Security.X509.X509Certificate::m_until
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_until_3;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::issuer
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___issuer_4;
	// System.String Mono.Security.X509.X509Certificate::m_issuername
	String_t* ___m_issuername_5;
	// System.String Mono.Security.X509.X509Certificate::m_keyalgo
	String_t* ___m_keyalgo_6;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_keyalgoparams
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_keyalgoparams_7;
	// Mono.Security.ASN1 Mono.Security.X509.X509Certificate::subject
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___subject_8;
	// System.String Mono.Security.X509.X509Certificate::m_subject
	String_t* ___m_subject_9;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_publickey
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_publickey_10;
	// System.Byte[] Mono.Security.X509.X509Certificate::signature
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___signature_11;
	// System.String Mono.Security.X509.X509Certificate::m_signaturealgo
	String_t* ___m_signaturealgo_12;
	// System.Byte[] Mono.Security.X509.X509Certificate::m_signaturealgoparams
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_signaturealgoparams_13;
	// System.Byte[] Mono.Security.X509.X509Certificate::certhash
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___certhash_14;
	// System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::_rsa
	RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * ____rsa_15;
	// System.Security.Cryptography.DSA Mono.Security.X509.X509Certificate::_dsa
	DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * ____dsa_16;
	// System.Int32 Mono.Security.X509.X509Certificate::version
	int32_t ___version_19;
	// System.Byte[] Mono.Security.X509.X509Certificate::serialnumber
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___serialnumber_20;
	// System.Byte[] Mono.Security.X509.X509Certificate::issuerUniqueID
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___issuerUniqueID_21;
	// System.Byte[] Mono.Security.X509.X509Certificate::subjectUniqueID
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___subjectUniqueID_22;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Certificate::extensions
	X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * ___extensions_23;

public:
	inline static int32_t get_offset_of_decoder_0() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___decoder_0)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_decoder_0() const { return ___decoder_0; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_decoder_0() { return &___decoder_0; }
	inline void set_decoder_0(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___decoder_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_encodedcert_1() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_encodedcert_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_encodedcert_1() const { return ___m_encodedcert_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_encodedcert_1() { return &___m_encodedcert_1; }
	inline void set_m_encodedcert_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_encodedcert_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encodedcert_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_from_2() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_from_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_from_2() const { return ___m_from_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_from_2() { return &___m_from_2; }
	inline void set_m_from_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_from_2 = value;
	}

	inline static int32_t get_offset_of_m_until_3() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_until_3)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_until_3() const { return ___m_until_3; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_until_3() { return &___m_until_3; }
	inline void set_m_until_3(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_until_3 = value;
	}

	inline static int32_t get_offset_of_issuer_4() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___issuer_4)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_issuer_4() const { return ___issuer_4; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_issuer_4() { return &___issuer_4; }
	inline void set_issuer_4(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___issuer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuer_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_issuername_5() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_issuername_5)); }
	inline String_t* get_m_issuername_5() const { return ___m_issuername_5; }
	inline String_t** get_address_of_m_issuername_5() { return &___m_issuername_5; }
	inline void set_m_issuername_5(String_t* value)
	{
		___m_issuername_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_issuername_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyalgo_6() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_keyalgo_6)); }
	inline String_t* get_m_keyalgo_6() const { return ___m_keyalgo_6; }
	inline String_t** get_address_of_m_keyalgo_6() { return &___m_keyalgo_6; }
	inline void set_m_keyalgo_6(String_t* value)
	{
		___m_keyalgo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyalgo_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_keyalgoparams_7() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_keyalgoparams_7)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_keyalgoparams_7() const { return ___m_keyalgoparams_7; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_keyalgoparams_7() { return &___m_keyalgoparams_7; }
	inline void set_m_keyalgoparams_7(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_keyalgoparams_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_keyalgoparams_7), (void*)value);
	}

	inline static int32_t get_offset_of_subject_8() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___subject_8)); }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * get_subject_8() const { return ___subject_8; }
	inline ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 ** get_address_of_subject_8() { return &___subject_8; }
	inline void set_subject_8(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * value)
	{
		___subject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subject_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_subject_9() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_subject_9)); }
	inline String_t* get_m_subject_9() const { return ___m_subject_9; }
	inline String_t** get_address_of_m_subject_9() { return &___m_subject_9; }
	inline void set_m_subject_9(String_t* value)
	{
		___m_subject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subject_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_publickey_10() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_publickey_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_publickey_10() const { return ___m_publickey_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_publickey_10() { return &___m_publickey_10; }
	inline void set_m_publickey_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_publickey_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_publickey_10), (void*)value);
	}

	inline static int32_t get_offset_of_signature_11() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___signature_11)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_signature_11() const { return ___signature_11; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_signature_11() { return &___signature_11; }
	inline void set_signature_11(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___signature_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___signature_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_signaturealgo_12() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_signaturealgo_12)); }
	inline String_t* get_m_signaturealgo_12() const { return ___m_signaturealgo_12; }
	inline String_t** get_address_of_m_signaturealgo_12() { return &___m_signaturealgo_12; }
	inline void set_m_signaturealgo_12(String_t* value)
	{
		___m_signaturealgo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_signaturealgo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_signaturealgoparams_13() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___m_signaturealgoparams_13)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_signaturealgoparams_13() const { return ___m_signaturealgoparams_13; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_signaturealgoparams_13() { return &___m_signaturealgoparams_13; }
	inline void set_m_signaturealgoparams_13(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_signaturealgoparams_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_signaturealgoparams_13), (void*)value);
	}

	inline static int32_t get_offset_of_certhash_14() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___certhash_14)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_certhash_14() const { return ___certhash_14; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_certhash_14() { return &___certhash_14; }
	inline void set_certhash_14(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___certhash_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certhash_14), (void*)value);
	}

	inline static int32_t get_offset_of__rsa_15() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ____rsa_15)); }
	inline RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * get__rsa_15() const { return ____rsa_15; }
	inline RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B ** get_address_of__rsa_15() { return &____rsa_15; }
	inline void set__rsa_15(RSA_t69A71E36B9C80D9580996FE05CBA0BAF3CE5560B * value)
	{
		____rsa_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rsa_15), (void*)value);
	}

	inline static int32_t get_offset_of__dsa_16() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ____dsa_16)); }
	inline DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * get__dsa_16() const { return ____dsa_16; }
	inline DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 ** get_address_of__dsa_16() { return &____dsa_16; }
	inline void set__dsa_16(DSA_t6AAE59FF3EEECD35DCA27FDF431D10323A2168B7 * value)
	{
		____dsa_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dsa_16), (void*)value);
	}

	inline static int32_t get_offset_of_version_19() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___version_19)); }
	inline int32_t get_version_19() const { return ___version_19; }
	inline int32_t* get_address_of_version_19() { return &___version_19; }
	inline void set_version_19(int32_t value)
	{
		___version_19 = value;
	}

	inline static int32_t get_offset_of_serialnumber_20() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___serialnumber_20)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_serialnumber_20() const { return ___serialnumber_20; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_serialnumber_20() { return &___serialnumber_20; }
	inline void set_serialnumber_20(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___serialnumber_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serialnumber_20), (void*)value);
	}

	inline static int32_t get_offset_of_issuerUniqueID_21() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___issuerUniqueID_21)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_issuerUniqueID_21() const { return ___issuerUniqueID_21; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_issuerUniqueID_21() { return &___issuerUniqueID_21; }
	inline void set_issuerUniqueID_21(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___issuerUniqueID_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___issuerUniqueID_21), (void*)value);
	}

	inline static int32_t get_offset_of_subjectUniqueID_22() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___subjectUniqueID_22)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_subjectUniqueID_22() const { return ___subjectUniqueID_22; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_subjectUniqueID_22() { return &___subjectUniqueID_22; }
	inline void set_subjectUniqueID_22(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___subjectUniqueID_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subjectUniqueID_22), (void*)value);
	}

	inline static int32_t get_offset_of_extensions_23() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4, ___extensions_23)); }
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * get_extensions_23() const { return ___extensions_23; }
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 ** get_address_of_extensions_23() { return &___extensions_23; }
	inline void set_extensions_23(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * value)
	{
		___extensions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_23), (void*)value);
	}
};

struct X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_StaticFields
{
public:
	// System.String Mono.Security.X509.X509Certificate::encoding_error
	String_t* ___encoding_error_24;

public:
	inline static int32_t get_offset_of_encoding_error_24() { return static_cast<int32_t>(offsetof(X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_StaticFields, ___encoding_error_24)); }
	inline String_t* get_encoding_error_24() const { return ___encoding_error_24; }
	inline String_t** get_address_of_encoding_error_24() { return &___encoding_error_24; }
	inline void set_encoding_error_24(String_t* value)
	{
		___encoding_error_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_error_24), (void*)value);
	}
};


// Mono.Security.Protocol.Tls.SslClientStream/NegotiateState
struct NegotiateState_tFD3A1C2690A0D5C7A30E6E18732EBBB51C0F805F 
{
public:
	// System.Int32 Mono.Security.Protocol.Tls.SslClientStream/NegotiateState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NegotiateState_tFD3A1C2690A0D5C7A30E6E18732EBBB51C0F805F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Mono.Security.X509.X509Crl/X509CrlEntry
struct X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224  : public RuntimeObject
{
public:
	// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::sn
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___sn_0;
	// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::revocationDate
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___revocationDate_1;
	// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::extensions
	X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * ___extensions_2;

public:
	inline static int32_t get_offset_of_sn_0() { return static_cast<int32_t>(offsetof(X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224, ___sn_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_sn_0() const { return ___sn_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_sn_0() { return &___sn_0; }
	inline void set_sn_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___sn_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sn_0), (void*)value);
	}

	inline static int32_t get_offset_of_revocationDate_1() { return static_cast<int32_t>(offsetof(X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224, ___revocationDate_1)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_revocationDate_1() const { return ___revocationDate_1; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_revocationDate_1() { return &___revocationDate_1; }
	inline void set_revocationDate_1(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___revocationDate_1 = value;
	}

	inline static int32_t get_offset_of_extensions_2() { return static_cast<int32_t>(offsetof(X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224, ___extensions_2)); }
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * get_extensions_2() const { return ___extensions_2; }
	inline X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 ** get_address_of_extensions_2() { return &___extensions_2; }
	inline void set_extensions_2(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * value)
	{
		___extensions_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extensions_2), (void*)value);
	}
};


// Mono.Security.X509.PKCS12/DeriveBytes/Purpose
struct Purpose_t7670F443EBD5CEC27D3350657191160EC81CFD0F 
{
public:
	// System.Int32 Mono.Security.X509.PKCS12/DeriveBytes/Purpose::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Purpose_t7670F443EBD5CEC27D3350657191160EC81CFD0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.EventWaitHandle
struct EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C  : public WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.FormatException
struct FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA  : public EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C
{
public:

public:
};


// Mono.Security.Protocol.Tls.SslStreamBase/AsyncHandshakeDelegate
struct AsyncHandshakeDelegate_t4C96AE1F2C98CC54FFE7A4D72E882190CED4A8BF  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Array::Reverse<System.Byte>(!!0[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m33A873AE7FA7CD93B19E3B22F9B8909343E3745B_gshared (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalAsyncResult_get_IsCompleted_m864876C3699272857C2293D2F71FA06558AAF93F (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850 (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * __this, bool ___initialState0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38 (EventWaitHandle_t80CDEB33529EF7549E7D3E3B689D8272B9F37F3C * __this, const RuntimeMethod* method);
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncCallback_BeginInvoke_mAD3C6509E4838E7F90B8AE0C206D9B08EE8EFD15 (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * __this, RuntimeObject* ___ar0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method);
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAsyncResult_SetComplete_m0B5C94E1BAD1E1D96170CBEA23C6EAF0CA250C98 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, Exception_t * ___ex0, int32_t ___bytesRead1, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_mA4B27732F618D126931E8402D567F66D798652BE (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Byte[] Mono.Security.ASN1::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, const RuntimeMethod* method);
// System.Void System.Array::Reverse<System.Byte>(!!0[])
inline void Array_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m33A873AE7FA7CD93B19E3B22F9B8909343E3745B (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___array0, const RuntimeMethod* method)
{
	((  void (*) (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, const RuntimeMethod*))Array_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m33A873AE7FA7CD93B19E3B22F9B8909343E3745B_gshared)(___array0, method);
}
// System.DateTime Mono.Security.ASN1Convert::ToDateTime(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ASN1Convert_ToDateTime_mD2EC7545320E6CAFD22E5A6F2F8409D1159118C9 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___time0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X509ExtensionCollection::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509ExtensionCollection__ctor_m8EBE054B35F089A5E46889F53CFB3D16B6FAD07A (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// System.Object System.Array::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C (RuntimeArray * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142 (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, uint8_t ___tag0, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, uint8_t ___tag0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1::Add(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___asn10, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromDateTime(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1Convert_FromDateTime_mF5A3C3D215882DFA7D7749C016F6B5A47C3EF3EF (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___dt0, const RuntimeMethod* method);
// System.Int32 System.Collections.CollectionBase::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionBase_get_Count_mF8C430B07361F591072B2BF01DC0376D8D28EB08 (CollectionBase_tE5EF6826359F7FAC04D2F5E8AB93E1363A5826EB * __this, const RuntimeMethod* method);
// System.Byte[] Mono.Security.X509.X509ExtensionCollection::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509ExtensionCollection_GetBytes_mBCEAC2623AA56BAD135671412B885CADB38448F4 (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * __this, const RuntimeMethod* method);
// System.Void Mono.Security.ASN1::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String Locale::GetText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Locale_GetText_m17007920E374AE1058DDEFCC0A368F83E9D2F7E0 (String_t* ___msg0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * __this, String_t* ___message0, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * AttributeTypeAndValue_GetASN1_mF211479C094C5096C2E9F7585807D0625669A3C6 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, const RuntimeMethod* method);
// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::SelectBestEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AttributeTypeAndValue_SelectBestEncoding_m12BAD2C1046EF9A9CCE32825A8F6880387549B19 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.ASN1Convert::FromOid(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ASN1Convert_FromOid_mB7601D9CF044DB51F7B944AFCEC2E3F5ECD027CB (String_t* ___oid0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_BigEndianUnicode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_BigEndianUnicode_m71CA7A5CD5AE233986B4DC9689C0CC458F64B506 (const RuntimeMethod* method);
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * AttributeTypeAndValue_GetASN1_mB8B9F9CD214D44608624757ACD52099CEA607BB0 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, uint8_t ___encoding0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, String_t* ___oid0, int32_t ___upperBound1, const RuntimeMethod* method);
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m01FA2B8DAF58319A1C5047AFD882755E183BE425 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, String_t* ___oid0, int32_t ___upperBound1, uint8_t ___encoding2, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/AsyncHandshakeDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncHandshakeDelegate__ctor_m852E74109BD14834E9E5915DDC8E59C93FAAD573 (AsyncHandshakeDelegate_t4C96AE1F2C98CC54FFE7A4D72E882190CED4A8BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/AsyncHandshakeDelegate::Invoke(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncHandshakeDelegate_Invoke_m3B0142D0D06E5BC770A8235C351439F14B5C9A9D (AsyncHandshakeDelegate_t4C96AE1F2C98CC54FFE7A4D72E882190CED4A8BF * __this, InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * ___asyncResult0, bool ___fromWrite1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___asyncResult0, ___fromWrite1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___asyncResult0, ___fromWrite1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___asyncResult0, ___fromWrite1);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___asyncResult0, ___fromWrite1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___asyncResult0, ___fromWrite1);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___asyncResult0, ___fromWrite1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___asyncResult0, ___fromWrite1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool >::Invoke(targetMethod, targetThis, ___asyncResult0, ___fromWrite1);
					else
						GenericVirtActionInvoker2< InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool >::Invoke(targetMethod, targetThis, ___asyncResult0, ___fromWrite1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___asyncResult0, ___fromWrite1);
					else
						VirtActionInvoker2< InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___asyncResult0, ___fromWrite1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___asyncResult0, ___fromWrite1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___asyncResult0, ___fromWrite1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase/AsyncHandshakeDelegate::BeginInvoke(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncHandshakeDelegate_BeginInvoke_m1D0A1A88DD702BB71F9064880823594B3C5B33DE (AsyncHandshakeDelegate_t4C96AE1F2C98CC54FFE7A4D72E882190CED4A8BF * __this, InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * ___asyncResult0, bool ___fromWrite1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___asyncResult0;
	__d_args[1] = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &___fromWrite1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/AsyncHandshakeDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncHandshakeDelegate_EndInvoke_mD59324BF0F942A0ACE9A87C759A00CB99FEB4FA8 (AsyncHandshakeDelegate_t4C96AE1F2C98CC54FFE7A4D72E882190CED4A8BF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAsyncResult__ctor_m7CE336CD5BB838CD455C21335160070868519BE2 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___userCallback0, RuntimeObject * ___userState1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buffer2, int32_t ___offset3, int32_t ___count4, bool ___fromWrite5, bool ___proceedAfterHandshake6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		__this->set_locker_0(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_1 = ___userCallback0;
		__this->set__userCallback_1(L_1);
		RuntimeObject * L_2 = ___userState1;
		__this->set__userState_2(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___buffer2;
		__this->set__buffer_9(L_3);
		int32_t L_4 = ___offset3;
		__this->set__offset_10(L_4);
		int32_t L_5 = ___count4;
		__this->set__count_11(L_5);
		bool L_6 = ___fromWrite5;
		__this->set__fromWrite_7(L_6);
		bool L_7 = ___proceedAfterHandshake6;
		__this->set__proceedAfterHandshake_8(L_7);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalAsyncResult_get_ProceedAfterHandshake_m058CEB8BEB7CBC35DDA6F810D1311407B0C4EDE2 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__proceedAfterHandshake_8();
		return L_0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalAsyncResult_get_FromWrite_m169D03CC1BE784E836B1AD3E07014DD756C6D62F (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get__fromWrite_7();
		return L_0;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* InternalAsyncResult_get_Buffer_m536AB3D546236C8C9E902049BC3DD0A937298635 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get__buffer_9();
		return L_0;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalAsyncResult_get_Offset_m896DD757D506842CB3CA7BF79448F8F454A89B14 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__offset_10();
		return L_0;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalAsyncResult_get_Count_mFA5A355B5CDC28689E3F9FE98E4C4FFF1548F923 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__count_11();
		return L_0;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InternalAsyncResult_get_BytesRead_m528AF4F9B2812B57EAEF7BB2989B8236E433D155 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__bytesRead_6();
		return L_0;
	}
}
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * InternalAsyncResult_get_AsyncState_mEF4B50B5CB49C159C763957B488D68916AE264E3 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__userState_2();
		return L_0;
	}
}
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * InternalAsyncResult_get_AsyncException_m2BF76CADD251C22CF6D41EF8DF474CCBC960B7E9 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get__asyncException_3();
		return L_0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalAsyncResult_get_CompletedWithError_mD27CF1333D9C9EB00B4B2530416047105758C877 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = InternalAsyncResult_get_IsCompleted_m864876C3699272857C2293D2F71FA06558AAF93F(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Exception_t * L_1 = __this->get__asyncException_3();
		return (bool)((!(((RuntimeObject*)(Exception_t *)L_1) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}
}
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WaitHandle_t1D7DD8480FD5DA4E3AF92F569890FB972D9B1842 * InternalAsyncResult_get_AsyncWaitHandle_mC93D95C9E9A72B8E9904D23A0BE5A0FEF1408915 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = __this->get_locker_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_2 = __this->get_handle_4();
			if (L_2)
			{
				goto IL_002a;
			}
		}

IL_0019:
		{
			bool L_3 = __this->get_completed_5();
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_4 = (ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA *)il2cpp_codegen_object_new(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_mF80BD5B0955BDA8CD514F48EBFF48698E5D03850(L_4, L_3, /*hidden argument*/NULL);
			__this->set_handle_4(L_4);
		}

IL_002a:
		{
			IL2CPP_LEAVE(0x36, FINALLY_002c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002c;
	}

FINALLY_002c:
	{ // begin finally (depth: 1)
		{
			bool L_5 = V_1;
			if (!L_5)
			{
				goto IL_0035;
			}
		}

IL_002f:
		{
			RuntimeObject * L_6 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_6, /*hidden argument*/NULL);
		}

IL_0035:
		{
			IL2CPP_END_FINALLY(44)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(44)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x36, IL_0036)
	}

IL_0036:
	{
		ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_7 = __this->get_handle_4();
		return L_7;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedSynchronously()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalAsyncResult_get_CompletedSynchronously_m8226BC78C3F0FD481FD7783A5A0F7F2D8743535A (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InternalAsyncResult_get_IsCompleted_m864876C3699272857C2293D2F71FA06558AAF93F (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		RuntimeObject * L_0 = __this->get_locker_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
		bool L_2 = __this->get_completed_5();
		V_2 = L_2;
		IL2CPP_LEAVE(0x24, FINALLY_001a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_001a;
	}

FINALLY_001a:
	{ // begin finally (depth: 1)
		{
			bool L_3 = V_1;
			if (!L_3)
			{
				goto IL_0023;
			}
		}

IL_001d:
		{
			RuntimeObject * L_4 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_4, /*hidden argument*/NULL);
		}

IL_0023:
		{
			IL2CPP_END_FINALLY(26)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(26)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x24, IL_0024)
	}

IL_0024:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAsyncResult_SetComplete_m0B5C94E1BAD1E1D96170CBEA23C6EAF0CA250C98 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, Exception_t * ___ex0, int32_t ___bytesRead1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject * L_0 = __this->get_locker_0();
		V_0 = L_0;
		V_1 = (bool)0;
	}

IL_0009:
	try
	{ // begin try (depth: 1)
		{
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4(L_1, (bool*)(&V_1), /*hidden argument*/NULL);
			bool L_2 = __this->get_completed_5();
			if (!L_2)
			{
				goto IL_001b;
			}
		}

IL_0019:
		{
			IL2CPP_LEAVE(0x67, FINALLY_0046);
		}

IL_001b:
		{
			__this->set_completed_5((bool)1);
			Exception_t * L_3 = ___ex0;
			__this->set__asyncException_3(L_3);
			int32_t L_4 = ___bytesRead1;
			__this->set__bytesRead_6(L_4);
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_5 = __this->get_handle_4();
			if (!L_5)
			{
				goto IL_0044;
			}
		}

IL_0038:
		{
			ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * L_6 = __this->get_handle_4();
			NullCheck(L_6);
			bool L_7;
			L_7 = EventWaitHandle_Set_m81764C887F38A1153224557B26CD688B59987B38(L_6, /*hidden argument*/NULL);
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x50, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_1;
			if (!L_8)
			{
				goto IL_004f;
			}
		}

IL_0049:
		{
			RuntimeObject * L_9 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		}

IL_004f:
		{
			IL2CPP_END_FINALLY(70)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x67, IL_0067)
		IL2CPP_JUMP_TBL(0x50, IL_0050)
	}

IL_0050:
	{
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_10 = __this->get__userCallback_1();
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * L_11 = __this->get__userCallback_1();
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = AsyncCallback_BeginInvoke_mAD3C6509E4838E7F90B8AE0C206D9B08EE8EFD15(L_11, __this, (AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA *)NULL, NULL, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAsyncResult_SetComplete_m98C0B583BD3DF15DFF9F2537A26941084EADB16D (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, Exception_t * ___ex0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___ex0;
		InternalAsyncResult_SetComplete_m0B5C94E1BAD1E1D96170CBEA23C6EAF0CA250C98(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAsyncResult_SetComplete_mA250A8CFEACD683A8668448D5EB304A26CF9600F (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, int32_t ___bytesRead0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___bytesRead0;
		InternalAsyncResult_SetComplete_m0B5C94E1BAD1E1D96170CBEA23C6EAF0CA250C98(__this, (Exception_t *)NULL, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InternalAsyncResult_SetComplete_m69B258619E93CBA22810E642A483C0D7C3D0AB53 (InternalAsyncResult_tA7B8AA46E895B1FA749FE9110E37A78230EF65C8 * __this, const RuntimeMethod* method)
{
	{
		InternalAsyncResult_SetComplete_m0B5C94E1BAD1E1D96170CBEA23C6EAF0CA250C98(__this, (Exception_t *)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::.ctor(Mono.Security.X509.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator__ctor_m121D2627B82462B1F3AF7637F188AA1013879E1D (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007 * ___mappings0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t0DAAA85510B59E75383BC1EE490665DFBFFFE007 * L_0 = ___mappings0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		__this->set_enumerator_0(L_1);
		return;
	}
}
// Mono.Security.X509.X509Certificate Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 * X509CertificateEnumerator_get_Current_mA9AD4D624A06130CD4A92FCDC0B03A52425D5BE6 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return ((X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4 *)CastclassClass((RuntimeObject*)L_1, X509Certificate_tCE5B2AFC606280A83C6A904EB41F0CD5DC32BAA4_il2cpp_TypeInfo_var));
	}
}
// System.Object Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * X509CertificateEnumerator_System_Collections_IEnumerator_get_Current_m60E14E055A388DEF34E5D4AB19A73C2789D8B00B (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_System_Collections_IEnumerator_MoveNext_m7F2C17CFD3DFD79B14CCEF343CA9C593C064169F (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator_System_Collections_IEnumerator_Reset_m6B7E6EE6C087A2833A11BAF537C0D162619AF889 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
// System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m6D9B757FF19EE0AB676DF601D145009646579840 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateEnumerator_Reset_m07104600B257FAFB82C8107B7E35331910DD8D44 (X509CertificateEnumerator_tEB06C9311EB4446FA5D4E767E87ECB6C89ECF61A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(System.Byte[],System.DateTime,Mono.Security.X509.X509ExtensionCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_mE512F6EB863C7D3E9CE8356DE7410374A3834C4B (X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___serialNumber0, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___revocationDate1, X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * ___extensions2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___serialNumber0;
		__this->set_sn_0(L_0);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___revocationDate1;
		__this->set_revocationDate_1(L_1);
		X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * L_2 = ___extensions2;
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * L_3 = (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 *)il2cpp_codegen_object_new(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_mA4B27732F618D126931E8402D567F66D798652BE(L_3, /*hidden argument*/NULL);
		__this->set_extensions_2(L_3);
		return;
	}

IL_0023:
	{
		X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * L_4 = ___extensions2;
		__this->set_extensions_2(L_4);
		return;
	}
}
// System.Void Mono.Security.X509.X509Crl/X509CrlEntry::.ctor(Mono.Security.ASN1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CrlEntry__ctor_mB445F5901DF3BC97DADFE520AD6C7081F28240F9 (X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224 * __this, ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * ___entry0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m33A873AE7FA7CD93B19E3B22F9B8909343E3745B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = ___entry0;
		NullCheck(L_0);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1;
		L_1 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_0, 0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = ASN1_get_Value_m95545A82635424B999816713F09A224ED01DF0C2(L_1, /*hidden argument*/NULL);
		__this->set_sn_0(L_2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = __this->get_sn_0();
		Array_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m33A873AE7FA7CD93B19E3B22F9B8909343E3745B(L_3, /*hidden argument*/Array_Reverse_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m33A873AE7FA7CD93B19E3B22F9B8909343E3745B_RuntimeMethod_var);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_4 = ___entry0;
		NullCheck(L_4);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5;
		L_5 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_4, 1, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6;
		L_6 = ASN1Convert_ToDateTime_mD2EC7545320E6CAFD22E5A6F2F8409D1159118C9(L_5, /*hidden argument*/NULL);
		__this->set_revocationDate_1(L_6);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7 = ___entry0;
		NullCheck(L_7);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_8;
		L_8 = ASN1_get_Item_mBA4AF2346A0847038957881A98202AF8DAF09B50(L_7, 2, /*hidden argument*/NULL);
		X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * L_9 = (X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 *)il2cpp_codegen_object_new(X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487_il2cpp_TypeInfo_var);
		X509ExtensionCollection__ctor_m8EBE054B35F089A5E46889F53CFB3D16B6FAD07A(L_9, L_8, /*hidden argument*/NULL);
		__this->set_extensions_2(L_9);
		return;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::get_SerialNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509CrlEntry_get_SerialNumber_m2FDCC967DF87F6728F449514C835958EA0488D88 (X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = __this->get_sn_0();
		NullCheck((RuntimeArray *)(RuntimeArray *)L_0);
		RuntimeObject * L_1;
		L_1 = Array_Clone_m3C566B3D3F4333212411BD7C3B61D798BADB3F3C((RuntimeArray *)(RuntimeArray *)L_0, /*hidden argument*/NULL);
		return ((ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)Castclass((RuntimeObject*)L_1, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var));
	}
}
// System.DateTime Mono.Security.X509.X509Crl/X509CrlEntry::get_RevocationDate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  X509CrlEntry_get_RevocationDate_m8ECD326AD50CFC0D18449D3EFC5552C7964F4F46 (X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224 * __this, const RuntimeMethod* method)
{
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0 = __this->get_revocationDate_1();
		return L_0;
	}
}
// Mono.Security.X509.X509ExtensionCollection Mono.Security.X509.X509Crl/X509CrlEntry::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * X509CrlEntry_get_Extensions_mC40BB32818E90ABF036E20A92298C02870AFB5D9 (X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224 * __this, const RuntimeMethod* method)
{
	{
		X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * L_0 = __this->get_extensions_2();
		return L_0;
	}
}
// System.Byte[] Mono.Security.X509.X509Crl/X509CrlEntry::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* X509CrlEntry_GetBytes_m0643941124773DACD54A5555B6CD9AC643644062 (X509CrlEntry_tE9385F5A1C235D859947A300710791EF795CA224 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_0 = NULL;
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_0, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_0 = L_0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2 = __this->get_sn_0();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_3 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_3, (uint8_t)2, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_4;
		L_4 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_1, L_3, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_5 = V_0;
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_6 = __this->get_revocationDate_1();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7;
		L_7 = ASN1Convert_FromDateTime_mF5A3C3D215882DFA7D7749C016F6B5A47C3EF3EF(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_8;
		L_8 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_5, L_7, /*hidden argument*/NULL);
		X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * L_9 = __this->get_extensions_2();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = CollectionBase_get_Count_mF8C430B07361F591072B2BF01DC0376D8D28EB08(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_10) <= ((int32_t)0)))
		{
			goto IL_0052;
		}
	}
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11 = V_0;
		X509ExtensionCollection_t678BE5FA95A42FDF1EB9BB2584C2AFE79E0B3487 * L_12 = __this->get_extensions_2();
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = X509ExtensionCollection_GetBytes_mBCEAC2623AA56BAD135671412B885CADB38448F4(L_12, /*hidden argument*/NULL);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_14 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mE534D499DABEAAA35E0F30572CD295A9FCFA1C7E(L_14, L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15;
		L_15 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_11, L_14, /*hidden argument*/NULL);
	}

IL_0052:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16 = V_0;
		NullCheck(L_16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17;
		L_17 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_16);
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X509Stores/Names::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Names__ctor_m699CEE025E2B4407741154623D4132A86BEC3B62 (Names_t734FE4EA7A5338D4CE5A8FB5A63489925870029C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, String_t* ___oid0, int32_t ___upperBound1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oid0;
		__this->set_oid_0(L_0);
		int32_t L_1 = ___upperBound1;
		__this->set_upperBound_2(L_1);
		__this->set_encoding_3((uint8_t)((int32_t)255));
		return;
	}
}
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::.ctor(System.String,System.Int32,System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue__ctor_m01FA2B8DAF58319A1C5047AFD882755E183BE425 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, String_t* ___oid0, int32_t ___upperBound1, uint8_t ___encoding2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___oid0;
		__this->set_oid_0(L_0);
		int32_t L_1 = ___upperBound1;
		__this->set_upperBound_2(L_1);
		uint8_t L_2 = ___encoding2;
		__this->set_encoding_3(L_2);
		return;
	}
}
// System.String Mono.Security.X509.X520/AttributeTypeAndValue::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AttributeTypeAndValue_get_Value_mCE7AE0F0ED3D7BC9645AF7E2A64B852B30F2CD96 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_attrValue_1();
		return L_0;
	}
}
// System.Void Mono.Security.X509.X520/AttributeTypeAndValue::set_Value(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AttributeTypeAndValue_set_Value_m99BB2D2324D1A14C5A1A1FEFB427A9A5B4987B47 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_attrValue_1();
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_1 = __this->get_attrValue_1();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_1, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_upperBound_2();
		if ((((int32_t)L_2) <= ((int32_t)L_3)))
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_4;
		L_4 = Locale_GetText_m17007920E374AE1058DDEFCC0A368F83E9D2F7E0(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE2E76050A1D2C1BF365ADD81069B2ACDF5784752)), /*hidden argument*/NULL);
		int32_t L_5 = __this->get_upperBound_2();
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(L_4, L_7, /*hidden argument*/NULL);
		FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 * L_9 = (FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_t119BB207B54B4B1BC28D9B1783C4625AE23D4759_il2cpp_TypeInfo_var)));
		FormatException__ctor_mB8F9A26F985EF9A6C0C082F7D70CFDF2DBDBB23B(L_9, L_8, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AttributeTypeAndValue_set_Value_m99BB2D2324D1A14C5A1A1FEFB427A9A5B4987B47_RuntimeMethod_var)));
	}

IL_003b:
	{
		String_t* L_10 = ___value0;
		__this->set_attrValue_1(L_10);
		return;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::get_ASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * AttributeTypeAndValue_get_ASN1_m67E57CB36BB387783F90C2FC848473C661B789B8 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0;
		L_0 = AttributeTypeAndValue_GetASN1_mF211479C094C5096C2E9F7585807D0625669A3C6(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * AttributeTypeAndValue_GetASN1_mB8B9F9CD214D44608624757ACD52099CEA607BB0 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, uint8_t ___encoding0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * V_1 = NULL;
	{
		uint8_t L_0 = ___encoding0;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)255)))))
		{
			goto IL_0011;
		}
	}
	{
		uint8_t L_2;
		L_2 = AttributeTypeAndValue_SelectBestEncoding_m12BAD2C1046EF9A9CCE32825A8F6880387549B19(__this, /*hidden argument*/NULL);
		V_0 = L_2;
	}

IL_0011:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_3 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mC8594B7A2376B58F26F1D0457B0F9F5880D87142(L_3, (uint8_t)((int32_t)48), /*hidden argument*/NULL);
		V_1 = L_3;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_4 = V_1;
		String_t* L_5 = __this->get_oid_0();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_6;
		L_6 = ASN1Convert_FromOid_mB7601D9CF044DB51F7B944AFCEC2E3F5ECD027CB(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_7;
		L_7 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_4, L_6, /*hidden argument*/NULL);
		uint8_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)19))))
		{
			goto IL_003c;
		}
	}
	{
		uint8_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)22))))
		{
			goto IL_005c;
		}
	}
	{
		uint8_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)30))))
		{
			goto IL_007c;
		}
	}
	{
		goto IL_009a;
	}

IL_003c:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_11 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_12;
		L_12 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		String_t* L_13 = __this->get_attrValue_1();
		NullCheck(L_12);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_12, L_13);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_15 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_15, (uint8_t)((int32_t)19), L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_16;
		L_16 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_11, L_15, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_005c:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_17 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_18;
		L_18 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		String_t* L_19 = __this->get_attrValue_1();
		NullCheck(L_18);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20;
		L_20 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_18, L_19);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_21 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_21, (uint8_t)((int32_t)22), L_20, /*hidden argument*/NULL);
		NullCheck(L_17);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_22;
		L_22 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_17, L_21, /*hidden argument*/NULL);
		goto IL_009a;
	}

IL_007c:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_23 = V_1;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_24;
		L_24 = Encoding_get_BigEndianUnicode_m71CA7A5CD5AE233986B4DC9689C0CC458F64B506(/*hidden argument*/NULL);
		String_t* L_25 = __this->get_attrValue_1();
		NullCheck(L_24);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_26;
		L_26 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_24, L_25);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_27 = (ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 *)il2cpp_codegen_object_new(ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8_il2cpp_TypeInfo_var);
		ASN1__ctor_mB8A19279E6079D30BB6A594ADAC7FEE89E822CDC(L_27, (uint8_t)((int32_t)30), L_26, /*hidden argument*/NULL);
		NullCheck(L_23);
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_28;
		L_28 = ASN1_Add_m35AB44F469BE9C185A91D2E265A7DA6B27311F7B(L_23, L_27, /*hidden argument*/NULL);
	}

IL_009a:
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_29 = V_1;
		return L_29;
	}
}
// Mono.Security.ASN1 Mono.Security.X509.X520/AttributeTypeAndValue::GetASN1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * AttributeTypeAndValue_GetASN1_mF211479C094C5096C2E9F7585807D0625669A3C6 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = __this->get_encoding_3();
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1;
		L_1 = AttributeTypeAndValue_GetASN1_mB8B9F9CD214D44608624757ACD52099CEA607BB0(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Byte[] Mono.Security.X509.X520/AttributeTypeAndValue::GetBytes(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AttributeTypeAndValue_GetBytes_m25F1D935E16859FC8D7D790222AEABB4C81D9A58 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, uint8_t ___encoding0, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = ___encoding0;
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_1;
		L_1 = AttributeTypeAndValue_GetASN1_mB8B9F9CD214D44608624757ACD52099CEA607BB0(__this, L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_2;
		L_2 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_1);
		return L_2;
	}
}
// System.Byte[] Mono.Security.X509.X520/AttributeTypeAndValue::GetBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AttributeTypeAndValue_GetBytes_mA422DF3B389078EC82124223F54C87AB9CF08E4E (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, const RuntimeMethod* method)
{
	{
		ASN1_tCB86B6A02250200ED166EA857DC3D1C422BD94D8 * L_0;
		L_0 = AttributeTypeAndValue_GetASN1_mF211479C094C5096C2E9F7585807D0625669A3C6(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_0);
		return L_1;
	}
}
// System.Byte Mono.Security.X509.X520/AttributeTypeAndValue::SelectBestEncoding()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t AttributeTypeAndValue_SelectBestEncoding_m12BAD2C1046EF9A9CCE32825A8F6880387549B19 (AttributeTypeAndValue_tB8BA7F1B20002B7FDE43930F86C4025AE6FBA4F7 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = __this->get_attrValue_1();
		V_0 = L_0;
		V_1 = 0;
		goto IL_002c;
	}

IL_000b:
	{
		String_t* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		Il2CppChar L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)64))))
		{
			goto IL_001d;
		}
	}
	{
		Il2CppChar L_5 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_0020;
		}
	}

IL_001d:
	{
		return (uint8_t)((int32_t)30);
	}

IL_0020:
	{
		Il2CppChar L_6 = V_2;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0028;
		}
	}
	{
		return (uint8_t)((int32_t)30);
	}

IL_0028:
	{
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_8 = V_1;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_000b;
		}
	}
	{
		return (uint8_t)((int32_t)19);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/CommonName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonName__ctor_mE5CF432185505A86D5F32CD54778B8BE8781EB6A (CommonName_t797C08B4FC839CCFCD55F99FA85589997E4A58B3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94227CA8EB4252C21E39FE8CCB2B65A6D01D3CF1);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteral94227CA8EB4252C21E39FE8CCB2B65A6D01D3CF1, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/CountryName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountryName__ctor_m9F974BCAE87C1303E5BBE29C941C55B5D4E3C926 (CountryName_t58682192C0C1365E9218AD39F4559435DBA1A6E6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral453A07B8CC155ECBEB68D277EC848642FFB5F3B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m01FA2B8DAF58319A1C5047AFD882755E183BE425(__this, _stringLiteral453A07B8CC155ECBEB68D277EC848642FFB5F3B6, 2, (uint8_t)((int32_t)19), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/DnQualifier::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnQualifier__ctor_m0E2200F3126D44E095123F9985643E361E8D9BDF (DnQualifier_tEC393AB8D9F174345752E011C31ACD0C318315ED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14D13302CA125B23FDC663B73325C42B8DA4C1EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m01FA2B8DAF58319A1C5047AFD882755E183BE425(__this, _stringLiteral14D13302CA125B23FDC663B73325C42B8DA4C1EB, 2, (uint8_t)((int32_t)19), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/DomainComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DomainComponent__ctor_m1623600518DC24982A94817B433168A1B4764974 (DomainComponent_tE2A8BC5BD632B791318AC8A917ACF4EB7EC7FAE6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53B85B740DDFDFB7BB24AB3B12A0E6CC2C75D9FB);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m01FA2B8DAF58319A1C5047AFD882755E183BE425(__this, _stringLiteral53B85B740DDFDFB7BB24AB3B12A0E6CC2C75D9FB, ((int32_t)2147483647LL), (uint8_t)((int32_t)22), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/EmailAddress::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmailAddress__ctor_m5700532BC317BE511B120C79C3967A38C4127014 (EmailAddress_tC135E93658B1E30DD1CFEAD2BC964B343DC1C28A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BD64CDDC726EEC9781AF7725F934C659848D974);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m01FA2B8DAF58319A1C5047AFD882755E183BE425(__this, _stringLiteral4BD64CDDC726EEC9781AF7725F934C659848D974, ((int32_t)128), (uint8_t)((int32_t)22), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/GivenName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GivenName__ctor_mA9EDE2DCE939F971A800B7BABC29768FF58344A3 (GivenName_tF8AAAF5D1F2D338C246189B72E5D3D7E69F59DFD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B491B08D7F3147A54D3A6892A54AE8DC9C9106F);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteral0B491B08D7F3147A54D3A6892A54AE8DC9C9106F, ((int32_t)16), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/Initial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initial__ctor_m92A8E5F71993B9DDC3B79990A4231488B869461F (Initial_t8AE654452093D9E87C473E857C900451D4657C0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A9A5AB04CCC916E2271E013ECB39F5CC0DED339);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteral2A9A5AB04CCC916E2271E013ECB39F5CC0DED339, 5, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/LocalityName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalityName__ctor_m5320E0CA1E65E8C140B84054F6F4A6E5F09614C0 (LocalityName_t618AA3E1097D0E938897669963FE840A7A51635C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E975408BDC3CEEA3B3BBEDC11D8AE5E1FFE9B0B);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteral1E975408BDC3CEEA3B3BBEDC11D8AE5E1FFE9B0B, ((int32_t)128), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/Name::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Name__ctor_m080A4F209CCD4117159B807163C29C411E80C373 (Name_t1FFADAA295858B7A96EA023D3F4FD944B086380D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA2AC7DA2122607235D3D7EB8F5258E77B26CA40);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteralEA2AC7DA2122607235D3D7EB8F5258E77B26CA40, ((int32_t)32768), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/Oid::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Oid__ctor_m0FB6EB0C2514EC7BFB711AF31494C3102262C394 (Oid_t993CF959EC73A4D56320FD393D6FF2EE2A3BD893 * __this, String_t* ___oid0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___oid0;
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, L_0, ((int32_t)2147483647LL), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/OrganizationName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrganizationName__ctor_mFF3303A34D62210971EDA5032D3CD8C5616D6012 (OrganizationName_t8C2467DD0A5147947C017FA6E6471E948DBA7317 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD381BE73F585C3796C220566E891E458F9D6290);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteralDD381BE73F585C3796C220566E891E458F9D6290, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/OrganizationalUnitName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrganizationalUnitName__ctor_mC2582C46E6FB02E73034185E17FB156193E39454 (OrganizationalUnitName_t1B37932ECFE6B1E88C35308450D416D0A96EC9FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99C134A36D015746C32203B98CC495F87311D9DC);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteral99C134A36D015746C32203B98CC495F87311D9DC, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/SerialNumber::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialNumber__ctor_m91217DFBC0E5792C2A21D679466ABA785D88E39B (SerialNumber_t0174FC974E9E32A6E6E661478289FA1555C4EC07 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF24BCEBD3BF54143DC34399B1E3AD4F93496E764);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m01FA2B8DAF58319A1C5047AFD882755E183BE425(__this, _stringLiteralF24BCEBD3BF54143DC34399B1E3AD4F93496E764, ((int32_t)64), (uint8_t)((int32_t)19), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/StateOrProvinceName::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateOrProvinceName__ctor_m3687F31516D865BC71EAFE0D0FAE2ADB8A418B23 (StateOrProvinceName_tC07359C2B06BBAA69D754FB9622395764923EF8F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A7FC08E8EB016BAD5A8A8D7B3447DAD63E867BC);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteral1A7FC08E8EB016BAD5A8A8D7B3447DAD63E867BC, ((int32_t)128), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/Surname::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Surname__ctor_m352A1534943913ECFE5F577700B32D39E9E54929 (Surname_t3D242E171450C07F7CB969508E9E06BCDC84B150 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEBD4C8F55D7CC1B6E65FF051696B9E0B128A9EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteralFEBD4C8F55D7CC1B6E65FF051696B9E0B128A9EA, ((int32_t)32768), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/Title::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Title__ctor_m1B854FC1FA963AD1F863F933F5FD52B69B45E72D (Title_tAA081A8464E89A9AAFA08EA949F47BC65D309917 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3BFC0737E4F6504E6E8C5B00F9FB2F64D65E1A7);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteralA3BFC0737E4F6504E6E8C5B00F9FB2F64D65E1A7, ((int32_t)64), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.X509.X520/UserId::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UserId__ctor_mC61DF94236FFF34AE6DB5B86F0049B2AE717E504 (UserId_t9BDC54820A474FAF628875C8974F061913DA5F06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0F3B9B4F2F6967A4C936C40E1D9868E492D3EB5);
		s_Il2CppMethodInitialized = true;
	}
	{
		AttributeTypeAndValue__ctor_m1B9DB2A7CEF4068B8FB5A32ED55AF804E8D46CC8(__this, _stringLiteralD0F3B9B4F2F6967A4C936C40E1D9868E492D3EB5, ((int32_t)256), /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
