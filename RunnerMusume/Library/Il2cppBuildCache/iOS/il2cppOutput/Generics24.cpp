#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149;
// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7;
// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04;
// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A;
// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B;
// System.Func`2<System.Boolean,System.Object>
struct Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB;
// System.Func`2<System.Byte,System.Boolean>
struct Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC;
// System.Func`2<System.Byte,System.Byte>
struct Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1;
// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274;
// System.Func`2<System.Int32,System.Object>
struct Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Object,System.Object>>
struct IEnumerable_1_tB9606E6175679C8FA0B175E810C7ADBD5586C964;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642;
// System.Collections.Generic.IEnumerable`1<System.Byte>
struct IEnumerable_1_t87C38B0EE9F1DE9AFC8F366EEAE5D497C061B4E1;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t60929E1AA80B46746F987B99A4EBD004FD72D370;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Object,System.Object>>
struct IEnumerator_1_t1047E0E757710AC7E18EA36721DB025B94D18F20;
// System.Collections.Generic.IEnumerator`1<System.Boolean>
struct IEnumerator_1_tD64DA1873BBF65E545905171348E0241A3B706C0;
// System.Collections.Generic.IEnumerator`1<System.Byte>
struct IEnumerator_1_t9C161AD4E982EC01062A5E052662E7862A7874F4;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t72AB4B40AF5290B386215B0BFADC8919D394DCAB;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75;
// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933;
// System.Linq.Enumerable/Iterator`1<System.Byte>
struct Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238;
// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279;
// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Linq.Enumerable/WhereArrayIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B;
// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>
struct WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>
struct WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086;
// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0;
// System.Linq.Enumerable/WhereListIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769;
// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Boolean>
struct WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Object>
struct WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Byte,System.Byte>
struct WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Boolean>
struct WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>
struct WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>
struct WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D;
// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Boolean>
struct WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Object>
struct WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Byte,System.Byte>
struct WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Boolean>
struct WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>
struct WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>
struct WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA;
// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Boolean>
struct WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Object>
struct WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>
struct WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>
struct WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>
struct WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2;
// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37;
// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>
struct XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB;
// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>
struct XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E;
// System.ValueTuple`2<System.Object,System.Object>[]
struct ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
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
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t7D54ECDB435500E465AB8ED63654818C8D79B1D9;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor
struct EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mD195522046E66601A359B089CD0FEBA9AE650691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_4_System_IComparable_CompareTo_mBE7E507D5C3B843F96988CDDC9D4A1303A7408DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m2A9F8525355B0CD2188600AA0ADC0B5D934B262B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_IComparable_CompareTo_m3DDEAE36E5F1BF402AB114C9CC1BEE62765A08DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E;
struct ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Comparer`1<System.Boolean>
struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Comparer`1<System.Object>
struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84  : public RuntimeObject
{
public:

public:
};

struct Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields
{
public:
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84_StaticFields, ___defaultComparer_0)); }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Object>
struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Linq.Enumerable/Iterator`1<System.Boolean>
struct Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	bool ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933, ___current_2)); }
	inline bool get_current_2() const { return ___current_2; }
	inline bool* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(bool value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Byte>
struct Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	uint8_t ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238, ___current_2)); }
	inline uint8_t get_current_2() const { return ___current_2; }
	inline uint8_t* get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(uint8_t value)
	{
		___current_2 = value;
	}
};


// System.Linq.Enumerable/Iterator`1<System.Object>
struct Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	RuntimeObject * ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279, ___current_2)); }
	inline RuntimeObject * get_current_2() const { return ___current_2; }
	inline RuntimeObject ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(RuntimeObject * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.ValueTuple`2<System.Object,System.Object>>
struct List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC, ____items_1)); }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* get__items_1() const { return ____items_1; }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC_StaticFields, ____emptyArray_5)); }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____items_1)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Byte>
struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____items_1)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__items_1() const { return ____items_1; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF_StaticFields, ____emptyArray_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE  : public RuntimeObject
{
public:
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::entries
	EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* ___entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::numEntries
	int32_t ___numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::extractKey
	ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey_3;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___entries_1)); }
	inline EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_numEntries_2() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___numEntries_2)); }
	inline int32_t get_numEntries_2() const { return ___numEntries_2; }
	inline int32_t* get_address_of_numEntries_2() { return &___numEntries_2; }
	inline void set_numEntries_2(int32_t value)
	{
		___numEntries_2 = value;
	}

	inline static int32_t get_offset_of_extractKey_3() { return static_cast<int32_t>(offsetof(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE, ___extractKey_3)); }
	inline ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * get_extractKey_3() const { return ___extractKey_3; }
	inline ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 ** get_address_of_extractKey_3() { return &___extractKey_3; }
	inline void set_extractKey_3(ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * value)
	{
		___extractKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___extractKey_3), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37  : public RuntimeObject
{
public:
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::state
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * ___state_0;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37, ___state_0)); }
	inline XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * get_state_0() const { return ___state_0; }
	inline XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE ** get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * value)
	{
		___state_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___state_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC  : public RuntimeObject
{
public:
	// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.CustomTypeDescriptor::_parent
	RuntimeObject* ____parent_0;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC, ____parent_0)); }
	inline RuntimeObject* get__parent_0() const { return ____parent_0; }
	inline RuntimeObject** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(RuntimeObject* value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
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


// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0  : public RuntimeObject
{
public:
	// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptionProvider::_parent
	TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * ____parent_0;
	// System.ComponentModel.TypeDescriptionProvider/EmptyCustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::_emptyDescriptor
	EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * ____emptyDescriptor_1;

public:
	inline static int32_t get_offset_of__parent_0() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0, ____parent_0)); }
	inline TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * get__parent_0() const { return ____parent_0; }
	inline TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 ** get_address_of__parent_0() { return &____parent_0; }
	inline void set__parent_0(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * value)
	{
		____parent_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_0), (void*)value);
	}

	inline static int32_t get_offset_of__emptyDescriptor_1() { return static_cast<int32_t>(offsetof(TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0, ____emptyDescriptor_1)); }
	inline EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * get__emptyDescriptor_1() const { return ____emptyDescriptor_1; }
	inline EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 ** get_address_of__emptyDescriptor_1() { return &____emptyDescriptor_1; }
	inline void set__emptyDescriptor_1(EmptyCustomTypeDescriptor_t685EFA12E535D8266F3F878EB5FA7B02BD2630A4 * value)
	{
		____emptyDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyDescriptor_1), (void*)value);
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

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>
struct Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 
{
public:
	// TValue System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Value
	RuntimeObject * ___Value_0;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::HashCode
	int32_t ___HashCode_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Next
	int32_t ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___Value_0)); }
	inline RuntimeObject * get_Value_0() const { return ___Value_0; }
	inline RuntimeObject ** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(RuntimeObject * value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94, ___Next_2)); }
	inline int32_t get_Next_2() const { return ___Next_2; }
	inline int32_t* get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(int32_t value)
	{
		___Next_2 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Boolean>
struct Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	bool ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9, ___list_0)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_list_0() const { return ___list_0; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9, ___current_3)); }
	inline bool get_current_3() const { return ___current_3; }
	inline bool* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(bool value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Byte>
struct Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	uint8_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254, ___list_0)); }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * get_list_0() const { return ___list_0; }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254, ___current_3)); }
	inline uint8_t get_current_3() const { return ___current_3; }
	inline uint8_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(uint8_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	int32_t ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___list_0)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_list_0() const { return ___list_0; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C, ___current_3)); }
	inline int32_t get_current_3() const { return ___current_3; }
	inline int32_t* get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(int32_t value)
	{
		___current_3 = value;
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 
{
public:
	// T1 System.ValueTuple`2::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject * ___Item2_1;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}
};


// System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>
struct ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 
{
public:
	// T1 System.ValueTuple`4::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`4::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`4::Item3
	RuntimeObject * ___Item3_2;
	// T4 System.ValueTuple`4::Item4
	RuntimeObject * ___Item4_3;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}
};


// System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>
struct ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 
{
public:
	// T1 System.ValueTuple`5::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	bool ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	bool ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	RuntimeObject * ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	RuntimeObject * ___Item5_4;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59, ___Item2_1)); }
	inline bool get_Item2_1() const { return ___Item2_1; }
	inline bool* get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(bool value)
	{
		___Item2_1 = value;
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59, ___Item3_2)); }
	inline bool get_Item3_2() const { return ___Item3_2; }
	inline bool* get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(bool value)
	{
		___Item3_2 = value;
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59, ___Item5_4)); }
	inline RuntimeObject * get_Item5_4() const { return ___Item5_4; }
	inline RuntimeObject ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(RuntimeObject * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
	}
};


// System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>
struct ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 
{
public:
	// T1 System.ValueTuple`5::Item1
	RuntimeObject * ___Item1_0;
	// T2 System.ValueTuple`5::Item2
	RuntimeObject * ___Item2_1;
	// T3 System.ValueTuple`5::Item3
	RuntimeObject * ___Item3_2;
	// T4 System.ValueTuple`5::Item4
	RuntimeObject * ___Item4_3;
	// T5 System.ValueTuple`5::Item5
	RuntimeObject * ___Item5_4;

public:
	inline static int32_t get_offset_of_Item1_0() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item1_0)); }
	inline RuntimeObject * get_Item1_0() const { return ___Item1_0; }
	inline RuntimeObject ** get_address_of_Item1_0() { return &___Item1_0; }
	inline void set_Item1_0(RuntimeObject * value)
	{
		___Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_Item2_1() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item2_1)); }
	inline RuntimeObject * get_Item2_1() const { return ___Item2_1; }
	inline RuntimeObject ** get_address_of_Item2_1() { return &___Item2_1; }
	inline void set_Item2_1(RuntimeObject * value)
	{
		___Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item2_1), (void*)value);
	}

	inline static int32_t get_offset_of_Item3_2() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item3_2)); }
	inline RuntimeObject * get_Item3_2() const { return ___Item3_2; }
	inline RuntimeObject ** get_address_of_Item3_2() { return &___Item3_2; }
	inline void set_Item3_2(RuntimeObject * value)
	{
		___Item3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item3_2), (void*)value);
	}

	inline static int32_t get_offset_of_Item4_3() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item4_3)); }
	inline RuntimeObject * get_Item4_3() const { return ___Item4_3; }
	inline RuntimeObject ** get_address_of_Item4_3() { return &___Item4_3; }
	inline void set_Item4_3(RuntimeObject * value)
	{
		___Item4_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item4_3), (void*)value);
	}

	inline static int32_t get_offset_of_Item5_4() { return static_cast<int32_t>(offsetof(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701, ___Item5_4)); }
	inline RuntimeObject * get_Item5_4() const { return ___Item5_4; }
	inline RuntimeObject ** get_address_of_Item5_4() { return &___Item5_4; }
	inline void set_Item5_4(RuntimeObject * value)
	{
		___Item5_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Item5_4), (void*)value);
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.Object>
struct WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>
struct WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22, ___predicate_4)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>
struct WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086  : public Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086, ___predicate_4)); }
	inline Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>
struct WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89, ___source_3)); }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* get_source_3() const { return ___source_3; }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89, ___selector_5)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58, ___source_3)); }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* get_source_3() const { return ___source_3; }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58, ___selector_5)); }
	inline Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Boolean>
struct WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19, ___source_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_source_3() const { return ___source_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19, ___predicate_4)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19, ___selector_5)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Object>
struct WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B, ___source_3)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_source_3() const { return ___source_3; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B, ___predicate_4)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B, ___selector_5)); }
	inline Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * get_selector_5() const { return ___selector_5; }
	inline Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Byte,System.Byte>
struct WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C  : public Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C, ___source_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_source_3() const { return ___source_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C, ___predicate_4)); }
	inline Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C, ___selector_5)); }
	inline Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Boolean>
struct WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D, ___selector_5)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>
struct WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___source_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_source_3() const { return ___source_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>
struct WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D, ___selector_5)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>
struct WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// TSource[] System.Linq.Enumerable/WhereSelectArrayIterator`2::source
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectArrayIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Int32 System.Linq.Enumerable/WhereSelectArrayIterator`2::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___source_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_source_3() const { return ___source_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF, ___selector_5)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C, ___selector_5)); }
	inline Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Boolean>
struct WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398, ___predicate_4)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398, ___selector_5)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Object>
struct WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4, ___predicate_4)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4, ___selector_5)); }
	inline Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * get_selector_5() const { return ___selector_5; }
	inline Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Byte,System.Byte>
struct WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1  : public Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1, ___predicate_4)); }
	inline Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1, ___selector_5)); }
	inline Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Boolean>
struct WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279, ___selector_5)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>
struct WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>
struct WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA, ___selector_5)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>
struct WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::enumerator
	RuntimeObject* ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB, ___enumerator_6)); }
	inline RuntimeObject* get_enumerator_6() const { return ___enumerator_6; }
	inline RuntimeObject** get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(RuntimeObject* value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_6), (void*)value);
	}
};


// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>
struct XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB  : public TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0
{
public:

public:
};


// MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>
struct XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68  : public CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC
{
public:

public:
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


// System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>
struct Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0, ___list_0)); }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * get_list_0() const { return ___list_0; }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0, ___current_3)); }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  get_current_3() const { return ___current_3; }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75  : public RuntimeObject
{
public:
	// System.Int32 System.Linq.Enumerable/Iterator`1::threadId
	int32_t ___threadId_0;
	// System.Int32 System.Linq.Enumerable/Iterator`1::state
	int32_t ___state_1;
	// TSource System.Linq.Enumerable/Iterator`1::current
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  ___current_2;

public:
	inline static int32_t get_offset_of_threadId_0() { return static_cast<int32_t>(offsetof(Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75, ___threadId_0)); }
	inline int32_t get_threadId_0() const { return ___threadId_0; }
	inline int32_t* get_address_of_threadId_0() { return &___threadId_0; }
	inline void set_threadId_0(int32_t value)
	{
		___threadId_0 = value;
	}

	inline static int32_t get_offset_of_state_1() { return static_cast<int32_t>(offsetof(Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75, ___state_1)); }
	inline int32_t get_state_1() const { return ___state_1; }
	inline int32_t* get_address_of_state_1() { return &___state_1; }
	inline void set_state_1(int32_t value)
	{
		___state_1 = value;
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75, ___current_2)); }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  get_current_2() const { return ___current_2; }
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_2))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.Object>
struct WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD, ___enumerator_5)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Boolean>
struct WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394, ___source_3)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_source_3() const { return ___source_3; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394, ___predicate_4)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394, ___selector_5)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_selector_5() const { return ___selector_5; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394, ___enumerator_6)); }
	inline Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Object>
struct WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876, ___source_3)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_source_3() const { return ___source_3; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876, ___predicate_4)); }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876, ___selector_5)); }
	inline Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * get_selector_5() const { return ___selector_5; }
	inline Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876, ___enumerator_6)); }
	inline Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>
struct WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2  : public Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2, ___source_3)); }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * get_source_3() const { return ___source_3; }
	inline List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2, ___predicate_4)); }
	inline Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2, ___selector_5)); }
	inline Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2, ___enumerator_6)); }
	inline Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>
