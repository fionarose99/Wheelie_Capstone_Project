#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioControl
struct AudioControl_t154778DD22C1857AC391A7CF78F3EB8729FDC1A0;
// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// ColorChangedEvent
struct ColorChangedEvent_tDA0E8C48AB0F02C991309B32DABD3AC1D0B396A8;
// HSVPicker.ColorPicker
struct ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D;
// HSVPicker.ColorPickerSetup
struct ColorPickerSetup_t37F05C976F78F544751894F54D01B12F2895E8EC;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// HSVChangedEvent
struct HSVChangedEvent_tA78B7342AE4AAD6087F4EA5AB4BFDABCF953F5C7;
// UnityEngine.HingeJoint2D
struct HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// MovementController
struct MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// HSVPicker.OverlayColor
struct OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB;
// Parallax
struct Parallax_t98398A197751A44EE1A4B082AB50A668D671803C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WheelJoint2D
struct WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA;
IL2CPP_EXTERN_C String_t* _stringLiteral268BDB39E6C9FFEAA75571816E8248C93E943D94;
IL2CPP_EXTERN_C String_t* _stringLiteral6BBECA900BC8CAC112A2195926C4872E30F1C477;
IL2CPP_EXTERN_C String_t* _stringLiteral734BC253F0D07DE0F8DFD3592600EA0D229526EC;
IL2CPP_EXTERN_C String_t* _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A;
IL2CPP_EXTERN_C String_t* _stringLiteral886F1FA50C3A8F1756942720E4C0326697938C4D;
IL2CPP_EXTERN_C String_t* _stringLiteral98B099B9397DAFD06B74338FE837891FB0D00F1F;
IL2CPP_EXTERN_C String_t* _stringLiteral9D673913EA3E65DE8313A0CDF27165DCBA922F31;
IL2CPP_EXTERN_C String_t* _stringLiteralA0BC275515E57D4FC52BBC80EB62131C416AA168;
IL2CPP_EXTERN_C String_t* _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2;
IL2CPP_EXTERN_C String_t* _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD;
IL2CPP_EXTERN_C String_t* _stringLiteralB41A2F2D564A1F51E44AB9F38D490FAC996DF25E;
IL2CPP_EXTERN_C String_t* _stringLiteralFEDA918BB3B229E5D4E67FE14476402CD4EDC201;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D_mE9747DA276CDA01DAF582915743FFEEB2FE1E4BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var;

struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
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


// UnityEngine.JointMotor2D
struct JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 
{
public:
	// System.Single UnityEngine.JointMotor2D::m_MotorSpeed
	float ___m_MotorSpeed_0;
	// System.Single UnityEngine.JointMotor2D::m_MaximumMotorTorque
	float ___m_MaximumMotorTorque_1;

public:
	inline static int32_t get_offset_of_m_MotorSpeed_0() { return static_cast<int32_t>(offsetof(JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8, ___m_MotorSpeed_0)); }
	inline float get_m_MotorSpeed_0() const { return ___m_MotorSpeed_0; }
	inline float* get_address_of_m_MotorSpeed_0() { return &___m_MotorSpeed_0; }
	inline void set_m_MotorSpeed_0(float value)
	{
		___m_MotorSpeed_0 = value;
	}

	inline static int32_t get_offset_of_m_MaximumMotorTorque_1() { return static_cast<int32_t>(offsetof(JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8, ___m_MaximumMotorTorque_1)); }
	inline float get_m_MaximumMotorTorque_1() const { return ___m_MaximumMotorTorque_1; }
	inline float* get_address_of_m_MaximumMotorTorque_1() { return &___m_MaximumMotorTorque_1; }
	inline void set_m_MaximumMotorTorque_1(float value)
	{
		___m_MaximumMotorTorque_1 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
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


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Audio.AudioMixer
struct AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Joint2D
struct Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.AnchoredJoint2D
struct AnchoredJoint2D_t8A1A37750EDCE150B7CF1F1525D604C221716300  : public Joint2D_t6BF0D20078680B9000B5BD0D3C30266458F8B964
{
public:

public:
};


// AudioControl
struct AudioControl_t154778DD22C1857AC391A7CF78F3EB8729FDC1A0  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Audio.AudioMixer AudioControl::mixer
	AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * ___mixer_4;

public:
	inline static int32_t get_offset_of_mixer_4() { return static_cast<int32_t>(offsetof(AudioControl_t154778DD22C1857AC391A7CF78F3EB8729FDC1A0, ___mixer_4)); }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * get_mixer_4() const { return ___mixer_4; }
	inline AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 ** get_address_of_mixer_4() { return &___mixer_4; }
	inline void set_mixer_4(AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * value)
	{
		___mixer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mixer_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// HSVPicker.ColorPicker
struct ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single HSVPicker.ColorPicker::_hue
	float ____hue_4;
	// System.Single HSVPicker.ColorPicker::_saturation
	float ____saturation_5;
	// System.Single HSVPicker.ColorPicker::_brightness
	float ____brightness_6;
	// UnityEngine.Color HSVPicker.ColorPicker::_color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ____color_7;
	// HSVPicker.ColorPickerSetup HSVPicker.ColorPicker::Setup
	ColorPickerSetup_t37F05C976F78F544751894F54D01B12F2895E8EC * ___Setup_8;
	// ColorChangedEvent HSVPicker.ColorPicker::onValueChanged
	ColorChangedEvent_tDA0E8C48AB0F02C991309B32DABD3AC1D0B396A8 * ___onValueChanged_9;
	// HSVChangedEvent HSVPicker.ColorPicker::onHSVChanged
	HSVChangedEvent_tA78B7342AE4AAD6087F4EA5AB4BFDABCF953F5C7 * ___onHSVChanged_10;

public:
	inline static int32_t get_offset_of__hue_4() { return static_cast<int32_t>(offsetof(ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D, ____hue_4)); }
	inline float get__hue_4() const { return ____hue_4; }
	inline float* get_address_of__hue_4() { return &____hue_4; }
	inline void set__hue_4(float value)
	{
		____hue_4 = value;
	}

	inline static int32_t get_offset_of__saturation_5() { return static_cast<int32_t>(offsetof(ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D, ____saturation_5)); }
	inline float get__saturation_5() const { return ____saturation_5; }
	inline float* get_address_of__saturation_5() { return &____saturation_5; }
	inline void set__saturation_5(float value)
	{
		____saturation_5 = value;
	}

	inline static int32_t get_offset_of__brightness_6() { return static_cast<int32_t>(offsetof(ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D, ____brightness_6)); }
	inline float get__brightness_6() const { return ____brightness_6; }
	inline float* get_address_of__brightness_6() { return &____brightness_6; }
	inline void set__brightness_6(float value)
	{
		____brightness_6 = value;
	}

	inline static int32_t get_offset_of__color_7() { return static_cast<int32_t>(offsetof(ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D, ____color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get__color_7() const { return ____color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of__color_7() { return &____color_7; }
	inline void set__color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		____color_7 = value;
	}

	inline static int32_t get_offset_of_Setup_8() { return static_cast<int32_t>(offsetof(ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D, ___Setup_8)); }
	inline ColorPickerSetup_t37F05C976F78F544751894F54D01B12F2895E8EC * get_Setup_8() const { return ___Setup_8; }
	inline ColorPickerSetup_t37F05C976F78F544751894F54D01B12F2895E8EC ** get_address_of_Setup_8() { return &___Setup_8; }
	inline void set_Setup_8(ColorPickerSetup_t37F05C976F78F544751894F54D01B12F2895E8EC * value)
	{
		___Setup_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Setup_8), (void*)value);
	}

	inline static int32_t get_offset_of_onValueChanged_9() { return static_cast<int32_t>(offsetof(ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D, ___onValueChanged_9)); }
	inline ColorChangedEvent_tDA0E8C48AB0F02C991309B32DABD3AC1D0B396A8 * get_onValueChanged_9() const { return ___onValueChanged_9; }
	inline ColorChangedEvent_tDA0E8C48AB0F02C991309B32DABD3AC1D0B396A8 ** get_address_of_onValueChanged_9() { return &___onValueChanged_9; }
	inline void set_onValueChanged_9(ColorChangedEvent_tDA0E8C48AB0F02C991309B32DABD3AC1D0B396A8 * value)
	{
		___onValueChanged_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onValueChanged_9), (void*)value);
	}

	inline static int32_t get_offset_of_onHSVChanged_10() { return static_cast<int32_t>(offsetof(ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D, ___onHSVChanged_10)); }
	inline HSVChangedEvent_tA78B7342AE4AAD6087F4EA5AB4BFDABCF953F5C7 * get_onHSVChanged_10() const { return ___onHSVChanged_10; }
	inline HSVChangedEvent_tA78B7342AE4AAD6087F4EA5AB4BFDABCF953F5C7 ** get_address_of_onHSVChanged_10() { return &___onHSVChanged_10; }
	inline void set_onHSVChanged_10(HSVChangedEvent_tA78B7342AE4AAD6087F4EA5AB4BFDABCF953F5C7 * value)
	{
		___onHSVChanged_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onHSVChanged_10), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.KeyCode GameManager::<left>k__BackingField
	int32_t ___U3CleftU3Ek__BackingField_4;
	// UnityEngine.KeyCode GameManager::<right>k__BackingField
	int32_t ___U3CrightU3Ek__BackingField_5;
	// UnityEngine.KeyCode GameManager::<tilt>k__BackingField
	int32_t ___U3CtiltU3Ek__BackingField_6;
	// System.Boolean GameManager::paused
	bool ___paused_7;
	// MovementController GameManager::player
	MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * ___player_8;
	// UnityEngine.SceneManagement.Scene GameManager::MyScene
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  ___MyScene_9;
	// UnityEngine.GameObject GameManager::Menu
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Menu_10;
	// UnityEngine.GameObject GameManager::Focus
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Focus_11;
	// UnityEngine.GameObject[] GameManager::KeybindButtons
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___KeybindButtons_12;
	// UnityEngine.AudioSource GameManager::Music
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___Music_13;
	// UnityEngine.AudioSource GameManager::Sound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___Sound_14;

public:
	inline static int32_t get_offset_of_U3CleftU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___U3CleftU3Ek__BackingField_4)); }
	inline int32_t get_U3CleftU3Ek__BackingField_4() const { return ___U3CleftU3Ek__BackingField_4; }
	inline int32_t* get_address_of_U3CleftU3Ek__BackingField_4() { return &___U3CleftU3Ek__BackingField_4; }
	inline void set_U3CleftU3Ek__BackingField_4(int32_t value)
	{
		___U3CleftU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CrightU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___U3CrightU3Ek__BackingField_5)); }
	inline int32_t get_U3CrightU3Ek__BackingField_5() const { return ___U3CrightU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CrightU3Ek__BackingField_5() { return &___U3CrightU3Ek__BackingField_5; }
	inline void set_U3CrightU3Ek__BackingField_5(int32_t value)
	{
		___U3CrightU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CtiltU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___U3CtiltU3Ek__BackingField_6)); }
	inline int32_t get_U3CtiltU3Ek__BackingField_6() const { return ___U3CtiltU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CtiltU3Ek__BackingField_6() { return &___U3CtiltU3Ek__BackingField_6; }
	inline void set_U3CtiltU3Ek__BackingField_6(int32_t value)
	{
		___U3CtiltU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_paused_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___paused_7)); }
	inline bool get_paused_7() const { return ___paused_7; }
	inline bool* get_address_of_paused_7() { return &___paused_7; }
	inline void set_paused_7(bool value)
	{
		___paused_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_8)); }
	inline MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * get_player_8() const { return ___player_8; }
	inline MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_MyScene_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___MyScene_9)); }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  get_MyScene_9() const { return ___MyScene_9; }
	inline Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * get_address_of_MyScene_9() { return &___MyScene_9; }
	inline void set_MyScene_9(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  value)
	{
		___MyScene_9 = value;
	}

	inline static int32_t get_offset_of_Menu_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Menu_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Menu_10() const { return ___Menu_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Menu_10() { return &___Menu_10; }
	inline void set_Menu_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Menu_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Menu_10), (void*)value);
	}

	inline static int32_t get_offset_of_Focus_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Focus_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Focus_11() const { return ___Focus_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Focus_11() { return &___Focus_11; }
	inline void set_Focus_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Focus_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Focus_11), (void*)value);
	}

	inline static int32_t get_offset_of_KeybindButtons_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___KeybindButtons_12)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_KeybindButtons_12() const { return ___KeybindButtons_12; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_KeybindButtons_12() { return &___KeybindButtons_12; }
	inline void set_KeybindButtons_12(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___KeybindButtons_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeybindButtons_12), (void*)value);
	}

	inline static int32_t get_offset_of_Music_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Music_13)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_Music_13() const { return ___Music_13; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_Music_13() { return &___Music_13; }
	inline void set_Music_13(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___Music_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Music_13), (void*)value);
	}

	inline static int32_t get_offset_of_Sound_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Sound_14)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_Sound_14() const { return ___Sound_14; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_Sound_14() { return &___Sound_14; }
	inline void set_Sound_14(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___Sound_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Sound_14), (void*)value);
	}
};


// MovementController
struct MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera MovementController::maincam
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___maincam_4;
	// GameManager MovementController::GM
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___GM_5;
	// UnityEngine.KeyCode MovementController::<left>k__BackingField
	int32_t ___U3CleftU3Ek__BackingField_6;
	// UnityEngine.KeyCode MovementController::<right>k__BackingField
	int32_t ___U3CrightU3Ek__BackingField_7;
	// UnityEngine.KeyCode MovementController::<tilt>k__BackingField
	int32_t ___U3CtiltU3Ek__BackingField_8;
	// System.Single MovementController::speed
	float ___speed_9;
	// System.Single MovementController::leanSpeed
	float ___leanSpeed_10;
	// System.Single MovementController::maxForce
	float ___maxForce_11;
	// UnityEngine.WheelJoint2D MovementController::Wheel
	WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B * ___Wheel_12;
	// UnityEngine.JointMotor2D MovementController::Wheelmotor
	JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  ___Wheelmotor_13;
	// System.Boolean MovementController::WheelmotorOn
	bool ___WheelmotorOn_14;
	// UnityEngine.HingeJoint2D MovementController::joint
	HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130 * ___joint_15;
	// UnityEngine.JointMotor2D MovementController::JointMot
	JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  ___JointMot_16;
	// System.Boolean MovementController::JointMotorOn
	bool ___JointMotorOn_17;
	// System.Single MovementController::move
	float ___move_18;
	// System.Single MovementController::lean
	float ___lean_19;
	// System.Single MovementController::direction
	float ___direction_20;
	// UnityEngine.GameObject MovementController::GameOver
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GameOver_21;
	// UnityEngine.Animator MovementController::ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___ani_22;
	// System.Boolean MovementController::isLeft
	bool ___isLeft_23;