struct WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21, ___selector_5)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>
struct WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___source_3)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_source_3() const { return ___source_3; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___predicate_4)); }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___selector_5)); }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4, ___enumerator_6)); }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>
struct WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2, ___selector_5)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>
struct WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___source_3)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_source_3() const { return ___source_3; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___predicate_4)); }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___selector_5)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_selector_5() const { return ___selector_5; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2, ___enumerator_6)); }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___current_3), (void*)NULL);
		#endif
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Linq.Enumerable/WhereArrayIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B  : public Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75
{
public:
	// TSource[] System.Linq.Enumerable/WhereArrayIterator`1::source
	ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereArrayIterator`1::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Int32 System.Linq.Enumerable/WhereArrayIterator`1::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B, ___source_3)); }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* get_source_3() const { return ___source_3; }
	inline ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7  : public Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75
{
public:
	// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::source
	RuntimeObject* ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereEnumerableIterator`1::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::enumerator
	RuntimeObject* ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7, ___source_3)); }
	inline RuntimeObject* get_source_3() const { return ___source_3; }
	inline RuntimeObject** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(RuntimeObject* value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7, ___enumerator_5)); }
	inline RuntimeObject* get_enumerator_5() const { return ___enumerator_5; }
	inline RuntimeObject** get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(RuntimeObject* value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumerator_5), (void*)value);
	}
};


// System.Linq.Enumerable/WhereListIterator`1<System.ValueTuple`2<System.Object,System.Object>>
struct WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769  : public Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereListIterator`1::source
	List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereListIterator`1::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereListIterator`1::enumerator
	Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  ___enumerator_5;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769, ___source_3)); }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * get_source_3() const { return ___source_3; }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_5() { return static_cast<int32_t>(offsetof(WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769, ___enumerator_5)); }
	inline Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  get_enumerator_5() const { return ___enumerator_5; }
	inline Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * get_address_of_enumerator_5() { return &___enumerator_5; }
	inline void set_enumerator_5(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  value)
	{
		___enumerator_5 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_5))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_5))->___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456  : public Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456, ___source_3)); }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * get_source_3() const { return ___source_3; }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456, ___selector_5)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_selector_5() const { return ___selector_5; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456, ___enumerator_6)); }
	inline Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
};