public:
	inline static int32_t get_offset_of_maincam_4() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___maincam_4)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get_maincam_4() const { return ___maincam_4; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of_maincam_4() { return &___maincam_4; }
	inline void set_maincam_4(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		___maincam_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maincam_4), (void*)value);
	}

	inline static int32_t get_offset_of_GM_5() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___GM_5)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_GM_5() const { return ___GM_5; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_GM_5() { return &___GM_5; }
	inline void set_GM_5(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___GM_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GM_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CleftU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___U3CleftU3Ek__BackingField_6)); }
	inline int32_t get_U3CleftU3Ek__BackingField_6() const { return ___U3CleftU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CleftU3Ek__BackingField_6() { return &___U3CleftU3Ek__BackingField_6; }
	inline void set_U3CleftU3Ek__BackingField_6(int32_t value)
	{
		___U3CleftU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CrightU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___U3CrightU3Ek__BackingField_7)); }
	inline int32_t get_U3CrightU3Ek__BackingField_7() const { return ___U3CrightU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CrightU3Ek__BackingField_7() { return &___U3CrightU3Ek__BackingField_7; }
	inline void set_U3CrightU3Ek__BackingField_7(int32_t value)
	{
		___U3CrightU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CtiltU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___U3CtiltU3Ek__BackingField_8)); }
	inline int32_t get_U3CtiltU3Ek__BackingField_8() const { return ___U3CtiltU3Ek__BackingField_8; }
	inline int32_t* get_address_of_U3CtiltU3Ek__BackingField_8() { return &___U3CtiltU3Ek__BackingField_8; }
	inline void set_U3CtiltU3Ek__BackingField_8(int32_t value)
	{
		___U3CtiltU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_speed_9() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___speed_9)); }
	inline float get_speed_9() const { return ___speed_9; }
	inline float* get_address_of_speed_9() { return &___speed_9; }
	inline void set_speed_9(float value)
	{
		___speed_9 = value;
	}

	inline static int32_t get_offset_of_leanSpeed_10() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___leanSpeed_10)); }
	inline float get_leanSpeed_10() const { return ___leanSpeed_10; }
	inline float* get_address_of_leanSpeed_10() { return &___leanSpeed_10; }
	inline void set_leanSpeed_10(float value)
	{
		___leanSpeed_10 = value;
	}

	inline static int32_t get_offset_of_maxForce_11() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___maxForce_11)); }
	inline float get_maxForce_11() const { return ___maxForce_11; }
	inline float* get_address_of_maxForce_11() { return &___maxForce_11; }
	inline void set_maxForce_11(float value)
	{
		___maxForce_11 = value;
	}

	inline static int32_t get_offset_of_Wheel_12() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___Wheel_12)); }
	inline WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B * get_Wheel_12() const { return ___Wheel_12; }
	inline WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B ** get_address_of_Wheel_12() { return &___Wheel_12; }
	inline void set_Wheel_12(WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B * value)
	{
		___Wheel_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wheel_12), (void*)value);
	}

	inline static int32_t get_offset_of_Wheelmotor_13() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___Wheelmotor_13)); }
	inline JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  get_Wheelmotor_13() const { return ___Wheelmotor_13; }
	inline JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 * get_address_of_Wheelmotor_13() { return &___Wheelmotor_13; }
	inline void set_Wheelmotor_13(JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  value)
	{
		___Wheelmotor_13 = value;
	}

	inline static int32_t get_offset_of_WheelmotorOn_14() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___WheelmotorOn_14)); }
	inline bool get_WheelmotorOn_14() const { return ___WheelmotorOn_14; }
	inline bool* get_address_of_WheelmotorOn_14() { return &___WheelmotorOn_14; }
	inline void set_WheelmotorOn_14(bool value)
	{
		___WheelmotorOn_14 = value;
	}

	inline static int32_t get_offset_of_joint_15() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___joint_15)); }
	inline HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130 * get_joint_15() const { return ___joint_15; }
	inline HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130 ** get_address_of_joint_15() { return &___joint_15; }
	inline void set_joint_15(HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130 * value)
	{
		___joint_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___joint_15), (void*)value);
	}

	inline static int32_t get_offset_of_JointMot_16() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___JointMot_16)); }
	inline JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  get_JointMot_16() const { return ___JointMot_16; }
	inline JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 * get_address_of_JointMot_16() { return &___JointMot_16; }
	inline void set_JointMot_16(JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  value)
	{
		___JointMot_16 = value;
	}

	inline static int32_t get_offset_of_JointMotorOn_17() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___JointMotorOn_17)); }
	inline bool get_JointMotorOn_17() const { return ___JointMotorOn_17; }
	inline bool* get_address_of_JointMotorOn_17() { return &___JointMotorOn_17; }
	inline void set_JointMotorOn_17(bool value)
	{
		___JointMotorOn_17 = value;
	}

	inline static int32_t get_offset_of_move_18() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___move_18)); }
	inline float get_move_18() const { return ___move_18; }
	inline float* get_address_of_move_18() { return &___move_18; }
	inline void set_move_18(float value)
	{
		___move_18 = value;
	}

	inline static int32_t get_offset_of_lean_19() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___lean_19)); }
	inline float get_lean_19() const { return ___lean_19; }
	inline float* get_address_of_lean_19() { return &___lean_19; }
	inline void set_lean_19(float value)
	{
		___lean_19 = value;
	}

	inline static int32_t get_offset_of_direction_20() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___direction_20)); }
	inline float get_direction_20() const { return ___direction_20; }
	inline float* get_address_of_direction_20() { return &___direction_20; }
	inline void set_direction_20(float value)
	{
		___direction_20 = value;
	}

	inline static int32_t get_offset_of_GameOver_21() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___GameOver_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GameOver_21() const { return ___GameOver_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GameOver_21() { return &___GameOver_21; }
	inline void set_GameOver_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GameOver_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameOver_21), (void*)value);
	}

	inline static int32_t get_offset_of_ani_22() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___ani_22)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_ani_22() const { return ___ani_22; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_ani_22() { return &___ani_22; }
	inline void set_ani_22(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___ani_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_22), (void*)value);
	}

	inline static int32_t get_offset_of_isLeft_23() { return static_cast<int32_t>(offsetof(MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36, ___isLeft_23)); }
	inline bool get_isLeft_23() const { return ___isLeft_23; }
	inline bool* get_address_of_isLeft_23() { return &___isLeft_23; }
	inline void set_isLeft_23(bool value)
	{
		___isLeft_23 = value;
	}
};


// HSVPicker.OverlayColor
struct OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// HSVPicker.ColorPicker HSVPicker.OverlayColor::color
	ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * ___color_4;
	// UnityEngine.SpriteRenderer HSVPicker.OverlayColor::sprite
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sprite_5;

public:
	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB, ___color_4)); }
	inline ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * get_color_4() const { return ___color_4; }
	inline ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D ** get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * value)
	{
		___color_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___color_4), (void*)value);
	}

	inline static int32_t get_offset_of_sprite_5() { return static_cast<int32_t>(offsetof(OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB, ___sprite_5)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sprite_5() const { return ___sprite_5; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sprite_5() { return &___sprite_5; }
	inline void set_sprite_5(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sprite_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite_5), (void*)value);
	}
};


// Parallax
struct Parallax_t98398A197751A44EE1A4B082AB50A668D671803C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Parallax::length
	float ___length_4;
	// System.Single Parallax::startpos
	float ___startpos_5;
	// UnityEngine.GameObject Parallax::cam
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cam_6;
	// System.Single Parallax::paralaxEffect
	float ___paralaxEffect_7;
	// System.Single Parallax::temp
	float ___temp_8;
	// System.Single Parallax::dist
	float ___dist_9;
	// System.Single Parallax::posLength
	float ___posLength_10;
	// System.Single Parallax::moveSpeed
	float ___moveSpeed_11;

public:
	inline static int32_t get_offset_of_length_4() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___length_4)); }
	inline float get_length_4() const { return ___length_4; }
	inline float* get_address_of_length_4() { return &___length_4; }
	inline void set_length_4(float value)
	{
		___length_4 = value;
	}

	inline static int32_t get_offset_of_startpos_5() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___startpos_5)); }
	inline float get_startpos_5() const { return ___startpos_5; }
	inline float* get_address_of_startpos_5() { return &___startpos_5; }
	inline void set_startpos_5(float value)
	{
		___startpos_5 = value;
	}

	inline static int32_t get_offset_of_cam_6() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___cam_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cam_6() const { return ___cam_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cam_6() { return &___cam_6; }
	inline void set_cam_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cam_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cam_6), (void*)value);
	}

	inline static int32_t get_offset_of_paralaxEffect_7() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___paralaxEffect_7)); }
	inline float get_paralaxEffect_7() const { return ___paralaxEffect_7; }
	inline float* get_address_of_paralaxEffect_7() { return &___paralaxEffect_7; }
	inline void set_paralaxEffect_7(float value)
	{
		___paralaxEffect_7 = value;
	}

	inline static int32_t get_offset_of_temp_8() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___temp_8)); }
	inline float get_temp_8() const { return ___temp_8; }
	inline float* get_address_of_temp_8() { return &___temp_8; }
	inline void set_temp_8(float value)
	{
		___temp_8 = value;
	}

	inline static int32_t get_offset_of_dist_9() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___dist_9)); }
	inline float get_dist_9() const { return ___dist_9; }
	inline float* get_address_of_dist_9() { return &___dist_9; }
	inline void set_dist_9(float value)
	{
		___dist_9 = value;
	}

	inline static int32_t get_offset_of_posLength_10() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___posLength_10)); }
	inline float get_posLength_10() const { return ___posLength_10; }
	inline float* get_address_of_posLength_10() { return &___posLength_10; }
	inline void set_posLength_10(float value)
	{
		___posLength_10 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_11() { return static_cast<int32_t>(offsetof(Parallax_t98398A197751A44EE1A4B082AB50A668D671803C, ___moveSpeed_11)); }
	inline float get_moveSpeed_11() const { return ___moveSpeed_11; }
	inline float* get_address_of_moveSpeed_11() { return &___moveSpeed_11; }
	inline void set_moveSpeed_11(float value)
	{
		___moveSpeed_11 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.HingeJoint2D
struct HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130  : public AnchoredJoint2D_t8A1A37750EDCE150B7CF1F1525D604C221716300
{
public:

public:
};


// UnityEngine.WheelJoint2D
struct WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B  : public AnchoredJoint2D_t8A1A37750EDCE150B7CF1F1525D604C221716300
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);

// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Audio.AudioMixer::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE (AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode GameManager::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::set_left(UnityEngine.KeyCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_left_m6EE3A7B38FC77A87DF2C14B9FD391B161DC7EA55_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.KeyCode GameManager::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::set_right(UnityEngine.KeyCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_right_mE2E60FA6CCE7099559CC430F55D9168D53FD7A7A_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.KeyCode GameManager::get_tilt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void GameManager::set_tilt(UnityEngine.KeyCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_tilt_m331D13AF6940620BEBB2DC9F86D86FDA31C67981_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void GameManager::TogglePause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TogglePause_m57A193341384597A31CC6440498FE4D263438C1D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, bool ___pause0, const RuntimeMethod* method);
// System.Void MovementController::set_left(UnityEngine.KeyCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MovementController_set_left_mDC7612B723C50E4D8FFEAAD5B1A10EF38AACDAED_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void MovementController::set_right(UnityEngine.KeyCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MovementController_set_right_mA45A54A483C9862017A95DF66EAD1E0807D610A7_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void MovementController::set_tilt(UnityEngine.KeyCode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MovementController_set_tilt_mF3BF3E2EBB39F7E97DA3B364D3FD0390728F5C58_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220 (int32_t ___key0, const RuntimeMethod* method);
// System.Void GameManager::ToggleMenu(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ToggleMenu_m30A4A58A4D434D69DE3A163C81AABAAE549D219A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menu0, const RuntimeMethod* method);
// System.Void GameManager::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TogglePause_m4B2F2B7E44136B120321655208CBC98D2B7CA826 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_timeScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4 (const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void GameManager::SetBindText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetBindText_mA379EAAB0C20E5E5C5CB26C96228AB9CFF458404 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Collections.IEnumerator System.Array::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// System.Void UnityEngine.JointMotor2D::set_maxMotorTorque(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointMotor2D_set_maxMotorTorque_mAD890C47260D094AE80C3E9FC9EE491430AC3F44 (JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 * __this, float ___value0, const RuntimeMethod* method);
// System.Single MovementController::VerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MovementController_VerticalAxis_m0DB608EFCFDF045E24633A533089A2DF295C2B4C (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Single MovementController::HorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MovementController_HorizontalAxis_m54D230557C089AB0321D54DB01404F1A150A32C2 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.JointMotor2D::set_motorSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JointMotor2D_set_motorSpeed_mD768FAF586B800EBCA3DE847FDF5D87EF2448031 (JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelJoint2D::set_motor(UnityEngine.JointMotor2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelJoint2D_set_motor_mE733752DB3D1E1D7869B3B5FA9DF410A6C1EDFDE (WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B * __this, JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.HingeJoint2D::set_motor(UnityEngine.JointMotor2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HingeJoint2D_set_motor_mC13ED8AEE18005A153741F342E2E9F56A2F9F653 (HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130 * __this, JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WheelJoint2D::set_useMotor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WheelJoint2D_set_useMotor_m73019D53A9D9B913C5D96E73204CEAE6F5294C4F (WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.HingeJoint2D::set_useMotor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HingeJoint2D_set_useMotor_m66127307F9296ED77DEEDE2824C1AFCC2A1D794B (HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.KeyCode MovementController::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MovementController_get_left_m5D8FFA96665E6977FC22284A1A4DC33B756C7A66_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode MovementController::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MovementController_get_right_m21C72477800694EB3238A701EFB1B2E5EFCCBB9D_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method);
// UnityEngine.KeyCode MovementController::get_tilt()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MovementController_get_tilt_m9712C0E32F5034265E4D1A090AAA8FF7ADC70D35_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<HSVPicker.ColorPicker>()
inline ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * Component_GetComponent_TisColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D_mE9747DA276CDA01DAF582915743FFEEB2FE1E4BB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void HSVPicker.OverlayColor::changeColor(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayColor_changeColor_m2ABAE8DE91201826E260DCF327729C176312A4AE (OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB * __this, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spr0, const RuntimeMethod* method);
// UnityEngine.Color HSVPicker.ColorPicker::get_CurrentColor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ColorPicker_get_CurrentColor_m18C632583F2A8EDCB7D96E957ACBA9D61B89CDDC_inline (ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
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
// System.Void AudioControl::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioControl_Start_m4035941E2D192151E3A020C44E2FB37CD8E9610B (AudioControl_t154778DD22C1857AC391A7CF78F3EB8729FDC1A0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AudioControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioControl_Update_mE2081D0ECAC2A563F9C8C1315AF96D7232B58D2D (AudioControl_t154778DD22C1857AC391A7CF78F3EB8729FDC1A0 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void AudioControl::SetLevel(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioControl_SetLevel_m7875CE143E458A63BBCDA475515AE020DCD6648F (AudioControl_t154778DD22C1857AC391A7CF78F3EB8729FDC1A0 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// mixer.SetFloat(name, Mathf.Log10(value) * 20);
		AudioMixer_t6F1DE6A2F2CF367B61A125CA0F247E66168AE2B5 * L_0 = __this->get_mixer_4();
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		float L_2 = ___value0;
		float L_3;
		L_3 = log10f(L_2);
		bool L_4;
		L_4 = AudioMixer_SetFloat_m305579F01374620674AF66DA63DDD4BDBC9089CE(L_0, L_1, ((float)il2cpp_codegen_multiply((float)L_3, (float)(20.0f))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioControl__ctor_mBD66A3ED8263BCE0E6D884FAFBF894E62D76CE64 (AudioControl_t154778DD22C1857AC391A7CF78F3EB8729FDC1A0 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.KeyCode GameManager::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode left { get; set; }
		int32_t L_0 = __this->get_U3CleftU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void GameManager::set_left(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_left_m6EE3A7B38FC77A87DF2C14B9FD391B161DC7EA55 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode left { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CleftU3Ek__BackingField_4(L_0);
		return;
	}
}
// UnityEngine.KeyCode GameManager::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode right { get; set; }
		int32_t L_0 = __this->get_U3CrightU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void GameManager::set_right(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_right_mE2E60FA6CCE7099559CC430F55D9168D53FD7A7A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode right { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrightU3Ek__BackingField_5(L_0);
		return;
	}
}
// UnityEngine.KeyCode GameManager::get_tilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode tilt { get; set; }
		int32_t L_0 = __this->get_U3CtiltU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void GameManager::set_tilt(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_set_tilt_m331D13AF6940620BEBB2DC9F86D86FDA31C67981 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode tilt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtiltU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (left == KeyCode.None)
		int32_t L_0;
		L_0 = GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		// left = KeyCode.A;
		GameManager_set_left_m6EE3A7B38FC77A87DF2C14B9FD391B161DC7EA55_inline(__this, ((int32_t)97), /*hidden argument*/NULL);
	}

IL_0010:
	{
		// if (right == KeyCode.None)
		int32_t L_1;
		L_1 = GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline(__this, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		// right = KeyCode.D;
		GameManager_set_right_mE2E60FA6CCE7099559CC430F55D9168D53FD7A7A_inline(__this, ((int32_t)100), /*hidden argument*/NULL);
	}

IL_0020:
	{
		// if (tilt == KeyCode.None)
		int32_t L_2;
		L_2 = GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline(__this, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0030;
		}
	}
	{
		// tilt = KeyCode.Space;
		GameManager_set_tilt_m331D13AF6940620BEBB2DC9F86D86FDA31C67981_inline(__this, ((int32_t)32), /*hidden argument*/NULL);
	}

IL_0030:
	{
		// DontDestroyOnLoad(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral886F1FA50C3A8F1756942720E4C0326697938C4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(name.Equals("GameManagerGame"))
		String_t* L_0;
		L_0 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, _stringLiteral886F1FA50C3A8F1756942720E4C0326697938C4D, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0051;
		}
	}
	{
		// TogglePause(paused);
		bool L_2 = __this->get_paused_7();
		GameManager_TogglePause_m57A193341384597A31CC6440498FE4D263438C1D(__this, L_2, /*hidden argument*/NULL);
		// player.left = left;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_3 = __this->get_player_8();
		int32_t L_4;
		L_4 = GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline(__this, /*hidden argument*/NULL);
		MovementController_set_left_mDC7612B723C50E4D8FFEAAD5B1A10EF38AACDAED_inline(L_3, L_4, /*hidden argument*/NULL);
		// player.right = right;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_5 = __this->get_player_8();
		int32_t L_6;
		L_6 = GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline(__this, /*hidden argument*/NULL);
		MovementController_set_right_mA45A54A483C9862017A95DF66EAD1E0807D610A7_inline(L_5, L_6, /*hidden argument*/NULL);
		// player.tilt = tilt;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_7 = __this->get_player_8();
		int32_t L_8;
		L_8 = GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline(__this, /*hidden argument*/NULL);
		MovementController_set_tilt_mF3BF3E2EBB39F7E97DA3B364D3FD0390728F5C58_inline(L_7, L_8, /*hidden argument*/NULL);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void GameManager::SetBindText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SetBindText_mA379EAAB0C20E5E5C5CB26C96228AB9CFF458404 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// KeybindButtons[0].GetComponentInChildren<Text>().text = left.ToString();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_KeybindButtons_12();
		int32_t L_1 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3;
		L_3 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_2, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		int32_t L_4;
		L_4 = GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline(__this, /*hidden argument*/NULL);
		V_0 = L_4;
		RuntimeObject * L_5 = Box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_0 = *(int32_t*)UnBox(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// KeybindButtons[1].GetComponentInChildren<Text>().text = right.ToString();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_KeybindButtons_12();
		int32_t L_8 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10;
		L_10 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_9, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		int32_t L_11;
		L_11 = GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline(__this, /*hidden argument*/NULL);
		V_0 = L_11;
		RuntimeObject * L_12 = Box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		V_0 = *(int32_t*)UnBox(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// KeybindButtons[2].GetComponentInChildren<Text>().text = tilt.ToString();
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_KeybindButtons_12();
		int32_t L_15 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15));
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17;
		L_17 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_16, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		int32_t L_18;
		L_18 = GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline(__this, /*hidden argument*/NULL);
		V_0 = L_18;
		RuntimeObject * L_19 = Box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var, (&V_0));
		String_t* L_20;
		L_20 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		V_0 = *(int32_t*)UnBox(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_20);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral268BDB39E6C9FFEAA75571816E8248C93E943D94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98B099B9397DAFD06B74338FE837891FB0D00F1F);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * V_3 = NULL;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (Menu == null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Menu_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_00c3;
		}
	}
	{
		// foreach (GameObject gm in GameObject.FindGameObjectsWithTag("GM"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2;
		L_2 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteral98B099B9397DAFD06B74338FE837891FB0D00F1F, /*hidden argument*/NULL);
		V_0 = L_2;
		V_1 = 0;
		goto IL_00af;
	}

IL_0023:
	{
		// foreach (GameObject gm in GameObject.FindGameObjectsWithTag("GM"))
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = V_0;
		int32_t L_4 = V_1;
		int32_t L_5 = L_4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_3)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		// if (gm != this.gameObject)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00ab;
		}
	}
	{
		// Debug.Log("Done");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral268BDB39E6C9FFEAA75571816E8248C93E943D94, /*hidden argument*/NULL);
		// GameManager GameMan = gm.GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = V_2;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_11;
		L_11 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_10, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		V_3 = L_11;
		// GameMan.left = left;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12 = V_3;
		int32_t L_13;
		L_13 = GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline(__this, /*hidden argument*/NULL);
		GameManager_set_left_m6EE3A7B38FC77A87DF2C14B9FD391B161DC7EA55_inline(L_12, L_13, /*hidden argument*/NULL);
		// GameMan.right = right;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_14 = V_3;
		int32_t L_15;
		L_15 = GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline(__this, /*hidden argument*/NULL);
		GameManager_set_right_mE2E60FA6CCE7099559CC430F55D9168D53FD7A7A_inline(L_14, L_15, /*hidden argument*/NULL);
		// GameMan.tilt = tilt;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_16 = V_3;
		int32_t L_17;
		L_17 = GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline(__this, /*hidden argument*/NULL);
		GameManager_set_tilt_m331D13AF6940620BEBB2DC9F86D86FDA31C67981_inline(L_16, L_17, /*hidden argument*/NULL);
		// if(GameMan.player != null)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_18 = V_3;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_19 = L_18->get_player_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_19, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00ab;
		}
	}
	{
		// GameMan.player.left = left;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_21 = V_3;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_22 = L_21->get_player_8();
		int32_t L_23;
		L_23 = GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline(__this, /*hidden argument*/NULL);
		MovementController_set_left_mDC7612B723C50E4D8FFEAAD5B1A10EF38AACDAED_inline(L_22, L_23, /*hidden argument*/NULL);
		// GameMan.player.right = right;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_24 = V_3;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_25 = L_24->get_player_8();
		int32_t L_26;
		L_26 = GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline(__this, /*hidden argument*/NULL);
		MovementController_set_right_mA45A54A483C9862017A95DF66EAD1E0807D610A7_inline(L_25, L_26, /*hidden argument*/NULL);
		// GameMan.player.tilt = tilt;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_27 = V_3;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_28 = L_27->get_player_8();
		int32_t L_29;
		L_29 = GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline(__this, /*hidden argument*/NULL);
		MovementController_set_tilt_mF3BF3E2EBB39F7E97DA3B364D3FD0390728F5C58_inline(L_28, L_29, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00af:
	{
		// foreach (GameObject gm in GameObject.FindGameObjectsWithTag("GM"))
		int32_t L_31 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = V_0;
		if ((((int32_t)L_31) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_32)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_33, /*hidden argument*/NULL);
	}

IL_00c3:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_34;
		L_34 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)27), /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_010b;
		}
	}
	{
		// if (Focus != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_Focus_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_35, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_00f9;
		}
	}
	{
		// if(Focus != Menu)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = __this->get_Focus_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38 = __this->get_Menu_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_37, L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_00f9;
		}
	}
	{
		// ToggleMenu(Focus);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = __this->get_Focus_11();
		GameManager_ToggleMenu_m30A4A58A4D434D69DE3A163C81AABAAE549D219A(__this, L_40, /*hidden argument*/NULL);
	}