// System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20  : public Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279
{
public:
	// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::source
	List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * ___source_3;
	// System.Func`2<TSource,System.Boolean> System.Linq.Enumerable/WhereSelectListIterator`2::predicate
	Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate_4;
	// System.Func`2<TSource,TResult> System.Linq.Enumerable/WhereSelectListIterator`2::selector
	Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * ___selector_5;
	// System.Collections.Generic.List`1/Enumerator<TSource> System.Linq.Enumerable/WhereSelectListIterator`2::enumerator
	Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  ___enumerator_6;

public:
	inline static int32_t get_offset_of_source_3() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20, ___source_3)); }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * get_source_3() const { return ___source_3; }
	inline List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC ** get_address_of_source_3() { return &___source_3; }
	inline void set_source_3(List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * value)
	{
		___source_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___source_3), (void*)value);
	}

	inline static int32_t get_offset_of_predicate_4() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20, ___predicate_4)); }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * get_predicate_4() const { return ___predicate_4; }
	inline Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 ** get_address_of_predicate_4() { return &___predicate_4; }
	inline void set_predicate_4(Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * value)
	{
		___predicate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicate_4), (void*)value);
	}

	inline static int32_t get_offset_of_selector_5() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20, ___selector_5)); }
	inline Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * get_selector_5() const { return ___selector_5; }
	inline Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A ** get_address_of_selector_5() { return &___selector_5; }
	inline void set_selector_5(Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * value)
	{
		___selector_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selector_5), (void*)value);
	}

	inline static int32_t get_offset_of_enumerator_6() { return static_cast<int32_t>(offsetof(WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20, ___enumerator_6)); }
	inline Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  get_enumerator_6() const { return ___enumerator_6; }
	inline Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * get_address_of_enumerator_6() { return &___enumerator_6; }
	inline void set_enumerator_6(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  value)
	{
		___enumerator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___enumerator_6))->___list_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___Item1_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___enumerator_6))->___current_3))->___Item2_1), (void*)NULL);
		#endif
	}
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


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>
struct Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>
struct Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Boolean,System.Boolean>
struct Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Boolean,System.Object>
struct Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Byte,System.Boolean>
struct Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Byte,System.Byte>
struct Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Boolean>
struct Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Int32,System.Object>
struct Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.ValueTuple`2<System.Object,System.Object>[]
struct ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  m_Items[1];

public:
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
		#endif
	}
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Item2_1), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  m_Items[1];

public:
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t07D1CC404E65C6AB3CD8F93EC6546722B73EBF94  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};


// System.Void System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mB4AEFCADC7850AD66A628A35CAE84D2DF81429F2_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`4<T1,T2,T3,T4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_m7E26F9EA467150425CEA306F2D291CBEC4C83921_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_m9A1268F59EB4A8C03D4BA7477846B97BA9547F2B_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m3B9548694B77EAA0D43796D603DF0E0FA025BD33_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`4<T1,T2,T3,T4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_CompareTo_mCFF57BFAF2C7396D22ABCE842F02A3F64D03FD1C_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IComparable_CompareTo_mBE7E507D5C3B843F96988CDDC9D4A1303A7408DD_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mD195522046E66601A359B089CD0FEBA9AE650691_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCode_mBA8E453337A057FEAD466274A08DECD62D0D4A17_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCodeCore_m4F5877B0BED118D530E088A96F87B836DA55B7B4_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m37BEFCECFB7EE2C9A2D4B9F0F4EEA71407DEAA93_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_ToString_mC5E93939ED728874D5F3DD5E76A930F4E65D6063_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m332D10E722FCEDDE7BF3A10AA8913F674F4FFB1B_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___item10, bool ___item21, bool ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mDE41B56C1F83C54281DE3F4FC64DA01F8C0DFD6C_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mA08659806DD13AD3FA7C9DDC8A66C02D2321FFF9_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m1A3A26B4CF82ED5E7A874E4EB99457B06D66FA67_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m8874197E666C9B2E84A5CEB4F8050678ED333A03_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_m3DDEAE36E5F1BF402AB114C9CC1BEE62765A08DC_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m2A9F8525355B0CD2188600AA0ADC0B5D934B262B_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7F896001629983AA3957D23BF9932159BB3CCEE8_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_mE57D84B89E616397C12DB9AB7415F548CAA78E88_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBE6B31CD5D53498B09C533CE2BFEA49A2647F8FF_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m88C3350E201D73A35449280D569EC3B0ED33AB22_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, const RuntimeMethod* method);
// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_gshared_inline (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587_gshared (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Boolean>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_get_Current_m19632EFFAA50F452EA487CBA0F1781963A3B5396_gshared_inline (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m829A3B1476C9E85C909907D33E9A81B4CFD5728F_gshared (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Byte>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_m946A5CE0B601908DD35DEA70798E35D21104C637_gshared_inline (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8AD7612CD13206AF84EA29A3917A272D3694DF63_gshared (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method);

// System.Void System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4)
inline void ValueTuple_4__ctor_mB4AEFCADC7850AD66A628A35CAE84D2DF81429F2 (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_4__ctor_mB4AEFCADC7850AD66A628A35CAE84D2DF81429F2_gshared)(__this, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`4<T1,T2,T3,T4>)
inline bool ValueTuple_4_Equals_m7E26F9EA467150425CEA306F2D291CBEC4C83921 (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 , const RuntimeMethod*))ValueTuple_4_Equals_m7E26F9EA467150425CEA306F2D291CBEC4C83921_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_4_Equals_m9A1268F59EB4A8C03D4BA7477846B97BA9547F2B (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_4_Equals_m9A1268F59EB4A8C03D4BA7477846B97BA9547F2B_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m3B9548694B77EAA0D43796D603DF0E0FA025BD33 (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m3B9548694B77EAA0D43796D603DF0E0FA025BD33_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String SR::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8 (String_t* ___resourceFormat0, RuntimeObject * ___p11, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`4<T1,T2,T3,T4>)
inline int32_t ValueTuple_4_CompareTo_mCFF57BFAF2C7396D22ABCE842F02A3F64D03FD1C (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 , const RuntimeMethod*))ValueTuple_4_CompareTo_mCFF57BFAF2C7396D22ABCE842F02A3F64D03FD1C_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_4_System_IComparable_CompareTo_mBE7E507D5C3B843F96988CDDC9D4A1303A7408DD (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_4_System_IComparable_CompareTo_mBE7E507D5C3B843F96988CDDC9D4A1303A7408DD_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mD195522046E66601A359B089CD0FEBA9AE650691 (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mD195522046E66601A359B089CD0FEBA9AE650691_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_mEA32AD08CEAD750BAC3650A78417195804185047 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_4_GetHashCode_mBA8E453337A057FEAD466274A08DECD62D0D4A17 (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, const RuntimeMethod*))ValueTuple_4_GetHashCode_mBA8E453337A057FEAD466274A08DECD62D0D4A17_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_4_GetHashCodeCore_m4F5877B0BED118D530E088A96F87B836DA55B7B4 (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_GetHashCodeCore_m4F5877B0BED118D530E088A96F87B836DA55B7B4_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m37BEFCECFB7EE2C9A2D4B9F0F4EEA71407DEAA93 (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m37BEFCECFB7EE2C9A2D4B9F0F4EEA71407DEAA93_gshared)(__this, ___comparer0, method);
}
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.String System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_4_ToString_mC5E93939ED728874D5F3DD5E76A930F4E65D6063 (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *, const RuntimeMethod*))ValueTuple_4_ToString_mC5E93939ED728874D5F3DD5E76A930F4E65D6063_gshared)(__this, method);
}
// System.Void System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_m332D10E722FCEDDE7BF3A10AA8913F674F4FFB1B (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___item10, bool ___item21, bool ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, RuntimeObject *, bool, bool, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5__ctor_m332D10E722FCEDDE7BF3A10AA8913F674F4FFB1B_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline bool ValueTuple_5_Equals_mDE41B56C1F83C54281DE3F4FC64DA01F8C0DFD6C (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 , const RuntimeMethod*))ValueTuple_5_Equals_mDE41B56C1F83C54281DE3F4FC64DA01F8C0DFD6C_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_5_Equals_mA08659806DD13AD3FA7C9DDC8A66C02D2321FFF9 (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_Equals_mA08659806DD13AD3FA7C9DDC8A66C02D2321FFF9_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m1A3A26B4CF82ED5E7A874E4EB99457B06D66FA67 (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m1A3A26B4CF82ED5E7A874E4EB99457B06D66FA67_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline int32_t ValueTuple_5_CompareTo_m8874197E666C9B2E84A5CEB4F8050678ED333A03 (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 , const RuntimeMethod*))ValueTuple_5_CompareTo_m8874197E666C9B2E84A5CEB4F8050678ED333A03_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_5_System_IComparable_CompareTo_m3DDEAE36E5F1BF402AB114C9CC1BEE62765A08DC (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_m3DDEAE36E5F1BF402AB114C9CC1BEE62765A08DC_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m2A9F8525355B0CD2188600AA0ADC0B5D934B262B (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m2A9F8525355B0CD2188600AA0ADC0B5D934B262B_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.Boolean::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411 (bool* __this, const RuntimeMethod* method);
// System.Int32 System.ValueTuple::CombineHashCodes(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705 (int32_t ___h10, int32_t ___h21, int32_t ___h32, int32_t ___h43, int32_t ___h54, const RuntimeMethod* method);
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_5_GetHashCode_m7F896001629983AA3957D23BF9932159BB3CCEE8 (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, const RuntimeMethod*))ValueTuple_5_GetHashCode_m7F896001629983AA3957D23BF9932159BB3CCEE8_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_GetHashCodeCore_mE57D84B89E616397C12DB9AB7415F548CAA78E88 (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_mE57D84B89E616397C12DB9AB7415F548CAA78E88_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBE6B31CD5D53498B09C533CE2BFEA49A2647F8FF (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBE6B31CD5D53498B09C533CE2BFEA49A2647F8FF_gshared)(__this, ___comparer0, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_5_ToString_m88C3350E201D73A35449280D569EC3B0ED33AB22 (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *, const RuntimeMethod*))ValueTuple_5_ToString_m88C3350E201D73A35449280D569EC3B0ED33AB22_gshared)(__this, method);
}
// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
inline void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	((  void (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared)(__this, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared)(__this, ___other0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
inline bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared)(__this, ___obj0, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
inline bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  bool (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
inline int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 , const RuntimeMethod*))ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
inline int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, const RuntimeMethod*))ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared)(__this, ___other0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared)(__this, ___other0, ___comparer1, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
inline int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared)(__this, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared)(__this, ___comparer0, method);
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
inline int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349 (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, RuntimeObject*, const RuntimeMethod*))ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared)(__this, ___comparer0, method);
}
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
inline String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *, const RuntimeMethod*))ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::get_Current()
inline ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_inline (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  (*) (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *, const RuntimeMethod*))Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
inline bool Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587 (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *, const RuntimeMethod*))Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0 (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Boolean>::get_Current()
inline bool Enumerator_get_Current_m19632EFFAA50F452EA487CBA0F1781963A3B5396_inline (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *, const RuntimeMethod*))Enumerator_get_Current_m19632EFFAA50F452EA487CBA0F1781963A3B5396_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Boolean>::MoveNext()
inline bool Enumerator_MoveNext_m829A3B1476C9E85C909907D33E9A81B4CFD5728F (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *, const RuntimeMethod*))Enumerator_MoveNext_m829A3B1476C9E85C909907D33E9A81B4CFD5728F_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Byte>::get_Current()
inline uint8_t Enumerator_get_Current_m946A5CE0B601908DD35DEA70798E35D21104C637_inline (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 * __this, const RuntimeMethod* method)
{
	return ((  uint8_t (*) (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 *, const RuntimeMethod*))Enumerator_get_Current_m946A5CE0B601908DD35DEA70798E35D21104C637_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte>::MoveNext()
inline bool Enumerator_MoveNext_m8AD7612CD13206AF84EA29A3917A272D3694DF63 (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 *, const RuntimeMethod*))Enumerator_MoveNext_m8AD7612CD13206AF84EA29A3917A272D3694DF63_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6 (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *, const RuntimeMethod*))Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382 (int32_t* ___location10, int32_t ___value1, int32_t ___comparand2, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m9D5C4C7E08BE06B4D72424590FB4365733FC351D (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8 (int32_t* ___location0, const RuntimeMethod* method);
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402 (const RuntimeMethod* method);
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41 (String_t* ___strA0, int32_t ___indexA1, String_t* ___strB2, int32_t ___indexB3, int32_t ___length4, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4 (RuntimeObject * ___obj0, bool* ___lockTaken1, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * TypeDescriptor_GetProvider_m11FFA30C459E9A3C61DEA0B8A7F96B09545BC86B (Type_t * ___type0, const RuntimeMethod* method);
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeDescriptionProvider__ctor_m6743A730A14CDF72C690886FDECCF202BC156448 (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * __this, TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * ___parent0, const RuntimeMethod* method);
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeDescriptionProvider_GetTypeDescriptor_m2ED48670C3D29D6A1CFE63D0F019BBFE8D03372E (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * __this, Type_t * ___objectType0, RuntimeObject * ___instance1, const RuntimeMethod* method);
// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomTypeDescriptor__ctor_m83CFDC2A68D4C72A3B5C0A79AEAF41486AAAB7DF (CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC * __this, RuntimeObject* ___parent0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_4__ctor_mB4AEFCADC7850AD66A628A35CAE84D2DF81429F2_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_4__ctor_mB4AEFCADC7850AD66A628A35CAE84D2DF81429F2_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	ValueTuple_4__ctor_mB4AEFCADC7850AD66A628A35CAE84D2DF81429F2(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, method);
}
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_m9A1268F59EB4A8C03D4BA7477846B97BA9547F2B_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_4_Equals_m7E26F9EA467150425CEA306F2D291CBEC4C83921((ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)__this, (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 )((*(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)((ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_Equals_m9A1268F59EB4A8C03D4BA7477846B97BA9547F2B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_4_Equals_m9A1268F59EB4A8C03D4BA7477846B97BA9547F2B(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`4<T1,T2,T3,T4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_Equals_m7E26F9EA467150425CEA306F2D291CBEC4C83921_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_10;
		L_10 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_12 = ___other0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		return (bool)L_19;
	}

IL_005f:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_Equals_m7E26F9EA467150425CEA306F2D291CBEC4C83921_AdjustorThunk (RuntimeObject * __this, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_4_Equals_m7E26F9EA467150425CEA306F2D291CBEC4C83921(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m3B9548694B77EAA0D43796D603DF0E0FA025BD33_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 )((*(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)((ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15.get_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20.get_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22;
		L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		return (bool)L_22;
	}

IL_008b:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m3B9548694B77EAA0D43796D603DF0E0FA025BD33_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralEquatable_Equals_m3B9548694B77EAA0D43796D603DF0E0FA025BD33(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_IComparable_CompareTo_mBE7E507D5C3B843F96988CDDC9D4A1303A7408DD_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_2 = (*(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)__this);
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_3 = (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_4_System_IComparable_CompareTo_mBE7E507D5C3B843F96988CDDC9D4A1303A7408DD_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_4_CompareTo_mCFF57BFAF2C7396D22ABCE842F02A3F64D03FD1C((ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)__this, (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 )((*(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)((ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 18));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_IComparable_CompareTo_mBE7E507D5C3B843F96988CDDC9D4A1303A7408DD_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_IComparable_CompareTo_mBE7E507D5C3B843F96988CDDC9D4A1303A7408DD(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`4<T1,T2,T3,T4>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_CompareTo_mCFF57BFAF2C7396D22ABCE842F02A3F64D03FD1C_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_14;
		L_14 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 25));
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_16 = ___other0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16.get_Item3_2();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 28)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 28));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_CompareTo_mCFF57BFAF2C7396D22ABCE842F02A3F64D03FD1C_AdjustorThunk (RuntimeObject * __this, ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_CompareTo_mCFF57BFAF2C7396D22ABCE842F02A3F64D03FD1C(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mD195522046E66601A359B089CD0FEBA9AE650691_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_2 = (*(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)__this);
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_3 = (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mD195522046E66601A359B089CD0FEBA9AE650691_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 )((*(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)((ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		V_1 = (int32_t)L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return (int32_t)L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___comparer1;
		RuntimeObject * L_25 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_26 = V_0;
		RuntimeObject * L_27 = (RuntimeObject *)L_26.get_Item3_2();
		NullCheck((RuntimeObject*)L_24);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (RuntimeObject *)L_25, (RuntimeObject *)L_27);
		V_1 = (int32_t)L_28;
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_1;
		return (int32_t)L_30;
	}

IL_00a4:
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item4_3();
		NullCheck((RuntimeObject*)L_31);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		return (int32_t)L_35;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mD195522046E66601A359B089CD0FEBA9AE650691_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralComparable_CompareTo_mD195522046E66601A359B089CD0FEBA9AE650691(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCode_mBA8E453337A057FEAD466274A08DECD62D0D4A17_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_11)
		{
			G_B11_0 = L_10;
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_13)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		int32_t L_20;
		L_20 = ValueTuple_CombineHashCodes_mEA32AD08CEAD750BAC3650A78417195804185047((int32_t)G_B16_3, (int32_t)G_B16_2, (int32_t)G_B16_1, (int32_t)G_B16_0, /*hidden argument*/NULL);
		return (int32_t)L_20;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_GetHashCode_mBA8E453337A057FEAD466274A08DECD62D0D4A17_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_GetHashCode_mBA8E453337A057FEAD466274A08DECD62D0D4A17(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m37BEFCECFB7EE2C9A2D4B9F0F4EEA71407DEAA93_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_4_GetHashCodeCore_m4F5877B0BED118D530E088A96F87B836DA55B7B4((ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)(ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 31));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m37BEFCECFB7EE2C9A2D4B9F0F4EEA71407DEAA93_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_System_Collections_IStructuralEquatable_GetHashCode_m37BEFCECFB7EE2C9A2D4B9F0F4EEA71407DEAA93(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_4_GetHashCodeCore_m4F5877B0BED118D530E088A96F87B836DA55B7B4_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		int32_t L_12;
		L_12 = ValueTuple_CombineHashCodes_mEA32AD08CEAD750BAC3650A78417195804185047((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, /*hidden argument*/NULL);
		return (int32_t)L_12;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_4_GetHashCodeCore_m4F5877B0BED118D530E088A96F87B836DA55B7B4_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_4_GetHashCodeCore_m4F5877B0BED118D530E088A96F87B836DA55B7B4(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`4<System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_4_ToString_mC5E93939ED728874D5F3DD5E76A930F4E65D6063_gshared (ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		RuntimeObject ** L_17 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_18 = V_2;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_18)
		{
			G_B11_0 = L_17;
			G_B11_1 = 5;
			G_B11_2 = L_16;
			G_B11_3 = L_16;
			goto IL_00bb;
		}
	}
	{
		RuntimeObject * L_19 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_19;
		RuntimeObject * L_20 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_20)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_30;
		L_30 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29, /*hidden argument*/NULL);
		return (String_t*)L_30;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_4_ToString_mC5E93939ED728874D5F3DD5E76A930F4E65D6063_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 * _thisAdjusted = reinterpret_cast<ValueTuple_4_tBD94BFEB301E8FDCA88BD9E557F9708AC73AFDB6 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_4_ToString_mC5E93939ED728874D5F3DD5E76A930F4E65D6063(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m332D10E722FCEDDE7BF3A10AA8913F674F4FFB1B_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___item10, bool ___item21, bool ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		bool L_1 = ___item21;
		__this->set_Item2_1(L_1);
		bool L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		RuntimeObject * L_4 = ___item54;
		__this->set_Item5_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_5__ctor_m332D10E722FCEDDE7BF3A10AA8913F674F4FFB1B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, bool ___item21, bool ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	ValueTuple_5__ctor_m332D10E722FCEDDE7BF3A10AA8913F674F4FFB1B(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mA08659806DD13AD3FA7C9DDC8A66C02D2321FFF9_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_5_Equals_mDE41B56C1F83C54281DE3F4FC64DA01F8C0DFD6C((ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)__this, (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 )((*(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)((ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mA08659806DD13AD3FA7C9DDC8A66C02D2321FFF9_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mA08659806DD13AD3FA7C9DDC8A66C02D2321FFF9(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_mDE41B56C1F83C54281DE3F4FC64DA01F8C0DFD6C_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_5;
		L_5 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		bool L_6 = (bool)__this->get_Item2_1();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_7 = ___other0;
		bool L_8 = (bool)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_5, (bool)L_6, (bool)L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_10;
		L_10 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_11 = (bool)__this->get_Item3_2();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_12 = ___other0;
		bool L_13 = (bool)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(T,T) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_10, (bool)L_11, (bool)L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_20;
		L_20 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_22 = ___other0;
		RuntimeObject * L_23 = (RuntimeObject *)L_22.get_Item5_4();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20, (RuntimeObject *)L_21, (RuntimeObject *)L_23);
		return (bool)L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_mDE41B56C1F83C54281DE3F4FC64DA01F8C0DFD6C_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_mDE41B56C1F83C54281DE3F4FC64DA01F8C0DFD6C(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m1A3A26B4CF82ED5E7A874E4EB99457B06D66FA67_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 )((*(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)((ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		bool L_9 = (bool)__this->get_Item2_1();
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_10);
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_12 = V_0;
		bool L_13 = (bool)L_12.get_Item2_1();
		bool L_14 = L_13;
		RuntimeObject * L_15 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_14);
		NullCheck((RuntimeObject*)L_8);
		bool L_16;
		L_16 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11, (RuntimeObject *)L_15);
		if (!L_16)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_17 = ___comparer1;
		bool L_18 = (bool)__this->get_Item3_2();
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_19);
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_21 = V_0;
		bool L_22 = (bool)L_21.get_Item3_2();
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_23);
		NullCheck((RuntimeObject*)L_17);
		bool L_25;
		L_25 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_20, (RuntimeObject *)L_24);
		if (!L_25)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_26 = ___comparer1;
		RuntimeObject * L_27 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_28 = V_0;
		RuntimeObject * L_29 = (RuntimeObject *)L_28.get_Item4_3();
		NullCheck((RuntimeObject*)L_26);
		bool L_30;
		L_30 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_26, (RuntimeObject *)L_27, (RuntimeObject *)L_29);
		if (!L_30)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item5_4();
		NullCheck((RuntimeObject*)L_31);
		bool L_35;
		L_35 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		return (bool)L_35;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m1A3A26B4CF82ED5E7A874E4EB99457B06D66FA67_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m1A3A26B4CF82ED5E7A874E4EB99457B06D66FA67(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_m3DDEAE36E5F1BF402AB114C9CC1BEE62765A08DC_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_2 = (*(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)__this);
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_3 = (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_IComparable_CompareTo_m3DDEAE36E5F1BF402AB114C9CC1BEE62765A08DC_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m8874197E666C9B2E84A5CEB4F8050678ED333A03((ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)__this, (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 )((*(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)((ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_m3DDEAE36E5F1BF402AB114C9CC1BEE62765A08DC_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_m3DDEAE36E5F1BF402AB114C9CC1BEE62765A08DC(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m8874197E666C9B2E84A5CEB4F8050678ED333A03_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * L_7;
		L_7 = ((  Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		bool L_8 = (bool)__this->get_Item2_1();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_9 = ___other0;
		bool L_10 = (bool)L_9.get_Item2_1();
		NullCheck((Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, bool, bool >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Boolean>::Compare(T,T) */, (Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_7, (bool)L_8, (bool)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * L_14;
		L_14 = ((  Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		bool L_15 = (bool)__this->get_Item3_2();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_16 = ___other0;
		bool L_17 = (bool)L_16.get_Item3_2();
		NullCheck((Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, bool, bool >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Boolean>::Compare(T,T) */, (Comparer_1_tC0B38F30FEF4F46666AA129BB9DBBD166FF98149 *)L_14, (bool)L_15, (bool)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_28;
		L_28 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_30 = ___other0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item5_4();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return (int32_t)L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m8874197E666C9B2E84A5CEB4F8050678ED333A03_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m8874197E666C9B2E84A5CEB4F8050678ED333A03(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m2A9F8525355B0CD2188600AA0ADC0B5D934B262B_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_2 = (*(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)__this);
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_3 = (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m2A9F8525355B0CD2188600AA0ADC0B5D934B262B_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 )((*(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)((ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		bool L_18 = (bool)__this->get_Item2_1();
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_19);
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_21 = V_0;
		bool L_22 = (bool)L_21.get_Item2_1();
		bool L_23 = L_22;
		RuntimeObject * L_24 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_23);
		NullCheck((RuntimeObject*)L_17);
		int32_t L_25;
		L_25 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_20, (RuntimeObject *)L_24);
		V_1 = (int32_t)L_25;
		int32_t L_26 = V_1;
		if (!L_26)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_27 = V_1;
		return (int32_t)L_27;
	}

IL_0082:
	{
		RuntimeObject* L_28 = ___comparer1;
		bool L_29 = (bool)__this->get_Item3_2();
		bool L_30 = L_29;
		RuntimeObject * L_31 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_30);
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_32 = V_0;
		bool L_33 = (bool)L_32.get_Item3_2();
		bool L_34 = L_33;
		RuntimeObject * L_35 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_34);
		NullCheck((RuntimeObject*)L_28);
		int32_t L_36;
		L_36 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_28, (RuntimeObject *)L_31, (RuntimeObject *)L_35);
		V_1 = (int32_t)L_36;
		int32_t L_37 = V_1;
		if (!L_37)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_38 = V_1;
		return (int32_t)L_38;
	}

IL_00a4:
	{
		RuntimeObject* L_39 = ___comparer1;
		RuntimeObject * L_40 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_41 = V_0;
		RuntimeObject * L_42 = (RuntimeObject *)L_41.get_Item4_3();
		NullCheck((RuntimeObject*)L_39);
		int32_t L_43;
		L_43 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_39, (RuntimeObject *)L_40, (RuntimeObject *)L_42);
		V_1 = (int32_t)L_43;
		int32_t L_44 = V_1;
		if (!L_44)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_45 = V_1;
		return (int32_t)L_45;
	}

IL_00c6:
	{
		RuntimeObject* L_46 = ___comparer1;
		RuntimeObject * L_47 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59  L_48 = V_0;
		RuntimeObject * L_49 = (RuntimeObject *)L_48.get_Item5_4();
		NullCheck((RuntimeObject*)L_46);
		int32_t L_50;
		L_50 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_46, (RuntimeObject *)L_47, (RuntimeObject *)L_49);
		return (int32_t)L_50;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m2A9F8525355B0CD2188600AA0ADC0B5D934B262B_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m2A9F8525355B0CD2188600AA0ADC0B5D934B262B(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_m7F896001629983AA3957D23BF9932159BB3CCEE8_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	bool* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	bool* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	bool* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	bool* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	bool* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	bool* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		bool* L_5 = (bool*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B7_0 = L_5;
		G_B7_1 = G_B4_0;
		goto IL_005f;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
	}
	{
		bool L_7 = (*(bool*)G_B5_0);
		V_1 = (bool)L_7;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		goto IL_005f;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		int32_t L_9;
		L_9 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		bool* L_10 = (bool*)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
		G_B11_0 = L_10;
		G_B11_1 = G_B8_0;
		G_B11_2 = G_B8_1;
		goto IL_0094;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}
	{
		bool L_12 = (*(bool*)G_B9_0);
		V_2 = (bool)L_12;
		G_B11_0 = (&V_2);
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		goto IL_0094;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		int32_t L_14;
		L_14 = Boolean_GetHashCode_m03AF8B3CECAE9106C44A00E3B33E51CBFC45C411((bool*)(bool*)G_B11_0, /*hidden argument*/NULL);
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_4;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if (L_21)
		{
			G_B19_0 = L_20;
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_22;
		RuntimeObject * L_23 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		if (L_23)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)G_B20_4, (int32_t)G_B20_3, (int32_t)G_B20_2, (int32_t)G_B20_1, (int32_t)G_B20_0, /*hidden argument*/NULL);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_m7F896001629983AA3957D23BF9932159BB3CCEE8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_m7F896001629983AA3957D23BF9932159BB3CCEE8(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBE6B31CD5D53498B09C533CE2BFEA49A2647F8FF_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_mE57D84B89E616397C12DB9AB7415F548CAA78E88((ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)(ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBE6B31CD5D53498B09C533CE2BFEA49A2647F8FF_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_mBE6B31CD5D53498B09C533CE2BFEA49A2647F8FF(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_mE57D84B89E616397C12DB9AB7415F548CAA78E88_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		bool L_4 = (bool)__this->get_Item2_1();
		bool L_5 = L_4;
		RuntimeObject * L_6 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 18), &L_5);
		NullCheck((RuntimeObject*)L_3);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_6);
		RuntimeObject* L_8 = ___comparer0;
		bool L_9 = (bool)__this->get_Item3_2();
		bool L_10 = L_9;
		RuntimeObject * L_11 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 19), &L_10);
		NullCheck((RuntimeObject*)L_8);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_11);
		RuntimeObject* L_13 = ___comparer0;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_13);
		int32_t L_15;
		L_15 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14);
		RuntimeObject* L_16 = ___comparer0;
		RuntimeObject * L_17 = (RuntimeObject *)__this->get_Item5_4();
		NullCheck((RuntimeObject*)L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_16, (RuntimeObject *)L_17);
		int32_t L_19;
		L_19 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)L_2, (int32_t)L_7, (int32_t)L_12, (int32_t)L_15, (int32_t)L_18, /*hidden argument*/NULL);
		return (int32_t)L_19;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCodeCore_mE57D84B89E616397C12DB9AB7415F548CAA78E88_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCodeCore_mE57D84B89E616397C12DB9AB7415F548CAA78E88(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Object,System.Boolean,System.Boolean,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m88C3350E201D73A35449280D569EC3B0ED33AB22_gshared (ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	bool* G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	bool* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	bool* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	bool* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	bool* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	bool* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		bool* L_10 = (bool*)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(bool));
		G_B7_0 = L_10;
		G_B7_1 = 3;
		G_B7_2 = L_9;
		G_B7_3 = L_9;
		goto IL_007b;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
	}
	{
		bool L_12 = (*(bool*)G_B5_0);
		V_1 = (bool)L_12;
		G_B7_0 = (&V_1);
		G_B7_1 = G_B5_1;
		G_B7_2 = G_B5_2;
		G_B7_3 = G_B5_3;
		goto IL_007b;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		String_t* L_14;
		L_14 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B7_0, /*hidden argument*/NULL);
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		bool* L_17 = (bool*)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(bool));
		G_B11_0 = L_17;
		G_B11_1 = 5;
		G_B11_2 = L_16;
		G_B11_3 = L_16;
		goto IL_00bb;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
	}
	{
		bool L_19 = (*(bool*)G_B9_0);
		V_2 = (bool)L_19;
		G_B11_0 = (&V_2);
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_00bb;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		String_t* L_21;
		L_21 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(bool*)G_B11_0, /*hidden argument*/NULL);
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		RuntimeObject ** L_31 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_32 = V_4;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
		if (L_32)
		{
			G_B19_0 = L_31;
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_30;
			G_B19_3 = L_30;
			goto IL_013f;
		}
	}
	{
		RuntimeObject * L_33 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_33;
		RuntimeObject * L_34 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_34)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36, /*hidden argument*/NULL);
		return (String_t*)L_37;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m88C3350E201D73A35449280D569EC3B0ED33AB22_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t1753A6A4C916F008F49E57AC257D0484D051CF59 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m88C3350E201D73A35449280D569EC3B0ED33AB22(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::.ctor(T1,T2,T3,T4,T5)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		__this->set_Item1_0(L_0);
		RuntimeObject * L_1 = ___item21;
		__this->set_Item2_1(L_1);
		RuntimeObject * L_2 = ___item32;
		__this->set_Item3_2(L_2);
		RuntimeObject * L_3 = ___item43;
		__this->set_Item4_3(L_3);
		RuntimeObject * L_4 = ___item54;
		__this->set_Item5_4(L_4);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___item10, RuntimeObject * ___item21, RuntimeObject * ___item32, RuntimeObject * ___item43, RuntimeObject * ___item54, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	ValueTuple_5__ctor_m6AEB07649E6AFD6F99857141D420747F87E852B8(_thisAdjusted, ___item10, ___item21, ___item32, ___item43, ___item54, method);
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInst((RuntimeObject*)L_0, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2;
		L_2 = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return (bool)L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m4FF7BA643BF8F4539D005E09DB2559169B2B2B8E(_thisAdjusted, ___obj0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::Equals(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_0;
		L_0 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0);
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		if (!L_4)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_5;
		L_5 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		RuntimeObject * L_6 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_7 = ___other0;
		RuntimeObject * L_8 = (RuntimeObject *)L_7.get_Item2_1();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5);
		bool L_9;
		L_9 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_5, (RuntimeObject *)L_6, (RuntimeObject *)L_8);
		if (!L_9)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_10;
		L_10 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = ___other0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item3_2();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10);
		bool L_14;
		L_14 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		if (!L_14)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_15;
		L_15 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		RuntimeObject * L_16 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_17 = ___other0;
		RuntimeObject * L_18 = (RuntimeObject *)L_17.get_Item4_3();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15);
		bool L_19;
		L_19 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_15, (RuntimeObject *)L_16, (RuntimeObject *)L_18);
		if (!L_19)
		{
			goto IL_0077;
		}
	}
	{
		EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * L_20;
		L_20 = ((  EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		RuntimeObject * L_21 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_22 = ___other0;
		RuntimeObject * L_23 = (RuntimeObject *)L_22.get_Item5_4();
		NullCheck((EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20);
		bool L_24;
		L_24 = VirtFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Object>::Equals(T,T) */, (EqualityComparer_1_t469B0BBE7B6765C576211BEF8F2803A5AD411A20 *)L_20, (RuntimeObject *)L_21, (RuntimeObject *)L_23);
		return (bool)L_24;
	}

IL_0077:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_Equals_m1903F70AE91C9A55FE349E9F7331A5FCAD9B83B1(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Boolean System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___other0;
		if (!L_0)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_000d;
		}
	}

IL_000b:
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_2 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_2, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_3 = ___comparer1;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_5 = V_0;
		RuntimeObject * L_6 = (RuntimeObject *)L_5.get_Item1_0();
		NullCheck((RuntimeObject*)L_3);
		bool L_7;
		L_7 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4, (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_8 = ___comparer1;
		RuntimeObject * L_9 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_10 = V_0;
		RuntimeObject * L_11 = (RuntimeObject *)L_10.get_Item2_1();
		NullCheck((RuntimeObject*)L_8);
		bool L_12;
		L_12 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_8, (RuntimeObject *)L_9, (RuntimeObject *)L_11);
		if (!L_12)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_13 = ___comparer1;
		RuntimeObject * L_14 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_15 = V_0;
		RuntimeObject * L_16 = (RuntimeObject *)L_15.get_Item3_2();
		NullCheck((RuntimeObject*)L_13);
		bool L_17;
		L_17 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_13, (RuntimeObject *)L_14, (RuntimeObject *)L_16);
		if (!L_17)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_18 = ___comparer1;
		RuntimeObject * L_19 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_20 = V_0;
		RuntimeObject * L_21 = (RuntimeObject *)L_20.get_Item4_3();
		NullCheck((RuntimeObject*)L_18);
		bool L_22;
		L_22 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_18, (RuntimeObject *)L_19, (RuntimeObject *)L_21);
		if (!L_22)
		{
			goto IL_00a9;
		}
	}
	{
		RuntimeObject* L_23 = ___comparer1;
		RuntimeObject * L_24 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_25 = V_0;
		RuntimeObject * L_26 = (RuntimeObject *)L_25.get_Item5_4();
		NullCheck((RuntimeObject*)L_23);
		bool L_27;
		L_27 = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.IEqualityComparer::Equals(System.Object,System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_23, (RuntimeObject *)L_24, (RuntimeObject *)L_26);
		return (bool)L_27;
	}

IL_00a9:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	bool _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_Equals_m8252DF08488DF1C954CB5E0D1722416D1AB7D092(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.IComparable.CompareTo(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		int32_t L_10;
		L_10 = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 22));
		return (int32_t)L_10;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_IComparable_CompareTo_mA065730B1B41F97D5A7FC4189CECDCEA92F8F128(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::CompareTo(System.ValueTuple`5<T1,T2,T3,T4,T5>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_0;
		L_0 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 23));
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = ___other0;
		RuntimeObject * L_3 = (RuntimeObject *)L_2.get_Item1_0();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0);
		int32_t L_4;
		L_4 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_0, (RuntimeObject *)L_1, (RuntimeObject *)L_3);
		V_0 = (int32_t)L_4;
		int32_t L_5 = V_0;
		if (!L_5)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_6 = V_0;
		return (int32_t)L_6;
	}

IL_001c:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_7;
		L_7 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 26));
		RuntimeObject * L_8 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_9 = ___other0;
		RuntimeObject * L_10 = (RuntimeObject *)L_9.get_Item2_1();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_7, (RuntimeObject *)L_8, (RuntimeObject *)L_10);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if (!L_12)
		{
			goto IL_0038;
		}
	}
	{
		int32_t L_13 = V_0;
		return (int32_t)L_13;
	}

IL_0038:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_14;
		L_14 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 29));
		RuntimeObject * L_15 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_16 = ___other0;
		RuntimeObject * L_17 = (RuntimeObject *)L_16.get_Item3_2();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14);
		int32_t L_18;
		L_18 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_14, (RuntimeObject *)L_15, (RuntimeObject *)L_17);
		V_0 = (int32_t)L_18;
		int32_t L_19 = V_0;
		if (!L_19)
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_20 = V_0;
		return (int32_t)L_20;
	}

IL_0054:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_21;
		L_21 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 32));
		RuntimeObject * L_22 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_23 = ___other0;
		RuntimeObject * L_24 = (RuntimeObject *)L_23.get_Item4_3();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21);
		int32_t L_25;
		L_25 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_21, (RuntimeObject *)L_22, (RuntimeObject *)L_24);
		V_0 = (int32_t)L_25;
		int32_t L_26 = V_0;
		if (!L_26)
		{
			goto IL_0070;
		}
	}
	{
		int32_t L_27 = V_0;
		return (int32_t)L_27;
	}

IL_0070:
	{
		Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * L_28;
		L_28 = ((  Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 35));
		RuntimeObject * L_29 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_30 = ___other0;
		RuntimeObject * L_31 = (RuntimeObject *)L_30.get_Item5_4();
		NullCheck((Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28);
		int32_t L_32;
		L_32 = VirtFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<System.Object>::Compare(T,T) */, (Comparer_1_t33EA2A3D50A5D04C1A23DFF361A0AAD011657B84 *)L_28, (RuntimeObject *)L_29, (RuntimeObject *)L_31);
		return (int32_t)L_32;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED_AdjustorThunk (RuntimeObject * __this, ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_CompareTo_m970E50150368AA56B1AFEDF20428EB494AADABED(_thisAdjusted, ___other0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		RuntimeObject * L_0 = ___other0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (int32_t)1;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___other0;
		if (((RuntimeObject *)IsInst((RuntimeObject*)L_1, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0))))
		{
			goto IL_0037;
		}
	}
	{
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_2 = (*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this);
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_3 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )L_2;
		RuntimeObject * L_4 = Box(IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0), &L_3);
		NullCheck((RuntimeObject *)L_4);
		Type_t * L_5;
		L_5 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B((RuntimeObject *)L_4, /*hidden argument*/NULL);
		NullCheck((RuntimeObject *)L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_5);
		String_t* L_7;
		L_7 = SR_Format_m942E78AC3ABE13F58075ED90094D6074CA5A7DC8((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1459AD7D3E0F8808A85528961118835E18AD1F96)), (RuntimeObject *)L_6, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)L_7, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_RuntimeMethod_var)));
	}

IL_0037:
	{
		RuntimeObject * L_9 = ___other0;
		V_0 = (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 )((*(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)UnBox(L_9, IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->klass)->rgctx_data, 0)))));
		RuntimeObject* L_10 = ___comparer1;
		RuntimeObject * L_11 = (RuntimeObject *)__this->get_Item1_0();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_12 = V_0;
		RuntimeObject * L_13 = (RuntimeObject *)L_12.get_Item1_0();
		NullCheck((RuntimeObject*)L_10);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_10, (RuntimeObject *)L_11, (RuntimeObject *)L_13);
		V_1 = (int32_t)L_14;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0060;
		}
	}
	{
		int32_t L_16 = V_1;
		return (int32_t)L_16;
	}

IL_0060:
	{
		RuntimeObject* L_17 = ___comparer1;
		RuntimeObject * L_18 = (RuntimeObject *)__this->get_Item2_1();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_19 = V_0;
		RuntimeObject * L_20 = (RuntimeObject *)L_19.get_Item2_1();
		NullCheck((RuntimeObject*)L_17);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_17, (RuntimeObject *)L_18, (RuntimeObject *)L_20);
		V_1 = (int32_t)L_21;
		int32_t L_22 = V_1;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		int32_t L_23 = V_1;
		return (int32_t)L_23;
	}

IL_0082:
	{
		RuntimeObject* L_24 = ___comparer1;
		RuntimeObject * L_25 = (RuntimeObject *)__this->get_Item3_2();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_26 = V_0;
		RuntimeObject * L_27 = (RuntimeObject *)L_26.get_Item3_2();
		NullCheck((RuntimeObject*)L_24);
		int32_t L_28;
		L_28 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_24, (RuntimeObject *)L_25, (RuntimeObject *)L_27);
		V_1 = (int32_t)L_28;
		int32_t L_29 = V_1;
		if (!L_29)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_30 = V_1;
		return (int32_t)L_30;
	}

IL_00a4:
	{
		RuntimeObject* L_31 = ___comparer1;
		RuntimeObject * L_32 = (RuntimeObject *)__this->get_Item4_3();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_33 = V_0;
		RuntimeObject * L_34 = (RuntimeObject *)L_33.get_Item4_3();
		NullCheck((RuntimeObject*)L_31);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_31, (RuntimeObject *)L_32, (RuntimeObject *)L_34);
		V_1 = (int32_t)L_35;
		int32_t L_36 = V_1;
		if (!L_36)
		{
			goto IL_00c6;
		}
	}
	{
		int32_t L_37 = V_1;
		return (int32_t)L_37;
	}

IL_00c6:
	{
		RuntimeObject* L_38 = ___comparer1;
		RuntimeObject * L_39 = (RuntimeObject *)__this->get_Item5_4();
		ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701  L_40 = V_0;
		RuntimeObject * L_41 = (RuntimeObject *)L_40.get_Item5_4();
		NullCheck((RuntimeObject*)L_38);
		int32_t L_42;
		L_42 = InterfaceFuncInvoker2< int32_t, RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Int32 System.Collections.IComparer::Compare(System.Object,System.Object) */, IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0_il2cpp_TypeInfo_var, (RuntimeObject*)L_38, (RuntimeObject *)L_39, (RuntimeObject *)L_41);
		return (int32_t)L_42;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___other0, RuntimeObject* ___comparer1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralComparable_CompareTo_m8CE02AFBB4FA64D94BFB84B39357EB029E79CC7A(_thisAdjusted, ___other0, ___comparer1, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	int32_t G_B8_0 = 0;
	int32_t G_B8_1 = 0;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	int32_t G_B11_2 = 0;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	int32_t G_B9_2 = 0;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	int32_t G_B10_2 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	int32_t G_B12_2 = 0;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	int32_t G_B15_2 = 0;
	int32_t G_B15_3 = 0;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	int32_t G_B13_3 = 0;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	int32_t G_B14_2 = 0;
	int32_t G_B14_3 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	int32_t G_B16_2 = 0;
	int32_t G_B16_3 = 0;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	int32_t G_B19_2 = 0;
	int32_t G_B19_3 = 0;
	int32_t G_B19_4 = 0;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	int32_t G_B17_2 = 0;
	int32_t G_B17_3 = 0;
	int32_t G_B17_4 = 0;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	int32_t G_B18_3 = 0;
	int32_t G_B18_4 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B20_1 = 0;
	int32_t G_B20_2 = 0;
	int32_t G_B20_3 = 0;
	int32_t G_B20_4 = 0;
	{
		RuntimeObject ** L_0 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		G_B1_0 = L_0;
		if (L_1)
		{
			G_B3_0 = L_0;
			goto IL_002a;
		}
	}
	{
		RuntimeObject * L_2 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_2;
		RuntimeObject * L_3 = V_0;
		G_B2_0 = (&V_0);
		if (L_3)
		{
			G_B3_0 = (&V_0);
			goto IL_002a;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0035;
	}

IL_002a:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_4;
	}

IL_0035:
	{
		RuntimeObject ** L_5 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_1;
		G_B5_0 = L_5;
		G_B5_1 = G_B4_0;
		if (L_6)
		{
			G_B7_0 = L_5;
			G_B7_1 = G_B4_0;
			goto IL_005f;
		}
	}
	{
		RuntimeObject * L_7 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_7;
		RuntimeObject * L_8 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		if (L_8)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			goto IL_005f;
		}
	}
	{
		G_B8_0 = 0;
		G_B8_1 = G_B6_1;
		goto IL_006a;
	}

IL_005f:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_9;
		G_B8_1 = G_B7_1;
	}

IL_006a:
	{
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_2;
		G_B9_0 = L_10;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
		if (L_11)
		{
			G_B11_0 = L_10;
			G_B11_1 = G_B8_0;
			G_B11_2 = G_B8_1;
			goto IL_0094;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_13)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0094;
		}
	}
	{
		G_B12_0 = 0;
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		goto IL_009f;
	}

IL_0094:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		int32_t L_14;
		L_14 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_14;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_009f:
	{
		RuntimeObject ** L_15 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_16 = V_3;
		G_B13_0 = L_15;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
		if (L_16)
		{
			G_B15_0 = L_15;
			G_B15_1 = G_B12_0;
			G_B15_2 = G_B12_1;
			G_B15_3 = G_B12_2;
			goto IL_00c9;
		}
	}
	{
		RuntimeObject * L_17 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_17;
		RuntimeObject * L_18 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_18)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00c9;
		}
	}
	{
		G_B16_0 = 0;
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_00d4;
	}

IL_00c9:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_19;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_00d4:
	{
		RuntimeObject ** L_20 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_21 = V_4;
		G_B17_0 = L_20;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
		G_B17_4 = G_B16_3;
		if (L_21)
		{
			G_B19_0 = L_20;
			G_B19_1 = G_B16_0;
			G_B19_2 = G_B16_1;
			G_B19_3 = G_B16_2;
			G_B19_4 = G_B16_3;
			goto IL_0101;
		}
	}
	{
		RuntimeObject * L_22 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_22;
		RuntimeObject * L_23 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		G_B18_4 = G_B17_4;
		if (L_23)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			G_B19_4 = G_B17_4;
			goto IL_0101;
		}
	}
	{
		G_B20_0 = 0;
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		G_B20_4 = G_B18_4;
		goto IL_010c;
	}

IL_0101:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		int32_t L_24;
		L_24 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_24;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
		G_B20_4 = G_B19_4;
	}

IL_010c:
	{
		int32_t L_25;
		L_25 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)G_B20_4, (int32_t)G_B20_3, (int32_t)G_B20_2, (int32_t)G_B20_1, (int32_t)G_B20_0, /*hidden argument*/NULL);
		return (int32_t)L_25;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCode_mFA800E405CB428A7CCDB93AE90918F9F0775F1F9(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___comparer0;
		int32_t L_1;
		L_1 = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE((ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)(ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *)__this, (RuntimeObject*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->klass)->rgctx_data, 38));
		return (int32_t)L_1;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_System_Collections_IStructuralEquatable_GetHashCode_m76AFC6B5F73E5B75D026B2DADBEDCB4261EDB349(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.Int32 System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::GetHashCodeCore(System.Collections.IEqualityComparer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___comparer0;
		RuntimeObject * L_1 = (RuntimeObject *)__this->get_Item1_0();
		NullCheck((RuntimeObject*)L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_0, (RuntimeObject *)L_1);
		RuntimeObject* L_3 = ___comparer0;
		RuntimeObject * L_4 = (RuntimeObject *)__this->get_Item2_1();
		NullCheck((RuntimeObject*)L_3);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_3, (RuntimeObject *)L_4);
		RuntimeObject* L_6 = ___comparer0;
		RuntimeObject * L_7 = (RuntimeObject *)__this->get_Item3_2();
		NullCheck((RuntimeObject*)L_6);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_6, (RuntimeObject *)L_7);
		RuntimeObject* L_9 = ___comparer0;
		RuntimeObject * L_10 = (RuntimeObject *)__this->get_Item4_3();
		NullCheck((RuntimeObject*)L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_9, (RuntimeObject *)L_10);
		RuntimeObject* L_12 = ___comparer0;
		RuntimeObject * L_13 = (RuntimeObject *)__this->get_Item5_4();
		NullCheck((RuntimeObject*)L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(1 /* System.Int32 System.Collections.IEqualityComparer::GetHashCode(System.Object) */, IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68_il2cpp_TypeInfo_var, (RuntimeObject*)L_12, (RuntimeObject *)L_13);
		int32_t L_15;
		L_15 = ValueTuple_CombineHashCodes_m3F9A61D754020CB9186BA94BFD3A084725C34705((int32_t)L_2, (int32_t)L_5, (int32_t)L_8, (int32_t)L_11, (int32_t)L_14, /*hidden argument*/NULL);
		return (int32_t)L_15;
	}
}
IL2CPP_EXTERN_C  int32_t ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___comparer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ValueTuple_5_GetHashCodeCore_m0E0CAAD55A4378935E18F55A38A5D319EE1782DE(_thisAdjusted, ___comparer0, method);
	return _returnValue;
}
// System.String System.ValueTuple`5<System.Object,System.Object,System.Object,System.Object,System.Object>::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_gshared (ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	RuntimeObject ** G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B3_3 = NULL;
	RuntimeObject ** G_B1_0 = NULL;
	int32_t G_B1_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_3 = NULL;
	RuntimeObject ** G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_3 = NULL;
	String_t* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B4_3 = NULL;
	RuntimeObject ** G_B7_0 = NULL;
	int32_t G_B7_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_3 = NULL;
	RuntimeObject ** G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B5_3 = NULL;
	RuntimeObject ** G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_3 = NULL;
	String_t* G_B8_0 = NULL;
	int32_t G_B8_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B8_3 = NULL;
	RuntimeObject ** G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	RuntimeObject ** G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_3 = NULL;
	RuntimeObject ** G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_3 = NULL;
	String_t* G_B12_0 = NULL;
	int32_t G_B12_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_3 = NULL;
	RuntimeObject ** G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_3 = NULL;
	RuntimeObject ** G_B13_0 = NULL;
	int32_t G_B13_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_3 = NULL;
	RuntimeObject ** G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_3 = NULL;
	RuntimeObject ** G_B19_0 = NULL;
	int32_t G_B19_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_3 = NULL;
	RuntimeObject ** G_B17_0 = NULL;
	int32_t G_B17_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_3 = NULL;
	RuntimeObject ** G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	String_t* G_B20_0 = NULL;
	int32_t G_B20_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_3 = NULL;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_1;
		RuntimeObject ** L_3 = (RuntimeObject **)__this->get_address_of_Item1_0();
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_4 = V_0;
		G_B1_0 = L_3;
		G_B1_1 = 1;
		G_B1_2 = L_2;
		G_B1_3 = L_2;
		if (L_4)
		{
			G_B3_0 = L_3;
			G_B3_1 = 1;
			G_B3_2 = L_2;
			G_B3_3 = L_2;
			goto IL_003b;
		}
	}
	{
		RuntimeObject * L_5 = (*(RuntimeObject **)G_B1_0);
		V_0 = (RuntimeObject *)L_5;
		RuntimeObject * L_6 = V_0;
		G_B2_0 = (&V_0);
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
		G_B2_3 = G_B1_3;
		if (L_6)
		{
			G_B3_0 = (&V_0);
			G_B3_1 = G_B1_1;
			G_B3_2 = G_B1_2;
			G_B3_3 = G_B1_3;
			goto IL_003b;
		}
	}
	{
		G_B4_0 = ((String_t*)(NULL));
		G_B4_1 = G_B2_1;
		G_B4_2 = G_B2_2;
		G_B4_3 = G_B2_3;
		goto IL_0046;
	}

IL_003b:
	{
		NullCheck((RuntimeObject *)(*G_B3_0));
		String_t* L_7;
		L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B3_0));
		G_B4_0 = L_7;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_0046:
	{
		NullCheck(G_B4_2);
		ArrayElementTypeCheck (G_B4_2, G_B4_0);
		(G_B4_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B4_1), (String_t*)G_B4_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B4_3;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_8;
		RuntimeObject ** L_10 = (RuntimeObject **)__this->get_address_of_Item2_1();
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_11 = V_1;
		G_B5_0 = L_10;
		G_B5_1 = 3;
		G_B5_2 = L_9;
		G_B5_3 = L_9;
		if (L_11)
		{
			G_B7_0 = L_10;
			G_B7_1 = 3;
			G_B7_2 = L_9;
			G_B7_3 = L_9;
			goto IL_007b;
		}
	}
	{
		RuntimeObject * L_12 = (*(RuntimeObject **)G_B5_0);
		V_1 = (RuntimeObject *)L_12;
		RuntimeObject * L_13 = V_1;
		G_B6_0 = (&V_1);
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		if (L_13)
		{
			G_B7_0 = (&V_1);
			G_B7_1 = G_B5_1;
			G_B7_2 = G_B5_2;
			G_B7_3 = G_B5_3;
			goto IL_007b;
		}
	}
	{
		G_B8_0 = ((String_t*)(NULL));
		G_B8_1 = G_B6_1;
		G_B8_2 = G_B6_2;
		G_B8_3 = G_B6_3;
		goto IL_0086;
	}

IL_007b:
	{
		NullCheck((RuntimeObject *)(*G_B7_0));
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B7_0));
		G_B8_0 = L_14;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
		G_B8_3 = G_B7_3;
	}

IL_0086:
	{
		NullCheck(G_B8_2);
		ArrayElementTypeCheck (G_B8_2, G_B8_0);
		(G_B8_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B8_1), (String_t*)G_B8_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B8_3;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_15;
		RuntimeObject ** L_17 = (RuntimeObject **)__this->get_address_of_Item3_2();
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_18 = V_2;
		G_B9_0 = L_17;
		G_B9_1 = 5;
		G_B9_2 = L_16;
		G_B9_3 = L_16;
		if (L_18)
		{
			G_B11_0 = L_17;
			G_B11_1 = 5;
			G_B11_2 = L_16;
			G_B11_3 = L_16;
			goto IL_00bb;
		}
	}
	{
		RuntimeObject * L_19 = (*(RuntimeObject **)G_B9_0);
		V_2 = (RuntimeObject *)L_19;
		RuntimeObject * L_20 = V_2;
		G_B10_0 = (&V_2);
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		G_B10_3 = G_B9_3;
		if (L_20)
		{
			G_B11_0 = (&V_2);
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			G_B11_3 = G_B9_3;
			goto IL_00bb;
		}
	}
	{
		G_B12_0 = ((String_t*)(NULL));
		G_B12_1 = G_B10_1;
		G_B12_2 = G_B10_2;
		G_B12_3 = G_B10_3;
		goto IL_00c6;
	}

IL_00bb:
	{
		NullCheck((RuntimeObject *)(*G_B11_0));
		String_t* L_21;
		L_21 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B11_0));
		G_B12_0 = L_21;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_00c6:
	{
		NullCheck(G_B12_2);
		ArrayElementTypeCheck (G_B12_2, G_B12_0);
		(G_B12_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B12_1), (String_t*)G_B12_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B12_3;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_22;
		RuntimeObject ** L_24 = (RuntimeObject **)__this->get_address_of_Item4_3();
		il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject *));
		RuntimeObject * L_25 = V_3;
		G_B13_0 = L_24;
		G_B13_1 = 7;
		G_B13_2 = L_23;
		G_B13_3 = L_23;
		if (L_25)
		{
			G_B15_0 = L_24;
			G_B15_1 = 7;
			G_B15_2 = L_23;
			G_B15_3 = L_23;
			goto IL_00fb;
		}
	}
	{
		RuntimeObject * L_26 = (*(RuntimeObject **)G_B13_0);
		V_3 = (RuntimeObject *)L_26;
		RuntimeObject * L_27 = V_3;
		G_B14_0 = (&V_3);
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
		G_B14_3 = G_B13_3;
		if (L_27)
		{
			G_B15_0 = (&V_3);
			G_B15_1 = G_B13_1;
			G_B15_2 = G_B13_2;
			G_B15_3 = G_B13_3;
			goto IL_00fb;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0106;
	}

IL_00fb:
	{
		NullCheck((RuntimeObject *)(*G_B15_0));
		String_t* L_28;
		L_28 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B15_0));
		G_B16_0 = L_28;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0106:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B16_3;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
		RuntimeObject ** L_31 = (RuntimeObject **)__this->get_address_of_Item5_4();
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject *));
		RuntimeObject * L_32 = V_4;
		G_B17_0 = L_31;
		G_B17_1 = ((int32_t)9);
		G_B17_2 = L_30;
		G_B17_3 = L_30;
		if (L_32)
		{
			G_B19_0 = L_31;
			G_B19_1 = ((int32_t)9);
			G_B19_2 = L_30;
			G_B19_3 = L_30;
			goto IL_013f;
		}
	}
	{
		RuntimeObject * L_33 = (*(RuntimeObject **)G_B17_0);
		V_4 = (RuntimeObject *)L_33;
		RuntimeObject * L_34 = V_4;
		G_B18_0 = (&V_4);
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
		G_B18_3 = G_B17_3;
		if (L_34)
		{
			G_B19_0 = (&V_4);
			G_B19_1 = G_B17_1;
			G_B19_2 = G_B17_2;
			G_B19_3 = G_B17_3;
			goto IL_013f;
		}
	}
	{
		G_B20_0 = ((String_t*)(NULL));
		G_B20_1 = G_B18_1;
		G_B20_2 = G_B18_2;
		G_B20_3 = G_B18_3;
		goto IL_014a;
	}

IL_013f:
	{
		NullCheck((RuntimeObject *)(*G_B19_0));
		String_t* L_35;
		L_35 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)(*G_B19_0));
		G_B20_0 = L_35;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		G_B20_3 = G_B19_3;
	}

IL_014a:
	{
		NullCheck(G_B20_2);
		ArrayElementTypeCheck (G_B20_2, G_B20_0);
		(G_B20_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B20_1), (String_t*)G_B20_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)G_B20_3;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_37;
		L_37 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_36, /*hidden argument*/NULL);
		return (String_t*)L_37;
	}
}
IL2CPP_EXTERN_C  String_t* ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 * _thisAdjusted = reinterpret_cast<ValueTuple_5_t7035EE5EAF679A24F0BD61C967C7A77F39847701 *>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ValueTuple_5_ToString_m10AAF418DCBA5D34DDE2388130260FA037484E5D(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_mAE9C4518E4B01FCF0B08AFB3FC323367F12F9D6C_gshared (WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B * __this, ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
		((  void (*) (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 * WhereArrayIterator_1_Clone_m6AAA5D001C531ED6EEDBE8A2EA9394889FF7505D_gshared (WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_0 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B * L_2 = (WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B *, ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m7A96296E0112991512D4CFE8E065E916835EDEFC_gshared (WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_1 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_4 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_6 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_7 = V_0;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_6, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_9 = V_0;
		((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_11 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_mC44B00BCDFC18E4769BF16AD6DFE14BFE22A4628_gshared (WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B * __this, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate0, const RuntimeMethod* method)
{
	{
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_0 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = ___predicate0;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_3;
		L_3 = ((  Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B * L_4 = (WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t12252E86699617DBB32D2A9BEE4BE32ED6C5353B *, ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereArrayIterator_1__ctor_m5358A7C3085BC8A103D9793A6D2FCB7E36A2D2CE_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereArrayIterator_1_Clone_m2CF9FC5638704567A64DC86DD674EB4E6F380F79_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_2 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereArrayIterator_1_MoveNext_m37A95072CA5380DE7F2D6B57990507C92F045BB3_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		goto IL_0042;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_5();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_7 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6);
		bool L_8;
		L_8 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_6, (RuntimeObject *)L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_8)
		{
			goto IL_0042;
		}
	}
	{
		RuntimeObject * L_9 = V_0;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_9);
		return (bool)1;
	}

IL_0042:
	{
		int32_t L_10 = (int32_t)__this->get_index_5();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_11 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0058:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereArrayIterator_1_Where_m294488B1E62E494973DD4880121A17A0C8A08118_gshared (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 * L_4 = (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereArrayIterator_1_t7D84D638EB94F5CC3BE1B29D8FC781CA8CD15A86 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m063EE726EB47CA0A7269EACCABBEB96E9346B393_gshared (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 * __this, RuntimeObject* ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
		((  void (*) (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 * WhereEnumerableIterator_1_Clone_m1CCA5579317CA1576E255466A2A4C2A790851051_gshared (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 * L_2 = (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 *, RuntimeObject*, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m26FB47C94449C7B847A7E94D08F0300D6042AE3E_gshared (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
		((  void (*) (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mFCD5F3C11AD5A22E154C4BCF22E7E18CF4303142_gshared (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_6;
		L_6 = InterfaceFuncInvoker0< ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_6;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_7 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_8 = V_1;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_7, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_10 = V_1;
		((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m21846B91FA5DDD217D5D400F83EE1D1C0ECB7D17_gshared (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 * __this, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = ___predicate0;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_3;
		L_3 = ((  Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 * L_4 = (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t3D275D52261CF3CD1557154CFCF53773FEC88DD7 *, RuntimeObject*, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8AACA3D54F20B23CE1E15ED88E4E38A83230ADE7_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, RuntimeObject* ___source0, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereEnumerableIterator_1_Clone_mDC57C7C854B65372B94924A1F569CF321545A740_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_2 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m9EA4000F13AA700636F89318C7062F6BA9D64C23_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_mAE7D23BACC30F9F4C86F538A14870150465D489D_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (bool)L_6;
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_7 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		bool L_8 = V_1;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_7, (bool)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		bool L_10 = V_1;
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Boolean>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_mA71EF4FCBD540DF71EB95B1C8A44A61EA6433A90_gshared (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_2 = ___predicate0;
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_3;
		L_3 = ((  Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_4 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m90F6FE5458C700155E5FFA3BEAF1A4FAE511D8A4_gshared (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * __this, RuntimeObject* ___source0, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		((  void (*) (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 * WhereEnumerableIterator_1_Clone_mF703B7ED96D4DC59071993900B85C9A7BA8EED4C_gshared (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * L_2 = (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *, RuntimeObject*, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4B7F0955C5A33ACBD19DCEED305FF3C8C58D88DC_gshared (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		((  void (*) (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m935138B0AE6EBB8EE0CB57394D5FA2FF98364C34_gshared (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		uint8_t L_6;
		L_6 = InterfaceFuncInvoker0< uint8_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Byte>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (uint8_t)L_6;
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_7 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		uint8_t L_8 = V_1;
		NullCheck((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_7, (uint8_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		uint8_t L_10 = V_1;
		((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Byte>::Dispose() */, (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Byte>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m61A1D87061D019BCE5F0625D4E6FFB331D4BF4DC_gshared (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * __this, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_2 = ___predicate0;
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_3;
		L_3 = ((  Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * (*) (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_1, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * L_4 = (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *, RuntimeObject*, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE8BFA73027409E16668838C4664CE7C48F3254DF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereEnumerableIterator_1_Clone_mD8AFDE4531ADC466665EEE89C052BFF645C1BDD6_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_2 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Void System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1_Dispose_m4E1339513102BB6B49AD33EDB569D3FFD24ED023_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_5();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_5((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereEnumerableIterator_1_MoveNext_m6D8A420AEB325BF252721010781EF31CF64D73FF_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		RuntimeObject* L_11 = (RuntimeObject*)__this->get_enumerator_5();
		NullCheck((RuntimeObject*)L_11);
		bool L_12;
		L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_11);
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereEnumerableIterator_1_Where_m4016C553BF1DF1102C2A7B769244B2DC2EA3E716_gshared (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_4 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.ValueTuple`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m4ED78321E3B49AA5C563B8520C11FD1FCD8E0B84_gshared (WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 * __this, List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
		((  void (*) (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.ValueTuple`2<System.Object,System.Object>>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 * WhereListIterator_1_Clone_m208F054B415007A291DA3EC6176168566DC6E44C_gshared (WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 * __this, const RuntimeMethod* method)
{
	{
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_0 = (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 * L_2 = (WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 *, List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_mD420E3A9D302C2B078C99E794EB04DF7CEE1616F_gshared (WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_3 = (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)__this->get_source_3();
		NullCheck((List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_3);
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  L_4;
		L_4 = ((  Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  (*) (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * L_5 = (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)__this->get_address_of_enumerator_5();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_6;
		L_6 = Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_inline((Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_6;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_7 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_8 = V_1;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_7, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_10 = V_1;
		((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * L_11 = (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587((Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.ValueTuple`2<System.Object,System.Object>>::Dispose() */, (Iterator_1_t316D2F46EB9A17A687675457E1EC4F8CE962AF75 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.ValueTuple`2<System.Object,System.Object>>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_mC36E098AD37EC8C3942A24A3572F8F1D134E5B5D_gshared (WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 * __this, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_0 = (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = ___predicate0;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_3;
		L_3 = ((  Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 * L_4 = (WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_tFF8261F09383CBD5E14D5919448C6FBD4C508769 *, List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereListIterator`1<System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereListIterator_1__ctor_m3EB9274A8CE9B71A41BA4B8E9E22D9735713DFA3_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereListIterator_1_Clone_mF7E182440FC39477FC20CA48E0FAB270FED512F4_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_2 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_2, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_2;
	}
}
// System.Boolean System.Linq.Enumerable/WhereListIterator`1<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereListIterator_1_MoveNext_m11D0FD0206FC9B236608A1150FB26790BA09B2E5_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0061;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_5(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_004e;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject * L_10 = V_1;
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_10);
		return (bool)1;
	}

IL_004e:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_11 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_5();
		bool L_12;
		L_12 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (L_12)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0061:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1<System.Object>::Where(System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereListIterator_1_Where_m1AD3C3728A42EA6188BB39667495E67F8A078501_gshared (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___predicate0;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_3;
		L_3 = ((  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 9));
		WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD * L_4 = (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereListIterator_1_t42618389DB998070E03A982D15FA39BCA1DB56BD *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_4, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (RuntimeObject*)L_4;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m4F8C99FCF9E77BF19067955126B27E982743FB8E_gshared (WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89 * __this, ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectArrayIterator_2_Clone_m0C1F8A7F1D7B0460F6148B5B64E2FDDE45AE0BCF_gshared (WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_0 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89 * L_3 = (WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89 *, ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m0C87CF16687C59C5DEB366CF732644DCECEC671E_gshared (WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89 * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_1 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_4 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_6 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_7 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_8 = V_0;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_7, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_10 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_selector_5();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_11 = V_0;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_10);
		bool L_12;
		L_12 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_10, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_14 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m47ECBDA1A123729A76A2AC9F2324CD084466C85F_gshared (WhereSelectArrayIterator_2_t106B4C2758D0DC86F0A24D2C04C1D41177243A89 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m10B3BA00463E6C64837C3835B570668A0A395FDC_gshared (WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58 * __this, ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mFAA0429C65C0A7E600F63DBA3A3B9CCDC26E0BB1_gshared (WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_0 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_2 = (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58 * L_3 = (WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58 *, ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mC7BF144E7F26E28DC7F0A84839B1B1A107BE3071_gshared (WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58 * __this, const RuntimeMethod* method)
{
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_1 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_4 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_6 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_7 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_8 = V_0;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_7, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_10 = (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)__this->get_selector_5();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_11 = V_0;
		NullCheck((Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_10, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A* L_14 = (ValueTuple_2U5BU5D_tD132CAFC435A6E98F4DC6821CC5508CF6CED384A*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_mF877DB1367BA8B4F89BA06568F4FEEC98BA8FA9C_gshared (WhereSelectArrayIterator_2_t9B4DA4FEA0AC05DE87D02418C3ACB4CC95FE6F58 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Boolean>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m6D6630435F3BC3546B4B5B9BC3F12EA0087B5B6D_gshared (WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19 * __this, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___source0, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate1, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectArrayIterator_2_Clone_mBDE5D3C66E994CD01301A8AB94113AADD8B8EF51_gshared (WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19 * __this, const RuntimeMethod* method)
{
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_2 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19 * L_3 = (WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19 *, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m7AAE57783CFB4448F570A7843C1CFE6BF7D83460_gshared (WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_1 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		bool L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (bool)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_6 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_7 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		bool L_8 = V_0;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_7, (bool)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_10 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_selector_5();
		bool L_11 = V_0;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_10);
		bool L_12;
		L_12 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_10, (bool)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_14 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m3F60FC20E7277A14E3146B3F4EFEC13E24881E23_gshared (WhereSelectArrayIterator_2_t8D8B5DCED10A00A4B58540A7A5CE560618B72B19 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mE4FDA03740EF8D4E3E4A8E75CE393D9C84A06090_gshared (WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B * __this, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___source0, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate1, Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mE92003080032918FDFA5BF30630EC4689F36B088_gshared (WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B * __this, const RuntimeMethod* method)
{
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_0 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_2 = (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B * L_3 = (WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B *, BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m7600AC87FA033B9AB9AF86769EF2714300C20E65_gshared (WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_1 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		bool L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (bool)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_6 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_7 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		bool L_8 = V_0;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_7, (bool)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_10 = (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)__this->get_selector_5();
		bool L_11 = V_0;
		NullCheck((Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_10, (bool)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_14 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Boolean,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m3B8AF5EB644D6F0CF72C4F3F452D1A8C594D9ED6_gshared (WhereSelectArrayIterator_2_t5049F4AD6A5C057159FB1E4F379F068F861DA81B * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Byte,System.Byte>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mEEDDE225148F57188C286FD74B78002BA16F9270_gshared (WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___source0, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate1, Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		((  void (*) (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Byte,System.Byte>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 * WhereSelectArrayIterator_2_Clone_mD6F4121EC19105BF02C93A92146EBA456D0D6731_gshared (WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C * __this, const RuntimeMethod* method)
{
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get_source_3();
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_2 = (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C * L_3 = (WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C *, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)L_0, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_1, (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Byte,System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m6AD7BD029F6471B2F528788CA06A675B54C463A8_gshared (WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C * __this, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		uint8_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (uint8_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_6 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_7 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		uint8_t L_8 = V_0;
		NullCheck((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_7, (uint8_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_10 = (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)__this->get_selector_5();
		uint8_t L_11 = V_0;
		NullCheck((Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_10);
		uint8_t L_12;
		L_12 = ((  uint8_t (*) (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_10, (uint8_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Byte>::Dispose() */, (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Byte,System.Byte>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m7E99CD4627E45348475FBDBBFE207FE377809519_gshared (WhereSelectArrayIterator_2_t6BAD577E882A451D60E3BF4A0A53A82B18BF043C * __this, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * L_1 = (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *, RuntimeObject*, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Boolean>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mD222EEC2837AA3B9769F01C7F9CD1194D64DDD31_gshared (WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectArrayIterator_2_Clone_m72BB6A93268DAB8F8D4F5CE28C2335066F3B0312_gshared (WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D * L_3 = (WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m26EFA6F8F052448A63F085C9466DA5686160AA46_gshared (WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_6 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_10 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_10);
		bool L_12;
		L_12 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m2AE8F3CA6B0E4D5F250A403F41F6F1A53609CAA0_gshared (WhereSelectArrayIterator_2_tCFCE4D37F4304DFEEBCC018C33A3EEAD64C2B94D * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m42B6FDAEDB2D48D1090A3E06A3D7F4339CA7DD4D_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_mA5824D44B54C8AF514D5683EDE0B1FC5834A69A9_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, const RuntimeMethod* method)
{
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * L_3 = (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B *, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_m880029BC140EC15B1231301739BF3F74D63E452B_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (int32_t)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_6 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_8 = V_0;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_10 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_11 = V_0;
		NullCheck((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_10, (int32_t)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m419FD3EEA73CF3A41AA87E1EEB86DC0206657EAE_gshared (WhereSelectArrayIterator_2_t6AF7279540EEA250525A2AFBDFAC2064A9B5C00B * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_m5B74FF73BB7AB44748C665E95266543282E0FB54_gshared (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectArrayIterator_2_Clone_mA387A7E72897F88A4BD87274A6160DC04C5EB4C0_gshared (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * L_3 = (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mFD913354141E3D46C783BFE77227D87F2B26E048_gshared (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_10 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_10);
		bool L_12;
		L_12 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m909A3870472EBB596EF3A8ADE18B8EE11CE617BB_gshared (WhereSelectArrayIterator_2_t10B90C4E59E87C8E9873EC0EF47742C31779885D * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectArrayIterator_2__ctor_mCB64A76E8C03C791C57D44E38D025D1C6EC7B880_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectArrayIterator_2_Clone_m4ACA936AD86CEAB027D82949C74DEDD882A800D3_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * L_3 = (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectArrayIterator_2_MoveNext_mCF08A119CF0CC000264B5B6BA5EC4B40CC9640CC_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_006b;
		}
	}
	{
		goto IL_0055;
	}

IL_000b:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		int32_t L_2 = (int32_t)__this->get_index_6();
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_0 = (RuntimeObject *)L_4;
		int32_t L_5 = (int32_t)__this->get_index_6();
		__this->set_index_6(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_6 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_8 = V_0;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7);
		bool L_9;
		L_9 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_7, (RuntimeObject *)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		if (!L_9)
		{
			goto IL_0055;
		}
	}

IL_0041:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_10 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_11 = V_0;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10);
		RuntimeObject * L_12;
		L_12 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_10, (RuntimeObject *)L_11, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_12);
		return (bool)1;
	}

IL_0055:
	{
		int32_t L_13 = (int32_t)__this->get_index_6();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get_source_3();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_006b:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectArrayIterator_2_Where_m21B504E9811B348A8694F7C71E07ABCCDE69807B_gshared (WhereSelectArrayIterator_2_tA706D5B1608A9A8F1BF43C6E5D9D682C901DB244 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 7));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m0191F502E83E13661A3B9D82C1E5C37CFDE322AE_gshared (WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF * __this, RuntimeObject* ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectEnumerableIterator_2_Clone_m198D49102D1F64F40C4A73314D539FC4D3A141EF_gshared (WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF * L_3 = (WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF *, RuntimeObject*, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m4A84C4995619EC122FD90355E4AEB043D6534E8A_gshared (WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m483BFE537CA66E290B10AEBFD1A83D8E7F2DCA10_gshared (WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_6;
		L_6 = InterfaceFuncInvoker0< ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_6;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_7 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_8 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_9 = V_1;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_8, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_11 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_selector_5();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_12 = V_1;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_11, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7F0CB6E5A8E27B35A4235C85E17834B3F32D296A_gshared (WhereSelectEnumerableIterator_2_t7FFD8F73CE4EB925818CE133E7893292F23ED1DF * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m4592604F4E48715B698141F4A8696E9AC96584E4_gshared (WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C * __this, RuntimeObject* ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m77B8A6AB8EEDDC3B7AFE7182B92BC4FBCC21136A_gshared (WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_2 = (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C * L_3 = (WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C *, RuntimeObject*, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m82575971F1184BFAA881F672DFD10C9EDCA52FED_gshared (WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mCCAA5EC436BF85C3B6CD2E7BEB67299A36B5B2C7_gshared (WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.ValueTuple`2<System.Object,System.Object>>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_6;
		L_6 = InterfaceFuncInvoker0< ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.ValueTuple`2<System.Object,System.Object>>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_6;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_7 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_8 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_9 = V_1;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_8, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_11 = (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)__this->get_selector_5();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_12 = V_1;
		NullCheck((Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_11, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m47BB9465B915E6A44938B52701580A29A232A4B1_gshared (WhereSelectEnumerableIterator_2_tF58D372B55E8F937D9F74500263F7319EAC9750C * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m187323615634063FE3398F38EE27BA20528489E1_gshared (WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398 * __this, RuntimeObject* ___source0, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate1, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectEnumerableIterator_2_Clone_m7F3CDE3A002B59AD9368937EEF5355A057311B3F_gshared (WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_2 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398 * L_3 = (WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m72FF1DB5813BE2C64DD3658DDBEE5EFB7B4C0DA5_gshared (WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m44FA2549A4E54122FF40D63E8480FCE87ACF95EC_gshared (WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (bool)L_6;
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_7 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_8 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		bool L_9 = V_1;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_8, (bool)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_11 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_selector_5();
		bool L_12 = V_1;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_11, (bool)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m4B9BDAB5D72568F589055FEFC3B41683A4052378_gshared (WhereSelectEnumerableIterator_2_t9DC0A8C26AFAFF9602BB9177332B45A5B8238398 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m8CE873C24666142DAAE3FD85D4199408DD31117B_gshared (WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4 * __this, RuntimeObject* ___source0, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate1, Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_m032C5CEDF73E260C7C3C230BD096B15A9AF07523_gshared (WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_2 = (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4 * L_3 = (WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mB6A73D20F286667FFFFA4121E8EF9E693C639448_gshared (WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mF0E73749EE92024EB1652A31DA18D02383490243_gshared (WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Boolean>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Boolean>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (bool)L_6;
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_7 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_8 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		bool L_9 = V_1;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_8, (bool)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_11 = (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)__this->get_selector_5();
		bool L_12 = V_1;
		NullCheck((Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_11, (bool)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Boolean,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m6FD2FEA32E5F2FA44AC6672596A52F86CF551A75_gshared (WhereSelectEnumerableIterator_2_t955A44F6D173CDB047E53288A7408B2FF87F0BB4 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m7CBABE826DAA0D13FB81DA753B2418828DD6EFAB_gshared (WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1 * __this, RuntimeObject* ___source0, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate1, Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		((  void (*) (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Byte,System.Byte>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 * WhereSelectEnumerableIterator_2_Clone_m3FF1C6F2097C16B17874DD3CEB924BC20CCFE975_gshared (WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_2 = (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1 * L_3 = (WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1 *, RuntimeObject*, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_1, (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Byte,System.Byte>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m87D515065F636BB68746A91BF9A729A79E11EACD_gshared (WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		((  void (*) (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Byte,System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mB7578FA99FDCE8E8DCA451A6E81897209065EFD3_gshared (WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Byte>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		uint8_t L_6;
		L_6 = InterfaceFuncInvoker0< uint8_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Byte>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (uint8_t)L_6;
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_7 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_8 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		uint8_t L_9 = V_1;
		NullCheck((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_8, (uint8_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_11 = (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)__this->get_selector_5();
		uint8_t L_12 = V_1;
		NullCheck((Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_11);
		uint8_t L_13;
		L_13 = ((  uint8_t (*) (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_11, (uint8_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Byte>::Dispose() */, (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Byte,System.Byte>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m56F445F45F1C287EDCFE9F0B4E21A11AE07DBAD6_gshared (WhereSelectEnumerableIterator_2_tA00339C06F37F3F67615FECAF07161F72A755FE1 * __this, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * L_1 = (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *, RuntimeObject*, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m7FDC91EB33B1175EF6911DE315112589B210D456_gshared (WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279 * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectEnumerableIterator_2_Clone_m5F6B6069502D96BAFA1A5031D18E9A97CE494CC1_gshared (WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279 * L_3 = (WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279 *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m7C2BE976560B85A68DA8368B505C60F642877759_gshared (WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m557DC6FC5637410DD971B58D76068F47134E0216_gshared (WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_11 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m7879325A8BA06A400AD28844D3FB7FE384B6BF41_gshared (WhereSelectEnumerableIterator_2_tDEB50115E27D589C97AF4DF3BC8D2FC66F57D279 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m2C6BF870C887594C92C96638C777A6F8D363FBE6_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, RuntimeObject* ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mFAB909F2F26271F2629A7E2424FC23F8BAF054B6_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * L_3 = (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E *, RuntimeObject*, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m82C0D4A9E151A1DAC0C017CA403BAB5CDED9CFD5_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m7422C90C467A2D0EF7E7D644EDB241F378A7AECD_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_11 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m4A570F856A4C2CF183E921AA35177C326F8BAF1C_gshared (WhereSelectEnumerableIterator_2_tC12C4897F0443B7CCF4B7D0E720F91F10278FC0E * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m60436A1F1567E6B31C7346131BB72D6905F87753_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectEnumerableIterator_2_Clone_mD1D2CF66BAF88FD17B02F4E2764E8DD7163E1472_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * L_3 = (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_m4E63FA730CAFE749E72C0F8AC8C8C72D89361C10_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_mC8F53292A1CA72558602FE38F064489066460A37_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_11 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m9A90E43844A52F8FE418B2000DDC144F3FABE7A4_gshared (WhereSelectEnumerableIterator_2_tD36AAC53F2139CA684EB6C71671DA01A8EF1EFFA * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2__ctor_m6DFD3E949A8FA5121F520D501B78C17E84EBDFAC_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		RuntimeObject* L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectEnumerableIterator_2_Clone_mD5F17A02281E6D1529D117CFF2E0F8C347D1B13F_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * L_3 = (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (RuntimeObject*)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectEnumerableIterator_2_Dispose_mAA70577DEF67CEC98FE677984AE2175B7D4E4D00_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->get_enumerator_6();
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
	}

IL_0013:
	{
		__this->set_enumerator_6((RuntimeObject*)NULL);
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		return;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectEnumerableIterator_2_MoveNext_m95AEE737A22EFFFE6557F448BF5AFCC6241D0BD7_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		RuntimeObject* L_3 = (RuntimeObject*)__this->get_source_3();
		NullCheck((RuntimeObject*)L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 5), (RuntimeObject*)L_3);
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		RuntimeObject* L_5 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_5);
		RuntimeObject * L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 6), (RuntimeObject*)L_5);
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		RuntimeObject* L_14 = (RuntimeObject*)__this->get_enumerator_6();
		NullCheck((RuntimeObject*)L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectEnumerableIterator_2_Where_m72A38A8170E8B837F5C090642BE08E3845A8EB37_gshared (WhereSelectEnumerableIterator_2_tDAA8BFBEA68F81670F3F51C6200EBD26D7A8FBAB * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 9));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 10));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE1DA3F57074BCB03BE1ECC2A9809E544FE4778A9_gshared (WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456 * __this, List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectListIterator_2_Clone_m7D46192B91C7AE04FBF3F00276834833960B64B8_gshared (WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456 * __this, const RuntimeMethod* method)
{
	{
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_0 = (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_2 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_selector_5();
		WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456 * L_3 = (WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456 *, List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m605103DB23E1A2CB8CC149AF3FAE86CF967426B6_gshared (WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_3 = (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)__this->get_source_3();
		NullCheck((List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_3);
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  L_4;
		L_4 = ((  Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  (*) (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * L_5 = (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)__this->get_address_of_enumerator_6();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_6;
		L_6 = Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_inline((Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_6;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_7 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_8 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_9 = V_1;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_8, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_11 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_selector_5();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_12 = V_1;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_11, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * L_14 = (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587((Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m287CE26C15E21B27E7CDF9C2C6F51DA41D802561_gshared (WhereSelectListIterator_2_tA424280819F5C566E11B2B43677827E893228456 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF569CC89F53F5F80C77643FE538082B8CD90713B_gshared (WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20 * __this, List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * ___source0, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * ___predicate1, Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m12AD8ADA69284442E5C75AAD5E125633694B679E_gshared (WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20 * __this, const RuntimeMethod* method)
{
	{
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_0 = (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)__this->get_source_3();
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_1 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_2 = (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)__this->get_selector_5();
		WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20 * L_3 = (WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20 *, List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *, Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_0, (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_1, (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF99E19BF2FE76C09A36252696113AFA6CFDB6EB6_gshared (WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC * L_3 = (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)__this->get_source_3();
		NullCheck((List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_3);
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  L_4;
		L_4 = ((  Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0  (*) (List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tF837281ACA0AE5696644C85291C841E8820C7AAC *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * L_5 = (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)__this->get_address_of_enumerator_6();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_6;
		L_6 = Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_inline((Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_6;
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_7 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 * L_8 = (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)__this->get_predicate_4();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_9 = V_1;
		NullCheck((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t139EF32B1D20FBA53B5FC13859124C746B2D3C04 *)L_8, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A * L_11 = (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)__this->get_selector_5();
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_12 = V_1;
		NullCheck((Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *, ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tD5B31A0553FE51700369DE1E4E6F33189C45045A *)L_11, (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * L_14 = (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_mC34E84789B18F4A0FE38F5A6D20958052D39F587((Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)(Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.ValueTuple`2<System.Object,System.Object>,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m745D1E411CD958F2B7D1F83F958E6372412128DE_gshared (WhereSelectListIterator_2_tF4580FBFA67D084FC48A2A4D3CCD114BE92FAD20 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m655BD4108CCEB1E5AA879B3659DDF1040B201608_gshared (WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394 * __this, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___source0, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate1, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectListIterator_2_Clone_mBE176E33C8F5BB032C98786855D8A74DF148C8B0_gshared (WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394 * __this, const RuntimeMethod* method)
{
	{
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_2 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_selector_5();
		WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394 * L_3 = (WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394 *, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m731FA1931F8D75DF78B21F2D166C1FA12CAC1DE8_gshared (WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_3 = (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)__this->get_source_3();
		NullCheck((List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)L_3);
		Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  L_4;
		L_4 = ((  Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * L_5 = (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)__this->get_address_of_enumerator_6();
		bool L_6;
		L_6 = Enumerator_get_Current_m19632EFFAA50F452EA487CBA0F1781963A3B5396_inline((Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (bool)L_6;
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_7 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_8 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		bool L_9 = V_1;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_8, (bool)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_11 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_selector_5();
		bool L_12 = V_1;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_11, (bool)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * L_14 = (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m829A3B1476C9E85C909907D33E9A81B4CFD5728F((Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m3D6B2BC9F60C2C78BCCEA1E0C47EC0E7BB322F37_gshared (WhereSelectListIterator_2_t290A49B2170CF3A822C9F09E0FCD917CF817C394 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m367F2F09D26B827DCE613AB0B1DBDE114E401DB9_gshared (WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876 * __this, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___source0, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate1, Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mF2AF4A7446A7B4431DAABC853B1376E5E8ADE4EB_gshared (WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876 * __this, const RuntimeMethod* method)
{
	{
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)__this->get_source_3();
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_1 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_2 = (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)__this->get_selector_5();
		WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876 * L_3 = (WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876 *, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)L_0, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_1, (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mCF7F542680811D33505E587DF872ECD9445B75F8_gshared (WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_3 = (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)__this->get_source_3();
		NullCheck((List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)L_3);
		Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  L_4;
		L_4 = ((  Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9  (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * L_5 = (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)__this->get_address_of_enumerator_6();
		bool L_6;
		L_6 = Enumerator_get_Current_m19632EFFAA50F452EA487CBA0F1781963A3B5396_inline((Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (bool)L_6;
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_7 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_8 = (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)__this->get_predicate_4();
		bool L_9 = V_1;
		NullCheck((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_8, (bool)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB * L_11 = (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)__this->get_selector_5();
		bool L_12 = V_1;
		NullCheck((Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *, bool, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t51AFCB712DCD56A45EE1645FC1762C549DA040FB *)L_11, (bool)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * L_14 = (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m829A3B1476C9E85C909907D33E9A81B4CFD5728F((Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)(Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Boolean,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m1D4CFF746BCE93BE6D84E0899E0D6CC635F21504_gshared (WhereSelectListIterator_2_t7686D2FCD0C149BEF2A7DDFD0203E102E436E876 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA9203F6DA5A6A2E58A63FD77EB51D9E27FD33CDE_gshared (WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2 * __this, List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * ___source0, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate1, Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		((  void (*) (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 * WhereSelectListIterator_2_Clone_m7C8DD867B72DA34E052CB7AEAF31114829626513_gshared (WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2 * __this, const RuntimeMethod* method)
{
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_0 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)__this->get_source_3();
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_1 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_2 = (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)__this->get_selector_5();
		WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2 * L_3 = (WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2 *, List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)L_0, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_1, (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mD9019546647C7A5DFEA3EA4BC28CC83F2058B087_gshared (WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	uint8_t V_1 = 0x0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF * L_3 = (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)__this->get_source_3();
		NullCheck((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)L_3);
		Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254  L_4;
		L_4 = ((  Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254  (*) (List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_tD0117BC32B3DBF148E7E9AC108FC376C3D4922CF *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 * L_5 = (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 *)__this->get_address_of_enumerator_6();
		uint8_t L_6;
		L_6 = Enumerator_get_Current_m946A5CE0B601908DD35DEA70798E35D21104C637_inline((Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 *)(Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (uint8_t)L_6;
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_7 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_8 = (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)__this->get_predicate_4();
		uint8_t L_9 = V_1;
		NullCheck((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_8, (uint8_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 * L_11 = (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)__this->get_selector_5();
		uint8_t L_12 = V_1;
		NullCheck((Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_11);
		uint8_t L_13;
		L_13 = ((  uint8_t (*) (Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *, uint8_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t41523DB8EC0A135F865D63A7CA05A10766A231E1 *)L_11, (uint8_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 * L_14 = (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m8AD7612CD13206AF84EA29A3917A272D3694DF63((Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 *)(Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Byte>::Dispose() */, (Iterator_1_tB977E16E9E77F59102756D7F0798F3C3810C5238 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Byte,System.Byte>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD8B487DCF9337AE6BA8C62734345BAF7A304CA73_gshared (WhereSelectListIterator_2_t44BBCF449BC6612741322A0D5DDEE5EA4DDF59E2 * __this, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 * L_1 = (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t25F9C751F771483441E0C0FCDD617316B17F4086 *, RuntimeObject*, Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_tC801BC5CCF689A4C07A1A655BBFE80597F30B0DC *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mB5D8932742054FB1AEA4CB7E088013CCCC52F511_gshared (WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectListIterator_2_Clone_m615E9B0DB6684CAC150EE7AB0A4CD1FBB9B788B1_gshared (WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_2 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_selector_5();
		WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21 * L_3 = (WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m86C1EBD7AC602F954B3461FEBB5BC7E03007FC6C_gshared (WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_5 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_11 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_14 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mD7CF6F8783B4A96355DFD4C1C9115169244B9228_gshared (WhereSelectListIterator_2_t2989AC7E9CA6D1FB0231FD52E44E7AFC843ACA21 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA0D61B688D5EE4E84300EA96C87ED9F3E10D5EA9_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___source0, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * ___predicate1, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_mE40F022902D030D86E465678E5DD79B3058FE2CB_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, const RuntimeMethod* method)
{
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_1 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_2 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * L_3 = (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 *, List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_0, (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_1, (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mDEB78D7AB98D0FDC13661615FDBC0C01A621E84F_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_3 = (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)__this->get_source_3();
		NullCheck((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3);
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  L_4;
		L_4 = ((  Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C  (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_5 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		int32_t L_6;
		L_6 = Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_inline((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (int32_t)L_6;
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_7 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 * L_8 = (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)__this->get_predicate_4();
		int32_t L_9 = V_1;
		NullCheck((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t2EBF98B0BA555D9F0633C9BCCBE3DF332B9C1274 *)L_8, (int32_t)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 * L_11 = (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)__this->get_selector_5();
		int32_t L_12 = V_1;
		NullCheck((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t401E8A228CE43E56CCE9280AD9C6D87CC73A0123 *)L_11, (int32_t)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * L_14 = (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m40FD166B6757334A2BBCF67238EFDF70D727A4A6((Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)(Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Int32,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9633A851E09C546940C2D5C7EF8CB7C501784EB3_gshared (WhereSelectListIterator_2_tA41D93FF12E41BB5A5BEA27AEED367695ADACEA4 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mAD2213DC47AA95FF2D1A6651C35A6D2DA6468CB1_gshared (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		((  void (*) (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 * WhereSelectListIterator_2_Clone_m3D586D710F13095D06B4257C1EB35EAF2D438BFC_gshared (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * L_3 = (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mB94D16C026FC155B40EC9AA5B22866B02C8CDE89_gshared (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_11 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_11);
		bool L_13;
		L_13 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Boolean>::Dispose() */, (Iterator_1_tF558BC64630CA9038F999F5A16CC3DD5A0DB6933 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Boolean>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA28A80FD896B11F671BF4EC49E044EC1EF51F050_gshared (WhereSelectListIterator_2_t1135F63EC4A3B58BB9EDE8324AD11A2B64F209E2 * __this, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 * L_1 = (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t3A84EA4A91D206312F2931E2BC9124FFF81BFE22 *, RuntimeObject*, Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t50F598941CFDF02619DC5D52FFDBC329473C5F7B *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mCF313A191371C8CCC2E79D89A3BF21714EFDB20E_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector2, const RuntimeMethod* method)
{
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		((  void (*) (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0)->methodPointer)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___source0;
		__this->set_source_3(L_0);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = ___predicate1;
		__this->set_predicate_4(L_1);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___selector2;
		__this->set_selector_5(L_2);
		return;
	}
}
// System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 * WhereSelectListIterator_2_Clone_m667BCD94E83BB3A02AF2D66E07B089FA86971342_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_1 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * L_3 = (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 *, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_3, (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		return (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)L_3;
	}
}
// System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mEE0E8B173345B059100E0736D106FFAE0C2D29CA_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	{
		int32_t L_0 = (int32_t)((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->get_state_1();
		V_0 = (int32_t)L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_3 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)__this->get_source_3();
		NullCheck((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3);
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  L_4;
		L_4 = ((  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		__this->set_enumerator_6(L_4);
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_state_1(2);
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_5 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		RuntimeObject * L_6;
		L_6 = Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_inline((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_1 = (RuntimeObject *)L_6;
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_7 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_8 = (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)__this->get_predicate_4();
		RuntimeObject * L_9 = V_1;
		NullCheck((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8);
		bool L_10;
		L_10 = ((  bool (*) (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6)->methodPointer)((Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_8, (RuntimeObject *)L_9, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 6));
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_11 = (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)__this->get_selector_5();
		RuntimeObject * L_12 = V_1;
		NullCheck((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11);
		RuntimeObject * L_13;
		L_13 = ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_11, (RuntimeObject *)L_12, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this)->set_current_2(L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * L_14 = (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)__this->get_address_of_enumerator_6();
		bool L_15;
		L_15 = Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0((Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 *)L_14, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 8));
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
		VirtActionInvoker0::Invoke(12 /* System.Void System.Linq.Enumerable/Iterator`1<System.Object>::Dispose() */, (Iterator_1_t674ABE41CF4096D4BE4D51E21FEBDADBF74CC279 *)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2<System.Object,System.Object>::Where(System.Func`2<TResult,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAC87184664F73DD7F3EC4AB4CE2BDE71BE76249D_gshared (WhereSelectListIterator_2_t85B78DFF0573BC95A62C79D6088FA39DFEBE1AF2 * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate0, const RuntimeMethod* method)
{
	{
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_0 = ___predicate0;
		WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 * L_1 = (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 10));
		((  void (*) (WhereEnumerableIterator_1_t1E9FDCFD8F8136C6A5A5740C1E093EF03F0B5CE0 *, RuntimeObject*, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11)->methodPointer)(L_1, (RuntimeObject*)__this, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 11));
		return (RuntimeObject*)L_1;
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
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mE68E63173C17EF13FA0F533F0AA34F4FA753674F_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		int32_t L_0 = ___capacity1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->set_buckets_0(L_1);
		int32_t L_2 = ___capacity1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_3 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)(EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)SZArrayNew(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->set_entries_1(L_3);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_4 = ___extractKey0;
		__this->set_extractKey_3(L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject * V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->get_numEntries_2();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		return (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this;
	}

IL_0012:
	{
		V_0 = (int32_t)0;
		V_2 = (int32_t)0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = (int32_t)L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (int32_t)(-1), (int32_t)0, /*hidden argument*/NULL);
		V_3 = (int32_t)L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_10 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_11 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject * L_13 = (RuntimeObject *)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->get_Value_0();
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_10);
		String_t* L_14;
		L_14 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_10, (RuntimeObject *)L_13, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_005f:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_16 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->get_Next_2();
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_19 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_address_of_Next_2();
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)L_21, (int32_t)(-1), (int32_t)0, /*hidden argument*/NULL);
		V_3 = (int32_t)L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_23 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = (int32_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->get_Next_2();
		V_3 = (int32_t)L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))/(int32_t)2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_32);
		V_0 = (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_33);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length))), (int32_t)2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_35 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m9D5C4C7E08BE06B4D72424590FB4365733FC351D(L_35, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_m2F60ACE78E15F4F50EAD11B7DA897A2BB7B7362A_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_36 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		int32_t L_37 = V_0;
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_38 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 2));
		((  void (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)(L_38, (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_36, (int32_t)L_37, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		V_1 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_38;
		V_4 = (int32_t)0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_39 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = (int32_t)L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_43 = V_1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_44 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject * L_46 = (RuntimeObject *)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->get_Value_0();
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_43);
		bool L_47;
		L_47 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_43, (RuntimeObject *)L_46, (RuntimeObject **)(RuntimeObject **)(&V_6), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_48 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->get_Next_2();
		V_5 = (int32_t)L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_55 = V_1;
		return (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_55;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_mA9B06BC8E0F95FB0FC63CC3D765A4F22887EB93A_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___key0;
		int32_t L_1 = ___index1;
		int32_t L_2 = ___count2;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_0, (int32_t)L_1, (int32_t)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_0 = (int32_t)L_3;
		V_1 = (int32_t)0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = ___index1;
		int32_t L_7 = ___count2;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this);
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this, (int32_t)L_4, (String_t*)L_5, (int32_t)L_6, (int32_t)L_7, (int32_t*)(int32_t*)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject ** L_9 = ___value3;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_10 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject * L_12 = (RuntimeObject *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->get_Value_0();
		*(RuntimeObject **)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject ** L_13 = ___value3;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject *));
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m66B188F6F86501E916DC5D9C3C13AC115C08F977_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, RuntimeObject * ___value0, RuntimeObject ** ___newValue1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject ** L_0 = ___newValue1;
		RuntimeObject * L_1 = ___value0;
		*(RuntimeObject **)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)L_1);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_2 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		RuntimeObject * L_3 = ___value0;
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_2);
		String_t* L_4;
		L_4 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_2, (RuntimeObject *)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_2 = (String_t*)L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck((String_t*)L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5)->methodPointer)((String_t*)L_6, (int32_t)0, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 5));
		V_3 = (int32_t)L_9;
		int32_t* L_10 = (int32_t*)__this->get_address_of_numEntries_2();
		int32_t L_11;
		L_11 = Interlocked_Increment_mEF7FA106280D9E57DA8A97887389A961B65E47D8((int32_t*)(int32_t*)L_10, /*hidden argument*/NULL);
		V_0 = (int32_t)L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_15 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject * L_17 = ___value0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->set_Value_0(L_17);
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_18 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->set_HashCode_1(L_20);
		Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402(/*hidden argument*/NULL);
		V_1 = (int32_t)0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_22 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_23 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_23&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))), (int32_t)1))))))), (int32_t)L_25, (int32_t)0, /*hidden argument*/NULL);
		V_1 = (int32_t)L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_27 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->get_address_of_Next_2();
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_m317AD9524376B7BE74DD9069346E345F2B131382((int32_t*)(int32_t*)L_29, (int32_t)L_30, (int32_t)0, /*hidden argument*/NULL);
		V_1 = (int32_t)L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck((String_t*)L_36);
		int32_t L_37;
		L_37 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_36, /*hidden argument*/NULL);
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this);
		bool L_38;
		L_38 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this, (int32_t)L_34, (String_t*)L_35, (int32_t)0, (int32_t)L_37, (int32_t*)(int32_t*)(&V_1), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 7));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject ** L_39 = ___newValue1;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_40 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject * L_42 = (RuntimeObject *)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->get_Value_0();
		*(RuntimeObject **)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_39, (void*)L_42);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE4A022366877BF9D180DEA774989355DA126E01B_gshared (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * __this, int32_t ___hashCode0, String_t* ___key1, int32_t ___index2, int32_t ___count3, int32_t* ___entryIndex4, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___entryIndex4;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = (int32_t)L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_4 = ___hashCode0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)((int32_t)L_4&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), (int32_t)1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = (int32_t)L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = (int32_t)L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_9 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = (int32_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->get_HashCode_1();
		int32_t L_12 = ___hashCode0;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_13 = (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)__this->get_extractKey_3();
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_14 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject * L_16 = (RuntimeObject *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->get_Value_0();
		NullCheck((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_13);
		String_t* L_17;
		L_17 = ((  String_t* (*) (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)((ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_13, (RuntimeObject *)L_16, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		V_2 = (String_t*)L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_19 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->get_Next_2();
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_22 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject ** L_24 = (RuntimeObject **)((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->get_address_of_Value_0();
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject *));
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_25 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->get_Next_2();
		V_1 = (int32_t)L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_29 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		int32_t L_30 = ___hashCode0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)__this->get_buckets_0();
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_30&(int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))), (int32_t)1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_33 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->set_Next_2(L_35);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___count3;
		String_t* L_37 = V_2;
		NullCheck((String_t*)L_37);
		int32_t L_38;
		L_38 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline((String_t*)L_37, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___key1;
		int32_t L_40 = ___index2;
		String_t* L_41 = V_2;
		int32_t L_42 = ___count3;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m080D376EC2E7A0C528A440094A0DB97DFB34CD41((String_t*)L_39, (int32_t)L_40, (String_t*)L_41, (int32_t)0, (int32_t)L_42, /*hidden argument*/NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___entryIndex4;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = (int32_t)L_46;
		EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E* L_47 = (EntryU5BU5D_tD96158975B5E90990947D08F791911D27646C20E*)__this->get_entries_1();
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->get_Next_2();
		V_1 = (int32_t)L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___entryIndex4;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m7AF1650B3BEC69788C368FAC0BFFAEAFF075E13B_gshared (String_t* ___key0, int32_t ___index1, int32_t ___count2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (int32_t)((int32_t)352654597);
		int32_t L_0 = ___index1;
		int32_t L_1 = ___count2;
		V_1 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
		int32_t L_2 = ___index1;
		V_2 = (int32_t)L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___key0;
		int32_t L_6 = V_2;
		NullCheck((String_t*)L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70((String_t*)L_5, (int32_t)L_6, /*hidden argument*/NULL);
		V_0 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_4<<(int32_t)7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)((int32_t)L_12>>(int32_t)((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)((int32_t)((int32_t)L_14>>(int32_t)((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)((int32_t)((int32_t)L_16>>(int32_t)5))));
		int32_t L_17 = V_0;
		return (int32_t)((int32_t)((int32_t)L_17&(int32_t)((int32_t)2147483647LL)));
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
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_mB4BD2615B8F54F8589333762FAF1C4A8807725FF_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method)
{
	{
		NullCheck((RuntimeObject *)__this);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405((RuntimeObject *)__this, /*hidden argument*/NULL);
		ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 * L_0 = ___extractKey0;
		int32_t L_1 = ___capacity1;
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_2 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 0));
		((  void (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1)->methodPointer)(L_2, (ExtractKeyDelegate_t9679484F2DC398593CBBE5E1C03BB37C3D304A99 *)L_0, (int32_t)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 1));
		__this->set_state_0(L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m7A823EC488B0CF6F3FFE7A1DD5D82997343784F0_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject ** ___value3, const RuntimeMethod* method)
{
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_0 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		String_t* L_1 = ___key0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		RuntimeObject ** L_4 = ___value3;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, String_t*, int32_t, int32_t, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0, (String_t*)L_1, (int32_t)L_2, (int32_t)L_3, (RuntimeObject **)(RuntimeObject **)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (bool)L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * XHashtable_1_Add_m675BFA5CB9B9AFF50836CB517F1C4C7E054629E1_gshared (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;

IL_0000:
	{
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_0 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		RuntimeObject * L_1 = ___value0;
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0);
		bool L_2;
		L_2 = ((  bool (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, RuntimeObject *, RuntimeObject **, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_0, (RuntimeObject *)L_1, (RuntimeObject **)(RuntimeObject **)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}

IL_0012:
	{
		V_1 = (XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 *)__this;
		V_2 = (bool)0;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * L_4 = V_1;
		Monitor_Enter_mBEB6CC84184B46F26375EC3FC8921D16E48EA4C4((RuntimeObject *)L_4, (bool*)(bool*)(&V_2), /*hidden argument*/NULL);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_5 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)__this->get_state_0();
		NullCheck((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_5);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_6;
		L_6 = ((  XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * (*) (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4)->methodPointer)((XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 4));
		V_3 = (XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE *)L_6;
		Thread_MemoryBarrier_m9E2B68F7889D5D3AD76126930EE120D51C1B3402(/*hidden argument*/NULL);
		XHashtableState_t62E24AC7DF88CDB79D00D2633A0BE0DFC8C554FE * L_7 = V_3;
		__this->set_state_0(L_7);
		IL2CPP_LEAVE(0x0, FINALLY_0038);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		{
			bool L_8 = V_2;
			if (!L_8)
			{
				goto IL_0041;
			}
		}

IL_003b:
		{
			XHashtable_1_tDCC8A8B3022A89A8902F5A8091A444BD7922AB37 * L_9 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A((RuntimeObject *)L_9, /*hidden argument*/NULL);
		}

IL_0041:
		{
			IL2CPP_END_FINALLY(56)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x0, IL_0000)
	}
	{
		return (RuntimeObject *)NULL;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTypeDescriptionProvider_1__ctor_m61CD2F99935F6B4C2C5DD85FDACE75BE3032D29C_gshared (XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->klass->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(TypeDescriptor_t7B173A6626B330AB5B77345C4DE4AB6C7B38CA6F_il2cpp_TypeInfo_var);
		TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 * L_2;
		L_2 = TypeDescriptor_GetProvider_m11FFA30C459E9A3C61DEA0B8A7F96B09545BC86B((Type_t *)L_1, /*hidden argument*/NULL);
		NullCheck((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this);
		TypeDescriptionProvider__ctor_m6743A730A14CDF72C690886FDECCF202BC156448((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this, (TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.ComponentModel.ICustomTypeDescriptor MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptionProvider`1<System.Object>::GetTypeDescriptor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XTypeDescriptionProvider_1_GetTypeDescriptor_m882037FAD02588301880CDF863D226B05ECEC676_gshared (XTypeDescriptionProvider_1_t3E70768CA58B1E0422A52E2D980397207AEC99DB * __this, Type_t * ___type0, RuntimeObject * ___instance1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		RuntimeObject * L_1 = ___instance1;
		NullCheck((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this);
		RuntimeObject* L_2;
		L_2 = TypeDescriptionProvider_GetTypeDescriptor_m2ED48670C3D29D6A1CFE63D0F019BBFE8D03372E((TypeDescriptionProvider_t122A1EB346B118B569F333CECF3DCB613CD793D0 *)__this, (Type_t *)L_0, (RuntimeObject *)L_1, /*hidden argument*/NULL);
		XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * L_3 = (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->klass->rgctx_data, 1));
		((  void (*) (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 *, RuntimeObject*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2)->methodPointer)(L_3, (RuntimeObject*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->klass->rgctx_data, 2));
		return (RuntimeObject*)L_3;
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
// System.Void MS.Internal.Xml.Linq.ComponentModel.XTypeDescriptor`1<System.Object>::.ctor(System.ComponentModel.ICustomTypeDescriptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XTypeDescriptor_1__ctor_m1B30545B3DBB18E79EA64DCBC97DA3FF43AE087C_gshared (XTypeDescriptor_1_t8B5AE52536B37FAED17586280E80319C8E7D2B68 * __this, RuntimeObject* ___parent0, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___parent0;
		NullCheck((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this);
		CustomTypeDescriptor__ctor_m83CFDC2A68D4C72A3B5C0A79AEAF41486AAAB7DF((CustomTypeDescriptor_t5EAC3D815ED0A3A3DB9045015F62CF81EA889FAC *)__this, (RuntimeObject*)L_0, /*hidden argument*/NULL);
		return;
	}
}
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  Enumerator_get_Current_m8B737F0ABD2247C4E13D52C15DEAB59C34368B56_gshared_inline (Enumerator_tCF455A92CC670AF169DFC7D0E19B47CAB2BD1DA0 * __this, const RuntimeMethod* method)
{
	{
		ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403  L_0 = (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )__this->get_current_3();
		return (ValueTuple_2_t69671C4973C1A3829B2193E4C598B1AE7162E403 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Enumerator_get_Current_m19632EFFAA50F452EA487CBA0F1781963A3B5396_gshared_inline (Enumerator_t3F9663F5F32B0D733380A76CCEAA3ADFA3AE34A9 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_current_3();
		return (bool)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t Enumerator_get_Current_m946A5CE0B601908DD35DEA70798E35D21104C637_gshared_inline (Enumerator_t6120EE33D7530B898BEB03947154EB230A6DA254 * __this, const RuntimeMethod* method)
{
	{
		uint8_t L_0 = (uint8_t)__this->get_current_3();
		return (uint8_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m6BBD624C51F7E20D347FE5894A6ECA94B8011181_gshared_inline (Enumerator_t7BA00929E14A2F2A62CE085585044A3FEB2C5F3C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_current_3();
		return (int32_t)L_0;
	}
}