IL_00f9:
	{
		// ToggleMenu(Menu);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = __this->get_Menu_10();
		GameManager_ToggleMenu_m30A4A58A4D434D69DE3A163C81AABAAE549D219A(__this, L_41, /*hidden argument*/NULL);
		// TogglePause();
		GameManager_TogglePause_m4B2F2B7E44136B120321655208CBC98D2B7CA826(__this, /*hidden argument*/NULL);
	}

IL_010b:
	{
		// if (Input.GetKeyDown(KeyCode.R))
		bool L_42;
		L_42 = Input_GetKeyDown_m476116696E71771641BBECBAB1A4C55E69018220(((int32_t)114), /*hidden argument*/NULL);
		if (!L_42)
		{
			goto IL_012e;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_43;
		L_43 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_4 = L_43;
		String_t* L_44;
		L_44 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_4), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_44, /*hidden argument*/NULL);
		// TogglePause(false);
		GameManager_TogglePause_m57A193341384597A31CC6440498FE4D263438C1D(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_012e:
	{
		// }
		return;
	}
}
// System.Void GameManager::TogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TogglePause_m4B2F2B7E44136B120321655208CBC98D2B7CA826 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if(Time.timeScale == 0)
		float L_0;
		L_0 = Time_get_timeScale_m082A05928ED5917AA986FAA6106E79D8446A26F4(/*hidden argument*/NULL);
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0017;
		}
	}
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// } else
		return;
	}

IL_0017:
	{
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::TogglePause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_TogglePause_m57A193341384597A31CC6440498FE4D263438C1D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, bool ___pause0, const RuntimeMethod* method)
{
	{
		// if(pause)
		bool L_0 = ___pause0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Time.timeScale = 0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((0.0f), /*hidden argument*/NULL);
		// }
		return;
	}

IL_000e:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA((1.0f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::ToggleMenu(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ToggleMenu_m30A4A58A4D434D69DE3A163C81AABAAE549D219A (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6BBECA900BC8CAC112A2195926C4872E30F1C477);
		s_Il2CppMethodInitialized = true;
	}
	{
		// menu.SetActive(!menu.activeSelf);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___menu0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = ___menu0;
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		// if(menu.name.Equals("Keybinds"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = ___menu0;
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_4, _stringLiteral6BBECA900BC8CAC112A2195926C4872E30F1C477, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		// SetBindText();
		GameManager_SetBindText_mA379EAAB0C20E5E5C5CB26C96228AB9CFF458404(__this, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// if (menu.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = ___menu0;
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// Focus = menu;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = ___menu0;
		__this->set_Focus_11(L_8);
		// }
		return;
	}

IL_0037:
	{
		// Focus = null;
		__this->set_Focus_11((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void GameManager::ToggleFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_ToggleFocus_m870523A0E93CCA4E419D0800358DFA8B281657F5 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Focus != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Focus_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// Focus.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Focus_11();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// Focus = null;
		__this->set_Focus_11((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void GameManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_LoadScene_m329DB2E3C07F3ACD70C5990F1BC083E9C5D195C7 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, String_t* ___scene0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scene);
		String_t* L_0 = ___scene0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// TogglePause(true);
		GameManager_TogglePause_m57A193341384597A31CC6440498FE4D263438C1D(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Exit_m53C8432AD31898BB8B3D64B9D0A6020E615DC27D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::BindKey(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_BindKey_m34E6B13AF4649C02C362CA2B7BFC91AF48668EF8 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___plc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D673913EA3E65DE8313A0CDF27165DCBA922F31);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// string key = plc.name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = ___plc0;
		String_t* L_1;
		L_1 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// KeyCode temp = KeyCode.None;
		V_1 = 0;
		// if (key.Equals("Left"))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_2, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// temp = left;
		int32_t L_4;
		L_4 = GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline(__this, /*hidden argument*/NULL);
		V_1 = L_4;
	}

IL_001d:
	{
		// if (key.Equals("Right"))
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0031;
		}
	}
	{
		// temp = right;
		int32_t L_7;
		L_7 = GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline(__this, /*hidden argument*/NULL);
		V_1 = L_7;
	}

IL_0031:
	{
		// if (key.Equals("Tilt"))
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_8, _stringLiteral9D673913EA3E65DE8313A0CDF27165DCBA922F31, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		// temp = tilt;
		int32_t L_10;
		L_10 = GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline(__this, /*hidden argument*/NULL);
		V_1 = L_10;
	}

IL_0045:
	{
		// foreach (KeyCode kcode in System.Enum.GetValues(typeof(KeyCode)))
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_11 = { reinterpret_cast<intptr_t> (KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_12;
		L_12 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_13;
		L_13 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_12, /*hidden argument*/NULL);
		RuntimeObject* L_14;
		L_14 = Array_GetEnumerator_m7BC171F2F69907FD4585E7B4A3A224473BE32964(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
	}

IL_005a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0077;
		}

IL_005c:
		{
			// foreach (KeyCode kcode in System.Enum.GetValues(typeof(KeyCode)))
			RuntimeObject* L_15 = V_2;
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			V_3 = ((*(int32_t*)((int32_t*)UnBox(L_16, KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var))));
			// if (Input.GetKey(kcode))
			int32_t L_17 = V_3;
			bool L_18;
			L_18 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0077;
			}
		}

IL_0070:
		{
			// if (kcode != KeyCode.Escape)
			int32_t L_19 = V_3;
			if ((((int32_t)L_19) == ((int32_t)((int32_t)27))))
			{
				goto IL_0077;
			}
		}

IL_0075:
		{
			// temp = kcode;
			int32_t L_20 = V_3;
			V_1 = L_20;
		}

IL_0077:
		{
			// foreach (KeyCode kcode in System.Enum.GetValues(typeof(KeyCode)))
			RuntimeObject* L_21 = V_2;
			bool L_22;
			L_22 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_21);
			if (L_22)
			{
				goto IL_005c;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x95, FINALLY_0081);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_23 = V_2;
			V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_24 = V_4;
			if (!L_24)
			{
				goto IL_0094;
			}
		}

IL_008d:
		{
			RuntimeObject* L_25 = V_4;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_25);
		}

IL_0094:
		{
			IL2CPP_END_FINALLY(129)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x95, IL_0095)
	}

IL_0095:
	{
		// if (key.Equals("Left"))
		String_t* L_26 = V_0;
		bool L_27;
		L_27 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_26, _stringLiteralAE24C5BE9B741FFFA87D2A951BFE7EA0440461CD, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00c8;
		}
	}
	{
		// left = temp;
		int32_t L_28 = V_1;
		GameManager_set_left_m6EE3A7B38FC77A87DF2C14B9FD391B161DC7EA55_inline(__this, L_28, /*hidden argument*/NULL);
		// if (player != null)
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_29 = __this->get_player_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_29, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_00c8;
		}
	}
	{
		// player.left = left;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_31 = __this->get_player_8();
		int32_t L_32;
		L_32 = GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline(__this, /*hidden argument*/NULL);
		MovementController_set_left_mDC7612B723C50E4D8FFEAAD5B1A10EF38AACDAED_inline(L_31, L_32, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// if (key.Equals("Right"))
		String_t* L_33 = V_0;
		bool L_34;
		L_34 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_33, _stringLiteral16A70DC8C790D0EFD53AE03FF23CB99D8B7A53CA, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00fb;
		}
	}
	{
		// right = temp;
		int32_t L_35 = V_1;
		GameManager_set_right_mE2E60FA6CCE7099559CC430F55D9168D53FD7A7A_inline(__this, L_35, /*hidden argument*/NULL);
		// if(player != null)
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_36 = __this->get_player_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_36, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00fb;
		}
	}
	{
		// player.right = right;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_38 = __this->get_player_8();
		int32_t L_39;
		L_39 = GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline(__this, /*hidden argument*/NULL);
		MovementController_set_right_mA45A54A483C9862017A95DF66EAD1E0807D610A7_inline(L_38, L_39, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		// if (key.Equals("Tilt"))
		String_t* L_40 = V_0;
		bool L_41;
		L_41 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_40, _stringLiteral9D673913EA3E65DE8313A0CDF27165DCBA922F31, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_012e;
		}
	}
	{
		// tilt = temp;
		int32_t L_42 = V_1;
		GameManager_set_tilt_m331D13AF6940620BEBB2DC9F86D86FDA31C67981_inline(__this, L_42, /*hidden argument*/NULL);
		// if (player != null)
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_43 = __this->get_player_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_43, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_012e;
		}
	}
	{
		// player.tilt = tilt;
		MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * L_45 = __this->get_player_8();
		int32_t L_46;
		L_46 = GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline(__this, /*hidden argument*/NULL);
		MovementController_set_tilt_mF3BF3E2EBB39F7E97DA3B364D3FD0390728F5C58_inline(L_45, L_46, /*hidden argument*/NULL);
	}

IL_012e:
	{
		// plc.text = temp.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_47 = ___plc0;
		RuntimeObject * L_48 = Box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_49;
		L_49 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_48);
		V_1 = *(int32_t*)UnBox(L_48);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_47, L_49);
		// Debug.Log(temp.ToString());
		RuntimeObject * L_50 = Box(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4_il2cpp_TypeInfo_var, (&V_1));
		String_t* L_51;
		L_51 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		V_1 = *(int32_t*)UnBox(L_50);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_51, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::playSound(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_playSound_mF5BE77808DD1742E32C313A7BC4033242185A002 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method)
{
	{
		// Sound.PlayOneShot(clip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_Sound_14();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = ___clip0;
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.KeyCode MovementController::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MovementController_get_left_m5D8FFA96665E6977FC22284A1A4DC33B756C7A66 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode left { get; set; }
		int32_t L_0 = __this->get_U3CleftU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void MovementController::set_left(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_set_left_mDC7612B723C50E4D8FFEAAD5B1A10EF38AACDAED (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode left { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CleftU3Ek__BackingField_6(L_0);
		return;
	}
}
// UnityEngine.KeyCode MovementController::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MovementController_get_right_m21C72477800694EB3238A701EFB1B2E5EFCCBB9D (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode right { get; set; }
		int32_t L_0 = __this->get_U3CrightU3Ek__BackingField_7();
		return L_0;
	}
}
// System.Void MovementController::set_right(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_set_right_mA45A54A483C9862017A95DF66EAD1E0807D610A7 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode right { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrightU3Ek__BackingField_7(L_0);
		return;
	}
}
// UnityEngine.KeyCode MovementController::get_tilt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MovementController_get_tilt_m9712C0E32F5034265E4D1A090AAA8FF7ADC70D35 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode tilt { get; set; }
		int32_t L_0 = __this->get_U3CtiltU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void MovementController::set_tilt(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_set_tilt_mF3BF3E2EBB39F7E97DA3B364D3FD0390728F5C58 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode tilt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtiltU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void MovementController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_Start_m341CFD9B1E0F98466EA190025125CC1C23360E59 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani = GetComponent<Animator>();             // Addresses Animator attached to Wheelie Prefab
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_ani_22(L_0);
		// maincam = Camera.main;                      // Scene Main Camera
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		__this->set_maincam_4(L_1);
		// Wheelmotor.maxMotorTorque = maxForce;       // Set's max force the player can add to the Wheelchair
		JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 * L_2 = __this->get_address_of_Wheelmotor_13();
		float L_3 = __this->get_maxForce_11();
		JointMotor2D_set_maxMotorTorque_mAD890C47260D094AE80C3E9FC9EE491430AC3F44((JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 *)L_2, L_3, /*hidden argument*/NULL);
		// JointMot.maxMotorTorque = maxForce;       // Set's max force the player can add to the Wheelchair
		JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 * L_4 = __this->get_address_of_JointMot_16();
		float L_5 = __this->get_maxForce_11();
		JointMotor2D_set_maxMotorTorque_mAD890C47260D094AE80C3E9FC9EE491430AC3F44((JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 *)L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MovementController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_FixedUpdate_m2B4D41B01452A5F46E0DD1ED969C2D68FB1E156D (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734BC253F0D07DE0F8DFD3592600EA0D229526EC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB41A2F2D564A1F51E44AB9F38D490FAC996DF25E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFEDA918BB3B229E5D4E67FE14476402CD4EDC201);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float jump = VerticalAxis();
		float L_0;
		L_0 = MovementController_VerticalAxis_m0DB608EFCFDF045E24633A533089A2DF295C2B4C(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (jump != 0)
		float L_1 = V_0;
		if ((((float)L_1) == ((float)(0.0f))))
		{
			goto IL_004c;
		}
	}
	{
		// lean += jump * leanSpeed * Time.deltaTime * direction;
		float L_2 = __this->get_lean_19();
		float L_3 = V_0;
		float L_4 = __this->get_leanSpeed_10();
		float L_5;
		L_5 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		float L_6 = __this->get_direction_20();
		__this->set_lean_19(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)), (float)L_5)), (float)L_6)))));
		// move *= 1.05f;
		float L_7 = __this->get_move_18();
		__this->set_move_18(((float)il2cpp_codegen_multiply((float)L_7, (float)(1.04999995f))));
		// JointMotorOn = true;
		__this->set_JointMotorOn_17((bool)1);
		// } else
		goto IL_0065;
	}

IL_004c:
	{
		// JointMotorOn = false;
		__this->set_JointMotorOn_17((bool)0);
		// lean *= 0.90f;
		float L_8 = __this->get_lean_19();
		__this->set_lean_19(((float)il2cpp_codegen_multiply((float)L_8, (float)(0.899999976f))));
	}

IL_0065:
	{
		// float dir = HorizontalAxis();    // Get Horizonal directional input (A or D/Left or Right)
		float L_9;
		L_9 = MovementController_HorizontalAxis_m54D230557C089AB0321D54DB01404F1A150A32C2(__this, /*hidden argument*/NULL);
		V_1 = L_9;
		// if (dir != 0)                               // What happens when the player is moving
		float L_10 = V_1;
		if ((((float)L_10) == ((float)(0.0f))))
		{
			goto IL_00de;
		}
	}
	{
		// move += dir * speed * Time.deltaTime;   // Add force to movement
		float L_11 = __this->get_move_18();
		float L_12 = V_1;
		float L_13 = __this->get_speed_9();
		float L_14;
		L_14 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_move_18(((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)), (float)L_14)))));
		// WheelmotorOn = true;                         // Turn on Wheel Motor
		__this->set_WheelmotorOn_14((bool)1);
		// if ((dir > move && dir > 0) || (dir < move && dir < 0))     // Braking Code
		float L_15 = V_1;
		float L_16 = __this->get_move_18();
		if ((!(((float)L_15) > ((float)L_16))))
		{
			goto IL_00a7;
		}
	}
	{
		float L_17 = V_1;
		if ((((float)L_17) > ((float)(0.0f))))
		{
			goto IL_00b8;
		}
	}

IL_00a7:
	{
		float L_18 = V_1;
		float L_19 = __this->get_move_18();
		if ((!(((float)L_18) < ((float)L_19))))
		{
			goto IL_00cb;
		}
	}
	{
		float L_20 = V_1;
		if ((!(((float)L_20) < ((float)(0.0f)))))
		{
			goto IL_00cb;
		}
	}

IL_00b8:
	{
		// ani.SetBool("Braking", true); // If the player is adding force to the opposite direction they are facing, play Braking animation.
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_21 = __this->get_ani_22();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_21, _stringLiteralB41A2F2D564A1F51E44AB9F38D490FAC996DF25E, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00f7;
	}

IL_00cb:
	{
		// ani.SetBool("Braking", false); // Otherwise don't.
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_22 = __this->get_ani_22();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_22, _stringLiteralB41A2F2D564A1F51E44AB9F38D490FAC996DF25E, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00f7;
	}

IL_00de:
	{
		// WheelmotorOn = false;
		__this->set_WheelmotorOn_14((bool)0);
		// move *= 0.9f;
		float L_23 = __this->get_move_18();
		__this->set_move_18(((float)il2cpp_codegen_multiply((float)L_23, (float)(0.899999976f))));
	}

IL_00f7:
	{
		// if (isLeft && move > 0 && dir > 0)              // Flip code. If the player switches which way they are moving, they spin.
		bool L_24 = __this->get_isLeft_23();
		if (!L_24)
		{
			goto IL_0138;
		}
	}
	{
		float L_25 = __this->get_move_18();
		if ((!(((float)L_25) > ((float)(0.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		float L_26 = V_1;
		if ((!(((float)L_26) > ((float)(0.0f)))))
		{
			goto IL_0138;
		}
	}
	{
		// isLeft = false;
		__this->set_isLeft_23((bool)0);
		// ani.SetTrigger("Flip");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_27 = __this->get_ani_22();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_27, _stringLiteralFEDA918BB3B229E5D4E67FE14476402CD4EDC201, /*hidden argument*/NULL);
		// direction = -1;
		__this->set_direction_20((-1.0f));
		// } else if (!isLeft && move < 0 && dir < 0)
		goto IL_0177;
	}

IL_0138:
	{
		// } else if (!isLeft && move < 0 && dir < 0)
		bool L_28 = __this->get_isLeft_23();
		if (L_28)
		{
			goto IL_0177;
		}
	}
	{
		float L_29 = __this->get_move_18();
		if ((!(((float)L_29) < ((float)(0.0f)))))
		{
			goto IL_0177;
		}
	}
	{
		float L_30 = V_1;
		if ((!(((float)L_30) < ((float)(0.0f)))))
		{
			goto IL_0177;
		}
	}
	{
		// isLeft = true;
		__this->set_isLeft_23((bool)1);
		// ani.SetTrigger("Flip");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_31 = __this->get_ani_22();
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_31, _stringLiteralFEDA918BB3B229E5D4E67FE14476402CD4EDC201, /*hidden argument*/NULL);
		// direction = 1;
		__this->set_direction_20((1.0f));
	}

IL_0177:
	{
		// Wheelmotor.motorSpeed = move;
		JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 * L_32 = __this->get_address_of_Wheelmotor_13();
		float L_33 = __this->get_move_18();
		JointMotor2D_set_motorSpeed_mD768FAF586B800EBCA3DE847FDF5D87EF2448031((JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 *)L_32, L_33, /*hidden argument*/NULL);
		// JointMot.motorSpeed = lean;
		JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 * L_34 = __this->get_address_of_JointMot_16();
		float L_35 = __this->get_lean_19();
		JointMotor2D_set_motorSpeed_mD768FAF586B800EBCA3DE847FDF5D87EF2448031((JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8 *)L_34, L_35, /*hidden argument*/NULL);
		// Wheel.motor = Wheelmotor;
		WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B * L_36 = __this->get_Wheel_12();
		JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  L_37 = __this->get_Wheelmotor_13();
		WheelJoint2D_set_motor_mE733752DB3D1E1D7869B3B5FA9DF410A6C1EDFDE(L_36, L_37, /*hidden argument*/NULL);
		// joint.motor = JointMot;
		HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130 * L_38 = __this->get_joint_15();
		JointMotor2D_t1DF0C1C4BB7E2A49E42AF161EF99531EEBC7FCD8  L_39 = __this->get_JointMot_16();
		HingeJoint2D_set_motor_mC13ED8AEE18005A153741F342E2E9F56A2F9F653(L_38, L_39, /*hidden argument*/NULL);
		// Wheel.useMotor = WheelmotorOn;
		WheelJoint2D_t48BF00A4BA1826CEF3D64452F57E8B42B3DFA69B * L_40 = __this->get_Wheel_12();
		bool L_41 = __this->get_WheelmotorOn_14();
		WheelJoint2D_set_useMotor_m73019D53A9D9B913C5D96E73204CEAE6F5294C4F(L_40, L_41, /*hidden argument*/NULL);
		// joint.useMotor = JointMotorOn;
		HingeJoint2D_t0BE5D9FB36DFF16C23E84BC6EAE92F7524119130 * L_42 = __this->get_joint_15();
		bool L_43 = __this->get_JointMotorOn_17();
		HingeJoint2D_set_useMotor_m66127307F9296ED77DEEDE2824C1AFCC2A1D794B(L_42, L_43, /*hidden argument*/NULL);
		// ani.SetBool("Moving", WheelmotorOn);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_44 = __this->get_ani_22();
		bool L_45 = __this->get_WheelmotorOn_14();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_44, _stringLiteral734BC253F0D07DE0F8DFD3592600EA0D229526EC, L_45, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single MovementController::HorizontalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MovementController_HorizontalAxis_m54D230557C089AB0321D54DB01404F1A150A32C2 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// if(Input.GetKey(left))
		int32_t L_0;
		L_0 = MovementController_get_left_m5D8FFA96665E6977FC22284A1A4DC33B756C7A66_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0013:
	{
		// } else if (Input.GetKey(right))
		int32_t L_2;
		L_2 = MovementController_get_right_m21C72477800694EB3238A701EFB1B2E5EFCCBB9D_inline(__this, /*hidden argument*/NULL);
		bool L_3;
		L_3 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0026:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Single MovementController::VerticalAxis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MovementController_VerticalAxis_m0DB608EFCFDF045E24633A533089A2DF295C2B4C (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKey(tilt))
		int32_t L_0;
		L_0 = MovementController_get_tilt_m9712C0E32F5034265E4D1A090AAA8FF7ADC70D35_inline(__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0013:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void MovementController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_Update_m7D1BDC66D4AF69409B866221EBE0714F65B04BCA (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// maincam.transform.position = new Vector3(transform.position.x, transform.position.y, -10);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_0 = __this->get_maincam_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_4, L_7, (-10.0f), /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_1, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MovementController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController_OnTriggerEnter2D_m0947FBFAE1B083CA162C6373623081AE3E771450 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA0BC275515E57D4FC52BBC80EB62131C416AA168);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("Ground"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		bool L_1;
		L_1 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_0, _stringLiteral7A65EFC5BB52048E35B0D3E2214BCF8CE116440A, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// GM.TogglePause(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2 = __this->get_GM_5();
		GameManager_TogglePause_m57A193341384597A31CC6440498FE4D263438C1D(L_2, (bool)1, /*hidden argument*/NULL);
		// GM.ToggleMenu(GameOver);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_3 = __this->get_GM_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_GameOver_21();
		GameManager_ToggleMenu_m30A4A58A4D434D69DE3A163C81AABAAE549D219A(L_3, L_4, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// if (collision.CompareTag("End"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_5 = ___collision0;
		bool L_6;
		L_6 = Component_CompareTag_m17D74EDCC81A10B18A0A588519F522E8DF1D7879(L_5, _stringLiteralAB236FE2BF72D00A5CFAFFB9CA58750A49DA02B2, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0069;
		}
	}
	{
		// GM.TogglePause(true);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_7 = __this->get_GM_5();
		GameManager_TogglePause_m57A193341384597A31CC6440498FE4D263438C1D(L_7, (bool)1, /*hidden argument*/NULL);
		// GameOver.GetComponentInChildren<Text>().text = "YOU WIN!";
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_GameOver_21();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_9;
		L_9 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_8, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, _stringLiteralA0BC275515E57D4FC52BBC80EB62131C416AA168);
		// GM.ToggleMenu(GameOver);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = __this->get_GM_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_GameOver_21();
		GameManager_ToggleMenu_m30A4A58A4D434D69DE3A163C81AABAAE549D219A(L_10, L_11, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// }
		return;
	}
}
// System.Void MovementController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MovementController__ctor_mB51ACF4C89A382D5DE2BAB652693DE37CCB8EE88 (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// public float speed = 1;
		__this->set_speed_9((1.0f));
		// public float leanSpeed = 1;
		__this->set_leanSpeed_10((1.0f));
		// public float maxForce = 10000;
		__this->set_maxForce_11((10000.0f));
		// float direction = -1;
		__this->set_direction_20((-1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void HSVPicker.OverlayColor::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayColor_Awake_m01BF491299CA15086FFCC1D427EC89B1F720B04E (OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void HSVPicker.OverlayColor::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayColor_Start_m77140C63D5DED832AC9F17A14E7320AB6C15689A (OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D_mE9747DA276CDA01DAF582915743FFEEB2FE1E4BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// color = GetComponent<ColorPicker>();
		ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * L_0;
		L_0 = Component_GetComponent_TisColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D_mE9747DA276CDA01DAF582915743FFEEB2FE1E4BB(__this, /*hidden argument*/Component_GetComponent_TisColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D_mE9747DA276CDA01DAF582915743FFEEB2FE1E4BB_RuntimeMethod_var);
		__this->set_color_4(L_0);
		// changeColor(sprite);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_1 = __this->get_sprite_5();
		OverlayColor_changeColor_m2ABAE8DE91201826E260DCF327729C176312A4AE(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HSVPicker.OverlayColor::changeColor(UnityEngine.SpriteRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayColor_changeColor_m2ABAE8DE91201826E260DCF327729C176312A4AE (OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB * __this, SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___spr0, const RuntimeMethod* method)
{
	{
		// spr.color = color.CurrentColor;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0 = ___spr0;
		ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * L_1 = __this->get_color_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = ColorPicker_get_CurrentColor_m18C632583F2A8EDCB7D96E957ACBA9D61B89CDDC_inline(L_1, /*hidden argument*/NULL);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HSVPicker.OverlayColor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverlayColor__ctor_mF9B331F0EB27443840778B7C9FCB7992981D2D21 (OverlayColor_t265372B7489EA0DE2FA9BB4197693B430B557EFB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Parallax::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Start_m7C7DC681755C4BBB7BF918CC67A2A5F2360F5DF2 (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	{
		// startpos = transform.position.x;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		__this->set_startpos_5(L_2);
		// length = 62;
		__this->set_length_4((62.0f));
		// }
		return;
	}
}
// System.Void Parallax::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax_Update_m208D10754A83F3949A0DE958EBB01C4B63BC337B (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	{
		// temp = (cam.transform.position.x * (1 - paralaxEffect));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_cam_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		float L_4 = __this->get_paralaxEffect_7();
		__this->set_temp_8(((float)il2cpp_codegen_multiply((float)L_3, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)L_4)))));
		// dist = ((cam.transform.position.x) * paralaxEffect);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_cam_6();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		float L_9 = __this->get_paralaxEffect_7();
		__this->set_dist_9(((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)));
		// startpos += moveSpeed;
		float L_10 = __this->get_startpos_5();
		float L_11 = __this->get_moveSpeed_11();
		__this->set_startpos_5(((float)il2cpp_codegen_add((float)L_10, (float)L_11)));
		// transform.position = new Vector3(startpos + dist, transform.position.y, transform.position.z);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_13 = __this->get_startpos_5();
		float L_14 = __this->get_dist_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_21), ((float)il2cpp_codegen_add((float)L_13, (float)L_14)), L_17, L_20, /*hidden argument*/NULL);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_21, /*hidden argument*/NULL);
		// if (temp > startpos + length)
		float L_22 = __this->get_temp_8();
		float L_23 = __this->get_startpos_5();
		float L_24 = __this->get_length_4();
		if ((!(((float)L_22) > ((float)((float)il2cpp_codegen_add((float)L_23, (float)L_24))))))
		{
			goto IL_00c9;
		}
	}
	{
		// startpos += length*2;
		float L_25 = __this->get_startpos_5();
		float L_26 = __this->get_length_4();
		__this->set_startpos_5(((float)il2cpp_codegen_add((float)L_25, (float)((float)il2cpp_codegen_multiply((float)L_26, (float)(2.0f))))));
		// } else if (temp < startpos - length)
		return;
	}

IL_00c9:
	{
		// } else if (temp < startpos - length)
		float L_27 = __this->get_temp_8();
		float L_28 = __this->get_startpos_5();
		float L_29 = __this->get_length_4();
		if ((!(((float)L_27) < ((float)((float)il2cpp_codegen_subtract((float)L_28, (float)L_29))))))
		{
			goto IL_00f7;
		}
	}
	{
		// startpos -= length*2;
		float L_30 = __this->get_startpos_5();
		float L_31 = __this->get_length_4();
		__this->set_startpos_5(((float)il2cpp_codegen_subtract((float)L_30, (float)((float)il2cpp_codegen_multiply((float)L_31, (float)(2.0f))))));
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void Parallax::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parallax__ctor_m0690485E7F8E13945AF42671FF1C937CB60D4B36 (Parallax_t98398A197751A44EE1A4B082AB50A668D671803C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_left_m2D68E3955B854BD90C9DA811EAEC27AC0C9E31CD_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode left { get; set; }
		int32_t L_0 = __this->get_U3CleftU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_left_m6EE3A7B38FC77A87DF2C14B9FD391B161DC7EA55_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode left { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CleftU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_right_m2BA9CD53F81EEB5229470BCB04E5CE1AE898AC7E_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode right { get; set; }
		int32_t L_0 = __this->get_U3CrightU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_right_mE2E60FA6CCE7099559CC430F55D9168D53FD7A7A_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode right { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrightU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t GameManager_get_tilt_mD9E716D87652A5484BB6385FAFB2D6296DABBFE5_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode tilt { get; set; }
		int32_t L_0 = __this->get_U3CtiltU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GameManager_set_tilt_m331D13AF6940620BEBB2DC9F86D86FDA31C67981_inline (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode tilt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtiltU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MovementController_set_left_mDC7612B723C50E4D8FFEAAD5B1A10EF38AACDAED_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode left { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CleftU3Ek__BackingField_6(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MovementController_set_right_mA45A54A483C9862017A95DF66EAD1E0807D610A7_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode right { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CrightU3Ek__BackingField_7(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MovementController_set_tilt_mF3BF3E2EBB39F7E97DA3B364D3FD0390728F5C58_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public KeyCode tilt { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CtiltU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MovementController_get_left_m5D8FFA96665E6977FC22284A1A4DC33B756C7A66_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode left { get; set; }
		int32_t L_0 = __this->get_U3CleftU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MovementController_get_right_m21C72477800694EB3238A701EFB1B2E5EFCCBB9D_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode right { get; set; }
		int32_t L_0 = __this->get_U3CrightU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MovementController_get_tilt_m9712C0E32F5034265E4D1A090AAA8FF7ADC70D35_inline (MovementController_t1CFDC1101E59FB7A330606E83706276B333CDF36 * __this, const RuntimeMethod* method)
{
	{
		// public KeyCode tilt { get; set; }
		int32_t L_0 = __this->get_U3CtiltU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ColorPicker_get_CurrentColor_m18C632583F2A8EDCB7D96E957ACBA9D61B89CDDC_inline (ColorPicker_t890DEB950E500B3943483E3383E6F0128EE6586D * __this, const RuntimeMethod* method)
{
	{
		// return _color;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_0 = __this->get__color_7();
		return L_0;
	}
}
