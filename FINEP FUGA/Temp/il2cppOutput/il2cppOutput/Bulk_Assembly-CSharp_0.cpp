#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// MenuAudioPlayer
struct MenuAudioPlayer_t1756938393;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// MenuFlowManager
struct MenuFlowManager_t1614880941;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// MenuPanel
struct MenuPanel_t2709851952;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// StageInfo
struct StageInfo_t2857013238;
// System.String
struct String_t;
// MenuFlowManager/<ISelectLevel>c__Iterator0
struct U3CISelectLevelU3Ec__Iterator0_t772913338;
// MenuNotification
struct MenuNotification_t963843896;
// MenuFlowManager/<IPlayDelayedTip>c__Iterator1
struct U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414;
// MenuFlowManager/<IFadeAndChangePanel>c__Iterator2
struct U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537;
// UnityEngine.UI.Image
struct Image_t2670269651;
// MenuFlowManager/<IFadeImage>c__Iterator3
struct U3CIFadeImageU3Ec__Iterator3_t2325737738;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// MenuFlowManager/<IMoveTitle>c__Iterator4
struct U3CIMoveTitleU3Ec__Iterator4_t1546248483;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// MenuFlowManager/<ISetTipPanel>c__Iterator5
struct U3CISetTipPanelU3Ec__Iterator5_t956795441;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// UnityEngine.Transform
struct Transform_t3600365921;
// MenuLevelButton
struct MenuLevelButton_t3559006541;
// MenuLevelScreen
struct MenuLevelScreen_t2132622692;
// MenuNotification/<IShowPanel>c__Iterator0
struct U3CIShowPanelU3Ec__Iterator0_t3293565631;
// MenuNotification/<IPopPanel>c__Iterator1
struct U3CIPopPanelU3Ec__Iterator1_t1172258948;
// MenuNotification/<IMovePanel>c__Iterator2
struct U3CIMovePanelU3Ec__Iterator2_t2454059368;
// MenuNotification/<IScalePanel>c__Iterator3
struct U3CIScalePanelU3Ec__Iterator3_t237107718;
// MenuRelativePosition
struct MenuRelativePosition_t2871782404;
// MenuSlowerScroll
struct MenuSlowerScroll_t3166589528;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t4137855814;
// StageManager
struct StageManager_t3296066545;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// UnityEngine.Camera
struct Camera_t4157153871;
// System.String[]
struct StringU5BU5D_t1281789340;
// StageManager/<BackToMenu>c__Iterator0
struct U3CBackToMenuU3Ec__Iterator0_t1978105360;
// StageManager/<FadeIn>c__Iterator1
struct U3CFadeInU3Ec__Iterator1_t1536586007;
// StagePhoto
struct StagePhoto_t928294583;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Void
struct Void_t1185182177;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// MenuLevelButton[]
struct MenuLevelButtonU5BU5D_t58144480;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922;
// MenuPanel[]
struct MenuPanelU5BU5D_t1968201233;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// UnityEngine.UI.Text
struct Text_t1901882714;
// UnityEngine.Material
struct Material_t340375123;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_t2598313366;
// UnityEngine.Canvas
struct Canvas_t3310196443;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// UnityEngine.Mesh
struct Mesh_t3648964284;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t2453304189;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t3055525458;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t1494447233;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_t343079324;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;

extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var;
extern const uint32_t MenuFlowManager_Setup_m838475575_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_Update_m1759856524_MetadataUsageId;
extern RuntimeClass* StageInfo_t2857013238_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral840215853;
extern String_t* _stringLiteral3451565968;
extern String_t* _stringLiteral3452614641;
extern const uint32_t MenuFlowManager_SelectLevel_m1642849559_MetadataUsageId;
extern RuntimeClass* U3CISelectLevelU3Ec__Iterator0_t772913338_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_ISelectLevel_m3146372250_MetadataUsageId;
extern String_t* _stringLiteral3997648605;
extern const uint32_t MenuFlowManager_SelectWorld_m4120408508_MetadataUsageId;
extern const uint32_t MenuFlowManager_PlayTipClip_m2173455069_MetadataUsageId;
extern String_t* _stringLiteral1122207072;
extern const uint32_t MenuFlowManager_PlayTipClip_m3234370683_MetadataUsageId;
extern RuntimeClass* U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_IPlayDelayedTip_m1291305024_MetadataUsageId;
extern RuntimeClass* U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_IFadeAndChangePanel_m1870868_MetadataUsageId;
extern RuntimeClass* U3CIFadeImageU3Ec__Iterator3_t2325737738_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_IFadeImage_m3217344465_MetadataUsageId;
extern RuntimeClass* U3CIMoveTitleU3Ec__Iterator4_t1546248483_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_IMoveTitle_m3475848012_MetadataUsageId;
extern const uint32_t MenuFlowManager_PlayClickSound_m2133418347_MetadataUsageId;
extern const uint32_t MenuFlowManager_ShowTipPanel_m410722394_MetadataUsageId;
extern RuntimeClass* U3CISetTipPanelU3Ec__Iterator5_t956795441_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_ISetTipPanel_m1650888798_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern const uint32_t U3CIFadeAndChangePanelU3Ec__Iterator2_MoveNext_m2543383524_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CIFadeAndChangePanelU3Ec__Iterator2_Reset_m634308582_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern const uint32_t U3CIFadeImageU3Ec__Iterator3_MoveNext_m3461052218_MetadataUsageId;
extern const uint32_t U3CIFadeImageU3Ec__Iterator3_Reset_m3095745968_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t U3CIMoveTitleU3Ec__Iterator4_MoveNext_m1493558177_MetadataUsageId;
extern const uint32_t U3CIMoveTitleU3Ec__Iterator4_Reset_m4182724530_MetadataUsageId;
extern const uint32_t U3CIPlayDelayedTipU3Ec__Iterator1_MoveNext_m2441972052_MetadataUsageId;
extern const uint32_t U3CIPlayDelayedTipU3Ec__Iterator1_Reset_m2471565827_MetadataUsageId;
extern const uint32_t U3CISelectLevelU3Ec__Iterator0_MoveNext_m1500675614_MetadataUsageId;
extern const uint32_t U3CISelectLevelU3Ec__Iterator0_Reset_m1268821664_MetadataUsageId;
extern const uint32_t U3CISetTipPanelU3Ec__Iterator5_MoveNext_m546186187_MetadataUsageId;
extern const uint32_t U3CISetTipPanelU3Ec__Iterator5_Reset_m3788105307_MetadataUsageId;
extern String_t* _stringLiteral2810250481;
extern const uint32_t MenuLevelButton__ctor_m972022857_MetadataUsageId;
extern const uint32_t MenuLevelButton_Setup_m3441281685_MetadataUsageId;
extern const uint32_t MenuLevelButton_ActivateSelf_m1538653098_MetadataUsageId;
extern const uint32_t MenuLevelButton_Click_m1388688786_MetadataUsageId;
extern const uint32_t MenuLevelButton_SelectWorld_m1572165096_MetadataUsageId;
extern const uint32_t MenuLevelButton_SelectLevel_m66141631_MetadataUsageId;
extern const uint32_t MenuLevelButton_FadeToPanel_m1436600765_MetadataUsageId;
extern String_t* _stringLiteral2278870150;
extern String_t* _stringLiteral382461207;
extern const uint32_t MenuLevelScreen_OrganizeLevelScreen_m3344403122_MetadataUsageId;
extern RuntimeClass* U3CIShowPanelU3Ec__Iterator0_t3293565631_il2cpp_TypeInfo_var;
extern const uint32_t MenuNotification_IShowPanel_m423577807_MetadataUsageId;
extern RuntimeClass* U3CIPopPanelU3Ec__Iterator1_t1172258948_il2cpp_TypeInfo_var;
extern const uint32_t MenuNotification_IPopPanel_m108523591_MetadataUsageId;
extern RuntimeClass* U3CIMovePanelU3Ec__Iterator2_t2454059368_il2cpp_TypeInfo_var;
extern const uint32_t MenuNotification_IMovePanel_m3165881322_MetadataUsageId;
extern RuntimeClass* U3CIScalePanelU3Ec__Iterator3_t237107718_il2cpp_TypeInfo_var;
extern const uint32_t MenuNotification_IScalePanel_m1167846611_MetadataUsageId;
extern const uint32_t U3CIMovePanelU3Ec__Iterator2_MoveNext_m1895705063_MetadataUsageId;
extern const uint32_t U3CIMovePanelU3Ec__Iterator2_Reset_m1586566488_MetadataUsageId;
extern const uint32_t U3CIPopPanelU3Ec__Iterator1_MoveNext_m2796333892_MetadataUsageId;
extern const uint32_t U3CIPopPanelU3Ec__Iterator1_Reset_m2083978257_MetadataUsageId;
extern const uint32_t U3CIScalePanelU3Ec__Iterator3_MoveNext_m1392202448_MetadataUsageId;
extern const uint32_t U3CIScalePanelU3Ec__Iterator3_Reset_m3924052829_MetadataUsageId;
extern const uint32_t U3CIShowPanelU3Ec__Iterator0_MoveNext_m3628302451_MetadataUsageId;
extern const uint32_t U3CIShowPanelU3Ec__Iterator0_Reset_m93146361_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var;
extern const uint32_t MenuSlowerScroll_Start_m3579541306_MetadataUsageId;
extern const uint32_t MenuSlowerScroll_LateUpdate_m1010315803_MetadataUsageId;
extern const uint32_t StageInfo_Awake_m308879600_MetadataUsageId;
extern const uint32_t StageInfo_GetSavedStarAmount_m2316285987_MetadataUsageId;
extern const uint32_t StageInfo_SaveLevelStarAmount_m3256426961_MetadataUsageId;
extern const uint32_t StageManager_HandleInput_m2725362068_MetadataUsageId;
extern const uint32_t StageManager_Setup_m1835446729_MetadataUsageId;
extern const uint32_t StageManager_setupPFs_m762153435_MetadataUsageId;
extern const uint32_t StageManager_setupCanvas_m1599180444_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354_RuntimeMethod_var;
extern const uint32_t StageManager_SetHorizonLineAlpha_m30807878_MetadataUsageId;
extern const uint32_t StageManager_OnMouseMove_m1371817865_MetadataUsageId;
extern const uint32_t StageManager_OnPFMove_m3369990314_MetadataUsageId;
extern RuntimeClass* StageManager_t3296066545_il2cpp_TypeInfo_var;
extern const uint32_t StageManager_CheckPFHit_m1617623315_MetadataUsageId;
extern const uint32_t StageManager_CheckHorizonLineHit_m3203435684_MetadataUsageId;
extern RuntimeClass* StringU5BU5D_t1281789340_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614544;
extern String_t* _stringLiteral3452614550;
extern const uint32_t StageManager_UpdateTimerUI_m2579357050_MetadataUsageId;
extern RuntimeClass* U3CBackToMenuU3Ec__Iterator0_t1978105360_il2cpp_TypeInfo_var;
extern const uint32_t StageManager_BackToMenu_m671746728_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1948333211;
extern const uint32_t StageManager_SelectPF_m2766879051_MetadataUsageId;
extern const uint32_t StageManager_ChangingGameState_m4209157659_MetadataUsageId;
extern RuntimeClass* U3CFadeInU3Ec__Iterator1_t1536586007_il2cpp_TypeInfo_var;
extern const uint32_t StageManager_FadeIn_m2385600318_MetadataUsageId;
extern const uint32_t StageManager__cctor_m2616850515_MetadataUsageId;
extern String_t* _stringLiteral1555075351;
extern const uint32_t U3CBackToMenuU3Ec__Iterator0_MoveNext_m3661158377_MetadataUsageId;
extern const uint32_t U3CBackToMenuU3Ec__Iterator0_Reset_m4004275252_MetadataUsageId;
extern const uint32_t U3CFadeInU3Ec__Iterator1_MoveNext_m4129774640_MetadataUsageId;
extern const uint32_t U3CFadeInU3Ec__Iterator1_Reset_m129395640_MetadataUsageId;
extern const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var;
extern const uint32_t StagePhoto_SetWidthToCamera_m2135346126_MetadataUsageId;

struct MenuPanelU5BU5D_t1968201233;
struct StringU5BU5D_t1281789340;
struct ImageU5BU5D_t2439009922;
struct AudioClipU5BU5D_t143221404;
struct GameObjectU5BU5D_t3328599146;
struct MenuLevelButtonU5BU5D_t58144480;
struct SingleU5BU5D_t1444911251;
struct SpriteRendererU5BU5D_t911335936;


#ifndef U3CMODULEU3E_T692745546_H
#define U3CMODULEU3E_T692745546_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745546 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745546_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef YIELDINSTRUCTION_T403091072_H
#define YIELDINSTRUCTION_T403091072_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.YieldInstruction
struct  YieldInstruction_t403091072  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t403091072_marshaled_com
{
};
#endif // YIELDINSTRUCTION_T403091072_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef U3CFADEINU3EC__ITERATOR1_T1536586007_H
#define U3CFADEINU3EC__ITERATOR1_T1536586007_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageManager/<FadeIn>c__Iterator1
struct  U3CFadeInU3Ec__Iterator1_t1536586007  : public RuntimeObject
{
public:
	// System.Single StageManager/<FadeIn>c__Iterator1::<alpha>__0
	float ___U3CalphaU3E__0_0;
	// UnityEngine.CanvasGroup StageManager/<FadeIn>c__Iterator1::canvasObj
	CanvasGroup_t4083511760 * ___canvasObj_1;
	// StageManager StageManager/<FadeIn>c__Iterator1::$this
	StageManager_t3296066545 * ___U24this_2;
	// System.Object StageManager/<FadeIn>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean StageManager/<FadeIn>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 StageManager/<FadeIn>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_U3CalphaU3E__0_0() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator1_t1536586007, ___U3CalphaU3E__0_0)); }
	inline float get_U3CalphaU3E__0_0() const { return ___U3CalphaU3E__0_0; }
	inline float* get_address_of_U3CalphaU3E__0_0() { return &___U3CalphaU3E__0_0; }
	inline void set_U3CalphaU3E__0_0(float value)
	{
		___U3CalphaU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_canvasObj_1() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator1_t1536586007, ___canvasObj_1)); }
	inline CanvasGroup_t4083511760 * get_canvasObj_1() const { return ___canvasObj_1; }
	inline CanvasGroup_t4083511760 ** get_address_of_canvasObj_1() { return &___canvasObj_1; }
	inline void set_canvasObj_1(CanvasGroup_t4083511760 * value)
	{
		___canvasObj_1 = value;
		Il2CppCodeGenWriteBarrier((&___canvasObj_1), value);
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator1_t1536586007, ___U24this_2)); }
	inline StageManager_t3296066545 * get_U24this_2() const { return ___U24this_2; }
	inline StageManager_t3296066545 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(StageManager_t3296066545 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator1_t1536586007, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator1_t1536586007, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CFadeInU3Ec__Iterator1_t1536586007, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CFADEINU3EC__ITERATOR1_T1536586007_H
#ifndef U3CBACKTOMENUU3EC__ITERATOR0_T1978105360_H
#define U3CBACKTOMENUU3EC__ITERATOR0_T1978105360_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageManager/<BackToMenu>c__Iterator0
struct  U3CBackToMenuU3Ec__Iterator0_t1978105360  : public RuntimeObject
{
public:
	// System.Object StageManager/<BackToMenu>c__Iterator0::$current
	RuntimeObject * ___U24current_0;
	// System.Boolean StageManager/<BackToMenu>c__Iterator0::$disposing
	bool ___U24disposing_1;
	// System.Int32 StageManager/<BackToMenu>c__Iterator0::$PC
	int32_t ___U24PC_2;

public:
	inline static int32_t get_offset_of_U24current_0() { return static_cast<int32_t>(offsetof(U3CBackToMenuU3Ec__Iterator0_t1978105360, ___U24current_0)); }
	inline RuntimeObject * get_U24current_0() const { return ___U24current_0; }
	inline RuntimeObject ** get_address_of_U24current_0() { return &___U24current_0; }
	inline void set_U24current_0(RuntimeObject * value)
	{
		___U24current_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_0), value);
	}

	inline static int32_t get_offset_of_U24disposing_1() { return static_cast<int32_t>(offsetof(U3CBackToMenuU3Ec__Iterator0_t1978105360, ___U24disposing_1)); }
	inline bool get_U24disposing_1() const { return ___U24disposing_1; }
	inline bool* get_address_of_U24disposing_1() { return &___U24disposing_1; }
	inline void set_U24disposing_1(bool value)
	{
		___U24disposing_1 = value;
	}

	inline static int32_t get_offset_of_U24PC_2() { return static_cast<int32_t>(offsetof(U3CBackToMenuU3Ec__Iterator0_t1978105360, ___U24PC_2)); }
	inline int32_t get_U24PC_2() const { return ___U24PC_2; }
	inline int32_t* get_address_of_U24PC_2() { return &___U24PC_2; }
	inline void set_U24PC_2(int32_t value)
	{
		___U24PC_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CBACKTOMENUU3EC__ITERATOR0_T1978105360_H
#ifndef U3CISCALEPANELU3EC__ITERATOR3_T237107718_H
#define U3CISCALEPANELU3EC__ITERATOR3_T237107718_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuNotification/<IScalePanel>c__Iterator3
struct  U3CIScalePanelU3Ec__Iterator3_t237107718  : public RuntimeObject
{
public:
	// System.Single MenuNotification/<IScalePanel>c__Iterator3::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single MenuNotification/<IScalePanel>c__Iterator3::speed
	float ___speed_1;
	// System.Single MenuNotification/<IScalePanel>c__Iterator3::scale
	float ___scale_2;
	// MenuNotification MenuNotification/<IScalePanel>c__Iterator3::$this
	MenuNotification_t963843896 * ___U24this_3;
	// System.Object MenuNotification/<IScalePanel>c__Iterator3::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean MenuNotification/<IScalePanel>c__Iterator3::$disposing
	bool ___U24disposing_5;
	// System.Int32 MenuNotification/<IScalePanel>c__Iterator3::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIScalePanelU3Ec__Iterator3_t237107718, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIScalePanelU3Ec__Iterator3_t237107718, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(U3CIScalePanelU3Ec__Iterator3_t237107718, ___scale_2)); }
	inline float get_scale_2() const { return ___scale_2; }
	inline float* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(float value)
	{
		___scale_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CIScalePanelU3Ec__Iterator3_t237107718, ___U24this_3)); }
	inline MenuNotification_t963843896 * get_U24this_3() const { return ___U24this_3; }
	inline MenuNotification_t963843896 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(MenuNotification_t963843896 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CIScalePanelU3Ec__Iterator3_t237107718, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CIScalePanelU3Ec__Iterator3_t237107718, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CIScalePanelU3Ec__Iterator3_t237107718, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CISCALEPANELU3EC__ITERATOR3_T237107718_H
#ifndef U3CIPOPPANELU3EC__ITERATOR1_T1172258948_H
#define U3CIPOPPANELU3EC__ITERATOR1_T1172258948_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuNotification/<IPopPanel>c__Iterator1
struct  U3CIPopPanelU3Ec__Iterator1_t1172258948  : public RuntimeObject
{
public:
	// MenuNotification MenuNotification/<IPopPanel>c__Iterator1::$this
	MenuNotification_t963843896 * ___U24this_0;
	// System.Object MenuNotification/<IPopPanel>c__Iterator1::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean MenuNotification/<IPopPanel>c__Iterator1::$disposing
	bool ___U24disposing_2;
	// System.Int32 MenuNotification/<IPopPanel>c__Iterator1::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CIPopPanelU3Ec__Iterator1_t1172258948, ___U24this_0)); }
	inline MenuNotification_t963843896 * get_U24this_0() const { return ___U24this_0; }
	inline MenuNotification_t963843896 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(MenuNotification_t963843896 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CIPopPanelU3Ec__Iterator1_t1172258948, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CIPopPanelU3Ec__Iterator1_t1172258948, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CIPopPanelU3Ec__Iterator1_t1172258948, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIPOPPANELU3EC__ITERATOR1_T1172258948_H
#ifndef U3CISHOWPANELU3EC__ITERATOR0_T3293565631_H
#define U3CISHOWPANELU3EC__ITERATOR0_T3293565631_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuNotification/<IShowPanel>c__Iterator0
struct  U3CIShowPanelU3Ec__Iterator0_t3293565631  : public RuntimeObject
{
public:
	// MenuNotification MenuNotification/<IShowPanel>c__Iterator0::$this
	MenuNotification_t963843896 * ___U24this_0;
	// System.Object MenuNotification/<IShowPanel>c__Iterator0::$current
	RuntimeObject * ___U24current_1;
	// System.Boolean MenuNotification/<IShowPanel>c__Iterator0::$disposing
	bool ___U24disposing_2;
	// System.Int32 MenuNotification/<IShowPanel>c__Iterator0::$PC
	int32_t ___U24PC_3;

public:
	inline static int32_t get_offset_of_U24this_0() { return static_cast<int32_t>(offsetof(U3CIShowPanelU3Ec__Iterator0_t3293565631, ___U24this_0)); }
	inline MenuNotification_t963843896 * get_U24this_0() const { return ___U24this_0; }
	inline MenuNotification_t963843896 ** get_address_of_U24this_0() { return &___U24this_0; }
	inline void set_U24this_0(MenuNotification_t963843896 * value)
	{
		___U24this_0 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_0), value);
	}

	inline static int32_t get_offset_of_U24current_1() { return static_cast<int32_t>(offsetof(U3CIShowPanelU3Ec__Iterator0_t3293565631, ___U24current_1)); }
	inline RuntimeObject * get_U24current_1() const { return ___U24current_1; }
	inline RuntimeObject ** get_address_of_U24current_1() { return &___U24current_1; }
	inline void set_U24current_1(RuntimeObject * value)
	{
		___U24current_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_1), value);
	}

	inline static int32_t get_offset_of_U24disposing_2() { return static_cast<int32_t>(offsetof(U3CIShowPanelU3Ec__Iterator0_t3293565631, ___U24disposing_2)); }
	inline bool get_U24disposing_2() const { return ___U24disposing_2; }
	inline bool* get_address_of_U24disposing_2() { return &___U24disposing_2; }
	inline void set_U24disposing_2(bool value)
	{
		___U24disposing_2 = value;
	}

	inline static int32_t get_offset_of_U24PC_3() { return static_cast<int32_t>(offsetof(U3CIShowPanelU3Ec__Iterator0_t3293565631, ___U24PC_3)); }
	inline int32_t get_U24PC_3() const { return ___U24PC_3; }
	inline int32_t* get_address_of_U24PC_3() { return &___U24PC_3; }
	inline void set_U24PC_3(int32_t value)
	{
		___U24PC_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CISHOWPANELU3EC__ITERATOR0_T3293565631_H
#ifndef U3CISETTIPPANELU3EC__ITERATOR5_T956795441_H
#define U3CISETTIPPANELU3EC__ITERATOR5_T956795441_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuFlowManager/<ISetTipPanel>c__Iterator5
struct  U3CISetTipPanelU3Ec__Iterator5_t956795441  : public RuntimeObject
{
public:
	// System.Single MenuFlowManager/<ISetTipPanel>c__Iterator5::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single MenuFlowManager/<ISetTipPanel>c__Iterator5::<currScale>__0
	float ___U3CcurrScaleU3E__0_1;
	// System.Single MenuFlowManager/<ISetTipPanel>c__Iterator5::destScale
	float ___destScale_2;
	// MenuFlowManager MenuFlowManager/<ISetTipPanel>c__Iterator5::$this
	MenuFlowManager_t1614880941 * ___U24this_3;
	// System.Object MenuFlowManager/<ISetTipPanel>c__Iterator5::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean MenuFlowManager/<ISetTipPanel>c__Iterator5::$disposing
	bool ___U24disposing_5;
	// System.Int32 MenuFlowManager/<ISetTipPanel>c__Iterator5::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CISetTipPanelU3Ec__Iterator5_t956795441, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CcurrScaleU3E__0_1() { return static_cast<int32_t>(offsetof(U3CISetTipPanelU3Ec__Iterator5_t956795441, ___U3CcurrScaleU3E__0_1)); }
	inline float get_U3CcurrScaleU3E__0_1() const { return ___U3CcurrScaleU3E__0_1; }
	inline float* get_address_of_U3CcurrScaleU3E__0_1() { return &___U3CcurrScaleU3E__0_1; }
	inline void set_U3CcurrScaleU3E__0_1(float value)
	{
		___U3CcurrScaleU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_destScale_2() { return static_cast<int32_t>(offsetof(U3CISetTipPanelU3Ec__Iterator5_t956795441, ___destScale_2)); }
	inline float get_destScale_2() const { return ___destScale_2; }
	inline float* get_address_of_destScale_2() { return &___destScale_2; }
	inline void set_destScale_2(float value)
	{
		___destScale_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CISetTipPanelU3Ec__Iterator5_t956795441, ___U24this_3)); }
	inline MenuFlowManager_t1614880941 * get_U24this_3() const { return ___U24this_3; }
	inline MenuFlowManager_t1614880941 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(MenuFlowManager_t1614880941 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CISetTipPanelU3Ec__Iterator5_t956795441, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CISetTipPanelU3Ec__Iterator5_t956795441, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CISetTipPanelU3Ec__Iterator5_t956795441, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CISETTIPPANELU3EC__ITERATOR5_T956795441_H
#ifndef U3CIFADEANDCHANGEPANELU3EC__ITERATOR2_T4222820537_H
#define U3CIFADEANDCHANGEPANELU3EC__ITERATOR2_T4222820537_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuFlowManager/<IFadeAndChangePanel>c__Iterator2
struct  U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537  : public RuntimeObject
{
public:
	// System.Int32 MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::id
	int32_t ___id_0;
	// MenuFlowManager MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::$this
	MenuFlowManager_t1614880941 * ___U24this_1;
	// System.Object MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::$disposing
	bool ___U24disposing_3;
	// System.Int32 MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537, ___U24this_1)); }
	inline MenuFlowManager_t1614880941 * get_U24this_1() const { return ___U24this_1; }
	inline MenuFlowManager_t1614880941 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MenuFlowManager_t1614880941 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIFADEANDCHANGEPANELU3EC__ITERATOR2_T4222820537_H
#ifndef U3CIPLAYDELAYEDTIPU3EC__ITERATOR1_T1346711414_H
#define U3CIPLAYDELAYEDTIPU3EC__ITERATOR1_T1346711414_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuFlowManager/<IPlayDelayedTip>c__Iterator1
struct  U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414  : public RuntimeObject
{
public:
	// System.Single MenuFlowManager/<IPlayDelayedTip>c__Iterator1::delay
	float ___delay_0;
	// System.Int32 MenuFlowManager/<IPlayDelayedTip>c__Iterator1::tipID
	int32_t ___tipID_1;
	// MenuFlowManager MenuFlowManager/<IPlayDelayedTip>c__Iterator1::$this
	MenuFlowManager_t1614880941 * ___U24this_2;
	// System.Object MenuFlowManager/<IPlayDelayedTip>c__Iterator1::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean MenuFlowManager/<IPlayDelayedTip>c__Iterator1::$disposing
	bool ___U24disposing_4;
	// System.Int32 MenuFlowManager/<IPlayDelayedTip>c__Iterator1::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_tipID_1() { return static_cast<int32_t>(offsetof(U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414, ___tipID_1)); }
	inline int32_t get_tipID_1() const { return ___tipID_1; }
	inline int32_t* get_address_of_tipID_1() { return &___tipID_1; }
	inline void set_tipID_1(int32_t value)
	{
		___tipID_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414, ___U24this_2)); }
	inline MenuFlowManager_t1614880941 * get_U24this_2() const { return ___U24this_2; }
	inline MenuFlowManager_t1614880941 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(MenuFlowManager_t1614880941 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414, ___U24PC_5)); }
	inline int32_t get_U24PC_5() const { return ___U24PC_5; }
	inline int32_t* get_address_of_U24PC_5() { return &___U24PC_5; }
	inline void set_U24PC_5(int32_t value)
	{
		___U24PC_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIPLAYDELAYEDTIPU3EC__ITERATOR1_T1346711414_H
#ifndef U3CISELECTLEVELU3EC__ITERATOR0_T772913338_H
#define U3CISELECTLEVELU3EC__ITERATOR0_T772913338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuFlowManager/<ISelectLevel>c__Iterator0
struct  U3CISelectLevelU3Ec__Iterator0_t772913338  : public RuntimeObject
{
public:
	// System.String MenuFlowManager/<ISelectLevel>c__Iterator0::name
	String_t* ___name_0;
	// MenuFlowManager MenuFlowManager/<ISelectLevel>c__Iterator0::$this
	MenuFlowManager_t1614880941 * ___U24this_1;
	// System.Object MenuFlowManager/<ISelectLevel>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean MenuFlowManager/<ISelectLevel>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 MenuFlowManager/<ISelectLevel>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(U3CISelectLevelU3Ec__Iterator0_t772913338, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CISelectLevelU3Ec__Iterator0_t772913338, ___U24this_1)); }
	inline MenuFlowManager_t1614880941 * get_U24this_1() const { return ___U24this_1; }
	inline MenuFlowManager_t1614880941 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(MenuFlowManager_t1614880941 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CISelectLevelU3Ec__Iterator0_t772913338, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CISelectLevelU3Ec__Iterator0_t772913338, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CISelectLevelU3Ec__Iterator0_t772913338, ___U24PC_4)); }
	inline int32_t get_U24PC_4() const { return ___U24PC_4; }
	inline int32_t* get_address_of_U24PC_4() { return &___U24PC_4; }
	inline void set_U24PC_4(int32_t value)
	{
		___U24PC_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CISELECTLEVELU3EC__ITERATOR0_T772913338_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t3528271667* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t3528271667* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t3528271667** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t3528271667* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t, ___inner_exception_1)); }
	inline Exception_t * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T_H
#ifndef MENUPANEL_T2709851952_H
#define MENUPANEL_T2709851952_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuPanel
struct  MenuPanel_t2709851952  : public RuntimeObject
{
public:
	// UnityEngine.GameObject MenuPanel::panel
	GameObject_t1113636619 * ___panel_0;
	// System.Int32 MenuPanel::prevPanelID
	int32_t ___prevPanelID_1;

public:
	inline static int32_t get_offset_of_panel_0() { return static_cast<int32_t>(offsetof(MenuPanel_t2709851952, ___panel_0)); }
	inline GameObject_t1113636619 * get_panel_0() const { return ___panel_0; }
	inline GameObject_t1113636619 ** get_address_of_panel_0() { return &___panel_0; }
	inline void set_panel_0(GameObject_t1113636619 * value)
	{
		___panel_0 = value;
		Il2CppCodeGenWriteBarrier((&___panel_0), value);
	}

	inline static int32_t get_offset_of_prevPanelID_1() { return static_cast<int32_t>(offsetof(MenuPanel_t2709851952, ___prevPanelID_1)); }
	inline int32_t get_prevPanelID_1() const { return ___prevPanelID_1; }
	inline int32_t* get_address_of_prevPanelID_1() { return &___prevPanelID_1; }
	inline void set_prevPanelID_1(int32_t value)
	{
		___prevPanelID_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUPANEL_T2709851952_H
#ifndef DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#define DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t2562230146 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DRIVENRECTTRANSFORMTRACKER_T2562230146_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef COLOR_T2555686324_H
#define COLOR_T2555686324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Color
struct  Color_t2555686324 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t2555686324, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COLOR_T2555686324_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef WAITFORSECONDS_T1699091251_H
#define WAITFORSECONDS_T1699091251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t1699091251  : public YieldInstruction_t403091072
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t1699091251, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	float ___m_Seconds_0;
};
#endif // WAITFORSECONDS_T1699091251_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef RESOLUTION_T2487619763_H
#define RESOLUTION_T2487619763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Resolution
struct  Resolution_t2487619763 
{
public:
	// System.Int32 UnityEngine.Resolution::m_Width
	int32_t ___m_Width_0;
	// System.Int32 UnityEngine.Resolution::m_Height
	int32_t ___m_Height_1;
	// System.Int32 UnityEngine.Resolution::m_RefreshRate
	int32_t ___m_RefreshRate_2;

public:
	inline static int32_t get_offset_of_m_Width_0() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_Width_0)); }
	inline int32_t get_m_Width_0() const { return ___m_Width_0; }
	inline int32_t* get_address_of_m_Width_0() { return &___m_Width_0; }
	inline void set_m_Width_0(int32_t value)
	{
		___m_Width_0 = value;
	}

	inline static int32_t get_offset_of_m_Height_1() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_Height_1)); }
	inline int32_t get_m_Height_1() const { return ___m_Height_1; }
	inline int32_t* get_address_of_m_Height_1() { return &___m_Height_1; }
	inline void set_m_Height_1(int32_t value)
	{
		___m_Height_1 = value;
	}

	inline static int32_t get_offset_of_m_RefreshRate_2() { return static_cast<int32_t>(offsetof(Resolution_t2487619763, ___m_RefreshRate_2)); }
	inline int32_t get_m_RefreshRate_2() const { return ___m_RefreshRate_2; }
	inline int32_t* get_address_of_m_RefreshRate_2() { return &___m_RefreshRate_2; }
	inline void set_m_RefreshRate_2(int32_t value)
	{
		___m_RefreshRate_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RESOLUTION_T2487619763_H
#ifndef WAITFORENDOFFRAME_T1314943911_H
#define WAITFORENDOFFRAME_T1314943911_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t1314943911  : public YieldInstruction_t403091072
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WAITFORENDOFFRAME_T1314943911_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef COROUTINE_T3829159415_H
#define COROUTINE_T3829159415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Coroutine
struct  Coroutine_t3829159415  : public YieldInstruction_t403091072
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t3829159415, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_pinvoke : public YieldInstruction_t403091072_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t3829159415_marshaled_com : public YieldInstruction_t403091072_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // COROUTINE_T3829159415_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef U3CIFADEIMAGEU3EC__ITERATOR3_T2325737738_H
#define U3CIFADEIMAGEU3EC__ITERATOR3_T2325737738_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuFlowManager/<IFadeImage>c__Iterator3
struct  U3CIFadeImageU3Ec__Iterator3_t2325737738  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image MenuFlowManager/<IFadeImage>c__Iterator3::image
	Image_t2670269651 * ___image_0;
	// System.Single MenuFlowManager/<IFadeImage>c__Iterator3::<startHeight>__0
	float ___U3CstartHeightU3E__0_1;
	// System.Single MenuFlowManager/<IFadeImage>c__Iterator3::<timer>__0
	float ___U3CtimerU3E__0_2;
	// System.Single MenuFlowManager/<IFadeImage>c__Iterator3::speed
	float ___speed_3;
	// UnityEngine.Vector2 MenuFlowManager/<IFadeImage>c__Iterator3::<rect>__1
	Vector2_t2156229523  ___U3CrectU3E__1_4;
	// System.Single MenuFlowManager/<IFadeImage>c__Iterator3::height
	float ___height_5;
	// System.Object MenuFlowManager/<IFadeImage>c__Iterator3::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean MenuFlowManager/<IFadeImage>c__Iterator3::$disposing
	bool ___U24disposing_7;
	// System.Int32 MenuFlowManager/<IFadeImage>c__Iterator3::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___image_0)); }
	inline Image_t2670269651 * get_image_0() const { return ___image_0; }
	inline Image_t2670269651 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(Image_t2670269651 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_U3CstartHeightU3E__0_1() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U3CstartHeightU3E__0_1)); }
	inline float get_U3CstartHeightU3E__0_1() const { return ___U3CstartHeightU3E__0_1; }
	inline float* get_address_of_U3CstartHeightU3E__0_1() { return &___U3CstartHeightU3E__0_1; }
	inline void set_U3CstartHeightU3E__0_1(float value)
	{
		___U3CstartHeightU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CtimerU3E__0_2() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U3CtimerU3E__0_2)); }
	inline float get_U3CtimerU3E__0_2() const { return ___U3CtimerU3E__0_2; }
	inline float* get_address_of_U3CtimerU3E__0_2() { return &___U3CtimerU3E__0_2; }
	inline void set_U3CtimerU3E__0_2(float value)
	{
		___U3CtimerU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_U3CrectU3E__1_4() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U3CrectU3E__1_4)); }
	inline Vector2_t2156229523  get_U3CrectU3E__1_4() const { return ___U3CrectU3E__1_4; }
	inline Vector2_t2156229523 * get_address_of_U3CrectU3E__1_4() { return &___U3CrectU3E__1_4; }
	inline void set_U3CrectU3E__1_4(Vector2_t2156229523  value)
	{
		___U3CrectU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_height_5() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___height_5)); }
	inline float get_height_5() const { return ___height_5; }
	inline float* get_address_of_height_5() { return &___height_5; }
	inline void set_height_5(float value)
	{
		___height_5 = value;
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIFADEIMAGEU3EC__ITERATOR3_T2325737738_H
#ifndef KEYCODE_T2599294277_H
#define KEYCODE_T2599294277_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.KeyCode
struct  KeyCode_t2599294277 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(KeyCode_t2599294277, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYCODE_T2599294277_H
#ifndef TYPE_T1152881528_H
#define TYPE_T1152881528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/Type
struct  Type_t1152881528 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Type_t1152881528, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T1152881528_H
#ifndef U3CIMOVEPANELU3EC__ITERATOR2_T2454059368_H
#define U3CIMOVEPANELU3EC__ITERATOR2_T2454059368_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuNotification/<IMovePanel>c__Iterator2
struct  U3CIMovePanelU3Ec__Iterator2_t2454059368  : public RuntimeObject
{
public:
	// System.Single MenuNotification/<IMovePanel>c__Iterator2::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// UnityEngine.Vector2 MenuNotification/<IMovePanel>c__Iterator2::<startPos>__0
	Vector2_t2156229523  ___U3CstartPosU3E__0_1;
	// UnityEngine.Vector2 MenuNotification/<IMovePanel>c__Iterator2::<endPos>__0
	Vector2_t2156229523  ___U3CendPosU3E__0_2;
	// System.Single MenuNotification/<IMovePanel>c__Iterator2::height
	float ___height_3;
	// System.Single MenuNotification/<IMovePanel>c__Iterator2::speed
	float ___speed_4;
	// MenuNotification MenuNotification/<IMovePanel>c__Iterator2::$this
	MenuNotification_t963843896 * ___U24this_5;
	// System.Object MenuNotification/<IMovePanel>c__Iterator2::$current
	RuntimeObject * ___U24current_6;
	// System.Boolean MenuNotification/<IMovePanel>c__Iterator2::$disposing
	bool ___U24disposing_7;
	// System.Int32 MenuNotification/<IMovePanel>c__Iterator2::$PC
	int32_t ___U24PC_8;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CstartPosU3E__0_1() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___U3CstartPosU3E__0_1)); }
	inline Vector2_t2156229523  get_U3CstartPosU3E__0_1() const { return ___U3CstartPosU3E__0_1; }
	inline Vector2_t2156229523 * get_address_of_U3CstartPosU3E__0_1() { return &___U3CstartPosU3E__0_1; }
	inline void set_U3CstartPosU3E__0_1(Vector2_t2156229523  value)
	{
		___U3CstartPosU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CendPosU3E__0_2() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___U3CendPosU3E__0_2)); }
	inline Vector2_t2156229523  get_U3CendPosU3E__0_2() const { return ___U3CendPosU3E__0_2; }
	inline Vector2_t2156229523 * get_address_of_U3CendPosU3E__0_2() { return &___U3CendPosU3E__0_2; }
	inline void set_U3CendPosU3E__0_2(Vector2_t2156229523  value)
	{
		___U3CendPosU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_height_3() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___height_3)); }
	inline float get_height_3() const { return ___height_3; }
	inline float* get_address_of_height_3() { return &___height_3; }
	inline void set_height_3(float value)
	{
		___height_3 = value;
	}

	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_U24this_5() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___U24this_5)); }
	inline MenuNotification_t963843896 * get_U24this_5() const { return ___U24this_5; }
	inline MenuNotification_t963843896 ** get_address_of_U24this_5() { return &___U24this_5; }
	inline void set_U24this_5(MenuNotification_t963843896 * value)
	{
		___U24this_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_5), value);
	}

	inline static int32_t get_offset_of_U24current_6() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___U24current_6)); }
	inline RuntimeObject * get_U24current_6() const { return ___U24current_6; }
	inline RuntimeObject ** get_address_of_U24current_6() { return &___U24current_6; }
	inline void set_U24current_6(RuntimeObject * value)
	{
		___U24current_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_6), value);
	}

	inline static int32_t get_offset_of_U24disposing_7() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___U24disposing_7)); }
	inline bool get_U24disposing_7() const { return ___U24disposing_7; }
	inline bool* get_address_of_U24disposing_7() { return &___U24disposing_7; }
	inline void set_U24disposing_7(bool value)
	{
		___U24disposing_7 = value;
	}

	inline static int32_t get_offset_of_U24PC_8() { return static_cast<int32_t>(offsetof(U3CIMovePanelU3Ec__Iterator2_t2454059368, ___U24PC_8)); }
	inline int32_t get_U24PC_8() const { return ___U24PC_8; }
	inline int32_t* get_address_of_U24PC_8() { return &___U24PC_8; }
	inline void set_U24PC_8(int32_t value)
	{
		___U24PC_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIMOVEPANELU3EC__ITERATOR2_T2454059368_H
#ifndef FILLMETHOD_T1167457570_H
#define FILLMETHOD_T1167457570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image/FillMethod
struct  FillMethod_t1167457570 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FillMethod_t1167457570, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILLMETHOD_T1167457570_H
#ifndef MOVEMENTTYPE_T4072922106_H
#define MOVEMENTTYPE_T4072922106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/MovementType
struct  MovementType_t4072922106 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MovementType_t4072922106, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVEMENTTYPE_T4072922106_H
#ifndef NOTSUPPORTEDEXCEPTION_T1314879016_H
#define NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.NotSupportedException
struct  NotSupportedException_t1314879016  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NOTSUPPORTEDEXCEPTION_T1314879016_H
#ifndef U3CIMOVETITLEU3EC__ITERATOR4_T1546248483_H
#define U3CIMOVETITLEU3EC__ITERATOR4_T1546248483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuFlowManager/<IMoveTitle>c__Iterator4
struct  U3CIMoveTitleU3Ec__Iterator4_t1546248483  : public RuntimeObject
{
public:
	// System.Single MenuFlowManager/<IMoveTitle>c__Iterator4::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// UnityEngine.Vector3 MenuFlowManager/<IMoveTitle>c__Iterator4::<sPos_title>__0
	Vector3_t3722313464  ___U3CsPos_titleU3E__0_1;
	// UnityEngine.Vector3 MenuFlowManager/<IMoveTitle>c__Iterator4::<sPos_sky>__0
	Vector3_t3722313464  ___U3CsPos_skyU3E__0_2;
	// UnityEngine.Vector3 MenuFlowManager/<IMoveTitle>c__Iterator4::<sPos_levels>__0
	Vector3_t3722313464  ___U3CsPos_levelsU3E__0_3;
	// UnityEngine.Vector3 MenuFlowManager/<IMoveTitle>c__Iterator4::<dPos_title>__0
	Vector3_t3722313464  ___U3CdPos_titleU3E__0_4;
	// System.Single MenuFlowManager/<IMoveTitle>c__Iterator4::pos_title
	float ___pos_title_5;
	// UnityEngine.Vector3 MenuFlowManager/<IMoveTitle>c__Iterator4::<dPos_sky>__0
	Vector3_t3722313464  ___U3CdPos_skyU3E__0_6;
	// System.Single MenuFlowManager/<IMoveTitle>c__Iterator4::pos_sky
	float ___pos_sky_7;
	// UnityEngine.Vector3 MenuFlowManager/<IMoveTitle>c__Iterator4::<dPos_levels>__0
	Vector3_t3722313464  ___U3CdPos_levelsU3E__0_8;
	// System.Single MenuFlowManager/<IMoveTitle>c__Iterator4::pos_levels
	float ___pos_levels_9;
	// System.Single MenuFlowManager/<IMoveTitle>c__Iterator4::speed
	float ___speed_10;
	// System.Single MenuFlowManager/<IMoveTitle>c__Iterator4::<diff>__1
	float ___U3CdiffU3E__1_11;
	// System.Boolean MenuFlowManager/<IMoveTitle>c__Iterator4::toTitle
	bool ___toTitle_12;
	// MenuFlowManager MenuFlowManager/<IMoveTitle>c__Iterator4::$this
	MenuFlowManager_t1614880941 * ___U24this_13;
	// System.Object MenuFlowManager/<IMoveTitle>c__Iterator4::$current
	RuntimeObject * ___U24current_14;
	// System.Boolean MenuFlowManager/<IMoveTitle>c__Iterator4::$disposing
	bool ___U24disposing_15;
	// System.Int32 MenuFlowManager/<IMoveTitle>c__Iterator4::$PC
	int32_t ___U24PC_16;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CsPos_titleU3E__0_1() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U3CsPos_titleU3E__0_1)); }
	inline Vector3_t3722313464  get_U3CsPos_titleU3E__0_1() const { return ___U3CsPos_titleU3E__0_1; }
	inline Vector3_t3722313464 * get_address_of_U3CsPos_titleU3E__0_1() { return &___U3CsPos_titleU3E__0_1; }
	inline void set_U3CsPos_titleU3E__0_1(Vector3_t3722313464  value)
	{
		___U3CsPos_titleU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CsPos_skyU3E__0_2() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U3CsPos_skyU3E__0_2)); }
	inline Vector3_t3722313464  get_U3CsPos_skyU3E__0_2() const { return ___U3CsPos_skyU3E__0_2; }
	inline Vector3_t3722313464 * get_address_of_U3CsPos_skyU3E__0_2() { return &___U3CsPos_skyU3E__0_2; }
	inline void set_U3CsPos_skyU3E__0_2(Vector3_t3722313464  value)
	{
		___U3CsPos_skyU3E__0_2 = value;
	}

	inline static int32_t get_offset_of_U3CsPos_levelsU3E__0_3() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U3CsPos_levelsU3E__0_3)); }
	inline Vector3_t3722313464  get_U3CsPos_levelsU3E__0_3() const { return ___U3CsPos_levelsU3E__0_3; }
	inline Vector3_t3722313464 * get_address_of_U3CsPos_levelsU3E__0_3() { return &___U3CsPos_levelsU3E__0_3; }
	inline void set_U3CsPos_levelsU3E__0_3(Vector3_t3722313464  value)
	{
		___U3CsPos_levelsU3E__0_3 = value;
	}

	inline static int32_t get_offset_of_U3CdPos_titleU3E__0_4() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U3CdPos_titleU3E__0_4)); }
	inline Vector3_t3722313464  get_U3CdPos_titleU3E__0_4() const { return ___U3CdPos_titleU3E__0_4; }
	inline Vector3_t3722313464 * get_address_of_U3CdPos_titleU3E__0_4() { return &___U3CdPos_titleU3E__0_4; }
	inline void set_U3CdPos_titleU3E__0_4(Vector3_t3722313464  value)
	{
		___U3CdPos_titleU3E__0_4 = value;
	}

	inline static int32_t get_offset_of_pos_title_5() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___pos_title_5)); }
	inline float get_pos_title_5() const { return ___pos_title_5; }
	inline float* get_address_of_pos_title_5() { return &___pos_title_5; }
	inline void set_pos_title_5(float value)
	{
		___pos_title_5 = value;
	}

	inline static int32_t get_offset_of_U3CdPos_skyU3E__0_6() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U3CdPos_skyU3E__0_6)); }
	inline Vector3_t3722313464  get_U3CdPos_skyU3E__0_6() const { return ___U3CdPos_skyU3E__0_6; }
	inline Vector3_t3722313464 * get_address_of_U3CdPos_skyU3E__0_6() { return &___U3CdPos_skyU3E__0_6; }
	inline void set_U3CdPos_skyU3E__0_6(Vector3_t3722313464  value)
	{
		___U3CdPos_skyU3E__0_6 = value;
	}

	inline static int32_t get_offset_of_pos_sky_7() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___pos_sky_7)); }
	inline float get_pos_sky_7() const { return ___pos_sky_7; }
	inline float* get_address_of_pos_sky_7() { return &___pos_sky_7; }
	inline void set_pos_sky_7(float value)
	{
		___pos_sky_7 = value;
	}

	inline static int32_t get_offset_of_U3CdPos_levelsU3E__0_8() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U3CdPos_levelsU3E__0_8)); }
	inline Vector3_t3722313464  get_U3CdPos_levelsU3E__0_8() const { return ___U3CdPos_levelsU3E__0_8; }
	inline Vector3_t3722313464 * get_address_of_U3CdPos_levelsU3E__0_8() { return &___U3CdPos_levelsU3E__0_8; }
	inline void set_U3CdPos_levelsU3E__0_8(Vector3_t3722313464  value)
	{
		___U3CdPos_levelsU3E__0_8 = value;
	}

	inline static int32_t get_offset_of_pos_levels_9() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___pos_levels_9)); }
	inline float get_pos_levels_9() const { return ___pos_levels_9; }
	inline float* get_address_of_pos_levels_9() { return &___pos_levels_9; }
	inline void set_pos_levels_9(float value)
	{
		___pos_levels_9 = value;
	}

	inline static int32_t get_offset_of_speed_10() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___speed_10)); }
	inline float get_speed_10() const { return ___speed_10; }
	inline float* get_address_of_speed_10() { return &___speed_10; }
	inline void set_speed_10(float value)
	{
		___speed_10 = value;
	}

	inline static int32_t get_offset_of_U3CdiffU3E__1_11() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U3CdiffU3E__1_11)); }
	inline float get_U3CdiffU3E__1_11() const { return ___U3CdiffU3E__1_11; }
	inline float* get_address_of_U3CdiffU3E__1_11() { return &___U3CdiffU3E__1_11; }
	inline void set_U3CdiffU3E__1_11(float value)
	{
		___U3CdiffU3E__1_11 = value;
	}

	inline static int32_t get_offset_of_toTitle_12() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___toTitle_12)); }
	inline bool get_toTitle_12() const { return ___toTitle_12; }
	inline bool* get_address_of_toTitle_12() { return &___toTitle_12; }
	inline void set_toTitle_12(bool value)
	{
		___toTitle_12 = value;
	}

	inline static int32_t get_offset_of_U24this_13() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U24this_13)); }
	inline MenuFlowManager_t1614880941 * get_U24this_13() const { return ___U24this_13; }
	inline MenuFlowManager_t1614880941 ** get_address_of_U24this_13() { return &___U24this_13; }
	inline void set_U24this_13(MenuFlowManager_t1614880941 * value)
	{
		___U24this_13 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_13), value);
	}

	inline static int32_t get_offset_of_U24current_14() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U24current_14)); }
	inline RuntimeObject * get_U24current_14() const { return ___U24current_14; }
	inline RuntimeObject ** get_address_of_U24current_14() { return &___U24current_14; }
	inline void set_U24current_14(RuntimeObject * value)
	{
		___U24current_14 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_14), value);
	}

	inline static int32_t get_offset_of_U24disposing_15() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U24disposing_15)); }
	inline bool get_U24disposing_15() const { return ___U24disposing_15; }
	inline bool* get_address_of_U24disposing_15() { return &___U24disposing_15; }
	inline void set_U24disposing_15(bool value)
	{
		___U24disposing_15 = value;
	}

	inline static int32_t get_offset_of_U24PC_16() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U24PC_16)); }
	inline int32_t get_U24PC_16() const { return ___U24PC_16; }
	inline int32_t* get_address_of_U24PC_16() { return &___U24PC_16; }
	inline void set_U24PC_16(int32_t value)
	{
		___U24PC_16 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIMOVETITLEU3EC__ITERATOR4_T1546248483_H
#ifndef SCROLLBARVISIBILITY_T705693775_H
#define SCROLLBARVISIBILITY_T705693775_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct  ScrollbarVisibility_t705693775 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t705693775, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLBARVISIBILITY_T705693775_H
#ifndef BOUNDS_T2266837910_H
#define BOUNDS_T2266837910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Bounds
struct  Bounds_t2266837910 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t3722313464  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t3722313464  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Center_0)); }
	inline Vector3_t3722313464  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t3722313464 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t3722313464  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t2266837910, ___m_Extents_1)); }
	inline Vector3_t3722313464  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t3722313464 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t3722313464  value)
	{
		___m_Extents_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDS_T2266837910_H
#ifndef GAMESTATE_T4259431733_H
#define GAMESTATE_T4259431733_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageManager/GameState
struct  GameState_t4259431733 
{
public:
	// System.Int32 StageManager/GameState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(GameState_t4259431733, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMESTATE_T4259431733_H
#ifndef SPRITE_T280657092_H
#define SPRITE_T280657092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Sprite
struct  Sprite_t280657092  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITE_T280657092_H
#ifndef COMPONENT_T1923634451_H
#define COMPONENT_T1923634451_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1923634451  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1923634451_H
#ifndef GAMEOBJECT_T1113636619_H
#define GAMEOBJECT_T1113636619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.GameObject
struct  GameObject_t1113636619  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEOBJECT_T1113636619_H
#ifndef AUDIOCLIP_T3680889665_H
#define AUDIOCLIP_T3680889665_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioClip
struct  AudioClip_t3680889665  : public Object_t631007953
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t1677636661 * ___m_PCMReaderCallback_2;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t1059417452 * ___m_PCMSetPositionCallback_3;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_2() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMReaderCallback_2)); }
	inline PCMReaderCallback_t1677636661 * get_m_PCMReaderCallback_2() const { return ___m_PCMReaderCallback_2; }
	inline PCMReaderCallback_t1677636661 ** get_address_of_m_PCMReaderCallback_2() { return &___m_PCMReaderCallback_2; }
	inline void set_m_PCMReaderCallback_2(PCMReaderCallback_t1677636661 * value)
	{
		___m_PCMReaderCallback_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMReaderCallback_2), value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_3() { return static_cast<int32_t>(offsetof(AudioClip_t3680889665, ___m_PCMSetPositionCallback_3)); }
	inline PCMSetPositionCallback_t1059417452 * get_m_PCMSetPositionCallback_3() const { return ___m_PCMSetPositionCallback_3; }
	inline PCMSetPositionCallback_t1059417452 ** get_address_of_m_PCMSetPositionCallback_3() { return &___m_PCMSetPositionCallback_3; }
	inline void set_m_PCMSetPositionCallback_3(PCMSetPositionCallback_t1059417452 * value)
	{
		___m_PCMSetPositionCallback_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_PCMSetPositionCallback_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOCLIP_T3680889665_H
#ifndef CANVASGROUP_T4083511760_H
#define CANVASGROUP_T4083511760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CanvasGroup
struct  CanvasGroup_t4083511760  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CANVASGROUP_T4083511760_H
#ifndef RENDERER_T2627027031_H
#define RENDERER_T2627027031_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Renderer
struct  Renderer_t2627027031  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RENDERER_T2627027031_H
#ifndef TRANSFORM_T3600365921_H
#define TRANSFORM_T3600365921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Transform
struct  Transform_t3600365921  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSFORM_T3600365921_H
#ifndef BEHAVIOUR_T1437897464_H
#define BEHAVIOUR_T1437897464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t1437897464  : public Component_t1923634451
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T1437897464_H
#ifndef SPRITERENDERER_T3235626157_H
#define SPRITERENDERER_T3235626157_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3235626157  : public Renderer_t2627027031
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPRITERENDERER_T3235626157_H
#ifndef RECTTRANSFORM_T3704657025_H
#define RECTTRANSFORM_T3704657025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RectTransform
struct  RectTransform_t3704657025  : public Transform_t3600365921
{
public:

public:
};

struct RectTransform_t3704657025_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1258266594 * ___reapplyDrivenProperties_2;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_2() { return static_cast<int32_t>(offsetof(RectTransform_t3704657025_StaticFields, ___reapplyDrivenProperties_2)); }
	inline ReapplyDrivenProperties_t1258266594 * get_reapplyDrivenProperties_2() const { return ___reapplyDrivenProperties_2; }
	inline ReapplyDrivenProperties_t1258266594 ** get_address_of_reapplyDrivenProperties_2() { return &___reapplyDrivenProperties_2; }
	inline void set_reapplyDrivenProperties_2(ReapplyDrivenProperties_t1258266594 * value)
	{
		___reapplyDrivenProperties_2 = value;
		Il2CppCodeGenWriteBarrier((&___reapplyDrivenProperties_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECTTRANSFORM_T3704657025_H
#ifndef CAMERA_T4157153871_H
#define CAMERA_T4157153871_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t4157153871  : public Behaviour_t1437897464
{
public:

public:
};

struct Camera_t4157153871_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t190067161 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t190067161 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t190067161 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t190067161 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t190067161 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t190067161 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t190067161 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t190067161 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t190067161 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t4157153871_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t190067161 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t190067161 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t190067161 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T4157153871_H
#ifndef MONOBEHAVIOUR_T3962482529_H
#define MONOBEHAVIOUR_T3962482529_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t3962482529  : public Behaviour_t1437897464
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T3962482529_H
#ifndef AUDIOSOURCE_T3935305588_H
#define AUDIOSOURCE_T3935305588_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AudioSource
struct  AudioSource_t3935305588  : public Behaviour_t1437897464
{
public:
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::spatializerExtension
	AudioSourceExtension_t3064908834 * ___spatializerExtension_2;
	// UnityEngine.AudioSourceExtension UnityEngine.AudioSource::ambisonicExtension
	AudioSourceExtension_t3064908834 * ___ambisonicExtension_3;

public:
	inline static int32_t get_offset_of_spatializerExtension_2() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___spatializerExtension_2)); }
	inline AudioSourceExtension_t3064908834 * get_spatializerExtension_2() const { return ___spatializerExtension_2; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_spatializerExtension_2() { return &___spatializerExtension_2; }
	inline void set_spatializerExtension_2(AudioSourceExtension_t3064908834 * value)
	{
		___spatializerExtension_2 = value;
		Il2CppCodeGenWriteBarrier((&___spatializerExtension_2), value);
	}

	inline static int32_t get_offset_of_ambisonicExtension_3() { return static_cast<int32_t>(offsetof(AudioSource_t3935305588, ___ambisonicExtension_3)); }
	inline AudioSourceExtension_t3064908834 * get_ambisonicExtension_3() const { return ___ambisonicExtension_3; }
	inline AudioSourceExtension_t3064908834 ** get_address_of_ambisonicExtension_3() { return &___ambisonicExtension_3; }
	inline void set_ambisonicExtension_3(AudioSourceExtension_t3064908834 * value)
	{
		___ambisonicExtension_3 = value;
		Il2CppCodeGenWriteBarrier((&___ambisonicExtension_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOSOURCE_T3935305588_H
#ifndef STAGEINFO_T2857013238_H
#define STAGEINFO_T2857013238_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageInfo
struct  StageInfo_t2857013238  : public MonoBehaviour_t3962482529
{
public:
	// System.Single StageInfo::stageTime
	float ___stageTime_3;
	// System.Single StageInfo::difficultyMultiplier
	float ___difficultyMultiplier_4;
	// System.Single[] StageInfo::starTimes
	SingleU5BU5D_t1444911251* ___starTimes_5;
	// System.Int32 StageInfo::worldID
	int32_t ___worldID_6;
	// System.Int32 StageInfo::stageID
	int32_t ___stageID_7;

public:
	inline static int32_t get_offset_of_stageTime_3() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___stageTime_3)); }
	inline float get_stageTime_3() const { return ___stageTime_3; }
	inline float* get_address_of_stageTime_3() { return &___stageTime_3; }
	inline void set_stageTime_3(float value)
	{
		___stageTime_3 = value;
	}

	inline static int32_t get_offset_of_difficultyMultiplier_4() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___difficultyMultiplier_4)); }
	inline float get_difficultyMultiplier_4() const { return ___difficultyMultiplier_4; }
	inline float* get_address_of_difficultyMultiplier_4() { return &___difficultyMultiplier_4; }
	inline void set_difficultyMultiplier_4(float value)
	{
		___difficultyMultiplier_4 = value;
	}

	inline static int32_t get_offset_of_starTimes_5() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___starTimes_5)); }
	inline SingleU5BU5D_t1444911251* get_starTimes_5() const { return ___starTimes_5; }
	inline SingleU5BU5D_t1444911251** get_address_of_starTimes_5() { return &___starTimes_5; }
	inline void set_starTimes_5(SingleU5BU5D_t1444911251* value)
	{
		___starTimes_5 = value;
		Il2CppCodeGenWriteBarrier((&___starTimes_5), value);
	}

	inline static int32_t get_offset_of_worldID_6() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___worldID_6)); }
	inline int32_t get_worldID_6() const { return ___worldID_6; }
	inline int32_t* get_address_of_worldID_6() { return &___worldID_6; }
	inline void set_worldID_6(int32_t value)
	{
		___worldID_6 = value;
	}

	inline static int32_t get_offset_of_stageID_7() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238, ___stageID_7)); }
	inline int32_t get_stageID_7() const { return ___stageID_7; }
	inline int32_t* get_address_of_stageID_7() { return &___stageID_7; }
	inline void set_stageID_7(int32_t value)
	{
		___stageID_7 = value;
	}
};

struct StageInfo_t2857013238_StaticFields
{
public:
	// StageInfo StageInfo::instance
	StageInfo_t2857013238 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(StageInfo_t2857013238_StaticFields, ___instance_2)); }
	inline StageInfo_t2857013238 * get_instance_2() const { return ___instance_2; }
	inline StageInfo_t2857013238 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(StageInfo_t2857013238 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGEINFO_T2857013238_H
#ifndef UIBEHAVIOUR_T3495933518_H
#define UIBEHAVIOUR_T3495933518_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3495933518  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UIBEHAVIOUR_T3495933518_H
#ifndef MENUAUDIOPLAYER_T1756938393_H
#define MENUAUDIOPLAYER_T1756938393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuAudioPlayer
struct  MenuAudioPlayer_t1756938393  : public MonoBehaviour_t3962482529
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUAUDIOPLAYER_T1756938393_H
#ifndef MENULEVELBUTTON_T3559006541_H
#define MENULEVELBUTTON_T3559006541_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuLevelButton
struct  MenuLevelButton_t3559006541  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject[] MenuLevelButton::activeStars
	GameObjectU5BU5D_t3328599146* ___activeStars_2;
	// UnityEngine.GameObject[] MenuLevelButton::inactiveStars
	GameObjectU5BU5D_t3328599146* ___inactiveStars_3;
	// UnityEngine.UI.Image MenuLevelButton::title
	Image_t2670269651 * ___title_4;
	// UnityEngine.GameObject MenuLevelButton::activePanel
	GameObject_t1113636619 * ___activePanel_5;
	// System.String MenuLevelButton::levelKeyPrefix
	String_t* ___levelKeyPrefix_6;
	// System.Int32 MenuLevelButton::level
	int32_t ___level_7;
	// System.String MenuLevelButton::inactiveMessage
	String_t* ___inactiveMessage_8;
	// MenuNotification MenuLevelButton::notificationManager
	MenuNotification_t963843896 * ___notificationManager_9;
	// MenuFlowManager MenuLevelButton::flowManager
	MenuFlowManager_t1614880941 * ___flowManager_10;

public:
	inline static int32_t get_offset_of_activeStars_2() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___activeStars_2)); }
	inline GameObjectU5BU5D_t3328599146* get_activeStars_2() const { return ___activeStars_2; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_activeStars_2() { return &___activeStars_2; }
	inline void set_activeStars_2(GameObjectU5BU5D_t3328599146* value)
	{
		___activeStars_2 = value;
		Il2CppCodeGenWriteBarrier((&___activeStars_2), value);
	}

	inline static int32_t get_offset_of_inactiveStars_3() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___inactiveStars_3)); }
	inline GameObjectU5BU5D_t3328599146* get_inactiveStars_3() const { return ___inactiveStars_3; }
	inline GameObjectU5BU5D_t3328599146** get_address_of_inactiveStars_3() { return &___inactiveStars_3; }
	inline void set_inactiveStars_3(GameObjectU5BU5D_t3328599146* value)
	{
		___inactiveStars_3 = value;
		Il2CppCodeGenWriteBarrier((&___inactiveStars_3), value);
	}

	inline static int32_t get_offset_of_title_4() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___title_4)); }
	inline Image_t2670269651 * get_title_4() const { return ___title_4; }
	inline Image_t2670269651 ** get_address_of_title_4() { return &___title_4; }
	inline void set_title_4(Image_t2670269651 * value)
	{
		___title_4 = value;
		Il2CppCodeGenWriteBarrier((&___title_4), value);
	}

	inline static int32_t get_offset_of_activePanel_5() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___activePanel_5)); }
	inline GameObject_t1113636619 * get_activePanel_5() const { return ___activePanel_5; }
	inline GameObject_t1113636619 ** get_address_of_activePanel_5() { return &___activePanel_5; }
	inline void set_activePanel_5(GameObject_t1113636619 * value)
	{
		___activePanel_5 = value;
		Il2CppCodeGenWriteBarrier((&___activePanel_5), value);
	}

	inline static int32_t get_offset_of_levelKeyPrefix_6() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___levelKeyPrefix_6)); }
	inline String_t* get_levelKeyPrefix_6() const { return ___levelKeyPrefix_6; }
	inline String_t** get_address_of_levelKeyPrefix_6() { return &___levelKeyPrefix_6; }
	inline void set_levelKeyPrefix_6(String_t* value)
	{
		___levelKeyPrefix_6 = value;
		Il2CppCodeGenWriteBarrier((&___levelKeyPrefix_6), value);
	}

	inline static int32_t get_offset_of_level_7() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___level_7)); }
	inline int32_t get_level_7() const { return ___level_7; }
	inline int32_t* get_address_of_level_7() { return &___level_7; }
	inline void set_level_7(int32_t value)
	{
		___level_7 = value;
	}

	inline static int32_t get_offset_of_inactiveMessage_8() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___inactiveMessage_8)); }
	inline String_t* get_inactiveMessage_8() const { return ___inactiveMessage_8; }
	inline String_t** get_address_of_inactiveMessage_8() { return &___inactiveMessage_8; }
	inline void set_inactiveMessage_8(String_t* value)
	{
		___inactiveMessage_8 = value;
		Il2CppCodeGenWriteBarrier((&___inactiveMessage_8), value);
	}

	inline static int32_t get_offset_of_notificationManager_9() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___notificationManager_9)); }
	inline MenuNotification_t963843896 * get_notificationManager_9() const { return ___notificationManager_9; }
	inline MenuNotification_t963843896 ** get_address_of_notificationManager_9() { return &___notificationManager_9; }
	inline void set_notificationManager_9(MenuNotification_t963843896 * value)
	{
		___notificationManager_9 = value;
		Il2CppCodeGenWriteBarrier((&___notificationManager_9), value);
	}

	inline static int32_t get_offset_of_flowManager_10() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___flowManager_10)); }
	inline MenuFlowManager_t1614880941 * get_flowManager_10() const { return ___flowManager_10; }
	inline MenuFlowManager_t1614880941 ** get_address_of_flowManager_10() { return &___flowManager_10; }
	inline void set_flowManager_10(MenuFlowManager_t1614880941 * value)
	{
		___flowManager_10 = value;
		Il2CppCodeGenWriteBarrier((&___flowManager_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENULEVELBUTTON_T3559006541_H
#ifndef MENUSLOWERSCROLL_T3166589528_H
#define MENUSLOWERSCROLL_T3166589528_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuSlowerScroll
struct  MenuSlowerScroll_t3166589528  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.ScrollRect MenuSlowerScroll::scrollRect
	ScrollRect_t4137855814 * ___scrollRect_2;
	// UnityEngine.RectTransform MenuSlowerScroll::thisRect
	RectTransform_t3704657025 * ___thisRect_3;
	// System.Single MenuSlowerScroll::intensity
	float ___intensity_4;
	// UnityEngine.Vector2 MenuSlowerScroll::startPosition
	Vector2_t2156229523  ___startPosition_5;

public:
	inline static int32_t get_offset_of_scrollRect_2() { return static_cast<int32_t>(offsetof(MenuSlowerScroll_t3166589528, ___scrollRect_2)); }
	inline ScrollRect_t4137855814 * get_scrollRect_2() const { return ___scrollRect_2; }
	inline ScrollRect_t4137855814 ** get_address_of_scrollRect_2() { return &___scrollRect_2; }
	inline void set_scrollRect_2(ScrollRect_t4137855814 * value)
	{
		___scrollRect_2 = value;
		Il2CppCodeGenWriteBarrier((&___scrollRect_2), value);
	}

	inline static int32_t get_offset_of_thisRect_3() { return static_cast<int32_t>(offsetof(MenuSlowerScroll_t3166589528, ___thisRect_3)); }
	inline RectTransform_t3704657025 * get_thisRect_3() const { return ___thisRect_3; }
	inline RectTransform_t3704657025 ** get_address_of_thisRect_3() { return &___thisRect_3; }
	inline void set_thisRect_3(RectTransform_t3704657025 * value)
	{
		___thisRect_3 = value;
		Il2CppCodeGenWriteBarrier((&___thisRect_3), value);
	}

	inline static int32_t get_offset_of_intensity_4() { return static_cast<int32_t>(offsetof(MenuSlowerScroll_t3166589528, ___intensity_4)); }
	inline float get_intensity_4() const { return ___intensity_4; }
	inline float* get_address_of_intensity_4() { return &___intensity_4; }
	inline void set_intensity_4(float value)
	{
		___intensity_4 = value;
	}

	inline static int32_t get_offset_of_startPosition_5() { return static_cast<int32_t>(offsetof(MenuSlowerScroll_t3166589528, ___startPosition_5)); }
	inline Vector2_t2156229523  get_startPosition_5() const { return ___startPosition_5; }
	inline Vector2_t2156229523 * get_address_of_startPosition_5() { return &___startPosition_5; }
	inline void set_startPosition_5(Vector2_t2156229523  value)
	{
		___startPosition_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUSLOWERSCROLL_T3166589528_H
#ifndef MENULEVELSCREEN_T2132622692_H
#define MENULEVELSCREEN_T2132622692_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuLevelScreen
struct  MenuLevelScreen_t2132622692  : public MonoBehaviour_t3962482529
{
public:
	// MenuLevelButton[] MenuLevelScreen::buttons
	MenuLevelButtonU5BU5D_t58144480* ___buttons_2;
	// UnityEngine.RectTransform MenuLevelScreen::scrollRect
	RectTransform_t3704657025 * ___scrollRect_3;
	// System.Single MenuLevelScreen::defaultScroll
	float ___defaultScroll_4;
	// System.Single MenuLevelScreen::scrollIncrement
	float ___scrollIncrement_5;

public:
	inline static int32_t get_offset_of_buttons_2() { return static_cast<int32_t>(offsetof(MenuLevelScreen_t2132622692, ___buttons_2)); }
	inline MenuLevelButtonU5BU5D_t58144480* get_buttons_2() const { return ___buttons_2; }
	inline MenuLevelButtonU5BU5D_t58144480** get_address_of_buttons_2() { return &___buttons_2; }
	inline void set_buttons_2(MenuLevelButtonU5BU5D_t58144480* value)
	{
		___buttons_2 = value;
		Il2CppCodeGenWriteBarrier((&___buttons_2), value);
	}

	inline static int32_t get_offset_of_scrollRect_3() { return static_cast<int32_t>(offsetof(MenuLevelScreen_t2132622692, ___scrollRect_3)); }
	inline RectTransform_t3704657025 * get_scrollRect_3() const { return ___scrollRect_3; }
	inline RectTransform_t3704657025 ** get_address_of_scrollRect_3() { return &___scrollRect_3; }
	inline void set_scrollRect_3(RectTransform_t3704657025 * value)
	{
		___scrollRect_3 = value;
		Il2CppCodeGenWriteBarrier((&___scrollRect_3), value);
	}

	inline static int32_t get_offset_of_defaultScroll_4() { return static_cast<int32_t>(offsetof(MenuLevelScreen_t2132622692, ___defaultScroll_4)); }
	inline float get_defaultScroll_4() const { return ___defaultScroll_4; }
	inline float* get_address_of_defaultScroll_4() { return &___defaultScroll_4; }
	inline void set_defaultScroll_4(float value)
	{
		___defaultScroll_4 = value;
	}

	inline static int32_t get_offset_of_scrollIncrement_5() { return static_cast<int32_t>(offsetof(MenuLevelScreen_t2132622692, ___scrollIncrement_5)); }
	inline float get_scrollIncrement_5() const { return ___scrollIncrement_5; }
	inline float* get_address_of_scrollIncrement_5() { return &___scrollIncrement_5; }
	inline void set_scrollIncrement_5(float value)
	{
		___scrollIncrement_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENULEVELSCREEN_T2132622692_H
#ifndef STAGEPHOTO_T928294583_H
#define STAGEPHOTO_T928294583_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StagePhoto
struct  StagePhoto_t928294583  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.Camera StagePhoto::camera
	Camera_t4157153871 * ___camera_2;

public:
	inline static int32_t get_offset_of_camera_2() { return static_cast<int32_t>(offsetof(StagePhoto_t928294583, ___camera_2)); }
	inline Camera_t4157153871 * get_camera_2() const { return ___camera_2; }
	inline Camera_t4157153871 ** get_address_of_camera_2() { return &___camera_2; }
	inline void set_camera_2(Camera_t4157153871 * value)
	{
		___camera_2 = value;
		Il2CppCodeGenWriteBarrier((&___camera_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGEPHOTO_T928294583_H
#ifndef MENUFLOWMANAGER_T1614880941_H
#define MENUFLOWMANAGER_T1614880941_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuFlowManager
struct  MenuFlowManager_t1614880941  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform MenuFlowManager::panel_title
	RectTransform_t3704657025 * ___panel_title_2;
	// UnityEngine.RectTransform MenuFlowManager::panel_sky
	RectTransform_t3704657025 * ___panel_sky_3;
	// UnityEngine.RectTransform MenuFlowManager::panel_levels
	RectTransform_t3704657025 * ___panel_levels_4;
	// UnityEngine.UI.Image[] MenuFlowManager::fadeImages
	ImageU5BU5D_t2439009922* ___fadeImages_5;
	// MenuPanel[] MenuFlowManager::panels
	MenuPanelU5BU5D_t1968201233* ___panels_6;
	// UnityEngine.AudioClip[] MenuFlowManager::tipClips
	AudioClipU5BU5D_t143221404* ___tipClips_7;
	// System.String[] MenuFlowManager::tipTexts
	StringU5BU5D_t1281789340* ___tipTexts_8;
	// UnityEngine.Transform MenuFlowManager::tipPanel
	Transform_t3600365921 * ___tipPanel_9;
	// UnityEngine.UI.Text MenuFlowManager::tipText
	Text_t1901882714 * ___tipText_10;
	// System.Boolean MenuFlowManager::changing
	bool ___changing_11;
	// System.Boolean MenuFlowManager::fadingTitle
	bool ___fadingTitle_12;
	// System.Boolean MenuFlowManager::fadingTipPanel
	bool ___fadingTipPanel_13;
	// System.Boolean MenuFlowManager::onTitle
	bool ___onTitle_14;
	// System.Int32 MenuFlowManager::currPanel
	int32_t ___currPanel_15;
	// UnityEngine.AudioSource MenuFlowManager::aSrc
	AudioSource_t3935305588 * ___aSrc_16;
	// UnityEngine.AudioClip MenuFlowManager::clickClip
	AudioClip_t3680889665 * ___clickClip_17;
	// UnityEngine.AudioSource MenuFlowManager::clickAsrc
	AudioSource_t3935305588 * ___clickAsrc_18;
	// MenuNotification MenuFlowManager::notification
	MenuNotification_t963843896 * ___notification_19;

public:
	inline static int32_t get_offset_of_panel_title_2() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___panel_title_2)); }
	inline RectTransform_t3704657025 * get_panel_title_2() const { return ___panel_title_2; }
	inline RectTransform_t3704657025 ** get_address_of_panel_title_2() { return &___panel_title_2; }
	inline void set_panel_title_2(RectTransform_t3704657025 * value)
	{
		___panel_title_2 = value;
		Il2CppCodeGenWriteBarrier((&___panel_title_2), value);
	}

	inline static int32_t get_offset_of_panel_sky_3() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___panel_sky_3)); }
	inline RectTransform_t3704657025 * get_panel_sky_3() const { return ___panel_sky_3; }
	inline RectTransform_t3704657025 ** get_address_of_panel_sky_3() { return &___panel_sky_3; }
	inline void set_panel_sky_3(RectTransform_t3704657025 * value)
	{
		___panel_sky_3 = value;
		Il2CppCodeGenWriteBarrier((&___panel_sky_3), value);
	}

	inline static int32_t get_offset_of_panel_levels_4() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___panel_levels_4)); }
	inline RectTransform_t3704657025 * get_panel_levels_4() const { return ___panel_levels_4; }
	inline RectTransform_t3704657025 ** get_address_of_panel_levels_4() { return &___panel_levels_4; }
	inline void set_panel_levels_4(RectTransform_t3704657025 * value)
	{
		___panel_levels_4 = value;
		Il2CppCodeGenWriteBarrier((&___panel_levels_4), value);
	}

	inline static int32_t get_offset_of_fadeImages_5() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___fadeImages_5)); }
	inline ImageU5BU5D_t2439009922* get_fadeImages_5() const { return ___fadeImages_5; }
	inline ImageU5BU5D_t2439009922** get_address_of_fadeImages_5() { return &___fadeImages_5; }
	inline void set_fadeImages_5(ImageU5BU5D_t2439009922* value)
	{
		___fadeImages_5 = value;
		Il2CppCodeGenWriteBarrier((&___fadeImages_5), value);
	}

	inline static int32_t get_offset_of_panels_6() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___panels_6)); }
	inline MenuPanelU5BU5D_t1968201233* get_panels_6() const { return ___panels_6; }
	inline MenuPanelU5BU5D_t1968201233** get_address_of_panels_6() { return &___panels_6; }
	inline void set_panels_6(MenuPanelU5BU5D_t1968201233* value)
	{
		___panels_6 = value;
		Il2CppCodeGenWriteBarrier((&___panels_6), value);
	}

	inline static int32_t get_offset_of_tipClips_7() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___tipClips_7)); }
	inline AudioClipU5BU5D_t143221404* get_tipClips_7() const { return ___tipClips_7; }
	inline AudioClipU5BU5D_t143221404** get_address_of_tipClips_7() { return &___tipClips_7; }
	inline void set_tipClips_7(AudioClipU5BU5D_t143221404* value)
	{
		___tipClips_7 = value;
		Il2CppCodeGenWriteBarrier((&___tipClips_7), value);
	}

	inline static int32_t get_offset_of_tipTexts_8() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___tipTexts_8)); }
	inline StringU5BU5D_t1281789340* get_tipTexts_8() const { return ___tipTexts_8; }
	inline StringU5BU5D_t1281789340** get_address_of_tipTexts_8() { return &___tipTexts_8; }
	inline void set_tipTexts_8(StringU5BU5D_t1281789340* value)
	{
		___tipTexts_8 = value;
		Il2CppCodeGenWriteBarrier((&___tipTexts_8), value);
	}

	inline static int32_t get_offset_of_tipPanel_9() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___tipPanel_9)); }
	inline Transform_t3600365921 * get_tipPanel_9() const { return ___tipPanel_9; }
	inline Transform_t3600365921 ** get_address_of_tipPanel_9() { return &___tipPanel_9; }
	inline void set_tipPanel_9(Transform_t3600365921 * value)
	{
		___tipPanel_9 = value;
		Il2CppCodeGenWriteBarrier((&___tipPanel_9), value);
	}

	inline static int32_t get_offset_of_tipText_10() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___tipText_10)); }
	inline Text_t1901882714 * get_tipText_10() const { return ___tipText_10; }
	inline Text_t1901882714 ** get_address_of_tipText_10() { return &___tipText_10; }
	inline void set_tipText_10(Text_t1901882714 * value)
	{
		___tipText_10 = value;
		Il2CppCodeGenWriteBarrier((&___tipText_10), value);
	}

	inline static int32_t get_offset_of_changing_11() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___changing_11)); }
	inline bool get_changing_11() const { return ___changing_11; }
	inline bool* get_address_of_changing_11() { return &___changing_11; }
	inline void set_changing_11(bool value)
	{
		___changing_11 = value;
	}

	inline static int32_t get_offset_of_fadingTitle_12() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___fadingTitle_12)); }
	inline bool get_fadingTitle_12() const { return ___fadingTitle_12; }
	inline bool* get_address_of_fadingTitle_12() { return &___fadingTitle_12; }
	inline void set_fadingTitle_12(bool value)
	{
		___fadingTitle_12 = value;
	}

	inline static int32_t get_offset_of_fadingTipPanel_13() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___fadingTipPanel_13)); }
	inline bool get_fadingTipPanel_13() const { return ___fadingTipPanel_13; }
	inline bool* get_address_of_fadingTipPanel_13() { return &___fadingTipPanel_13; }
	inline void set_fadingTipPanel_13(bool value)
	{
		___fadingTipPanel_13 = value;
	}

	inline static int32_t get_offset_of_onTitle_14() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___onTitle_14)); }
	inline bool get_onTitle_14() const { return ___onTitle_14; }
	inline bool* get_address_of_onTitle_14() { return &___onTitle_14; }
	inline void set_onTitle_14(bool value)
	{
		___onTitle_14 = value;
	}

	inline static int32_t get_offset_of_currPanel_15() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___currPanel_15)); }
	inline int32_t get_currPanel_15() const { return ___currPanel_15; }
	inline int32_t* get_address_of_currPanel_15() { return &___currPanel_15; }
	inline void set_currPanel_15(int32_t value)
	{
		___currPanel_15 = value;
	}

	inline static int32_t get_offset_of_aSrc_16() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___aSrc_16)); }
	inline AudioSource_t3935305588 * get_aSrc_16() const { return ___aSrc_16; }
	inline AudioSource_t3935305588 ** get_address_of_aSrc_16() { return &___aSrc_16; }
	inline void set_aSrc_16(AudioSource_t3935305588 * value)
	{
		___aSrc_16 = value;
		Il2CppCodeGenWriteBarrier((&___aSrc_16), value);
	}

	inline static int32_t get_offset_of_clickClip_17() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___clickClip_17)); }
	inline AudioClip_t3680889665 * get_clickClip_17() const { return ___clickClip_17; }
	inline AudioClip_t3680889665 ** get_address_of_clickClip_17() { return &___clickClip_17; }
	inline void set_clickClip_17(AudioClip_t3680889665 * value)
	{
		___clickClip_17 = value;
		Il2CppCodeGenWriteBarrier((&___clickClip_17), value);
	}

	inline static int32_t get_offset_of_clickAsrc_18() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___clickAsrc_18)); }
	inline AudioSource_t3935305588 * get_clickAsrc_18() const { return ___clickAsrc_18; }
	inline AudioSource_t3935305588 ** get_address_of_clickAsrc_18() { return &___clickAsrc_18; }
	inline void set_clickAsrc_18(AudioSource_t3935305588 * value)
	{
		___clickAsrc_18 = value;
		Il2CppCodeGenWriteBarrier((&___clickAsrc_18), value);
	}

	inline static int32_t get_offset_of_notification_19() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___notification_19)); }
	inline MenuNotification_t963843896 * get_notification_19() const { return ___notification_19; }
	inline MenuNotification_t963843896 ** get_address_of_notification_19() { return &___notification_19; }
	inline void set_notification_19(MenuNotification_t963843896 * value)
	{
		___notification_19 = value;
		Il2CppCodeGenWriteBarrier((&___notification_19), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUFLOWMANAGER_T1614880941_H
#ifndef MENURELATIVEPOSITION_T2871782404_H
#define MENURELATIVEPOSITION_T2871782404_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuRelativePosition
struct  MenuRelativePosition_t2871782404  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform MenuRelativePosition::targetRect
	RectTransform_t3704657025 * ___targetRect_2;
	// UnityEngine.RectTransform MenuRelativePosition::xRelative
	RectTransform_t3704657025 * ___xRelative_3;
	// UnityEngine.RectTransform MenuRelativePosition::yRelative
	RectTransform_t3704657025 * ___yRelative_4;
	// System.Single MenuRelativePosition::xOffset
	float ___xOffset_5;
	// System.Single MenuRelativePosition::yOffset
	float ___yOffset_6;
	// System.Single MenuRelativePosition::xMultiplier
	float ___xMultiplier_7;
	// System.Single MenuRelativePosition::yMultiplier
	float ___yMultiplier_8;
	// UnityEngine.Vector3 MenuRelativePosition::startingPos
	Vector3_t3722313464  ___startingPos_9;
	// System.Single MenuRelativePosition::sXOffset
	float ___sXOffset_10;
	// System.Single MenuRelativePosition::sYOffset
	float ___sYOffset_11;

public:
	inline static int32_t get_offset_of_targetRect_2() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___targetRect_2)); }
	inline RectTransform_t3704657025 * get_targetRect_2() const { return ___targetRect_2; }
	inline RectTransform_t3704657025 ** get_address_of_targetRect_2() { return &___targetRect_2; }
	inline void set_targetRect_2(RectTransform_t3704657025 * value)
	{
		___targetRect_2 = value;
		Il2CppCodeGenWriteBarrier((&___targetRect_2), value);
	}

	inline static int32_t get_offset_of_xRelative_3() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___xRelative_3)); }
	inline RectTransform_t3704657025 * get_xRelative_3() const { return ___xRelative_3; }
	inline RectTransform_t3704657025 ** get_address_of_xRelative_3() { return &___xRelative_3; }
	inline void set_xRelative_3(RectTransform_t3704657025 * value)
	{
		___xRelative_3 = value;
		Il2CppCodeGenWriteBarrier((&___xRelative_3), value);
	}

	inline static int32_t get_offset_of_yRelative_4() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___yRelative_4)); }
	inline RectTransform_t3704657025 * get_yRelative_4() const { return ___yRelative_4; }
	inline RectTransform_t3704657025 ** get_address_of_yRelative_4() { return &___yRelative_4; }
	inline void set_yRelative_4(RectTransform_t3704657025 * value)
	{
		___yRelative_4 = value;
		Il2CppCodeGenWriteBarrier((&___yRelative_4), value);
	}

	inline static int32_t get_offset_of_xOffset_5() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___xOffset_5)); }
	inline float get_xOffset_5() const { return ___xOffset_5; }
	inline float* get_address_of_xOffset_5() { return &___xOffset_5; }
	inline void set_xOffset_5(float value)
	{
		___xOffset_5 = value;
	}

	inline static int32_t get_offset_of_yOffset_6() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___yOffset_6)); }
	inline float get_yOffset_6() const { return ___yOffset_6; }
	inline float* get_address_of_yOffset_6() { return &___yOffset_6; }
	inline void set_yOffset_6(float value)
	{
		___yOffset_6 = value;
	}

	inline static int32_t get_offset_of_xMultiplier_7() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___xMultiplier_7)); }
	inline float get_xMultiplier_7() const { return ___xMultiplier_7; }
	inline float* get_address_of_xMultiplier_7() { return &___xMultiplier_7; }
	inline void set_xMultiplier_7(float value)
	{
		___xMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_yMultiplier_8() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___yMultiplier_8)); }
	inline float get_yMultiplier_8() const { return ___yMultiplier_8; }
	inline float* get_address_of_yMultiplier_8() { return &___yMultiplier_8; }
	inline void set_yMultiplier_8(float value)
	{
		___yMultiplier_8 = value;
	}

	inline static int32_t get_offset_of_startingPos_9() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___startingPos_9)); }
	inline Vector3_t3722313464  get_startingPos_9() const { return ___startingPos_9; }
	inline Vector3_t3722313464 * get_address_of_startingPos_9() { return &___startingPos_9; }
	inline void set_startingPos_9(Vector3_t3722313464  value)
	{
		___startingPos_9 = value;
	}

	inline static int32_t get_offset_of_sXOffset_10() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___sXOffset_10)); }
	inline float get_sXOffset_10() const { return ___sXOffset_10; }
	inline float* get_address_of_sXOffset_10() { return &___sXOffset_10; }
	inline void set_sXOffset_10(float value)
	{
		___sXOffset_10 = value;
	}

	inline static int32_t get_offset_of_sYOffset_11() { return static_cast<int32_t>(offsetof(MenuRelativePosition_t2871782404, ___sYOffset_11)); }
	inline float get_sYOffset_11() const { return ___sYOffset_11; }
	inline float* get_address_of_sYOffset_11() { return &___sYOffset_11; }
	inline void set_sYOffset_11(float value)
	{
		___sYOffset_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENURELATIVEPOSITION_T2871782404_H
#ifndef STAGEMANAGER_T3296066545_H
#define STAGEMANAGER_T3296066545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageManager
struct  StageManager_t3296066545  : public MonoBehaviour_t3962482529
{
public:
	// StageManager/GameState StageManager::state
	int32_t ___state_4;
	// UnityEngine.GameObject StageManager::image
	GameObject_t1113636619 * ___image_5;
	// UnityEngine.Vector2 StageManager::initialImagePosition
	Vector2_t2156229523  ___initialImagePosition_6;
	// UnityEngine.RectTransform StageManager::imageHeader
	RectTransform_t3704657025 * ___imageHeader_7;
	// UnityEngine.Vector3 StageManager::initialImageHeaderPosition
	Vector3_t3722313464  ___initialImageHeaderPosition_8;
	// UnityEngine.RectTransform StageManager::canvasCenter
	RectTransform_t3704657025 * ___canvasCenter_9;
	// UnityEngine.SpriteRenderer StageManager::horizonLine
	SpriteRenderer_t3235626157 * ___horizonLine_10;
	// UnityEngine.SpriteRenderer StageManager::horizonBalloon
	SpriteRenderer_t3235626157 * ___horizonBalloon_11;
	// UnityEngine.GameObject StageManager::horizonLineHit
	GameObject_t1113636619 * ___horizonLineHit_12;
	// System.Single StageManager::horizonLineSpeed
	float ___horizonLineSpeed_13;
	// System.Boolean StageManager::canMoveLine
	bool ___canMoveLine_14;
	// System.Boolean StageManager::horizonLineMoving
	bool ___horizonLineMoving_15;
	// System.Boolean StageManager::stageCompleted
	bool ___stageCompleted_16;
	// System.Int32 StageManager::hitErrors
	int32_t ___hitErrors_17;
	// UnityEngine.UI.Text StageManager::StageCompleted
	Text_t1901882714 * ___StageCompleted_18;
	// UnityEngine.UI.Text StageManager::timeText
	Text_t1901882714 * ___timeText_19;
	// UnityEngine.UI.Text StageManager::errorsText
	Text_t1901882714 * ___errorsText_20;
	// System.Single StageManager::secondsCount
	float ___secondsCount_21;
	// System.Int32 StageManager::minuteCount
	int32_t ___minuteCount_22;
	// System.Int32 StageManager::hourCount
	int32_t ___hourCount_23;
	// UnityEngine.CanvasGroup StageManager::scrollView
	CanvasGroup_t4083511760 * ___scrollView_24;
	// System.Int32 StageManager::PFCount
	int32_t ___PFCount_25;
	// UnityEngine.GameObject StageManager::PF1
	GameObject_t1113636619 * ___PF1_26;
	// UnityEngine.GameObject StageManager::PF2
	GameObject_t1113636619 * ___PF2_27;
	// UnityEngine.GameObject StageManager::PF3
	GameObject_t1113636619 * ___PF3_28;
	// UnityEngine.GameObject StageManager::PF4
	GameObject_t1113636619 * ___PF4_29;
	// UnityEngine.GameObject StageManager::PF
	GameObject_t1113636619 * ___PF_30;
	// UnityEngine.GameObject StageManager::PF1Indicator
	GameObject_t1113636619 * ___PF1Indicator_31;
	// UnityEngine.GameObject StageManager::PF2Indicator
	GameObject_t1113636619 * ___PF2Indicator_32;
	// UnityEngine.GameObject StageManager::PFIndicator
	GameObject_t1113636619 * ___PFIndicator_33;
	// System.Boolean StageManager::PFSelected
	bool ___PFSelected_34;
	// UnityEngine.Vector3 StageManager::InitialPF
	Vector3_t3722313464  ___InitialPF_35;
	// UnityEngine.Vector3 StageManager::InitialPF1
	Vector3_t3722313464  ___InitialPF1_36;
	// UnityEngine.Vector3 StageManager::InitialPF2
	Vector3_t3722313464  ___InitialPF2_37;

public:
	inline static int32_t get_offset_of_state_4() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___state_4)); }
	inline int32_t get_state_4() const { return ___state_4; }
	inline int32_t* get_address_of_state_4() { return &___state_4; }
	inline void set_state_4(int32_t value)
	{
		___state_4 = value;
	}

	inline static int32_t get_offset_of_image_5() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___image_5)); }
	inline GameObject_t1113636619 * get_image_5() const { return ___image_5; }
	inline GameObject_t1113636619 ** get_address_of_image_5() { return &___image_5; }
	inline void set_image_5(GameObject_t1113636619 * value)
	{
		___image_5 = value;
		Il2CppCodeGenWriteBarrier((&___image_5), value);
	}

	inline static int32_t get_offset_of_initialImagePosition_6() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___initialImagePosition_6)); }
	inline Vector2_t2156229523  get_initialImagePosition_6() const { return ___initialImagePosition_6; }
	inline Vector2_t2156229523 * get_address_of_initialImagePosition_6() { return &___initialImagePosition_6; }
	inline void set_initialImagePosition_6(Vector2_t2156229523  value)
	{
		___initialImagePosition_6 = value;
	}

	inline static int32_t get_offset_of_imageHeader_7() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___imageHeader_7)); }
	inline RectTransform_t3704657025 * get_imageHeader_7() const { return ___imageHeader_7; }
	inline RectTransform_t3704657025 ** get_address_of_imageHeader_7() { return &___imageHeader_7; }
	inline void set_imageHeader_7(RectTransform_t3704657025 * value)
	{
		___imageHeader_7 = value;
		Il2CppCodeGenWriteBarrier((&___imageHeader_7), value);
	}

	inline static int32_t get_offset_of_initialImageHeaderPosition_8() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___initialImageHeaderPosition_8)); }
	inline Vector3_t3722313464  get_initialImageHeaderPosition_8() const { return ___initialImageHeaderPosition_8; }
	inline Vector3_t3722313464 * get_address_of_initialImageHeaderPosition_8() { return &___initialImageHeaderPosition_8; }
	inline void set_initialImageHeaderPosition_8(Vector3_t3722313464  value)
	{
		___initialImageHeaderPosition_8 = value;
	}

	inline static int32_t get_offset_of_canvasCenter_9() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___canvasCenter_9)); }
	inline RectTransform_t3704657025 * get_canvasCenter_9() const { return ___canvasCenter_9; }
	inline RectTransform_t3704657025 ** get_address_of_canvasCenter_9() { return &___canvasCenter_9; }
	inline void set_canvasCenter_9(RectTransform_t3704657025 * value)
	{
		___canvasCenter_9 = value;
		Il2CppCodeGenWriteBarrier((&___canvasCenter_9), value);
	}

	inline static int32_t get_offset_of_horizonLine_10() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___horizonLine_10)); }
	inline SpriteRenderer_t3235626157 * get_horizonLine_10() const { return ___horizonLine_10; }
	inline SpriteRenderer_t3235626157 ** get_address_of_horizonLine_10() { return &___horizonLine_10; }
	inline void set_horizonLine_10(SpriteRenderer_t3235626157 * value)
	{
		___horizonLine_10 = value;
		Il2CppCodeGenWriteBarrier((&___horizonLine_10), value);
	}

	inline static int32_t get_offset_of_horizonBalloon_11() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___horizonBalloon_11)); }
	inline SpriteRenderer_t3235626157 * get_horizonBalloon_11() const { return ___horizonBalloon_11; }
	inline SpriteRenderer_t3235626157 ** get_address_of_horizonBalloon_11() { return &___horizonBalloon_11; }
	inline void set_horizonBalloon_11(SpriteRenderer_t3235626157 * value)
	{
		___horizonBalloon_11 = value;
		Il2CppCodeGenWriteBarrier((&___horizonBalloon_11), value);
	}

	inline static int32_t get_offset_of_horizonLineHit_12() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___horizonLineHit_12)); }
	inline GameObject_t1113636619 * get_horizonLineHit_12() const { return ___horizonLineHit_12; }
	inline GameObject_t1113636619 ** get_address_of_horizonLineHit_12() { return &___horizonLineHit_12; }
	inline void set_horizonLineHit_12(GameObject_t1113636619 * value)
	{
		___horizonLineHit_12 = value;
		Il2CppCodeGenWriteBarrier((&___horizonLineHit_12), value);
	}

	inline static int32_t get_offset_of_horizonLineSpeed_13() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___horizonLineSpeed_13)); }
	inline float get_horizonLineSpeed_13() const { return ___horizonLineSpeed_13; }
	inline float* get_address_of_horizonLineSpeed_13() { return &___horizonLineSpeed_13; }
	inline void set_horizonLineSpeed_13(float value)
	{
		___horizonLineSpeed_13 = value;
	}

	inline static int32_t get_offset_of_canMoveLine_14() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___canMoveLine_14)); }
	inline bool get_canMoveLine_14() const { return ___canMoveLine_14; }
	inline bool* get_address_of_canMoveLine_14() { return &___canMoveLine_14; }
	inline void set_canMoveLine_14(bool value)
	{
		___canMoveLine_14 = value;
	}

	inline static int32_t get_offset_of_horizonLineMoving_15() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___horizonLineMoving_15)); }
	inline bool get_horizonLineMoving_15() const { return ___horizonLineMoving_15; }
	inline bool* get_address_of_horizonLineMoving_15() { return &___horizonLineMoving_15; }
	inline void set_horizonLineMoving_15(bool value)
	{
		___horizonLineMoving_15 = value;
	}

	inline static int32_t get_offset_of_stageCompleted_16() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___stageCompleted_16)); }
	inline bool get_stageCompleted_16() const { return ___stageCompleted_16; }
	inline bool* get_address_of_stageCompleted_16() { return &___stageCompleted_16; }
	inline void set_stageCompleted_16(bool value)
	{
		___stageCompleted_16 = value;
	}

	inline static int32_t get_offset_of_hitErrors_17() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___hitErrors_17)); }
	inline int32_t get_hitErrors_17() const { return ___hitErrors_17; }
	inline int32_t* get_address_of_hitErrors_17() { return &___hitErrors_17; }
	inline void set_hitErrors_17(int32_t value)
	{
		___hitErrors_17 = value;
	}

	inline static int32_t get_offset_of_StageCompleted_18() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___StageCompleted_18)); }
	inline Text_t1901882714 * get_StageCompleted_18() const { return ___StageCompleted_18; }
	inline Text_t1901882714 ** get_address_of_StageCompleted_18() { return &___StageCompleted_18; }
	inline void set_StageCompleted_18(Text_t1901882714 * value)
	{
		___StageCompleted_18 = value;
		Il2CppCodeGenWriteBarrier((&___StageCompleted_18), value);
	}

	inline static int32_t get_offset_of_timeText_19() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___timeText_19)); }
	inline Text_t1901882714 * get_timeText_19() const { return ___timeText_19; }
	inline Text_t1901882714 ** get_address_of_timeText_19() { return &___timeText_19; }
	inline void set_timeText_19(Text_t1901882714 * value)
	{
		___timeText_19 = value;
		Il2CppCodeGenWriteBarrier((&___timeText_19), value);
	}

	inline static int32_t get_offset_of_errorsText_20() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___errorsText_20)); }
	inline Text_t1901882714 * get_errorsText_20() const { return ___errorsText_20; }
	inline Text_t1901882714 ** get_address_of_errorsText_20() { return &___errorsText_20; }
	inline void set_errorsText_20(Text_t1901882714 * value)
	{
		___errorsText_20 = value;
		Il2CppCodeGenWriteBarrier((&___errorsText_20), value);
	}

	inline static int32_t get_offset_of_secondsCount_21() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___secondsCount_21)); }
	inline float get_secondsCount_21() const { return ___secondsCount_21; }
	inline float* get_address_of_secondsCount_21() { return &___secondsCount_21; }
	inline void set_secondsCount_21(float value)
	{
		___secondsCount_21 = value;
	}

	inline static int32_t get_offset_of_minuteCount_22() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___minuteCount_22)); }
	inline int32_t get_minuteCount_22() const { return ___minuteCount_22; }
	inline int32_t* get_address_of_minuteCount_22() { return &___minuteCount_22; }
	inline void set_minuteCount_22(int32_t value)
	{
		___minuteCount_22 = value;
	}

	inline static int32_t get_offset_of_hourCount_23() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___hourCount_23)); }
	inline int32_t get_hourCount_23() const { return ___hourCount_23; }
	inline int32_t* get_address_of_hourCount_23() { return &___hourCount_23; }
	inline void set_hourCount_23(int32_t value)
	{
		___hourCount_23 = value;
	}

	inline static int32_t get_offset_of_scrollView_24() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___scrollView_24)); }
	inline CanvasGroup_t4083511760 * get_scrollView_24() const { return ___scrollView_24; }
	inline CanvasGroup_t4083511760 ** get_address_of_scrollView_24() { return &___scrollView_24; }
	inline void set_scrollView_24(CanvasGroup_t4083511760 * value)
	{
		___scrollView_24 = value;
		Il2CppCodeGenWriteBarrier((&___scrollView_24), value);
	}

	inline static int32_t get_offset_of_PFCount_25() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PFCount_25)); }
	inline int32_t get_PFCount_25() const { return ___PFCount_25; }
	inline int32_t* get_address_of_PFCount_25() { return &___PFCount_25; }
	inline void set_PFCount_25(int32_t value)
	{
		___PFCount_25 = value;
	}

	inline static int32_t get_offset_of_PF1_26() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF1_26)); }
	inline GameObject_t1113636619 * get_PF1_26() const { return ___PF1_26; }
	inline GameObject_t1113636619 ** get_address_of_PF1_26() { return &___PF1_26; }
	inline void set_PF1_26(GameObject_t1113636619 * value)
	{
		___PF1_26 = value;
		Il2CppCodeGenWriteBarrier((&___PF1_26), value);
	}

	inline static int32_t get_offset_of_PF2_27() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF2_27)); }
	inline GameObject_t1113636619 * get_PF2_27() const { return ___PF2_27; }
	inline GameObject_t1113636619 ** get_address_of_PF2_27() { return &___PF2_27; }
	inline void set_PF2_27(GameObject_t1113636619 * value)
	{
		___PF2_27 = value;
		Il2CppCodeGenWriteBarrier((&___PF2_27), value);
	}

	inline static int32_t get_offset_of_PF3_28() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF3_28)); }
	inline GameObject_t1113636619 * get_PF3_28() const { return ___PF3_28; }
	inline GameObject_t1113636619 ** get_address_of_PF3_28() { return &___PF3_28; }
	inline void set_PF3_28(GameObject_t1113636619 * value)
	{
		___PF3_28 = value;
		Il2CppCodeGenWriteBarrier((&___PF3_28), value);
	}

	inline static int32_t get_offset_of_PF4_29() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF4_29)); }
	inline GameObject_t1113636619 * get_PF4_29() const { return ___PF4_29; }
	inline GameObject_t1113636619 ** get_address_of_PF4_29() { return &___PF4_29; }
	inline void set_PF4_29(GameObject_t1113636619 * value)
	{
		___PF4_29 = value;
		Il2CppCodeGenWriteBarrier((&___PF4_29), value);
	}

	inline static int32_t get_offset_of_PF_30() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF_30)); }
	inline GameObject_t1113636619 * get_PF_30() const { return ___PF_30; }
	inline GameObject_t1113636619 ** get_address_of_PF_30() { return &___PF_30; }
	inline void set_PF_30(GameObject_t1113636619 * value)
	{
		___PF_30 = value;
		Il2CppCodeGenWriteBarrier((&___PF_30), value);
	}

	inline static int32_t get_offset_of_PF1Indicator_31() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF1Indicator_31)); }
	inline GameObject_t1113636619 * get_PF1Indicator_31() const { return ___PF1Indicator_31; }
	inline GameObject_t1113636619 ** get_address_of_PF1Indicator_31() { return &___PF1Indicator_31; }
	inline void set_PF1Indicator_31(GameObject_t1113636619 * value)
	{
		___PF1Indicator_31 = value;
		Il2CppCodeGenWriteBarrier((&___PF1Indicator_31), value);
	}

	inline static int32_t get_offset_of_PF2Indicator_32() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF2Indicator_32)); }
	inline GameObject_t1113636619 * get_PF2Indicator_32() const { return ___PF2Indicator_32; }
	inline GameObject_t1113636619 ** get_address_of_PF2Indicator_32() { return &___PF2Indicator_32; }
	inline void set_PF2Indicator_32(GameObject_t1113636619 * value)
	{
		___PF2Indicator_32 = value;
		Il2CppCodeGenWriteBarrier((&___PF2Indicator_32), value);
	}

	inline static int32_t get_offset_of_PFIndicator_33() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PFIndicator_33)); }
	inline GameObject_t1113636619 * get_PFIndicator_33() const { return ___PFIndicator_33; }
	inline GameObject_t1113636619 ** get_address_of_PFIndicator_33() { return &___PFIndicator_33; }
	inline void set_PFIndicator_33(GameObject_t1113636619 * value)
	{
		___PFIndicator_33 = value;
		Il2CppCodeGenWriteBarrier((&___PFIndicator_33), value);
	}

	inline static int32_t get_offset_of_PFSelected_34() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PFSelected_34)); }
	inline bool get_PFSelected_34() const { return ___PFSelected_34; }
	inline bool* get_address_of_PFSelected_34() { return &___PFSelected_34; }
	inline void set_PFSelected_34(bool value)
	{
		___PFSelected_34 = value;
	}

	inline static int32_t get_offset_of_InitialPF_35() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___InitialPF_35)); }
	inline Vector3_t3722313464  get_InitialPF_35() const { return ___InitialPF_35; }
	inline Vector3_t3722313464 * get_address_of_InitialPF_35() { return &___InitialPF_35; }
	inline void set_InitialPF_35(Vector3_t3722313464  value)
	{
		___InitialPF_35 = value;
	}

	inline static int32_t get_offset_of_InitialPF1_36() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___InitialPF1_36)); }
	inline Vector3_t3722313464  get_InitialPF1_36() const { return ___InitialPF1_36; }
	inline Vector3_t3722313464 * get_address_of_InitialPF1_36() { return &___InitialPF1_36; }
	inline void set_InitialPF1_36(Vector3_t3722313464  value)
	{
		___InitialPF1_36 = value;
	}

	inline static int32_t get_offset_of_InitialPF2_37() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___InitialPF2_37)); }
	inline Vector3_t3722313464  get_InitialPF2_37() const { return ___InitialPF2_37; }
	inline Vector3_t3722313464 * get_address_of_InitialPF2_37() { return &___InitialPF2_37; }
	inline void set_InitialPF2_37(Vector3_t3722313464  value)
	{
		___InitialPF2_37 = value;
	}
};

struct StageManager_t3296066545_StaticFields
{
public:
	// System.Single StageManager::HIT_RANGE
	float ___HIT_RANGE_2;
	// System.Single StageManager::CHANGE_STATE_SPEED
	float ___CHANGE_STATE_SPEED_3;

public:
	inline static int32_t get_offset_of_HIT_RANGE_2() { return static_cast<int32_t>(offsetof(StageManager_t3296066545_StaticFields, ___HIT_RANGE_2)); }
	inline float get_HIT_RANGE_2() const { return ___HIT_RANGE_2; }
	inline float* get_address_of_HIT_RANGE_2() { return &___HIT_RANGE_2; }
	inline void set_HIT_RANGE_2(float value)
	{
		___HIT_RANGE_2 = value;
	}

	inline static int32_t get_offset_of_CHANGE_STATE_SPEED_3() { return static_cast<int32_t>(offsetof(StageManager_t3296066545_StaticFields, ___CHANGE_STATE_SPEED_3)); }
	inline float get_CHANGE_STATE_SPEED_3() const { return ___CHANGE_STATE_SPEED_3; }
	inline float* get_address_of_CHANGE_STATE_SPEED_3() { return &___CHANGE_STATE_SPEED_3; }
	inline void set_CHANGE_STATE_SPEED_3(float value)
	{
		___CHANGE_STATE_SPEED_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGEMANAGER_T3296066545_H
#ifndef MENUNOTIFICATION_T963843896_H
#define MENUNOTIFICATION_T963843896_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuNotification
struct  MenuNotification_t963843896  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform MenuNotification::notificationPanel
	RectTransform_t3704657025 * ___notificationPanel_2;
	// UnityEngine.UI.Text MenuNotification::notificationText
	Text_t1901882714 * ___notificationText_3;
	// System.Boolean MenuNotification::moving
	bool ___moving_4;
	// System.Boolean MenuNotification::popping
	bool ___popping_5;

public:
	inline static int32_t get_offset_of_notificationPanel_2() { return static_cast<int32_t>(offsetof(MenuNotification_t963843896, ___notificationPanel_2)); }
	inline RectTransform_t3704657025 * get_notificationPanel_2() const { return ___notificationPanel_2; }
	inline RectTransform_t3704657025 ** get_address_of_notificationPanel_2() { return &___notificationPanel_2; }
	inline void set_notificationPanel_2(RectTransform_t3704657025 * value)
	{
		___notificationPanel_2 = value;
		Il2CppCodeGenWriteBarrier((&___notificationPanel_2), value);
	}

	inline static int32_t get_offset_of_notificationText_3() { return static_cast<int32_t>(offsetof(MenuNotification_t963843896, ___notificationText_3)); }
	inline Text_t1901882714 * get_notificationText_3() const { return ___notificationText_3; }
	inline Text_t1901882714 ** get_address_of_notificationText_3() { return &___notificationText_3; }
	inline void set_notificationText_3(Text_t1901882714 * value)
	{
		___notificationText_3 = value;
		Il2CppCodeGenWriteBarrier((&___notificationText_3), value);
	}

	inline static int32_t get_offset_of_moving_4() { return static_cast<int32_t>(offsetof(MenuNotification_t963843896, ___moving_4)); }
	inline bool get_moving_4() const { return ___moving_4; }
	inline bool* get_address_of_moving_4() { return &___moving_4; }
	inline void set_moving_4(bool value)
	{
		___moving_4 = value;
	}

	inline static int32_t get_offset_of_popping_5() { return static_cast<int32_t>(offsetof(MenuNotification_t963843896, ___popping_5)); }
	inline bool get_popping_5() const { return ___popping_5; }
	inline bool* get_address_of_popping_5() { return &___popping_5; }
	inline void set_popping_5(bool value)
	{
		___popping_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUNOTIFICATION_T963843896_H
#ifndef GRAPHIC_T1660335611_H
#define GRAPHIC_T1660335611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Graphic
struct  Graphic_t1660335611  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t340375123 * ___m_Material_4;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t2555686324  ___m_Color_5;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_6;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t3704657025 * ___m_RectTransform_7;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRender
	CanvasRenderer_t2598313366 * ___m_CanvasRender_8;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t3310196443 * ___m_Canvas_9;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_10;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_11;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t3245792599 * ___m_OnDirtyLayoutCallback_12;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t3245792599 * ___m_OnDirtyVertsCallback_13;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t3245792599 * ___m_OnDirtyMaterialCallback_14;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t3055525458 * ___m_ColorTweenRunner_17;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18;

public:
	inline static int32_t get_offset_of_m_Material_4() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Material_4)); }
	inline Material_t340375123 * get_m_Material_4() const { return ___m_Material_4; }
	inline Material_t340375123 ** get_address_of_m_Material_4() { return &___m_Material_4; }
	inline void set_m_Material_4(Material_t340375123 * value)
	{
		___m_Material_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Material_4), value);
	}

	inline static int32_t get_offset_of_m_Color_5() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Color_5)); }
	inline Color_t2555686324  get_m_Color_5() const { return ___m_Color_5; }
	inline Color_t2555686324 * get_address_of_m_Color_5() { return &___m_Color_5; }
	inline void set_m_Color_5(Color_t2555686324  value)
	{
		___m_Color_5 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_6() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RaycastTarget_6)); }
	inline bool get_m_RaycastTarget_6() const { return ___m_RaycastTarget_6; }
	inline bool* get_address_of_m_RaycastTarget_6() { return &___m_RaycastTarget_6; }
	inline void set_m_RaycastTarget_6(bool value)
	{
		___m_RaycastTarget_6 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_7() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_RectTransform_7)); }
	inline RectTransform_t3704657025 * get_m_RectTransform_7() const { return ___m_RectTransform_7; }
	inline RectTransform_t3704657025 ** get_address_of_m_RectTransform_7() { return &___m_RectTransform_7; }
	inline void set_m_RectTransform_7(RectTransform_t3704657025 * value)
	{
		___m_RectTransform_7 = value;
		Il2CppCodeGenWriteBarrier((&___m_RectTransform_7), value);
	}

	inline static int32_t get_offset_of_m_CanvasRender_8() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_CanvasRender_8)); }
	inline CanvasRenderer_t2598313366 * get_m_CanvasRender_8() const { return ___m_CanvasRender_8; }
	inline CanvasRenderer_t2598313366 ** get_address_of_m_CanvasRender_8() { return &___m_CanvasRender_8; }
	inline void set_m_CanvasRender_8(CanvasRenderer_t2598313366 * value)
	{
		___m_CanvasRender_8 = value;
		Il2CppCodeGenWriteBarrier((&___m_CanvasRender_8), value);
	}

	inline static int32_t get_offset_of_m_Canvas_9() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_Canvas_9)); }
	inline Canvas_t3310196443 * get_m_Canvas_9() const { return ___m_Canvas_9; }
	inline Canvas_t3310196443 ** get_address_of_m_Canvas_9() { return &___m_Canvas_9; }
	inline void set_m_Canvas_9(Canvas_t3310196443 * value)
	{
		___m_Canvas_9 = value;
		Il2CppCodeGenWriteBarrier((&___m_Canvas_9), value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_10() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_VertsDirty_10)); }
	inline bool get_m_VertsDirty_10() const { return ___m_VertsDirty_10; }
	inline bool* get_address_of_m_VertsDirty_10() { return &___m_VertsDirty_10; }
	inline void set_m_VertsDirty_10(bool value)
	{
		___m_VertsDirty_10 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_11() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_MaterialDirty_11)); }
	inline bool get_m_MaterialDirty_11() const { return ___m_MaterialDirty_11; }
	inline bool* get_address_of_m_MaterialDirty_11() { return &___m_MaterialDirty_11; }
	inline void set_m_MaterialDirty_11(bool value)
	{
		___m_MaterialDirty_11 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_12() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyLayoutCallback_12)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyLayoutCallback_12() const { return ___m_OnDirtyLayoutCallback_12; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyLayoutCallback_12() { return &___m_OnDirtyLayoutCallback_12; }
	inline void set_m_OnDirtyLayoutCallback_12(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyLayoutCallback_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyLayoutCallback_12), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_13() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyVertsCallback_13)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyVertsCallback_13() const { return ___m_OnDirtyVertsCallback_13; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyVertsCallback_13() { return &___m_OnDirtyVertsCallback_13; }
	inline void set_m_OnDirtyVertsCallback_13(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyVertsCallback_13 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyVertsCallback_13), value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_14() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_OnDirtyMaterialCallback_14)); }
	inline UnityAction_t3245792599 * get_m_OnDirtyMaterialCallback_14() const { return ___m_OnDirtyMaterialCallback_14; }
	inline UnityAction_t3245792599 ** get_address_of_m_OnDirtyMaterialCallback_14() { return &___m_OnDirtyMaterialCallback_14; }
	inline void set_m_OnDirtyMaterialCallback_14(UnityAction_t3245792599 * value)
	{
		___m_OnDirtyMaterialCallback_14 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnDirtyMaterialCallback_14), value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_17() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___m_ColorTweenRunner_17)); }
	inline TweenRunner_1_t3055525458 * get_m_ColorTweenRunner_17() const { return ___m_ColorTweenRunner_17; }
	inline TweenRunner_1_t3055525458 ** get_address_of_m_ColorTweenRunner_17() { return &___m_ColorTweenRunner_17; }
	inline void set_m_ColorTweenRunner_17(TweenRunner_1_t3055525458 * value)
	{
		___m_ColorTweenRunner_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_ColorTweenRunner_17), value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Graphic_t1660335611, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_18() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_18; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_18(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_18 = value;
	}
};

struct Graphic_t1660335611_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t340375123 * ___s_DefaultUI_2;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t3840446185 * ___s_WhiteTexture_3;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t3648964284 * ___s_Mesh_15;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t2453304189 * ___s_VertexHelper_16;

public:
	inline static int32_t get_offset_of_s_DefaultUI_2() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_DefaultUI_2)); }
	inline Material_t340375123 * get_s_DefaultUI_2() const { return ___s_DefaultUI_2; }
	inline Material_t340375123 ** get_address_of_s_DefaultUI_2() { return &___s_DefaultUI_2; }
	inline void set_s_DefaultUI_2(Material_t340375123 * value)
	{
		___s_DefaultUI_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultUI_2), value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_3() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_WhiteTexture_3)); }
	inline Texture2D_t3840446185 * get_s_WhiteTexture_3() const { return ___s_WhiteTexture_3; }
	inline Texture2D_t3840446185 ** get_address_of_s_WhiteTexture_3() { return &___s_WhiteTexture_3; }
	inline void set_s_WhiteTexture_3(Texture2D_t3840446185 * value)
	{
		___s_WhiteTexture_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_WhiteTexture_3), value);
	}

	inline static int32_t get_offset_of_s_Mesh_15() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_Mesh_15)); }
	inline Mesh_t3648964284 * get_s_Mesh_15() const { return ___s_Mesh_15; }
	inline Mesh_t3648964284 ** get_address_of_s_Mesh_15() { return &___s_Mesh_15; }
	inline void set_s_Mesh_15(Mesh_t3648964284 * value)
	{
		___s_Mesh_15 = value;
		Il2CppCodeGenWriteBarrier((&___s_Mesh_15), value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_16() { return static_cast<int32_t>(offsetof(Graphic_t1660335611_StaticFields, ___s_VertexHelper_16)); }
	inline VertexHelper_t2453304189 * get_s_VertexHelper_16() const { return ___s_VertexHelper_16; }
	inline VertexHelper_t2453304189 ** get_address_of_s_VertexHelper_16() { return &___s_VertexHelper_16; }
	inline void set_s_VertexHelper_16(VertexHelper_t2453304189 * value)
	{
		___s_VertexHelper_16 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertexHelper_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GRAPHIC_T1660335611_H
#ifndef SCROLLRECT_T4137855814_H
#define SCROLLRECT_T4137855814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.ScrollRect
struct  ScrollRect_t4137855814  : public UIBehaviour_t3495933518
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t3704657025 * ___m_Content_2;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_3;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_4;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_5;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_6;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_7;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_8;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_9;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t3704657025 * ___m_Viewport_10;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_t1494447233 * ___m_HorizontalScrollbar_11;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_t1494447233 * ___m_VerticalScrollbar_12;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_13;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_14;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_15;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_16;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_t343079324 * ___m_OnValueChanged_17;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_t2156229523  ___m_PointerStartLocalCursor_18;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_t2156229523  ___m_ContentStartPosition_19;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t3704657025 * ___m_ViewRect_20;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t2266837910  ___m_ContentBounds_21;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t2266837910  ___m_ViewBounds_22;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_t2156229523  ___m_Velocity_23;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_t2156229523  ___m_PrevPosition_25;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t2266837910  ___m_PrevContentBounds_26;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t2266837910  ___m_PrevViewBounds_27;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_28;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_29;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_30;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_31;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_32;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t3704657025 * ___m_Rect_33;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t3704657025 * ___m_HorizontalScrollbarRect_34;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t3704657025 * ___m_VerticalScrollbarRect_35;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t2562230146  ___m_Tracker_36;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_37;

public:
	inline static int32_t get_offset_of_m_Content_2() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Content_2)); }
	inline RectTransform_t3704657025 * get_m_Content_2() const { return ___m_Content_2; }
	inline RectTransform_t3704657025 ** get_address_of_m_Content_2() { return &___m_Content_2; }
	inline void set_m_Content_2(RectTransform_t3704657025 * value)
	{
		___m_Content_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Content_2), value);
	}

	inline static int32_t get_offset_of_m_Horizontal_3() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Horizontal_3)); }
	inline bool get_m_Horizontal_3() const { return ___m_Horizontal_3; }
	inline bool* get_address_of_m_Horizontal_3() { return &___m_Horizontal_3; }
	inline void set_m_Horizontal_3(bool value)
	{
		___m_Horizontal_3 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_4() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Vertical_4)); }
	inline bool get_m_Vertical_4() const { return ___m_Vertical_4; }
	inline bool* get_address_of_m_Vertical_4() { return &___m_Vertical_4; }
	inline void set_m_Vertical_4(bool value)
	{
		___m_Vertical_4 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_5() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_MovementType_5)); }
	inline int32_t get_m_MovementType_5() const { return ___m_MovementType_5; }
	inline int32_t* get_address_of_m_MovementType_5() { return &___m_MovementType_5; }
	inline void set_m_MovementType_5(int32_t value)
	{
		___m_MovementType_5 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_6() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Elasticity_6)); }
	inline float get_m_Elasticity_6() const { return ___m_Elasticity_6; }
	inline float* get_address_of_m_Elasticity_6() { return &___m_Elasticity_6; }
	inline void set_m_Elasticity_6(float value)
	{
		___m_Elasticity_6 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_7() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Inertia_7)); }
	inline bool get_m_Inertia_7() const { return ___m_Inertia_7; }
	inline bool* get_address_of_m_Inertia_7() { return &___m_Inertia_7; }
	inline void set_m_Inertia_7(bool value)
	{
		___m_Inertia_7 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_8() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_DecelerationRate_8)); }
	inline float get_m_DecelerationRate_8() const { return ___m_DecelerationRate_8; }
	inline float* get_address_of_m_DecelerationRate_8() { return &___m_DecelerationRate_8; }
	inline void set_m_DecelerationRate_8(float value)
	{
		___m_DecelerationRate_8 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_9() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ScrollSensitivity_9)); }
	inline float get_m_ScrollSensitivity_9() const { return ___m_ScrollSensitivity_9; }
	inline float* get_address_of_m_ScrollSensitivity_9() { return &___m_ScrollSensitivity_9; }
	inline void set_m_ScrollSensitivity_9(float value)
	{
		___m_ScrollSensitivity_9 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_10() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Viewport_10)); }
	inline RectTransform_t3704657025 * get_m_Viewport_10() const { return ___m_Viewport_10; }
	inline RectTransform_t3704657025 ** get_address_of_m_Viewport_10() { return &___m_Viewport_10; }
	inline void set_m_Viewport_10(RectTransform_t3704657025 * value)
	{
		___m_Viewport_10 = value;
		Il2CppCodeGenWriteBarrier((&___m_Viewport_10), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_11() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbar_11)); }
	inline Scrollbar_t1494447233 * get_m_HorizontalScrollbar_11() const { return ___m_HorizontalScrollbar_11; }
	inline Scrollbar_t1494447233 ** get_address_of_m_HorizontalScrollbar_11() { return &___m_HorizontalScrollbar_11; }
	inline void set_m_HorizontalScrollbar_11(Scrollbar_t1494447233 * value)
	{
		___m_HorizontalScrollbar_11 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbar_11), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_12() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbar_12)); }
	inline Scrollbar_t1494447233 * get_m_VerticalScrollbar_12() const { return ___m_VerticalScrollbar_12; }
	inline Scrollbar_t1494447233 ** get_address_of_m_VerticalScrollbar_12() { return &___m_VerticalScrollbar_12; }
	inline void set_m_VerticalScrollbar_12(Scrollbar_t1494447233 * value)
	{
		___m_VerticalScrollbar_12 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbar_12), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_13() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarVisibility_13)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_13() const { return ___m_HorizontalScrollbarVisibility_13; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_13() { return &___m_HorizontalScrollbarVisibility_13; }
	inline void set_m_HorizontalScrollbarVisibility_13(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_13 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_14() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarVisibility_14)); }
	inline int32_t get_m_VerticalScrollbarVisibility_14() const { return ___m_VerticalScrollbarVisibility_14; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_14() { return &___m_VerticalScrollbarVisibility_14; }
	inline void set_m_VerticalScrollbarVisibility_14(int32_t value)
	{
		___m_VerticalScrollbarVisibility_14 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_15() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarSpacing_15)); }
	inline float get_m_HorizontalScrollbarSpacing_15() const { return ___m_HorizontalScrollbarSpacing_15; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_15() { return &___m_HorizontalScrollbarSpacing_15; }
	inline void set_m_HorizontalScrollbarSpacing_15(float value)
	{
		___m_HorizontalScrollbarSpacing_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_16() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarSpacing_16)); }
	inline float get_m_VerticalScrollbarSpacing_16() const { return ___m_VerticalScrollbarSpacing_16; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_16() { return &___m_VerticalScrollbarSpacing_16; }
	inline void set_m_VerticalScrollbarSpacing_16(float value)
	{
		___m_VerticalScrollbarSpacing_16 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_17() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_OnValueChanged_17)); }
	inline ScrollRectEvent_t343079324 * get_m_OnValueChanged_17() const { return ___m_OnValueChanged_17; }
	inline ScrollRectEvent_t343079324 ** get_address_of_m_OnValueChanged_17() { return &___m_OnValueChanged_17; }
	inline void set_m_OnValueChanged_17(ScrollRectEvent_t343079324 * value)
	{
		___m_OnValueChanged_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnValueChanged_17), value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_18() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PointerStartLocalCursor_18)); }
	inline Vector2_t2156229523  get_m_PointerStartLocalCursor_18() const { return ___m_PointerStartLocalCursor_18; }
	inline Vector2_t2156229523 * get_address_of_m_PointerStartLocalCursor_18() { return &___m_PointerStartLocalCursor_18; }
	inline void set_m_PointerStartLocalCursor_18(Vector2_t2156229523  value)
	{
		___m_PointerStartLocalCursor_18 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_19() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentStartPosition_19)); }
	inline Vector2_t2156229523  get_m_ContentStartPosition_19() const { return ___m_ContentStartPosition_19; }
	inline Vector2_t2156229523 * get_address_of_m_ContentStartPosition_19() { return &___m_ContentStartPosition_19; }
	inline void set_m_ContentStartPosition_19(Vector2_t2156229523  value)
	{
		___m_ContentStartPosition_19 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_20() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewRect_20)); }
	inline RectTransform_t3704657025 * get_m_ViewRect_20() const { return ___m_ViewRect_20; }
	inline RectTransform_t3704657025 ** get_address_of_m_ViewRect_20() { return &___m_ViewRect_20; }
	inline void set_m_ViewRect_20(RectTransform_t3704657025 * value)
	{
		___m_ViewRect_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_ViewRect_20), value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_21() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ContentBounds_21)); }
	inline Bounds_t2266837910  get_m_ContentBounds_21() const { return ___m_ContentBounds_21; }
	inline Bounds_t2266837910 * get_address_of_m_ContentBounds_21() { return &___m_ContentBounds_21; }
	inline void set_m_ContentBounds_21(Bounds_t2266837910  value)
	{
		___m_ContentBounds_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_22() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_ViewBounds_22)); }
	inline Bounds_t2266837910  get_m_ViewBounds_22() const { return ___m_ViewBounds_22; }
	inline Bounds_t2266837910 * get_address_of_m_ViewBounds_22() { return &___m_ViewBounds_22; }
	inline void set_m_ViewBounds_22(Bounds_t2266837910  value)
	{
		___m_ViewBounds_22 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_23() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Velocity_23)); }
	inline Vector2_t2156229523  get_m_Velocity_23() const { return ___m_Velocity_23; }
	inline Vector2_t2156229523 * get_address_of_m_Velocity_23() { return &___m_Velocity_23; }
	inline void set_m_Velocity_23(Vector2_t2156229523  value)
	{
		___m_Velocity_23 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_24() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Dragging_24)); }
	inline bool get_m_Dragging_24() const { return ___m_Dragging_24; }
	inline bool* get_address_of_m_Dragging_24() { return &___m_Dragging_24; }
	inline void set_m_Dragging_24(bool value)
	{
		___m_Dragging_24 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_25() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevPosition_25)); }
	inline Vector2_t2156229523  get_m_PrevPosition_25() const { return ___m_PrevPosition_25; }
	inline Vector2_t2156229523 * get_address_of_m_PrevPosition_25() { return &___m_PrevPosition_25; }
	inline void set_m_PrevPosition_25(Vector2_t2156229523  value)
	{
		___m_PrevPosition_25 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_26() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevContentBounds_26)); }
	inline Bounds_t2266837910  get_m_PrevContentBounds_26() const { return ___m_PrevContentBounds_26; }
	inline Bounds_t2266837910 * get_address_of_m_PrevContentBounds_26() { return &___m_PrevContentBounds_26; }
	inline void set_m_PrevContentBounds_26(Bounds_t2266837910  value)
	{
		___m_PrevContentBounds_26 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_27() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_PrevViewBounds_27)); }
	inline Bounds_t2266837910  get_m_PrevViewBounds_27() const { return ___m_PrevViewBounds_27; }
	inline Bounds_t2266837910 * get_address_of_m_PrevViewBounds_27() { return &___m_PrevViewBounds_27; }
	inline void set_m_PrevViewBounds_27(Bounds_t2266837910  value)
	{
		___m_PrevViewBounds_27 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_28() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HasRebuiltLayout_28)); }
	inline bool get_m_HasRebuiltLayout_28() const { return ___m_HasRebuiltLayout_28; }
	inline bool* get_address_of_m_HasRebuiltLayout_28() { return &___m_HasRebuiltLayout_28; }
	inline void set_m_HasRebuiltLayout_28(bool value)
	{
		___m_HasRebuiltLayout_28 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_29() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderExpand_29)); }
	inline bool get_m_HSliderExpand_29() const { return ___m_HSliderExpand_29; }
	inline bool* get_address_of_m_HSliderExpand_29() { return &___m_HSliderExpand_29; }
	inline void set_m_HSliderExpand_29(bool value)
	{
		___m_HSliderExpand_29 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_30() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderExpand_30)); }
	inline bool get_m_VSliderExpand_30() const { return ___m_VSliderExpand_30; }
	inline bool* get_address_of_m_VSliderExpand_30() { return &___m_VSliderExpand_30; }
	inline void set_m_VSliderExpand_30(bool value)
	{
		___m_VSliderExpand_30 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_31() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HSliderHeight_31)); }
	inline float get_m_HSliderHeight_31() const { return ___m_HSliderHeight_31; }
	inline float* get_address_of_m_HSliderHeight_31() { return &___m_HSliderHeight_31; }
	inline void set_m_HSliderHeight_31(float value)
	{
		___m_HSliderHeight_31 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_32() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VSliderWidth_32)); }
	inline float get_m_VSliderWidth_32() const { return ___m_VSliderWidth_32; }
	inline float* get_address_of_m_VSliderWidth_32() { return &___m_VSliderWidth_32; }
	inline void set_m_VSliderWidth_32(float value)
	{
		___m_VSliderWidth_32 = value;
	}

	inline static int32_t get_offset_of_m_Rect_33() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Rect_33)); }
	inline RectTransform_t3704657025 * get_m_Rect_33() const { return ___m_Rect_33; }
	inline RectTransform_t3704657025 ** get_address_of_m_Rect_33() { return &___m_Rect_33; }
	inline void set_m_Rect_33(RectTransform_t3704657025 * value)
	{
		___m_Rect_33 = value;
		Il2CppCodeGenWriteBarrier((&___m_Rect_33), value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_34() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_HorizontalScrollbarRect_34)); }
	inline RectTransform_t3704657025 * get_m_HorizontalScrollbarRect_34() const { return ___m_HorizontalScrollbarRect_34; }
	inline RectTransform_t3704657025 ** get_address_of_m_HorizontalScrollbarRect_34() { return &___m_HorizontalScrollbarRect_34; }
	inline void set_m_HorizontalScrollbarRect_34(RectTransform_t3704657025 * value)
	{
		___m_HorizontalScrollbarRect_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_HorizontalScrollbarRect_34), value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_35() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_VerticalScrollbarRect_35)); }
	inline RectTransform_t3704657025 * get_m_VerticalScrollbarRect_35() const { return ___m_VerticalScrollbarRect_35; }
	inline RectTransform_t3704657025 ** get_address_of_m_VerticalScrollbarRect_35() { return &___m_VerticalScrollbarRect_35; }
	inline void set_m_VerticalScrollbarRect_35(RectTransform_t3704657025 * value)
	{
		___m_VerticalScrollbarRect_35 = value;
		Il2CppCodeGenWriteBarrier((&___m_VerticalScrollbarRect_35), value);
	}

	inline static int32_t get_offset_of_m_Tracker_36() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Tracker_36)); }
	inline DrivenRectTransformTracker_t2562230146  get_m_Tracker_36() const { return ___m_Tracker_36; }
	inline DrivenRectTransformTracker_t2562230146 * get_address_of_m_Tracker_36() { return &___m_Tracker_36; }
	inline void set_m_Tracker_36(DrivenRectTransformTracker_t2562230146  value)
	{
		___m_Tracker_36 = value;
	}

	inline static int32_t get_offset_of_m_Corners_37() { return static_cast<int32_t>(offsetof(ScrollRect_t4137855814, ___m_Corners_37)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_37() const { return ___m_Corners_37; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_37() { return &___m_Corners_37; }
	inline void set_m_Corners_37(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_37 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_37), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLRECT_T4137855814_H
#ifndef MASKABLEGRAPHIC_T3839221559_H
#define MASKABLEGRAPHIC_T3839221559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t3839221559  : public Graphic_t1660335611
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_19;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t340375123 * ___m_MaskMaterial_20;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_t3474889437 * ___m_ParentMask_21;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_22;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_23;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t3661388177 * ___m_OnCullStateChanged_24;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_25;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_26;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t1718750761* ___m_Corners_27;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_19() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculateStencil_19)); }
	inline bool get_m_ShouldRecalculateStencil_19() const { return ___m_ShouldRecalculateStencil_19; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_19() { return &___m_ShouldRecalculateStencil_19; }
	inline void set_m_ShouldRecalculateStencil_19(bool value)
	{
		___m_ShouldRecalculateStencil_19 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_20() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_MaskMaterial_20)); }
	inline Material_t340375123 * get_m_MaskMaterial_20() const { return ___m_MaskMaterial_20; }
	inline Material_t340375123 ** get_address_of_m_MaskMaterial_20() { return &___m_MaskMaterial_20; }
	inline void set_m_MaskMaterial_20(Material_t340375123 * value)
	{
		___m_MaskMaterial_20 = value;
		Il2CppCodeGenWriteBarrier((&___m_MaskMaterial_20), value);
	}

	inline static int32_t get_offset_of_m_ParentMask_21() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ParentMask_21)); }
	inline RectMask2D_t3474889437 * get_m_ParentMask_21() const { return ___m_ParentMask_21; }
	inline RectMask2D_t3474889437 ** get_address_of_m_ParentMask_21() { return &___m_ParentMask_21; }
	inline void set_m_ParentMask_21(RectMask2D_t3474889437 * value)
	{
		___m_ParentMask_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_ParentMask_21), value);
	}

	inline static int32_t get_offset_of_m_Maskable_22() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Maskable_22)); }
	inline bool get_m_Maskable_22() const { return ___m_Maskable_22; }
	inline bool* get_address_of_m_Maskable_22() { return &___m_Maskable_22; }
	inline void set_m_Maskable_22(bool value)
	{
		___m_Maskable_22 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_23() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_IncludeForMasking_23)); }
	inline bool get_m_IncludeForMasking_23() const { return ___m_IncludeForMasking_23; }
	inline bool* get_address_of_m_IncludeForMasking_23() { return &___m_IncludeForMasking_23; }
	inline void set_m_IncludeForMasking_23(bool value)
	{
		___m_IncludeForMasking_23 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_24() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_OnCullStateChanged_24)); }
	inline CullStateChangedEvent_t3661388177 * get_m_OnCullStateChanged_24() const { return ___m_OnCullStateChanged_24; }
	inline CullStateChangedEvent_t3661388177 ** get_address_of_m_OnCullStateChanged_24() { return &___m_OnCullStateChanged_24; }
	inline void set_m_OnCullStateChanged_24(CullStateChangedEvent_t3661388177 * value)
	{
		___m_OnCullStateChanged_24 = value;
		Il2CppCodeGenWriteBarrier((&___m_OnCullStateChanged_24), value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_ShouldRecalculate_25)); }
	inline bool get_m_ShouldRecalculate_25() const { return ___m_ShouldRecalculate_25; }
	inline bool* get_address_of_m_ShouldRecalculate_25() { return &___m_ShouldRecalculate_25; }
	inline void set_m_ShouldRecalculate_25(bool value)
	{
		___m_ShouldRecalculate_25 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_StencilValue_26)); }
	inline int32_t get_m_StencilValue_26() const { return ___m_StencilValue_26; }
	inline int32_t* get_address_of_m_StencilValue_26() { return &___m_StencilValue_26; }
	inline void set_m_StencilValue_26(int32_t value)
	{
		___m_StencilValue_26 = value;
	}

	inline static int32_t get_offset_of_m_Corners_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t3839221559, ___m_Corners_27)); }
	inline Vector3U5BU5D_t1718750761* get_m_Corners_27() const { return ___m_Corners_27; }
	inline Vector3U5BU5D_t1718750761** get_address_of_m_Corners_27() { return &___m_Corners_27; }
	inline void set_m_Corners_27(Vector3U5BU5D_t1718750761* value)
	{
		___m_Corners_27 = value;
		Il2CppCodeGenWriteBarrier((&___m_Corners_27), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MASKABLEGRAPHIC_T3839221559_H
#ifndef IMAGE_T2670269651_H
#define IMAGE_T2670269651_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Image
struct  Image_t2670269651  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t280657092 * ___m_Sprite_29;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t280657092 * ___m_OverrideSprite_30;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_31;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_32;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_33;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_34;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_35;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_36;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_37;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_38;

public:
	inline static int32_t get_offset_of_m_Sprite_29() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Sprite_29)); }
	inline Sprite_t280657092 * get_m_Sprite_29() const { return ___m_Sprite_29; }
	inline Sprite_t280657092 ** get_address_of_m_Sprite_29() { return &___m_Sprite_29; }
	inline void set_m_Sprite_29(Sprite_t280657092 * value)
	{
		___m_Sprite_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Sprite_29), value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_30() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_OverrideSprite_30)); }
	inline Sprite_t280657092 * get_m_OverrideSprite_30() const { return ___m_OverrideSprite_30; }
	inline Sprite_t280657092 ** get_address_of_m_OverrideSprite_30() { return &___m_OverrideSprite_30; }
	inline void set_m_OverrideSprite_30(Sprite_t280657092 * value)
	{
		___m_OverrideSprite_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_OverrideSprite_30), value);
	}

	inline static int32_t get_offset_of_m_Type_31() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_Type_31)); }
	inline int32_t get_m_Type_31() const { return ___m_Type_31; }
	inline int32_t* get_address_of_m_Type_31() { return &___m_Type_31; }
	inline void set_m_Type_31(int32_t value)
	{
		___m_Type_31 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_32() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_PreserveAspect_32)); }
	inline bool get_m_PreserveAspect_32() const { return ___m_PreserveAspect_32; }
	inline bool* get_address_of_m_PreserveAspect_32() { return &___m_PreserveAspect_32; }
	inline void set_m_PreserveAspect_32(bool value)
	{
		___m_PreserveAspect_32 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_33() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillCenter_33)); }
	inline bool get_m_FillCenter_33() const { return ___m_FillCenter_33; }
	inline bool* get_address_of_m_FillCenter_33() { return &___m_FillCenter_33; }
	inline void set_m_FillCenter_33(bool value)
	{
		___m_FillCenter_33 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_34() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillMethod_34)); }
	inline int32_t get_m_FillMethod_34() const { return ___m_FillMethod_34; }
	inline int32_t* get_address_of_m_FillMethod_34() { return &___m_FillMethod_34; }
	inline void set_m_FillMethod_34(int32_t value)
	{
		___m_FillMethod_34 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_35() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillAmount_35)); }
	inline float get_m_FillAmount_35() const { return ___m_FillAmount_35; }
	inline float* get_address_of_m_FillAmount_35() { return &___m_FillAmount_35; }
	inline void set_m_FillAmount_35(float value)
	{
		___m_FillAmount_35 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_36() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillClockwise_36)); }
	inline bool get_m_FillClockwise_36() const { return ___m_FillClockwise_36; }
	inline bool* get_address_of_m_FillClockwise_36() { return &___m_FillClockwise_36; }
	inline void set_m_FillClockwise_36(bool value)
	{
		___m_FillClockwise_36 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_37() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_FillOrigin_37)); }
	inline int32_t get_m_FillOrigin_37() const { return ___m_FillOrigin_37; }
	inline int32_t* get_address_of_m_FillOrigin_37() { return &___m_FillOrigin_37; }
	inline void set_m_FillOrigin_37(int32_t value)
	{
		___m_FillOrigin_37 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_38() { return static_cast<int32_t>(offsetof(Image_t2670269651, ___m_AlphaHitTestMinimumThreshold_38)); }
	inline float get_m_AlphaHitTestMinimumThreshold_38() const { return ___m_AlphaHitTestMinimumThreshold_38; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_38() { return &___m_AlphaHitTestMinimumThreshold_38; }
	inline void set_m_AlphaHitTestMinimumThreshold_38(float value)
	{
		___m_AlphaHitTestMinimumThreshold_38 = value;
	}
};

struct Image_t2670269651_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t340375123 * ___s_ETC1DefaultUI_28;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_t1457185986* ___s_VertScratch_39;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_t1457185986* ___s_UVScratch_40;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t1718750761* ___s_Xy_41;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t1718750761* ___s_Uv_42;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_28() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_ETC1DefaultUI_28)); }
	inline Material_t340375123 * get_s_ETC1DefaultUI_28() const { return ___s_ETC1DefaultUI_28; }
	inline Material_t340375123 ** get_address_of_s_ETC1DefaultUI_28() { return &___s_ETC1DefaultUI_28; }
	inline void set_s_ETC1DefaultUI_28(Material_t340375123 * value)
	{
		___s_ETC1DefaultUI_28 = value;
		Il2CppCodeGenWriteBarrier((&___s_ETC1DefaultUI_28), value);
	}

	inline static int32_t get_offset_of_s_VertScratch_39() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_VertScratch_39)); }
	inline Vector2U5BU5D_t1457185986* get_s_VertScratch_39() const { return ___s_VertScratch_39; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_VertScratch_39() { return &___s_VertScratch_39; }
	inline void set_s_VertScratch_39(Vector2U5BU5D_t1457185986* value)
	{
		___s_VertScratch_39 = value;
		Il2CppCodeGenWriteBarrier((&___s_VertScratch_39), value);
	}

	inline static int32_t get_offset_of_s_UVScratch_40() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_UVScratch_40)); }
	inline Vector2U5BU5D_t1457185986* get_s_UVScratch_40() const { return ___s_UVScratch_40; }
	inline Vector2U5BU5D_t1457185986** get_address_of_s_UVScratch_40() { return &___s_UVScratch_40; }
	inline void set_s_UVScratch_40(Vector2U5BU5D_t1457185986* value)
	{
		___s_UVScratch_40 = value;
		Il2CppCodeGenWriteBarrier((&___s_UVScratch_40), value);
	}

	inline static int32_t get_offset_of_s_Xy_41() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Xy_41)); }
	inline Vector3U5BU5D_t1718750761* get_s_Xy_41() const { return ___s_Xy_41; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Xy_41() { return &___s_Xy_41; }
	inline void set_s_Xy_41(Vector3U5BU5D_t1718750761* value)
	{
		___s_Xy_41 = value;
		Il2CppCodeGenWriteBarrier((&___s_Xy_41), value);
	}

	inline static int32_t get_offset_of_s_Uv_42() { return static_cast<int32_t>(offsetof(Image_t2670269651_StaticFields, ___s_Uv_42)); }
	inline Vector3U5BU5D_t1718750761* get_s_Uv_42() const { return ___s_Uv_42; }
	inline Vector3U5BU5D_t1718750761** get_address_of_s_Uv_42() { return &___s_Uv_42; }
	inline void set_s_Uv_42(Vector3U5BU5D_t1718750761* value)
	{
		___s_Uv_42 = value;
		Il2CppCodeGenWriteBarrier((&___s_Uv_42), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IMAGE_T2670269651_H
#ifndef TEXT_T1901882714_H
#define TEXT_T1901882714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UI.Text
struct  Text_t1901882714  : public MaskableGraphic_t3839221559
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t746620069 * ___m_FontData_28;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_29;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t3211863866 * ___m_TextCache_30;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t3211863866 * ___m_TextCacheForLayout_31;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_33;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_t1981460040* ___m_TempVerts_34;

public:
	inline static int32_t get_offset_of_m_FontData_28() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_FontData_28)); }
	inline FontData_t746620069 * get_m_FontData_28() const { return ___m_FontData_28; }
	inline FontData_t746620069 ** get_address_of_m_FontData_28() { return &___m_FontData_28; }
	inline void set_m_FontData_28(FontData_t746620069 * value)
	{
		___m_FontData_28 = value;
		Il2CppCodeGenWriteBarrier((&___m_FontData_28), value);
	}

	inline static int32_t get_offset_of_m_Text_29() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_Text_29)); }
	inline String_t* get_m_Text_29() const { return ___m_Text_29; }
	inline String_t** get_address_of_m_Text_29() { return &___m_Text_29; }
	inline void set_m_Text_29(String_t* value)
	{
		___m_Text_29 = value;
		Il2CppCodeGenWriteBarrier((&___m_Text_29), value);
	}

	inline static int32_t get_offset_of_m_TextCache_30() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCache_30)); }
	inline TextGenerator_t3211863866 * get_m_TextCache_30() const { return ___m_TextCache_30; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCache_30() { return &___m_TextCache_30; }
	inline void set_m_TextCache_30(TextGenerator_t3211863866 * value)
	{
		___m_TextCache_30 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCache_30), value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_31() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TextCacheForLayout_31)); }
	inline TextGenerator_t3211863866 * get_m_TextCacheForLayout_31() const { return ___m_TextCacheForLayout_31; }
	inline TextGenerator_t3211863866 ** get_address_of_m_TextCacheForLayout_31() { return &___m_TextCacheForLayout_31; }
	inline void set_m_TextCacheForLayout_31(TextGenerator_t3211863866 * value)
	{
		___m_TextCacheForLayout_31 = value;
		Il2CppCodeGenWriteBarrier((&___m_TextCacheForLayout_31), value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_33() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_DisableFontTextureRebuiltCallback_33)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_33() const { return ___m_DisableFontTextureRebuiltCallback_33; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_33() { return &___m_DisableFontTextureRebuiltCallback_33; }
	inline void set_m_DisableFontTextureRebuiltCallback_33(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_33 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_34() { return static_cast<int32_t>(offsetof(Text_t1901882714, ___m_TempVerts_34)); }
	inline UIVertexU5BU5D_t1981460040* get_m_TempVerts_34() const { return ___m_TempVerts_34; }
	inline UIVertexU5BU5D_t1981460040** get_address_of_m_TempVerts_34() { return &___m_TempVerts_34; }
	inline void set_m_TempVerts_34(UIVertexU5BU5D_t1981460040* value)
	{
		___m_TempVerts_34 = value;
		Il2CppCodeGenWriteBarrier((&___m_TempVerts_34), value);
	}
};

struct Text_t1901882714_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t340375123 * ___s_DefaultText_32;

public:
	inline static int32_t get_offset_of_s_DefaultText_32() { return static_cast<int32_t>(offsetof(Text_t1901882714_StaticFields, ___s_DefaultText_32)); }
	inline Material_t340375123 * get_s_DefaultText_32() const { return ___s_DefaultText_32; }
	inline Material_t340375123 ** get_address_of_s_DefaultText_32() { return &___s_DefaultText_32; }
	inline void set_s_DefaultText_32(Material_t340375123 * value)
	{
		___s_DefaultText_32 = value;
		Il2CppCodeGenWriteBarrier((&___s_DefaultText_32), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXT_T1901882714_H
// MenuPanel[]
struct MenuPanelU5BU5D_t1968201233  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MenuPanel_t2709851952 * m_Items[1];

public:
	inline MenuPanel_t2709851952 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MenuPanel_t2709851952 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MenuPanel_t2709851952 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MenuPanel_t2709851952 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MenuPanel_t2709851952 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MenuPanel_t2709851952 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t2670269651 * m_Items[1];

public:
	inline Image_t2670269651 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t2670269651 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t2670269651 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Image_t2670269651 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t2670269651 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t2670269651 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t3680889665 * m_Items[1];

public:
	inline AudioClip_t3680889665 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline AudioClip_t3680889665 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t3680889665 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t3680889665 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_t1113636619 * m_Items[1];

public:
	inline GameObject_t1113636619 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline GameObject_t1113636619 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t1113636619 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t1113636619 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// MenuLevelButton[]
struct MenuLevelButtonU5BU5D_t58144480  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MenuLevelButton_t3559006541 * m_Items[1];

public:
	inline MenuLevelButton_t3559006541 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MenuLevelButton_t3559006541 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MenuLevelButton_t3559006541 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline MenuLevelButton_t3559006541 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MenuLevelButton_t3559006541 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MenuLevelButton_t3559006541 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpriteRenderer_t3235626157 * m_Items[1];

public:
	inline SpriteRenderer_t3235626157 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpriteRenderer_t3235626157 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpriteRenderer_t3235626157 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpriteRenderer_t3235626157 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpriteRenderer_t3235626157 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpriteRenderer_t3235626157 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::Setup()
extern "C"  void MenuFlowManager_Setup_m838475575 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
#define GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(__this, method) ((  AudioSource_t3935305588 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m3469369570_gshared)(__this, method)
// System.Void UnityEngine.AudioSource::set_spatialBlend(System.Single)
extern "C"  void AudioSource_set_spatialBlend_m3924907960 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::ShowTitle()
extern "C"  void MenuFlowManager_ShowTitle_m2941382879 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::FadeAndChangePanel(System.Int32)
extern "C"  void MenuFlowManager_FadeAndChangePanel_m1298059106 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::PlayClickSound()
extern "C"  void MenuFlowManager_PlayClickSound_m2133418347 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::HideTipPanel()
extern "C"  void MenuFlowManager_HideTipPanel_m3589008205 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::StopTipClip()
extern "C"  void MenuFlowManager_StopTipClip_m2882255584 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::IFadeAndChangePanel(System.Int32)
extern "C"  RuntimeObject* MenuFlowManager_IFadeAndChangePanel_m1870868 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageInfo::GetWorldID()
extern "C"  int32_t StageInfo_GetWorldID_m2363233804 (StageInfo_t2857013238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C"  String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Application::CanStreamedLevelBeLoaded(System.String)
extern "C"  bool Application_CanStreamedLevelBeLoaded_m348022888 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageInfo::SetStageID(System.Int32)
extern "C"  void StageInfo_SetStageID_m3630089345 (StageInfo_t2857013238 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::ISelectLevel(System.String)
extern "C"  RuntimeObject* MenuFlowManager_ISelectLevel_m3146372250 (MenuFlowManager_t1614880941 * __this, String_t* ___name0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager/<ISelectLevel>c__Iterator0::.ctor()
extern "C"  void U3CISelectLevelU3Ec__Iterator0__ctor_m1072048797 (U3CISelectLevelU3Ec__Iterator0_t772913338 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageInfo::SetWorldID(System.Int32)
extern "C"  void StageInfo_SetWorldID_m3211784811 (StageInfo_t2857013238 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C"  int32_t PlayerPrefs_GetInt_m1299643124 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C"  void PlayerPrefs_SetInt_m2842000469 (RuntimeObject * __this /* static, unused */, String_t* p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::PlayTipClip(System.Int32,System.Single)
extern "C"  void MenuFlowManager_PlayTipClip_m3234370683 (MenuFlowManager_t1614880941 * __this, int32_t ___groupID0, float ___delay1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::ShowTipPanel()
extern "C"  void MenuFlowManager_ShowTipPanel_m410722394 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
extern "C"  bool AudioSource_get_isPlaying_m1896551654 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuNotification::ShowMessage(System.String)
extern "C"  void MenuNotification_ShowMessage_m1081873921 (MenuNotification_t963843896 * __this, String_t* ___text0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::IPlayDelayedTip(System.Int32,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IPlayDelayedTip_m1291305024 (MenuFlowManager_t1614880941 * __this, int32_t ___tipID0, float ___delay1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager/<IPlayDelayedTip>c__Iterator1::.ctor()
extern "C"  void U3CIPlayDelayedTipU3Ec__Iterator1__ctor_m2636734247 (U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::.ctor()
extern "C"  void U3CIFadeAndChangePanelU3Ec__Iterator2__ctor_m4047047566 (U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager/<IFadeImage>c__Iterator3::.ctor()
extern "C"  void U3CIFadeImageU3Ec__Iterator3__ctor_m3087185235 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C"  Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::IMoveTitle(System.Single,System.Single,System.Single,System.Boolean,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IMoveTitle_m3475848012 (MenuFlowManager_t1614880941 * __this, float ___pos_title0, float ___pos_sky1, float ___pos_levels2, bool ___toTitle3, float ___speed4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager/<IMoveTitle>c__Iterator4::.ctor()
extern "C"  void U3CIMoveTitleU3Ec__Iterator4__ctor_m3054799051 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m2413801168 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m2678069419 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::ISetTipPanel(System.Single)
extern "C"  RuntimeObject* MenuFlowManager_ISetTipPanel_m1650888798 (MenuFlowManager_t1614880941 * __this, float ___destScale0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager/<ISetTipPanel>c__Iterator5::.ctor()
extern "C"  void U3CISetTipPanelU3Ec__Iterator5__ctor_m1747929998 (U3CISetTipPanelU3Ec__Iterator5_t956795441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
extern "C"  Resolution_t2487619763  Screen_get_currentResolution_m1680624610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Resolution::get_height()
extern "C"  int32_t Resolution_get_height_m933996501 (Resolution_t2487619763 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::IFadeImage(UnityEngine.UI.Image,System.Single,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IFadeImage_m3217344465 (MenuFlowManager_t1614880941 * __this, Image_t2670269651 * ___image0, float ___height1, float ___speed2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::ChangePanel(System.Int32)
extern "C"  void MenuFlowManager_ChangePanel_m248027790 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
extern "C"  Rect_t2360479859  RectTransform_get_rect_m574169965 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
extern "C"  float Rect_get_height_m1358425599 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C"  float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C"  void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C"  void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C"  Vector2_t2156229523  RectTransform_get_anchoredPosition_m1813443094 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::Setup()
extern "C"  void MenuLevelButton_Setup_m3441281685 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::ActivateSelf(System.Boolean)
extern "C"  void MenuLevelButton_ActivateSelf_m1538653098 (MenuLevelButton_t3559006541 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::ShowStarts(System.Int32)
extern "C"  void MenuLevelButton_ShowStarts_m3471610984 (MenuLevelButton_t3559006541 * __this, int32_t ___amount0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::SelectWorld(System.Int32)
extern "C"  void MenuFlowManager_SelectWorld_m4120408508 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::SelectLevel(System.Int32)
extern "C"  void MenuFlowManager_SelectLevel_m1642849559 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::SetLevelKeyPrefix(System.String)
extern "C"  void MenuLevelButton_SetLevelKeyPrefix_m971040662 (MenuLevelButton_t3559006541 * __this, String_t* ___pref0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuNotification::IShowPanel()
extern "C"  RuntimeObject* MenuNotification_IShowPanel_m423577807 (MenuNotification_t963843896 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuNotification::IPopPanel()
extern "C"  RuntimeObject* MenuNotification_IPopPanel_m108523591 (MenuNotification_t963843896 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuNotification/<IShowPanel>c__Iterator0::.ctor()
extern "C"  void U3CIShowPanelU3Ec__Iterator0__ctor_m1175556373 (U3CIShowPanelU3Ec__Iterator0_t3293565631 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuNotification/<IPopPanel>c__Iterator1::.ctor()
extern "C"  void U3CIPopPanelU3Ec__Iterator1__ctor_m2565854616 (U3CIPopPanelU3Ec__Iterator1_t1172258948 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuNotification/<IMovePanel>c__Iterator2::.ctor()
extern "C"  void U3CIMovePanelU3Ec__Iterator2__ctor_m3535100192 (U3CIMovePanelU3Ec__Iterator2_t2454059368 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuNotification/<IScalePanel>c__Iterator3::.ctor()
extern "C"  void U3CIScalePanelU3Ec__Iterator3__ctor_m512322390 (U3CIScalePanelU3Ec__Iterator3_t237107718 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_Lerp_m854472224 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuNotification::IScalePanel(System.Single,System.Single)
extern "C"  RuntimeObject* MenuNotification_IScalePanel_m1167846611 (MenuNotification_t963843896 * __this, float ___scale0, float ___speed1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuNotification::IMovePanel(System.Single,System.Single)
extern "C"  RuntimeObject* MenuNotification_IMovePanel_m3165881322 (MenuNotification_t963843896 * __this, float ___height0, float ___speed1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
extern "C"  Vector3_t3722313464  Transform_get_position_m36019626 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
extern "C"  void Transform_set_position_m3387557959 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
#define Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, method) ((  RectTransform_t3704657025 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::get_content()
extern "C"  RectTransform_t3704657025 * ScrollRect_get_content_m2477524320 (ScrollRect_t4137855814 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageInfo::GetStartAmount()
extern "C"  int32_t StageInfo_GetStartAmount_m2338924739 (StageInfo_t2857013238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageInfo::GetSavedStarAmount(System.Int32,System.Int32)
extern "C"  int32_t StageInfo_GetSavedStarAmount_m2316285987 (StageInfo_t2857013238 * __this, int32_t ___world0, int32_t ___stage1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::Setup()
extern "C"  void StageManager_Setup_m1835446729 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::HandleInput()
extern "C"  void StageManager_HandleInput_m2725362068 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::UpdateTimerUI()
extern "C"  void StageManager_UpdateTimerUI_m2579357050 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
extern "C"  bool Input_GetMouseButtonDown_m2081676745 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::SetHorizonLineAlpha(System.Single)
extern "C"  void StageManager_SetHorizonLineAlpha_m30807878 (StageManager_t3296066545 * __this, float ___alpha0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
extern "C"  bool Input_GetMouseButtonUp_m2924350851 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::CheckHorizonLineHit()
extern "C"  void StageManager_CheckHorizonLineHit_m3203435684 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
extern "C"  bool Input_GetMouseButton_m513753021 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::OnMouseMove()
extern "C"  void StageManager_OnMouseMove_m1371817865 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::OnPFMove()
extern "C"  void StageManager_OnPFMove_m3369990314 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::CheckPFHit()
extern "C"  void StageManager_CheckPFHit_m1617623315 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::ChangingGameState()
extern "C"  void StageManager_ChangingGameState_m4209157659 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::setupPFs()
extern "C"  void StageManager_setupPFs_m762153435 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::setupCanvas()
extern "C"  void StageManager_setupCanvas_m1599180444 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
extern "C"  bool Object_op_Implicit_m3574996620 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C"  void CanvasGroup_set_alpha_m4032573 (CanvasGroup_t4083511760 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C"  Color_t2555686324  SpriteRenderer_get_color_m904197748 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C"  void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.SpriteRenderer>()
#define Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354(__this, method) ((  SpriteRendererU5BU5D_t911335936* (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
extern "C"  Vector3_t3722313464  Input_get_mousePosition_m1616496925 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Camera::get_main()
extern "C"  Camera_t4157153871 * Camera_get_main_m3643453163 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
extern "C"  Vector3_t3722313464  Camera_ScreenToWorldPoint_m3978588570 (Camera_t4157153871 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::LockPF(System.Boolean)
extern "C"  void StageManager_LockPF_m3398832264 (StageManager_t3296066545 * __this, bool ___hit0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::CompleteStage()
extern "C"  void StageManager_CompleteStage_m2785006177 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::LockHorizonLine()
extern "C"  void StageManager_LockHorizonLine_m3269516584 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::ChangeGameState()
extern "C"  void StageManager_ChangeGameState_m3422576130 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StageManager::BackToMenu()
extern "C"  RuntimeObject* StageManager_BackToMenu_m671746728 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String[])
extern "C"  String_t* String_Concat_m1809518182 (RuntimeObject * __this /* static, unused */, StringU5BU5D_t1281789340* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager/<BackToMenu>c__Iterator0::.ctor()
extern "C"  void U3CBackToMenuU3Ec__Iterator0__ctor_m1262886672 (U3CBackToMenuU3Ec__Iterator0_t1978105360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C"  void StageManager_SetActive_m3658661723 (StageManager_t3296066545 * __this, GameObject_t1113636619 * ___target0, bool ___active1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::ChangeToEscapePoint()
extern "C"  void StageManager_ChangeToEscapePoint_m39530200 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StageManager::FadeIn(UnityEngine.CanvasGroup)
extern "C"  RuntimeObject* StageManager_FadeIn_m2385600318 (StageManager_t3296066545 * __this, CanvasGroup_t4083511760 * ___canvasObj0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager/<FadeIn>c__Iterator1::.ctor()
extern "C"  void U3CFadeInU3Ec__Iterator1__ctor_m577513256 (U3CFadeInU3Ec__Iterator1_t1536586007 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StagePhoto::Setup()
extern "C"  void StagePhoto_Setup_m2572149096 (StagePhoto_t928294583 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Camera::get_orthographicSize()
extern "C"  float Camera_get_orthographicSize_m3903216845 (Camera_t4157153871 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Screen::get_width()
extern "C"  int32_t Screen_get_width_m345039817 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
#define Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, method) ((  SpriteRenderer_t3235626157 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m2906321015_gshared)(__this, method)
// UnityEngine.Sprite UnityEngine.SpriteRenderer::get_sprite()
extern "C"  Sprite_t280657092 * SpriteRenderer_get_sprite_m663386871 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.Sprite::get_textureRect()
extern "C"  Rect_t2360479859  Sprite_get_textureRect_m3217515846 (Sprite_t280657092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
extern "C"  float Rect_get_width_m3421484486 (Rect_t2360479859 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Sprite::get_pixelsPerUnit()
extern "C"  float Sprite_get_pixelsPerUnit_m524644775 (Sprite_t280657092 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
extern "C"  void Vector3__ctor_m1719387948 (Vector3_t3722313464 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void MenuAudioPlayer::.ctor()
extern "C"  void MenuAudioPlayer__ctor_m1835167033 (MenuAudioPlayer_t1756938393 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuAudioPlayer::Start()
extern "C"  void MenuAudioPlayer_Start_m321254785 (MenuAudioPlayer_t1756938393 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void MenuAudioPlayer::Update()
extern "C"  void MenuAudioPlayer_Update_m1527172833 (MenuAudioPlayer_t1756938393 * __this, const RuntimeMethod* method)
{
	{
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
// System.Void MenuFlowManager::.ctor()
extern "C"  void MenuFlowManager__ctor_m828583747 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	{
		__this->set_onTitle_14((bool)1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::Start()
extern "C"  void MenuFlowManager_Start_m524402253 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	{
		MenuFlowManager_Setup_m838475575(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::Setup()
extern "C"  void MenuFlowManager_Setup_m838475575 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_Setup_m838475575_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = __this->get_clickAsrc_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_t1113636619 * L_2 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioSource_t3935305588 * L_3 = GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390(L_2, /*hidden argument*/GameObject_AddComponent_TisAudioSource_t3935305588_m2869327390_RuntimeMethod_var);
		__this->set_clickAsrc_18(L_3);
		AudioSource_t3935305588 * L_4 = __this->get_clickAsrc_18();
		NullCheck(L_4);
		AudioSource_set_spatialBlend_m3924907960(L_4, (0.0f), /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void MenuFlowManager::Update()
extern "C"  void MenuFlowManager_Update_m1759856524 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_Update_m1759856524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = __this->get_changing_11();
		if (L_0)
		{
			goto IL_0087;
		}
	}
	{
		bool L_1 = __this->get_fadingTitle_12();
		if (L_1)
		{
			goto IL_0087;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_3 = __this->get_currPanel_15();
		if ((((int32_t)L_3) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0033:
	{
		int32_t L_4 = __this->get_currPanel_15();
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		MenuPanelU5BU5D_t1968201233* L_5 = __this->get_panels_6();
		int32_t L_6 = __this->get_currPanel_15();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MenuPanel_t2709851952 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		int32_t L_9 = L_8->get_prevPanelID_1();
		if ((((int32_t)L_9) >= ((int32_t)0)))
		{
			goto IL_005d;
		}
	}
	{
		MenuFlowManager_ShowTitle_m2941382879(__this, /*hidden argument*/NULL);
	}

IL_005d:
	{
		MenuPanelU5BU5D_t1968201233* L_10 = __this->get_panels_6();
		int32_t L_11 = __this->get_currPanel_15();
		NullCheck(L_10);
		int32_t L_12 = L_11;
		MenuPanel_t2709851952 * L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		int32_t L_14 = L_13->get_prevPanelID_1();
		MenuFlowManager_FadeAndChangePanel_m1298059106(__this, L_14, /*hidden argument*/NULL);
		MenuFlowManager_PlayClickSound_m2133418347(__this, /*hidden argument*/NULL);
		MenuFlowManager_HideTipPanel_m3589008205(__this, /*hidden argument*/NULL);
		MenuFlowManager_StopTipClip_m2882255584(__this, /*hidden argument*/NULL);
	}

IL_0087:
	{
		return;
	}
}
// System.Void MenuFlowManager::ChangePanel(System.Int32)
extern "C"  void MenuFlowManager_ChangePanel_m248027790 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001e;
	}

IL_0007:
	{
		MenuPanelU5BU5D_t1968201233* L_0 = __this->get_panels_6();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		MenuPanel_t2709851952 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = L_3->get_panel_0();
		NullCheck(L_4);
		GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001e:
	{
		int32_t L_6 = V_0;
		MenuPanelU5BU5D_t1968201233* L_7 = __this->get_panels_6();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		int32_t L_8 = ___id0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_9 = ___id0;
		MenuPanelU5BU5D_t1968201233* L_10 = __this->get_panels_6();
		NullCheck(L_10);
		if ((((int32_t)L_9) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0054;
		}
	}

IL_0041:
	{
		MenuPanelU5BU5D_t1968201233* L_11 = __this->get_panels_6();
		int32_t L_12 = ___id0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MenuPanel_t2709851952 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_t1113636619 * L_15 = L_14->get_panel_0();
		NullCheck(L_15);
		GameObject_SetActive_m796801857(L_15, (bool)1, /*hidden argument*/NULL);
	}

IL_0054:
	{
		int32_t L_16 = ___id0;
		__this->set_currPanel_15(L_16);
		return;
	}
}
// System.Void MenuFlowManager::FadeAndChangePanel(System.Int32)
extern "C"  void MenuFlowManager_FadeAndChangePanel_m1298059106 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_changing_11();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->get_fadingTitle_12();
		if (!L_1)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		return;
	}

IL_0017:
	{
		int32_t L_2 = ___id0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_3 = ___id0;
		MenuPanelU5BU5D_t1968201233* L_4 = __this->get_panels_6();
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_5 = ___id0;
		RuntimeObject* L_6 = MenuFlowManager_IFadeAndChangePanel_m1870868(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void MenuFlowManager::SelectLevel(System.Int32)
extern "C"  void MenuFlowManager_SelectLevel_m1642849559 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_SelectLevel_m1642849559_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_changing_11();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_1 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_1);
		int32_t L_2 = StageInfo_GetWorldID_m2363233804(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		String_t* L_3 = Int32_ToString_m372259452((&V_1), _stringLiteral3451565968, /*hidden argument*/NULL);
		String_t* L_4 = Int32_ToString_m372259452((&___id0), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral840215853, L_3, _stringLiteral3452614641, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6 = V_0;
		bool L_7 = Application_CanStreamedLevelBeLoaded_m348022888(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_8 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		int32_t L_9 = ___id0;
		NullCheck(L_8);
		StageInfo_SetStageID_m3630089345(L_8, L_9, /*hidden argument*/NULL);
		String_t* L_10 = V_0;
		RuntimeObject* L_11 = MenuFlowManager_ISelectLevel_m3146372250(__this, L_10, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_11, /*hidden argument*/NULL);
	}

IL_0063:
	{
		return;
	}
}
// System.Collections.IEnumerator MenuFlowManager::ISelectLevel(System.String)
extern "C"  RuntimeObject* MenuFlowManager_ISelectLevel_m3146372250 (MenuFlowManager_t1614880941 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_ISelectLevel_m3146372250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CISelectLevelU3Ec__Iterator0_t772913338 * V_0 = NULL;
	{
		U3CISelectLevelU3Ec__Iterator0_t772913338 * L_0 = (U3CISelectLevelU3Ec__Iterator0_t772913338 *)il2cpp_codegen_object_new(U3CISelectLevelU3Ec__Iterator0_t772913338_il2cpp_TypeInfo_var);
		U3CISelectLevelU3Ec__Iterator0__ctor_m1072048797(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CISelectLevelU3Ec__Iterator0_t772913338 * L_1 = V_0;
		String_t* L_2 = ___name0;
		NullCheck(L_1);
		L_1->set_name_0(L_2);
		U3CISelectLevelU3Ec__Iterator0_t772913338 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CISelectLevelU3Ec__Iterator0_t772913338 * L_4 = V_0;
		return L_4;
	}
}
// System.Void MenuFlowManager::SelectWorld(System.Int32)
extern "C"  void MenuFlowManager_SelectWorld_m4120408508 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_SelectWorld_m4120408508_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_0 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		StageInfo_SetWorldID_m3211784811(L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, _stringLiteral3997648605, 0, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = ___id0;
		if (((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)((int32_t)L_4&(int32_t)((int32_t)31)))))&(int32_t)1)))
		{
			goto IL_004a;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6 = ___id0;
		V_0 = ((int32_t)((int32_t)L_5|(int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_6&(int32_t)((int32_t)31)))))));
		int32_t L_7 = V_0;
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, _stringLiteral3997648605, L_7, /*hidden argument*/NULL);
		int32_t L_8 = ___id0;
		MenuFlowManager_PlayTipClip_m3234370683(__this, L_8, (1.5f), /*hidden argument*/NULL);
		MenuFlowManager_ShowTipPanel_m410722394(__this, /*hidden argument*/NULL);
	}

IL_004a:
	{
		return;
	}
}
// System.Void MenuFlowManager::PlayTipClip()
extern "C"  void MenuFlowManager_PlayTipClip_m2173455069 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_PlayTipClip_m2173455069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_0 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_0);
		int32_t L_1 = StageInfo_GetWorldID_m2363233804(L_0, /*hidden argument*/NULL);
		MenuFlowManager_PlayTipClip_m3234370683(__this, L_1, (0.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::StopTipClip()
extern "C"  void MenuFlowManager_StopTipClip_m2882255584 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	{
		AudioSource_t3935305588 * L_0 = __this->get_aSrc_16();
		NullCheck(L_0);
		AudioSource_Stop_m2682712816(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::PlayTipClip(System.Int32,System.Single)
extern "C"  void MenuFlowManager_PlayTipClip_m3234370683 (MenuFlowManager_t1614880941 * __this, int32_t ___groupID0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_PlayTipClip_m3234370683_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioSource_t3935305588 * L_0 = __this->get_aSrc_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		AudioSource_t3935305588 * L_2 = __this->get_aSrc_16();
		NullCheck(L_2);
		bool L_3 = AudioSource_get_isPlaying_m1896551654(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		MenuNotification_t963843896 * L_4 = __this->get_notification_19();
		NullCheck(L_4);
		MenuNotification_ShowMessage_m1081873921(L_4, _stringLiteral1122207072, /*hidden argument*/NULL);
		goto IL_0047;
	}

IL_0036:
	{
		int32_t L_5 = ___groupID0;
		float L_6 = ___delay1;
		RuntimeObject* L_7 = MenuFlowManager_IPlayDelayedTip_m1291305024(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), L_6, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_7, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Collections.IEnumerator MenuFlowManager::IPlayDelayedTip(System.Int32,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IPlayDelayedTip_m1291305024 (MenuFlowManager_t1614880941 * __this, int32_t ___tipID0, float ___delay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_IPlayDelayedTip_m1291305024_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * V_0 = NULL;
	{
		U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * L_0 = (U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 *)il2cpp_codegen_object_new(U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414_il2cpp_TypeInfo_var);
		U3CIPlayDelayedTipU3Ec__Iterator1__ctor_m2636734247(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * L_1 = V_0;
		float L_2 = ___delay1;
		NullCheck(L_1);
		L_1->set_delay_0(L_2);
		U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * L_3 = V_0;
		int32_t L_4 = ___tipID0;
		NullCheck(L_3);
		L_3->set_tipID_1(L_4);
		U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_2(__this);
		U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator MenuFlowManager::IFadeAndChangePanel(System.Int32)
extern "C"  RuntimeObject* MenuFlowManager_IFadeAndChangePanel_m1870868 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_IFadeAndChangePanel_m1870868_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * V_0 = NULL;
	{
		U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * L_0 = (U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 *)il2cpp_codegen_object_new(U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537_il2cpp_TypeInfo_var);
		U3CIFadeAndChangePanelU3Ec__Iterator2__ctor_m4047047566(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * L_1 = V_0;
		int32_t L_2 = ___id0;
		NullCheck(L_1);
		L_1->set_id_0(L_2);
		U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator MenuFlowManager::IFadeImage(UnityEngine.UI.Image,System.Single,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IFadeImage_m3217344465 (MenuFlowManager_t1614880941 * __this, Image_t2670269651 * ___image0, float ___height1, float ___speed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_IFadeImage_m3217344465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIFadeImageU3Ec__Iterator3_t2325737738 * V_0 = NULL;
	{
		U3CIFadeImageU3Ec__Iterator3_t2325737738 * L_0 = (U3CIFadeImageU3Ec__Iterator3_t2325737738 *)il2cpp_codegen_object_new(U3CIFadeImageU3Ec__Iterator3_t2325737738_il2cpp_TypeInfo_var);
		U3CIFadeImageU3Ec__Iterator3__ctor_m3087185235(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIFadeImageU3Ec__Iterator3_t2325737738 * L_1 = V_0;
		Image_t2670269651 * L_2 = ___image0;
		NullCheck(L_1);
		L_1->set_image_0(L_2);
		U3CIFadeImageU3Ec__Iterator3_t2325737738 * L_3 = V_0;
		float L_4 = ___speed2;
		NullCheck(L_3);
		L_3->set_speed_3(L_4);
		U3CIFadeImageU3Ec__Iterator3_t2325737738 * L_5 = V_0;
		float L_6 = ___height1;
		NullCheck(L_5);
		L_5->set_height_5(L_6);
		U3CIFadeImageU3Ec__Iterator3_t2325737738 * L_7 = V_0;
		return L_7;
	}
}
// System.Void MenuFlowManager::ShowTitle()
extern "C"  void MenuFlowManager_ShowTitle_m2941382879 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_fadingTitle_12();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		RectTransform_t3704657025 * L_1 = __this->get_panel_levels_4();
		NullCheck(L_1);
		Vector2_t2156229523  L_2 = RectTransform_get_sizeDelta_m2183112744(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		RuntimeObject* L_4 = MenuFlowManager_IMoveTitle_m3475848012(__this, (0.0f), (0.0f), ((-L_3)), (bool)1, (0.75f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::HideTitle()
extern "C"  void MenuFlowManager_HideTitle_m1195043599 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_fadingTitle_12();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		int32_t L_1 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_2 = __this->get_panel_sky_3();
		NullCheck(L_2);
		Vector2_t2156229523  L_3 = RectTransform_get_sizeDelta_m2183112744(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_y_1();
		RuntimeObject* L_5 = MenuFlowManager_IMoveTitle_m3475848012(__this, ((float)il2cpp_codegen_multiply((float)(((float)((float)L_1))), (float)(1.5f))), ((float)((float)L_4/(float)(2.0f))), (0.0f), (bool)0, (0.75f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator MenuFlowManager::IMoveTitle(System.Single,System.Single,System.Single,System.Boolean,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IMoveTitle_m3475848012 (MenuFlowManager_t1614880941 * __this, float ___pos_title0, float ___pos_sky1, float ___pos_levels2, bool ___toTitle3, float ___speed4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_IMoveTitle_m3475848012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIMoveTitleU3Ec__Iterator4_t1546248483 * V_0 = NULL;
	{
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_0 = (U3CIMoveTitleU3Ec__Iterator4_t1546248483 *)il2cpp_codegen_object_new(U3CIMoveTitleU3Ec__Iterator4_t1546248483_il2cpp_TypeInfo_var);
		U3CIMoveTitleU3Ec__Iterator4__ctor_m3054799051(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_1 = V_0;
		float L_2 = ___pos_title0;
		NullCheck(L_1);
		L_1->set_pos_title_5(L_2);
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_3 = V_0;
		float L_4 = ___pos_sky1;
		NullCheck(L_3);
		L_3->set_pos_sky_7(L_4);
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_5 = V_0;
		float L_6 = ___pos_levels2;
		NullCheck(L_5);
		L_5->set_pos_levels_9(L_6);
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_7 = V_0;
		float L_8 = ___speed4;
		NullCheck(L_7);
		L_7->set_speed_10(L_8);
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_9 = V_0;
		bool L_10 = ___toTitle3;
		NullCheck(L_9);
		L_9->set_toTitle_12(L_10);
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_11 = V_0;
		NullCheck(L_11);
		L_11->set_U24this_13(__this);
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_12 = V_0;
		return L_12;
	}
}
// System.Void MenuFlowManager::PlayClickSound()
extern "C"  void MenuFlowManager_PlayClickSound_m2133418347 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_PlayClickSound_m2133418347_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioClip_t3680889665 * L_0 = __this->get_clickClip_17();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		AudioSource_t3935305588 * L_2 = __this->get_clickAsrc_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0023;
		}
	}

IL_0022:
	{
		return;
	}

IL_0023:
	{
		AudioSource_t3935305588 * L_4 = __this->get_clickAsrc_18();
		float L_5 = Random_Range_m2202990745(NULL /*static, unused*/, (0.9f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		AudioSource_set_pitch_m2413801168(L_4, L_5, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_6 = __this->get_clickAsrc_18();
		AudioClip_t3680889665 * L_7 = __this->get_clickClip_17();
		NullCheck(L_6);
		AudioSource_PlayOneShot_m2678069419(L_6, L_7, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::ShowTipPanel()
extern "C"  void MenuFlowManager_ShowTipPanel_m410722394 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_ShowTipPanel_m410722394_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_fadingTipPanel_13();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_1 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_1);
		int32_t L_2 = StageInfo_GetWorldID_m2363233804(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_3, (int32_t)1))) < ((int32_t)0)))
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_4 = V_0;
		StringU5BU5D_t1281789340* L_5 = __this->get_tipTexts_8();
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0057;
		}
	}
	{
		Text_t1901882714 * L_6 = __this->get_tipText_10();
		StringU5BU5D_t1281789340* L_7 = __this->get_tipTexts_8();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		int32_t L_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_8, (int32_t)1));
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_10);
		RuntimeObject* L_11 = MenuFlowManager_ISetTipPanel_m1650888798(__this, (1.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_11, /*hidden argument*/NULL);
	}

IL_0057:
	{
		return;
	}
}
// System.Void MenuFlowManager::HideTipPanel()
extern "C"  void MenuFlowManager_HideTipPanel_m3589008205 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_fadingTipPanel_13();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		RuntimeObject* L_1 = MenuFlowManager_ISetTipPanel_m1650888798(__this, (0.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator MenuFlowManager::ISetTipPanel(System.Single)
extern "C"  RuntimeObject* MenuFlowManager_ISetTipPanel_m1650888798 (MenuFlowManager_t1614880941 * __this, float ___destScale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_ISetTipPanel_m1650888798_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CISetTipPanelU3Ec__Iterator5_t956795441 * V_0 = NULL;
	{
		U3CISetTipPanelU3Ec__Iterator5_t956795441 * L_0 = (U3CISetTipPanelU3Ec__Iterator5_t956795441 *)il2cpp_codegen_object_new(U3CISetTipPanelU3Ec__Iterator5_t956795441_il2cpp_TypeInfo_var);
		U3CISetTipPanelU3Ec__Iterator5__ctor_m1747929998(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CISetTipPanelU3Ec__Iterator5_t956795441 * L_1 = V_0;
		float L_2 = ___destScale0;
		NullCheck(L_1);
		L_1->set_destScale_2(L_2);
		U3CISetTipPanelU3Ec__Iterator5_t956795441 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_3(__this);
		U3CISetTipPanelU3Ec__Iterator5_t956795441 * L_4 = V_0;
		return L_4;
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
// System.Void MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::.ctor()
extern "C"  void U3CIFadeAndChangePanelU3Ec__Iterator2__ctor_m4047047566 (U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::MoveNext()
extern "C"  bool U3CIFadeAndChangePanelU3Ec__Iterator2_MoveNext_m2543383524 (U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeAndChangePanelU3Ec__Iterator2_MoveNext_m2543383524_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	Resolution_t2487619763  V_2;
	memset(&V_2, 0, sizeof(V_2));
	int32_t V_3 = 0;
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00fe;
			}
			case 2:
			{
				goto IL_01d1;
			}
		}
	}
	{
		goto IL_01e4;
	}

IL_0025:
	{
		MenuFlowManager_t1614880941 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		L_2->set_changing_11((bool)1);
		MenuFlowManager_t1614880941 * L_3 = __this->get_U24this_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_currPanel_15();
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_currPanel_15();
		MenuFlowManager_t1614880941 * L_7 = __this->get_U24this_1();
		NullCheck(L_7);
		MenuPanelU5BU5D_t1968201233* L_8 = L_7->get_panels_6();
		NullCheck(L_8);
		if ((((int32_t)L_6) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_9 = __this->get_id_0();
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_00fe;
		}
	}
	{
		int32_t L_10 = __this->get_id_0();
		MenuFlowManager_t1614880941 * L_11 = __this->get_U24this_1();
		NullCheck(L_11);
		MenuPanelU5BU5D_t1968201233* L_12 = L_11->get_panels_6();
		NullCheck(L_12);
		if ((((int32_t)L_10) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_00fe;
		}
	}
	{
		V_1 = 0;
		goto IL_00c7;
	}

IL_008a:
	{
		MenuFlowManager_t1614880941 * L_13 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_14 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_15 = __this->get_U24this_1();
		NullCheck(L_15);
		ImageU5BU5D_t2439009922* L_16 = L_15->get_fadeImages_5();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Image_t2670269651 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Resolution_t2487619763  L_20 = Screen_get_currentResolution_m1680624610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_20;
		int32_t L_21 = Resolution_get_height_m933996501((&V_2), /*hidden argument*/NULL);
		NullCheck(L_14);
		RuntimeObject* L_22 = MenuFlowManager_IFadeImage_m3217344465(L_14, L_19, (((float)((float)((int32_t)((int32_t)L_21/(int32_t)2))))), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		MonoBehaviour_StartCoroutine_m3411253000(L_13, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_00c7:
	{
		int32_t L_24 = V_1;
		MenuFlowManager_t1614880941 * L_25 = __this->get_U24this_1();
		NullCheck(L_25);
		ImageU5BU5D_t2439009922* L_26 = L_25->get_fadeImages_5();
		NullCheck(L_26);
		if ((((int32_t)L_24) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_26)->max_length)))))))
		{
			goto IL_008a;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_27 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_27, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_27);
		bool L_28 = __this->get_U24disposing_3();
		if (L_28)
		{
			goto IL_00f9;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00f9:
	{
		goto IL_01e6;
	}

IL_00fe:
	{
		MenuFlowManager_t1614880941 * L_29 = __this->get_U24this_1();
		int32_t L_30 = __this->get_id_0();
		NullCheck(L_29);
		MenuFlowManager_ChangePanel_m248027790(L_29, L_30, /*hidden argument*/NULL);
		MenuFlowManager_t1614880941 * L_31 = __this->get_U24this_1();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_currPanel_15();
		if ((((int32_t)L_32) < ((int32_t)0)))
		{
			goto IL_01d1;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_33 = __this->get_U24this_1();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_currPanel_15();
		MenuFlowManager_t1614880941 * L_35 = __this->get_U24this_1();
		NullCheck(L_35);
		MenuPanelU5BU5D_t1968201233* L_36 = L_35->get_panels_6();
		NullCheck(L_36);
		if ((((int32_t)L_34) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_36)->max_length)))))))
		{
			goto IL_01d1;
		}
	}
	{
		int32_t L_37 = __this->get_id_0();
		if ((((int32_t)L_37) < ((int32_t)0)))
		{
			goto IL_01d1;
		}
	}
	{
		int32_t L_38 = __this->get_id_0();
		MenuFlowManager_t1614880941 * L_39 = __this->get_U24this_1();
		NullCheck(L_39);
		MenuPanelU5BU5D_t1968201233* L_40 = L_39->get_panels_6();
		NullCheck(L_40);
		if ((((int32_t)L_38) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_40)->max_length)))))))
		{
			goto IL_01d1;
		}
	}
	{
		V_3 = 0;
		goto IL_019a;
	}

IL_0168:
	{
		MenuFlowManager_t1614880941 * L_41 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_42 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_43 = __this->get_U24this_1();
		NullCheck(L_43);
		ImageU5BU5D_t2439009922* L_44 = L_43->get_fadeImages_5();
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Image_t2670269651 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		RuntimeObject* L_48 = MenuFlowManager_IFadeImage_m3217344465(L_42, L_47, (0.0f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_41);
		MonoBehaviour_StartCoroutine_m3411253000(L_41, L_48, /*hidden argument*/NULL);
		int32_t L_49 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_019a:
	{
		int32_t L_50 = V_3;
		MenuFlowManager_t1614880941 * L_51 = __this->get_U24this_1();
		NullCheck(L_51);
		ImageU5BU5D_t2439009922* L_52 = L_51->get_fadeImages_5();
		NullCheck(L_52);
		if ((((int32_t)L_50) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_52)->max_length)))))))
		{
			goto IL_0168;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_53 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_53, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_53);
		bool L_54 = __this->get_U24disposing_3();
		if (L_54)
		{
			goto IL_01cc;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_01cc:
	{
		goto IL_01e6;
	}

IL_01d1:
	{
		MenuFlowManager_t1614880941 * L_55 = __this->get_U24this_1();
		NullCheck(L_55);
		L_55->set_changing_11((bool)0);
		__this->set_U24PC_4((-1));
	}

IL_01e4:
	{
		return (bool)0;
	}

IL_01e6:
	{
		return (bool)1;
	}
}
// System.Object MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIFadeAndChangePanelU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m176924205 (U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIFadeAndChangePanelU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m2933255092 (U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::Dispose()
extern "C"  void U3CIFadeAndChangePanelU3Ec__Iterator2_Dispose_m716505617 (U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void MenuFlowManager/<IFadeAndChangePanel>c__Iterator2::Reset()
extern "C"  void U3CIFadeAndChangePanelU3Ec__Iterator2_Reset_m634308582 (U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeAndChangePanelU3Ec__Iterator2_Reset_m634308582_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuFlowManager/<IFadeImage>c__Iterator3::.ctor()
extern "C"  void U3CIFadeImageU3Ec__Iterator3__ctor_m3087185235 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuFlowManager/<IFadeImage>c__Iterator3::MoveNext()
extern "C"  bool U3CIFadeImageU3Ec__Iterator3_MoveNext_m3461052218 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeImageU3Ec__Iterator3_MoveNext_m3461052218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Rect_t2360479859  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00eb;
			}
		}
	}
	{
		goto IL_0102;
	}

IL_0021:
	{
		Image_t2670269651 * L_2 = __this->get_image_0();
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = Graphic_get_rectTransform_m1167152468(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Rect_t2360479859  L_4 = RectTransform_get_rect_m574169965(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = Rect_get_height_m1358425599((&V_1), /*hidden argument*/NULL);
		__this->set_U3CstartHeightU3E__0_1(L_5);
		__this->set_U3CtimerU3E__0_2((0.0f));
		goto IL_00eb;
	}

IL_004f:
	{
		float L_6 = __this->get_U3CtimerU3E__0_2();
		float L_7 = __this->get_speed_3();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtimerU3E__0_2(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))));
		float L_9 = __this->get_U3CtimerU3E__0_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->set_U3CtimerU3E__0_2(L_10);
		Image_t2670269651 * L_11 = __this->get_image_0();
		NullCheck(L_11);
		RectTransform_t3704657025 * L_12 = Graphic_get_rectTransform_m1167152468(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector2_t2156229523  L_13 = RectTransform_get_sizeDelta_m2183112744(L_12, /*hidden argument*/NULL);
		__this->set_U3CrectU3E__1_4(L_13);
		Vector2_t2156229523 * L_14 = __this->get_address_of_U3CrectU3E__1_4();
		Vector2_t2156229523 * L_15 = __this->get_address_of_U3CrectU3E__1_4();
		float L_16 = L_15->get_y_1();
		float L_17 = __this->get_height_5();
		float L_18 = __this->get_U3CtimerU3E__0_2();
		float L_19 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		L_14->set_y_1(L_19);
		Image_t2670269651 * L_20 = __this->get_image_0();
		NullCheck(L_20);
		RectTransform_t3704657025 * L_21 = Graphic_get_rectTransform_m1167152468(L_20, /*hidden argument*/NULL);
		Vector2_t2156229523  L_22 = __this->get_U3CrectU3E__1_4();
		NullCheck(L_21);
		RectTransform_set_sizeDelta_m3462269772(L_21, L_22, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_23 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_23, /*hidden argument*/NULL);
		__this->set_U24current_6(L_23);
		bool L_24 = __this->get_U24disposing_7();
		if (L_24)
		{
			goto IL_00e6;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_00e6:
	{
		goto IL_0104;
	}

IL_00eb:
	{
		float L_25 = __this->get_U3CtimerU3E__0_2();
		if ((((float)L_25) < ((float)(1.0f))))
		{
			goto IL_004f;
		}
	}
	{
		__this->set_U24PC_8((-1));
	}

IL_0102:
	{
		return (bool)0;
	}

IL_0104:
	{
		return (bool)1;
	}
}
// System.Object MenuFlowManager/<IFadeImage>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIFadeImageU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2483374885 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object MenuFlowManager/<IFadeImage>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIFadeImageU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m2127858497 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void MenuFlowManager/<IFadeImage>c__Iterator3::Dispose()
extern "C"  void U3CIFadeImageU3Ec__Iterator3_Dispose_m1458538498 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void MenuFlowManager/<IFadeImage>c__Iterator3::Reset()
extern "C"  void U3CIFadeImageU3Ec__Iterator3_Reset_m3095745968 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeImageU3Ec__Iterator3_Reset_m3095745968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuFlowManager/<IMoveTitle>c__Iterator4::.ctor()
extern "C"  void U3CIMoveTitleU3Ec__Iterator4__ctor_m3054799051 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuFlowManager/<IMoveTitle>c__Iterator4::MoveNext()
extern "C"  bool U3CIMoveTitleU3Ec__Iterator4_MoveNext_m1493558177 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIMoveTitleU3Ec__Iterator4_MoveNext_m1493558177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		int32_t L_0 = __this->get_U24PC_16();
		V_0 = L_0;
		__this->set_U24PC_16((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0104;
			}
		}
	}
	{
		goto IL_025c;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		MenuFlowManager_t1614880941 * L_2 = __this->get_U24this_13();
		NullCheck(L_2);
		L_2->set_fadingTitle_12((bool)1);
		MenuFlowManager_t1614880941 * L_3 = __this->get_U24this_13();
		NullCheck(L_3);
		RectTransform_t3704657025 * L_4 = L_3->get_panel_title_2();
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = RectTransform_get_anchoredPosition_m1813443094(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_U3CsPos_titleU3E__0_1(L_6);
		MenuFlowManager_t1614880941 * L_7 = __this->get_U24this_13();
		NullCheck(L_7);
		RectTransform_t3704657025 * L_8 = L_7->get_panel_sky_3();
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = RectTransform_get_anchoredPosition_m1813443094(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->set_U3CsPos_skyU3E__0_2(L_10);
		MenuFlowManager_t1614880941 * L_11 = __this->get_U24this_13();
		NullCheck(L_11);
		RectTransform_t3704657025 * L_12 = L_11->get_panel_levels_4();
		NullCheck(L_12);
		Vector2_t2156229523  L_13 = RectTransform_get_anchoredPosition_m1813443094(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		__this->set_U3CsPos_levelsU3E__0_3(L_14);
		Vector3_t3722313464  L_15 = __this->get_U3CsPos_titleU3E__0_1();
		__this->set_U3CdPos_titleU3E__0_4(L_15);
		Vector3_t3722313464 * L_16 = __this->get_address_of_U3CdPos_titleU3E__0_4();
		float L_17 = __this->get_pos_title_5();
		L_16->set_y_2(L_17);
		Vector3_t3722313464  L_18 = __this->get_U3CsPos_skyU3E__0_2();
		__this->set_U3CdPos_skyU3E__0_6(L_18);
		Vector3_t3722313464 * L_19 = __this->get_address_of_U3CdPos_skyU3E__0_6();
		float L_20 = __this->get_pos_sky_7();
		L_19->set_y_2(L_20);
		Vector3_t3722313464  L_21 = __this->get_U3CsPos_levelsU3E__0_3();
		__this->set_U3CdPos_levelsU3E__0_8(L_21);
		Vector3_t3722313464 * L_22 = __this->get_address_of_U3CdPos_levelsU3E__0_8();
		float L_23 = __this->get_pos_levels_9();
		L_22->set_y_2(L_23);
		goto IL_0228;
	}

IL_00e5:
	{
		WaitForEndOfFrame_t1314943911 * L_24 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_24, /*hidden argument*/NULL);
		__this->set_U24current_14(L_24);
		bool L_25 = __this->get_U24disposing_15();
		if (L_25)
		{
			goto IL_00ff;
		}
	}
	{
		__this->set_U24PC_16(1);
	}

IL_00ff:
	{
		goto IL_025e;
	}

IL_0104:
	{
		float L_26 = __this->get_U3ClerpU3E__0_0();
		float L_27 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_28 = __this->get_speed_10();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_26, (float)((float)il2cpp_codegen_multiply((float)L_27, (float)L_28)))));
		MenuFlowManager_t1614880941 * L_29 = __this->get_U24this_13();
		NullCheck(L_29);
		RectTransform_t3704657025 * L_30 = L_29->get_panel_title_2();
		NullCheck(L_30);
		Vector2_t2156229523  L_31 = RectTransform_get_anchoredPosition_m1813443094(L_30, /*hidden argument*/NULL);
		V_1 = L_31;
		float L_32 = (&V_1)->get_y_1();
		Vector3_t3722313464 * L_33 = __this->get_address_of_U3CdPos_titleU3E__0_4();
		float L_34 = L_33->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_35 = fabsf(((float)il2cpp_codegen_subtract((float)L_32, (float)L_34)));
		__this->set_U3CdiffU3E__1_11(L_35);
		MenuFlowManager_t1614880941 * L_36 = __this->get_U24this_13();
		NullCheck(L_36);
		bool L_37 = L_36->get_fadingTitle_12();
		if (!L_37)
		{
			goto IL_016c;
		}
	}
	{
		float L_38 = __this->get_U3CdiffU3E__1_11();
		if ((!(((float)L_38) < ((float)(5.0f)))))
		{
			goto IL_0177;
		}
	}

IL_016c:
	{
		__this->set_U3ClerpU3E__0_0((1.0f));
	}

IL_0177:
	{
		MenuFlowManager_t1614880941 * L_39 = __this->get_U24this_13();
		NullCheck(L_39);
		RectTransform_t3704657025 * L_40 = L_39->get_panel_title_2();
		MenuFlowManager_t1614880941 * L_41 = __this->get_U24this_13();
		NullCheck(L_41);
		RectTransform_t3704657025 * L_42 = L_41->get_panel_title_2();
		NullCheck(L_42);
		Vector2_t2156229523  L_43 = RectTransform_get_anchoredPosition_m1813443094(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_44 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
		Vector3_t3722313464  L_45 = __this->get_U3CdPos_titleU3E__0_4();
		float L_46 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_47 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_44, L_45, L_46, /*hidden argument*/NULL);
		Vector2_t2156229523  L_48 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_47, /*hidden argument*/NULL);
		NullCheck(L_40);
		RectTransform_set_anchoredPosition_m4126691837(L_40, L_48, /*hidden argument*/NULL);
		MenuFlowManager_t1614880941 * L_49 = __this->get_U24this_13();
		NullCheck(L_49);
		RectTransform_t3704657025 * L_50 = L_49->get_panel_sky_3();
		MenuFlowManager_t1614880941 * L_51 = __this->get_U24this_13();
		NullCheck(L_51);
		RectTransform_t3704657025 * L_52 = L_51->get_panel_sky_3();
		NullCheck(L_52);
		Vector2_t2156229523  L_53 = RectTransform_get_anchoredPosition_m1813443094(L_52, /*hidden argument*/NULL);
		Vector3_t3722313464  L_54 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_53, /*hidden argument*/NULL);
		Vector3_t3722313464  L_55 = __this->get_U3CdPos_skyU3E__0_6();
		float L_56 = __this->get_U3ClerpU3E__0_0();
		Vector3_t3722313464  L_57 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_54, L_55, L_56, /*hidden argument*/NULL);
		Vector2_t2156229523  L_58 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_57, /*hidden argument*/NULL);
		NullCheck(L_50);
		RectTransform_set_anchoredPosition_m4126691837(L_50, L_58, /*hidden argument*/NULL);
		MenuFlowManager_t1614880941 * L_59 = __this->get_U24this_13();
		NullCheck(L_59);
		RectTransform_t3704657025 * L_60 = L_59->get_panel_levels_4();
		MenuFlowManager_t1614880941 * L_61 = __this->get_U24this_13();
		NullCheck(L_61);
		RectTransform_t3704657025 * L_62 = L_61->get_panel_levels_4();
		NullCheck(L_62);
		Vector2_t2156229523  L_63 = RectTransform_get_anchoredPosition_m1813443094(L_62, /*hidden argument*/NULL);
		Vector3_t3722313464  L_64 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_63, /*hidden argument*/NULL);
		Vector3_t3722313464  L_65 = __this->get_U3CdPos_levelsU3E__0_8();
		float L_66 = __this->get_U3ClerpU3E__0_0();
		Vector3_t3722313464  L_67 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_64, L_65, L_66, /*hidden argument*/NULL);
		Vector2_t2156229523  L_68 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_67, /*hidden argument*/NULL);
		NullCheck(L_60);
		RectTransform_set_anchoredPosition_m4126691837(L_60, L_68, /*hidden argument*/NULL);
	}

IL_0228:
	{
		float L_69 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_69) < ((float)(1.0f))))
		{
			goto IL_00e5;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_70 = __this->get_U24this_13();
		NullCheck(L_70);
		L_70->set_fadingTitle_12((bool)0);
		MenuFlowManager_t1614880941 * L_71 = __this->get_U24this_13();
		bool L_72 = __this->get_toTitle_12();
		NullCheck(L_71);
		L_71->set_onTitle_14(L_72);
		__this->set_U24PC_16((-1));
	}

IL_025c:
	{
		return (bool)0;
	}

IL_025e:
	{
		return (bool)1;
	}
}
// System.Object MenuFlowManager/<IMoveTitle>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIMoveTitleU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3703267124 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_14();
		return L_0;
	}
}
// System.Object MenuFlowManager/<IMoveTitle>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIMoveTitleU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m505249181 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_14();
		return L_0;
	}
}
// System.Void MenuFlowManager/<IMoveTitle>c__Iterator4::Dispose()
extern "C"  void U3CIMoveTitleU3Ec__Iterator4_Dispose_m2790082648 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_15((bool)1);
		__this->set_U24PC_16((-1));
		return;
	}
}
// System.Void MenuFlowManager/<IMoveTitle>c__Iterator4::Reset()
extern "C"  void U3CIMoveTitleU3Ec__Iterator4_Reset_m4182724530 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIMoveTitleU3Ec__Iterator4_Reset_m4182724530_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuFlowManager/<IPlayDelayedTip>c__Iterator1::.ctor()
extern "C"  void U3CIPlayDelayedTipU3Ec__Iterator1__ctor_m2636734247 (U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuFlowManager/<IPlayDelayedTip>c__Iterator1::MoveNext()
extern "C"  bool U3CIPlayDelayedTipU3Ec__Iterator1_MoveNext_m2441972052 (U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPlayDelayedTipU3Ec__Iterator1_MoveNext_m2441972052_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_00cb;
	}

IL_0021:
	{
		float L_2 = __this->get_delay_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_3(L_3);
		bool L_4 = __this->get_U24disposing_4();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_0041:
	{
		goto IL_00cd;
	}

IL_0046:
	{
		MenuFlowManager_t1614880941 * L_5 = __this->get_U24this_2();
		NullCheck(L_5);
		AudioSource_t3935305588 * L_6 = L_5->get_aSrc_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_8 = __this->get_tipID_1();
		if ((((int32_t)L_8) < ((int32_t)0)))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_9 = __this->get_tipID_1();
		MenuFlowManager_t1614880941 * L_10 = __this->get_U24this_2();
		NullCheck(L_10);
		AudioClipU5BU5D_t143221404* L_11 = L_10->get_tipClips_7();
		NullCheck(L_11);
		if ((((int32_t)L_9) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_00c4;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_12 = __this->get_U24this_2();
		NullCheck(L_12);
		AudioClipU5BU5D_t143221404* L_13 = L_12->get_tipClips_7();
		int32_t L_14 = __this->get_tipID_1();
		NullCheck(L_13);
		int32_t L_15 = L_14;
		AudioClip_t3680889665 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_18 = __this->get_U24this_2();
		NullCheck(L_18);
		AudioSource_t3935305588 * L_19 = L_18->get_aSrc_16();
		MenuFlowManager_t1614880941 * L_20 = __this->get_U24this_2();
		NullCheck(L_20);
		AudioClipU5BU5D_t143221404* L_21 = L_20->get_tipClips_7();
		int32_t L_22 = __this->get_tipID_1();
		NullCheck(L_21);
		int32_t L_23 = L_22;
		AudioClip_t3680889665 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_19);
		AudioSource_PlayOneShot_m2678069419(L_19, L_24, (1.0f), /*hidden argument*/NULL);
	}

IL_00c4:
	{
		__this->set_U24PC_5((-1));
	}

IL_00cb:
	{
		return (bool)0;
	}

IL_00cd:
	{
		return (bool)1;
	}
}
// System.Object MenuFlowManager/<IPlayDelayedTip>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIPlayDelayedTipU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4220816337 (U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object MenuFlowManager/<IPlayDelayedTip>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIPlayDelayedTipU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m3245520971 (U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void MenuFlowManager/<IPlayDelayedTip>c__Iterator1::Dispose()
extern "C"  void U3CIPlayDelayedTipU3Ec__Iterator1_Dispose_m472387641 (U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void MenuFlowManager/<IPlayDelayedTip>c__Iterator1::Reset()
extern "C"  void U3CIPlayDelayedTipU3Ec__Iterator1_Reset_m2471565827 (U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPlayDelayedTipU3Ec__Iterator1_Reset_m2471565827_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuFlowManager/<ISelectLevel>c__Iterator0::.ctor()
extern "C"  void U3CISelectLevelU3Ec__Iterator0__ctor_m1072048797 (U3CISelectLevelU3Ec__Iterator0_t772913338 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuFlowManager/<ISelectLevel>c__Iterator0::MoveNext()
extern "C"  bool U3CISelectLevelU3Ec__Iterator0_MoveNext_m1500675614 (U3CISelectLevelU3Ec__Iterator0_t772913338 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CISelectLevelU3Ec__Iterator0_MoveNext_m1500675614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	Resolution_t2487619763  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_4();
		V_0 = L_0;
		__this->set_U24PC_4((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_009c;
			}
		}
	}
	{
		goto IL_00ae;
	}

IL_0021:
	{
		V_1 = 0;
		goto IL_0065;
	}

IL_0028:
	{
		MenuFlowManager_t1614880941 * L_2 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_3 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_4 = __this->get_U24this_1();
		NullCheck(L_4);
		ImageU5BU5D_t2439009922* L_5 = L_4->get_fadeImages_5();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Image_t2670269651 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		Resolution_t2487619763  L_9 = Screen_get_currentResolution_m1680624610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_9;
		int32_t L_10 = Resolution_get_height_m933996501((&V_2), /*hidden argument*/NULL);
		NullCheck(L_3);
		RuntimeObject* L_11 = MenuFlowManager_IFadeImage_m3217344465(L_3, L_8, (((float)((float)((int32_t)((int32_t)L_10/(int32_t)2))))), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		MonoBehaviour_StartCoroutine_m3411253000(L_2, L_11, /*hidden argument*/NULL);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0065:
	{
		int32_t L_13 = V_1;
		MenuFlowManager_t1614880941 * L_14 = __this->get_U24this_1();
		NullCheck(L_14);
		ImageU5BU5D_t2439009922* L_15 = L_14->get_fadeImages_5();
		NullCheck(L_15);
		if ((((int32_t)L_13) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_15)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_16 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_16, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_16);
		bool L_17 = __this->get_U24disposing_3();
		if (L_17)
		{
			goto IL_0097;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0097:
	{
		goto IL_00b0;
	}

IL_009c:
	{
		String_t* L_18 = __this->get_name_0();
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_18, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_00ae:
	{
		return (bool)0;
	}

IL_00b0:
	{
		return (bool)1;
	}
}
// System.Object MenuFlowManager/<ISelectLevel>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CISelectLevelU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2754611760 (U3CISelectLevelU3Ec__Iterator0_t772913338 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object MenuFlowManager/<ISelectLevel>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CISelectLevelU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2369459517 (U3CISelectLevelU3Ec__Iterator0_t772913338 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void MenuFlowManager/<ISelectLevel>c__Iterator0::Dispose()
extern "C"  void U3CISelectLevelU3Ec__Iterator0_Dispose_m2757921381 (U3CISelectLevelU3Ec__Iterator0_t772913338 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void MenuFlowManager/<ISelectLevel>c__Iterator0::Reset()
extern "C"  void U3CISelectLevelU3Ec__Iterator0_Reset_m1268821664 (U3CISelectLevelU3Ec__Iterator0_t772913338 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CISelectLevelU3Ec__Iterator0_Reset_m1268821664_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuFlowManager/<ISetTipPanel>c__Iterator5::.ctor()
extern "C"  void U3CISetTipPanelU3Ec__Iterator5__ctor_m1747929998 (U3CISetTipPanelU3Ec__Iterator5_t956795441 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuFlowManager/<ISetTipPanel>c__Iterator5::MoveNext()
extern "C"  bool U3CISetTipPanelU3Ec__Iterator5_MoveNext_m546186187 (U3CISetTipPanelU3Ec__Iterator5_t956795441 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CISetTipPanelU3Ec__Iterator5_MoveNext_m546186187_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00d5;
			}
		}
	}
	{
		goto IL_00f8;
	}

IL_0021:
	{
		MenuFlowManager_t1614880941 * L_2 = __this->get_U24this_3();
		NullCheck(L_2);
		L_2->set_fadingTipPanel_13((bool)1);
		__this->set_U3ClerpU3E__0_0((0.0f));
		MenuFlowManager_t1614880941 * L_3 = __this->get_U24this_3();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = L_3->get_tipPanel_9();
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = Transform_get_localScale_m129152068(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_x_1();
		__this->set_U3CcurrScaleU3E__0_1(L_6);
		goto IL_00d5;
	}

IL_005b:
	{
		float L_7 = __this->get_U3ClerpU3E__0_0();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_7, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)(2.0f))))));
		MenuFlowManager_t1614880941 * L_9 = __this->get_U24this_3();
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = L_9->get_tipPanel_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		MenuFlowManager_t1614880941 * L_12 = __this->get_U24this_3();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = L_12->get_tipPanel_9();
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_localScale_m129152068(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		float L_15 = (&V_2)->get_x_1();
		float L_16 = __this->get_destScale_2();
		float L_17 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_18 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_15, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t3722313464  L_19 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_11, L_18, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_localScale_m3053443106(L_10, L_19, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_20 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_20, /*hidden argument*/NULL);
		__this->set_U24current_4(L_20);
		bool L_21 = __this->get_U24disposing_5();
		if (L_21)
		{
			goto IL_00d0;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_00d0:
	{
		goto IL_00fa;
	}

IL_00d5:
	{
		float L_22 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_22) < ((float)(1.0f))))
		{
			goto IL_005b;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_23 = __this->get_U24this_3();
		NullCheck(L_23);
		L_23->set_fadingTipPanel_13((bool)0);
		__this->set_U24PC_6((-1));
	}

IL_00f8:
	{
		return (bool)0;
	}

IL_00fa:
	{
		return (bool)1;
	}
}
// System.Object MenuFlowManager/<ISetTipPanel>c__Iterator5::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CISetTipPanelU3Ec__Iterator5_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4267829556 (U3CISetTipPanelU3Ec__Iterator5_t956795441 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object MenuFlowManager/<ISetTipPanel>c__Iterator5::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CISetTipPanelU3Ec__Iterator5_System_Collections_IEnumerator_get_Current_m3274696648 (U3CISetTipPanelU3Ec__Iterator5_t956795441 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void MenuFlowManager/<ISetTipPanel>c__Iterator5::Dispose()
extern "C"  void U3CISetTipPanelU3Ec__Iterator5_Dispose_m2704722391 (U3CISetTipPanelU3Ec__Iterator5_t956795441 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void MenuFlowManager/<ISetTipPanel>c__Iterator5::Reset()
extern "C"  void U3CISetTipPanelU3Ec__Iterator5_Reset_m3788105307 (U3CISetTipPanelU3Ec__Iterator5_t956795441 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CISetTipPanelU3Ec__Iterator5_Reset_m3788105307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuLevelButton::.ctor()
extern "C"  void MenuLevelButton__ctor_m972022857 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton__ctor_m972022857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_levelKeyPrefix_6(_stringLiteral2810250481);
		__this->set_level_7(1);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuLevelButton::Start()
extern "C"  void MenuLevelButton_Start_m1936534555 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	{
		MenuLevelButton_Setup_m3441281685(__this, /*hidden argument*/NULL);
		int32_t L_0 = __this->get_level_7();
		MenuLevelButton_ActivateSelf_m1538653098(__this, (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuLevelButton::Setup()
extern "C"  void MenuLevelButton_Setup_m3441281685 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_Setup_m3441281685_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->get_levelKeyPrefix_6();
		int32_t* L_1 = __this->get_address_of_level_7();
		String_t* L_2 = Int32_ToString_m372259452(L_1, _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, L_0, L_2, /*hidden argument*/NULL);
		int32_t L_4 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_3, 0, /*hidden argument*/NULL);
		MenuLevelButton_ShowStarts_m3471610984(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuLevelButton::ActivateSelf(System.Boolean)
extern "C"  void MenuLevelButton_ActivateSelf_m1538653098 (MenuLevelButton_t3559006541 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_ActivateSelf_m1538653098_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Color_t2555686324 * G_B2_0 = NULL;
	Color_t2555686324 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	Color_t2555686324 * G_B3_1 = NULL;
	{
		Color_t2555686324  L_0 = Color_get_white_m332174077(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = ___value0;
		G_B1_0 = (&V_0);
		if (!L_1)
		{
			G_B2_0 = (&V_0);
			goto IL_0018;
		}
	}
	{
		G_B3_0 = (1.0f);
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = (0.5f);
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		G_B3_1->set_a_3(G_B3_0);
		Image_t2670269651 * L_2 = __this->get_title_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		Image_t2670269651 * L_4 = __this->get_title_4();
		Color_t2555686324  L_5 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_5);
	}

IL_003f:
	{
		GameObject_t1113636619 * L_6 = __this->get_activePanel_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		GameObject_t1113636619 * L_8 = __this->get_activePanel_5();
		bool L_9 = ___value0;
		NullCheck(L_8);
		GameObject_SetActive_m796801857(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005c:
	{
		return;
	}
}
// System.Void MenuLevelButton::ShowStarts(System.Int32)
extern "C"  void MenuLevelButton_ShowStarts_m3471610984 (MenuLevelButton_t3559006541 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		goto IL_001c;
	}

IL_0007:
	{
		GameObjectU5BU5D_t3328599146* L_0 = __this->get_activeStars_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t1113636619 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		int32_t L_5 = ___amount0;
		NullCheck(L_3);
		GameObject_SetActive_m796801857(L_3, (bool)((((int32_t)L_4) < ((int32_t)L_5))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_001c:
	{
		int32_t L_7 = V_0;
		GameObjectU5BU5D_t3328599146* L_8 = __this->get_activeStars_2();
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		V_1 = 0;
		goto IL_0049;
	}

IL_0031:
	{
		GameObjectU5BU5D_t3328599146* L_9 = __this->get_inactiveStars_3();
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		GameObject_t1113636619 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		int32_t L_13 = V_1;
		int32_t L_14 = ___amount0;
		NullCheck(L_12);
		GameObject_SetActive_m796801857(L_12, (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0049:
	{
		int32_t L_16 = V_1;
		GameObjectU5BU5D_t3328599146* L_17 = __this->get_inactiveStars_3();
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
// System.Void MenuLevelButton::Click()
extern "C"  void MenuLevelButton_Click_m1388688786 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_Click_m1388688786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_activePanel_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_activePanel_5();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		MenuNotification_t963843896 * L_4 = __this->get_notificationManager_9();
		String_t* L_5 = __this->get_inactiveMessage_8();
		NullCheck(L_4);
		MenuNotification_ShowMessage_m1081873921(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void MenuLevelButton::SelectWorld()
extern "C"  void MenuLevelButton_SelectWorld_m1572165096 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_SelectWorld_m1572165096_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_activePanel_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_activePanel_5();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}

IL_0021:
	{
		MenuFlowManager_t1614880941 * L_4 = __this->get_flowManager_10();
		int32_t L_5 = __this->get_level_7();
		NullCheck(L_4);
		MenuFlowManager_SelectWorld_m4120408508(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void MenuLevelButton::SelectLevel()
extern "C"  void MenuLevelButton_SelectLevel_m66141631 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_SelectLevel_m66141631_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_activePanel_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_activePanel_5();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}

IL_0021:
	{
		MenuFlowManager_t1614880941 * L_4 = __this->get_flowManager_10();
		int32_t L_5 = __this->get_level_7();
		NullCheck(L_4);
		MenuFlowManager_SelectLevel_m1642849559(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Void MenuLevelButton::FadeToPanel(System.Int32)
extern "C"  void MenuLevelButton_FadeToPanel_m1436600765 (MenuLevelButton_t3559006541 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_FadeToPanel_m1436600765_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_activePanel_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_activePanel_5();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}

IL_0021:
	{
		MenuFlowManager_t1614880941 * L_4 = __this->get_flowManager_10();
		int32_t L_5 = ___id0;
		NullCheck(L_4);
		MenuFlowManager_FadeAndChangePanel_m1298059106(L_4, L_5, /*hidden argument*/NULL);
	}

IL_002d:
	{
		return;
	}
}
// System.Void MenuLevelButton::SetLevelKeyPrefix(System.String)
extern "C"  void MenuLevelButton_SetLevelKeyPrefix_m971040662 (MenuLevelButton_t3559006541 * __this, String_t* ___pref0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___pref0;
		__this->set_levelKeyPrefix_6(L_0);
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
// System.Void MenuLevelScreen::.ctor()
extern "C"  void MenuLevelScreen__ctor_m4200517216 (MenuLevelScreen_t2132622692 * __this, const RuntimeMethod* method)
{
	{
		__this->set_defaultScroll_4((300.0f));
		__this->set_scrollIncrement_5((500.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuLevelScreen::OrganizeLevelScreen()
extern "C"  void MenuLevelScreen_OrganizeLevelScreen_m3344403122 (MenuLevelScreen_t2132622692 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelScreen_OrganizeLevelScreen_m3344403122_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	Vector2_t2156229523  V_7;
	memset(&V_7, 0, sizeof(V_7));
	{
		float L_0 = __this->get_defaultScroll_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_00b7;
	}

IL_000e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_1 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_1);
		int32_t L_2 = StageInfo_GetWorldID_m2363233804(L_1, /*hidden argument*/NULL);
		V_3 = L_2;
		String_t* L_3 = Int32_ToString_m372259452((&V_3), _stringLiteral3451565968, /*hidden argument*/NULL);
		int32_t L_4 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		String_t* L_5 = Int32_ToString_m372259452((&V_4), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral840215853, L_3, _stringLiteral3452614641, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7 = V_2;
		bool L_8 = Application_CanStreamedLevelBeLoaded_m348022888(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		V_5 = L_8;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_005e;
		}
	}
	{
		float L_10 = V_0;
		float L_11 = __this->get_scrollIncrement_5();
		V_0 = ((float)il2cpp_codegen_add((float)L_10, (float)L_11));
	}

IL_005e:
	{
		MenuLevelButtonU5BU5D_t58144480* L_12 = __this->get_buttons_2();
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		MenuLevelButton_t3559006541 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_t1113636619 * L_16 = Component_get_gameObject_m442555142(L_15, /*hidden argument*/NULL);
		bool L_17 = V_5;
		NullCheck(L_16);
		GameObject_SetActive_m796801857(L_16, L_17, /*hidden argument*/NULL);
		MenuLevelButtonU5BU5D_t58144480* L_18 = __this->get_buttons_2();
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		MenuLevelButton_t3559006541 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_22 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_22);
		int32_t L_23 = StageInfo_GetWorldID_m2363233804(L_22, /*hidden argument*/NULL);
		V_6 = L_23;
		String_t* L_24 = Int32_ToString_m372259452((&V_6), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2278870150, L_24, _stringLiteral382461207, /*hidden argument*/NULL);
		NullCheck(L_21);
		MenuLevelButton_SetLevelKeyPrefix_m971040662(L_21, L_25, /*hidden argument*/NULL);
		MenuLevelButtonU5BU5D_t58144480* L_26 = __this->get_buttons_2();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		MenuLevelButton_t3559006541 * L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		MenuLevelButton_Setup_m3441281685(L_29, /*hidden argument*/NULL);
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_00b7:
	{
		int32_t L_31 = V_1;
		MenuLevelButtonU5BU5D_t58144480* L_32 = __this->get_buttons_2();
		NullCheck(L_32);
		if ((((int32_t)L_31) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_32)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		RectTransform_t3704657025 * L_33 = __this->get_scrollRect_3();
		NullCheck(L_33);
		Vector2_t2156229523  L_34 = RectTransform_get_sizeDelta_m2183112744(L_33, /*hidden argument*/NULL);
		V_7 = L_34;
		float L_35 = V_0;
		(&V_7)->set_y_1(L_35);
		RectTransform_t3704657025 * L_36 = __this->get_scrollRect_3();
		Vector2_t2156229523  L_37 = V_7;
		NullCheck(L_36);
		RectTransform_set_sizeDelta_m3462269772(L_36, L_37, /*hidden argument*/NULL);
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
// System.Void MenuNotification::.ctor()
extern "C"  void MenuNotification__ctor_m986260851 (MenuNotification_t963843896 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuNotification::ShowMessage(System.String)
extern "C"  void MenuNotification_ShowMessage_m1081873921 (MenuNotification_t963843896 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_notificationText_3();
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		bool L_2 = __this->get_moving_4();
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_3 = MenuNotification_IShowPanel_m423577807(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_3, /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0029:
	{
		bool L_4 = __this->get_popping_5();
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_5 = MenuNotification_IPopPanel_m108523591(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Collections.IEnumerator MenuNotification::IShowPanel()
extern "C"  RuntimeObject* MenuNotification_IShowPanel_m423577807 (MenuNotification_t963843896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuNotification_IShowPanel_m423577807_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIShowPanelU3Ec__Iterator0_t3293565631 * V_0 = NULL;
	{
		U3CIShowPanelU3Ec__Iterator0_t3293565631 * L_0 = (U3CIShowPanelU3Ec__Iterator0_t3293565631 *)il2cpp_codegen_object_new(U3CIShowPanelU3Ec__Iterator0_t3293565631_il2cpp_TypeInfo_var);
		U3CIShowPanelU3Ec__Iterator0__ctor_m1175556373(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIShowPanelU3Ec__Iterator0_t3293565631 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CIShowPanelU3Ec__Iterator0_t3293565631 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator MenuNotification::IPopPanel()
extern "C"  RuntimeObject* MenuNotification_IPopPanel_m108523591 (MenuNotification_t963843896 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuNotification_IPopPanel_m108523591_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIPopPanelU3Ec__Iterator1_t1172258948 * V_0 = NULL;
	{
		U3CIPopPanelU3Ec__Iterator1_t1172258948 * L_0 = (U3CIPopPanelU3Ec__Iterator1_t1172258948 *)il2cpp_codegen_object_new(U3CIPopPanelU3Ec__Iterator1_t1172258948_il2cpp_TypeInfo_var);
		U3CIPopPanelU3Ec__Iterator1__ctor_m2565854616(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIPopPanelU3Ec__Iterator1_t1172258948 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CIPopPanelU3Ec__Iterator1_t1172258948 * L_2 = V_0;
		return L_2;
	}
}
// System.Collections.IEnumerator MenuNotification::IMovePanel(System.Single,System.Single)
extern "C"  RuntimeObject* MenuNotification_IMovePanel_m3165881322 (MenuNotification_t963843896 * __this, float ___height0, float ___speed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuNotification_IMovePanel_m3165881322_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIMovePanelU3Ec__Iterator2_t2454059368 * V_0 = NULL;
	{
		U3CIMovePanelU3Ec__Iterator2_t2454059368 * L_0 = (U3CIMovePanelU3Ec__Iterator2_t2454059368 *)il2cpp_codegen_object_new(U3CIMovePanelU3Ec__Iterator2_t2454059368_il2cpp_TypeInfo_var);
		U3CIMovePanelU3Ec__Iterator2__ctor_m3535100192(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIMovePanelU3Ec__Iterator2_t2454059368 * L_1 = V_0;
		float L_2 = ___height0;
		NullCheck(L_1);
		L_1->set_height_3(L_2);
		U3CIMovePanelU3Ec__Iterator2_t2454059368 * L_3 = V_0;
		float L_4 = ___speed1;
		NullCheck(L_3);
		L_3->set_speed_4(L_4);
		U3CIMovePanelU3Ec__Iterator2_t2454059368 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_5(__this);
		U3CIMovePanelU3Ec__Iterator2_t2454059368 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator MenuNotification::IScalePanel(System.Single,System.Single)
extern "C"  RuntimeObject* MenuNotification_IScalePanel_m1167846611 (MenuNotification_t963843896 * __this, float ___scale0, float ___speed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuNotification_IScalePanel_m1167846611_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIScalePanelU3Ec__Iterator3_t237107718 * V_0 = NULL;
	{
		U3CIScalePanelU3Ec__Iterator3_t237107718 * L_0 = (U3CIScalePanelU3Ec__Iterator3_t237107718 *)il2cpp_codegen_object_new(U3CIScalePanelU3Ec__Iterator3_t237107718_il2cpp_TypeInfo_var);
		U3CIScalePanelU3Ec__Iterator3__ctor_m512322390(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIScalePanelU3Ec__Iterator3_t237107718 * L_1 = V_0;
		float L_2 = ___speed1;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIScalePanelU3Ec__Iterator3_t237107718 * L_3 = V_0;
		float L_4 = ___scale0;
		NullCheck(L_3);
		L_3->set_scale_2(L_4);
		U3CIScalePanelU3Ec__Iterator3_t237107718 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_3(__this);
		U3CIScalePanelU3Ec__Iterator3_t237107718 * L_6 = V_0;
		return L_6;
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
// System.Void MenuNotification/<IMovePanel>c__Iterator2::.ctor()
extern "C"  void U3CIMovePanelU3Ec__Iterator2__ctor_m3535100192 (U3CIMovePanelU3Ec__Iterator2_t2454059368 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuNotification/<IMovePanel>c__Iterator2::MoveNext()
extern "C"  bool U3CIMovePanelU3Ec__Iterator2_MoveNext_m1895705063 (U3CIMovePanelU3Ec__Iterator2_t2454059368 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIMovePanelU3Ec__Iterator2_MoveNext_m1895705063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_8();
		V_0 = L_0;
		__this->set_U24PC_8((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00c3;
			}
		}
	}
	{
		goto IL_00da;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		MenuNotification_t963843896 * L_2 = __this->get_U24this_5();
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = L_2->get_notificationPanel_2();
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = RectTransform_get_anchoredPosition_m1813443094(L_3, /*hidden argument*/NULL);
		__this->set_U3CstartPosU3E__0_1(L_4);
		Vector2_t2156229523  L_5 = __this->get_U3CstartPosU3E__0_1();
		__this->set_U3CendPosU3E__0_2(L_5);
		Vector2_t2156229523 * L_6 = __this->get_address_of_U3CendPosU3E__0_2();
		float L_7 = __this->get_height_3();
		L_6->set_y_1(L_7);
		goto IL_00c3;
	}

IL_0064:
	{
		float L_8 = __this->get_U3ClerpU3E__0_0();
		float L_9 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_speed_4();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_8, (float)((float)il2cpp_codegen_multiply((float)L_9, (float)L_10)))));
		MenuNotification_t963843896 * L_11 = __this->get_U24this_5();
		NullCheck(L_11);
		RectTransform_t3704657025 * L_12 = L_11->get_notificationPanel_2();
		Vector2_t2156229523  L_13 = __this->get_U3CstartPosU3E__0_1();
		Vector2_t2156229523  L_14 = __this->get_U3CendPosU3E__0_2();
		float L_15 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = Vector2_Lerp_m854472224(NULL /*static, unused*/, L_13, L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_12);
		RectTransform_set_anchoredPosition_m4126691837(L_12, L_16, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_17 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_17, /*hidden argument*/NULL);
		__this->set_U24current_6(L_17);
		bool L_18 = __this->get_U24disposing_7();
		if (L_18)
		{
			goto IL_00be;
		}
	}
	{
		__this->set_U24PC_8(1);
	}

IL_00be:
	{
		goto IL_00dc;
	}

IL_00c3:
	{
		float L_19 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_19) < ((float)(1.0f))))
		{
			goto IL_0064;
		}
	}
	{
		__this->set_U24PC_8((-1));
	}

IL_00da:
	{
		return (bool)0;
	}

IL_00dc:
	{
		return (bool)1;
	}
}
// System.Object MenuNotification/<IMovePanel>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIMovePanelU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m817800316 (U3CIMovePanelU3Ec__Iterator2_t2454059368 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Object MenuNotification/<IMovePanel>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIMovePanelU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m3610320409 (U3CIMovePanelU3Ec__Iterator2_t2454059368 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_6();
		return L_0;
	}
}
// System.Void MenuNotification/<IMovePanel>c__Iterator2::Dispose()
extern "C"  void U3CIMovePanelU3Ec__Iterator2_Dispose_m4093350044 (U3CIMovePanelU3Ec__Iterator2_t2454059368 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_7((bool)1);
		__this->set_U24PC_8((-1));
		return;
	}
}
// System.Void MenuNotification/<IMovePanel>c__Iterator2::Reset()
extern "C"  void U3CIMovePanelU3Ec__Iterator2_Reset_m1586566488 (U3CIMovePanelU3Ec__Iterator2_t2454059368 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIMovePanelU3Ec__Iterator2_Reset_m1586566488_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuNotification/<IPopPanel>c__Iterator1::.ctor()
extern "C"  void U3CIPopPanelU3Ec__Iterator1__ctor_m2565854616 (U3CIPopPanelU3Ec__Iterator1_t1172258948 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuNotification/<IPopPanel>c__Iterator1::MoveNext()
extern "C"  bool U3CIPopPanelU3Ec__Iterator1_MoveNext_m2796333892 (U3CIPopPanelU3Ec__Iterator1_t1172258948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPopPanelU3Ec__Iterator1_MoveNext_m2796333892_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_0076;
			}
			case 2:
			{
				goto IL_00bb;
			}
		}
	}
	{
		goto IL_00ce;
	}

IL_0025:
	{
		MenuNotification_t963843896 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		L_2->set_popping_5((bool)1);
		MenuNotification_t963843896 * L_3 = __this->get_U24this_0();
		MenuNotification_t963843896 * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		RuntimeObject* L_5 = MenuNotification_IScalePanel_m1167846611(L_4, (1.05f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		MonoBehaviour_StartCoroutine_m3411253000(L_3, L_5, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_6 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_6, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_6);
		bool L_7 = __this->get_U24disposing_2();
		if (L_7)
		{
			goto IL_0071;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0071:
	{
		goto IL_00d0;
	}

IL_0076:
	{
		MenuNotification_t963843896 * L_8 = __this->get_U24this_0();
		MenuNotification_t963843896 * L_9 = __this->get_U24this_0();
		NullCheck(L_9);
		RuntimeObject* L_10 = MenuNotification_IScalePanel_m1167846611(L_9, (1.0f), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		MonoBehaviour_StartCoroutine_m3411253000(L_8, L_10, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_11 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_11, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_11);
		bool L_12 = __this->get_U24disposing_2();
		if (L_12)
		{
			goto IL_00b6;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00b6:
	{
		goto IL_00d0;
	}

IL_00bb:
	{
		MenuNotification_t963843896 * L_13 = __this->get_U24this_0();
		NullCheck(L_13);
		L_13->set_popping_5((bool)0);
		__this->set_U24PC_3((-1));
	}

IL_00ce:
	{
		return (bool)0;
	}

IL_00d0:
	{
		return (bool)1;
	}
}
// System.Object MenuNotification/<IPopPanel>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIPopPanelU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2392518945 (U3CIPopPanelU3Ec__Iterator1_t1172258948 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object MenuNotification/<IPopPanel>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIPopPanelU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2218968179 (U3CIPopPanelU3Ec__Iterator1_t1172258948 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void MenuNotification/<IPopPanel>c__Iterator1::Dispose()
extern "C"  void U3CIPopPanelU3Ec__Iterator1_Dispose_m2272522507 (U3CIPopPanelU3Ec__Iterator1_t1172258948 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void MenuNotification/<IPopPanel>c__Iterator1::Reset()
extern "C"  void U3CIPopPanelU3Ec__Iterator1_Reset_m2083978257 (U3CIPopPanelU3Ec__Iterator1_t1172258948 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPopPanelU3Ec__Iterator1_Reset_m2083978257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuNotification/<IScalePanel>c__Iterator3::.ctor()
extern "C"  void U3CIScalePanelU3Ec__Iterator3__ctor_m512322390 (U3CIScalePanelU3Ec__Iterator3_t237107718 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuNotification/<IScalePanel>c__Iterator3::MoveNext()
extern "C"  bool U3CIScalePanelU3Ec__Iterator3_MoveNext_m1392202448 (U3CIScalePanelU3Ec__Iterator3_t237107718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIScalePanelU3Ec__Iterator3_MoveNext_m1392202448_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00a8;
			}
		}
	}
	{
		goto IL_00bf;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_00a8;
	}

IL_0031:
	{
		float L_2 = __this->get_U3ClerpU3E__0_0();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_1();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		MenuNotification_t963843896 * L_5 = __this->get_U24this_3();
		NullCheck(L_5);
		RectTransform_t3704657025 * L_6 = L_5->get_notificationPanel_2();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_7 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_8 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Vector3_t3722313464  L_9 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_10 = __this->get_scale_2();
		Vector3_t3722313464  L_11 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
		Vector2_t2156229523  L_12 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		float L_13 = __this->get_U3ClerpU3E__0_0();
		Vector2_t2156229523  L_14 = Vector2_Lerp_m854472224(NULL /*static, unused*/, L_8, L_12, L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_localScale_m3053443106(L_6, L_15, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_16 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_16, /*hidden argument*/NULL);
		__this->set_U24current_4(L_16);
		bool L_17 = __this->get_U24disposing_5();
		if (L_17)
		{
			goto IL_00a3;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_00a3:
	{
		goto IL_00c1;
	}

IL_00a8:
	{
		float L_18 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_18) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_U24PC_6((-1));
	}

IL_00bf:
	{
		return (bool)0;
	}

IL_00c1:
	{
		return (bool)1;
	}
}
// System.Object MenuNotification/<IScalePanel>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIScalePanelU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3963938001 (U3CIScalePanelU3Ec__Iterator3_t237107718 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object MenuNotification/<IScalePanel>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIScalePanelU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m2155780793 (U3CIScalePanelU3Ec__Iterator3_t237107718 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void MenuNotification/<IScalePanel>c__Iterator3::Dispose()
extern "C"  void U3CIScalePanelU3Ec__Iterator3_Dispose_m2173572995 (U3CIScalePanelU3Ec__Iterator3_t237107718 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void MenuNotification/<IScalePanel>c__Iterator3::Reset()
extern "C"  void U3CIScalePanelU3Ec__Iterator3_Reset_m3924052829 (U3CIScalePanelU3Ec__Iterator3_t237107718 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIScalePanelU3Ec__Iterator3_Reset_m3924052829_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuNotification/<IShowPanel>c__Iterator0::.ctor()
extern "C"  void U3CIShowPanelU3Ec__Iterator0__ctor_m1175556373 (U3CIShowPanelU3Ec__Iterator0_t3293565631 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuNotification/<IShowPanel>c__Iterator0::MoveNext()
extern "C"  bool U3CIShowPanelU3Ec__Iterator0_MoveNext_m3628302451 (U3CIShowPanelU3Ec__Iterator0_t3293565631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIShowPanelU3Ec__Iterator0_MoveNext_m3628302451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_002d;
			}
			case 1:
			{
				goto IL_0097;
			}
			case 2:
			{
				goto IL_00e2;
			}
			case 3:
			{
				goto IL_012d;
			}
			case 4:
			{
				goto IL_018c;
			}
		}
	}
	{
		goto IL_019f;
	}

IL_002d:
	{
		MenuNotification_t963843896 * L_2 = __this->get_U24this_0();
		NullCheck(L_2);
		L_2->set_moving_4((bool)1);
		MenuNotification_t963843896 * L_3 = __this->get_U24this_0();
		MenuNotification_t963843896 * L_4 = __this->get_U24this_0();
		MenuNotification_t963843896 * L_5 = __this->get_U24this_0();
		NullCheck(L_5);
		RectTransform_t3704657025 * L_6 = L_5->get_notificationPanel_2();
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = RectTransform_get_sizeDelta_m2183112744(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = (&V_1)->get_y_1();
		NullCheck(L_4);
		RuntimeObject* L_9 = MenuNotification_IMovePanel_m3165881322(L_4, ((float)((float)L_8/(float)(2.0f))), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		MonoBehaviour_StartCoroutine_m3411253000(L_3, L_9, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_10 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_10, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_10);
		bool L_11 = __this->get_U24disposing_2();
		if (L_11)
		{
			goto IL_0092;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0092:
	{
		goto IL_01a1;
	}

IL_0097:
	{
		MenuNotification_t963843896 * L_12 = __this->get_U24this_0();
		NullCheck(L_12);
		bool L_13 = L_12->get_popping_5();
		if (L_13)
		{
			goto IL_00be;
		}
	}
	{
		MenuNotification_t963843896 * L_14 = __this->get_U24this_0();
		MenuNotification_t963843896 * L_15 = __this->get_U24this_0();
		NullCheck(L_15);
		RuntimeObject* L_16 = MenuNotification_IPopPanel_m108523591(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		MonoBehaviour_StartCoroutine_m3411253000(L_14, L_16, /*hidden argument*/NULL);
	}

IL_00be:
	{
		WaitForSeconds_t1699091251 * L_17 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_17, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_17);
		bool L_18 = __this->get_U24disposing_2();
		if (L_18)
		{
			goto IL_00dd;
		}
	}
	{
		__this->set_U24PC_3(2);
	}

IL_00dd:
	{
		goto IL_01a1;
	}

IL_00e2:
	{
		MenuNotification_t963843896 * L_19 = __this->get_U24this_0();
		NullCheck(L_19);
		bool L_20 = L_19->get_popping_5();
		if (L_20)
		{
			goto IL_0109;
		}
	}
	{
		MenuNotification_t963843896 * L_21 = __this->get_U24this_0();
		MenuNotification_t963843896 * L_22 = __this->get_U24this_0();
		NullCheck(L_22);
		RuntimeObject* L_23 = MenuNotification_IPopPanel_m108523591(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		MonoBehaviour_StartCoroutine_m3411253000(L_21, L_23, /*hidden argument*/NULL);
	}

IL_0109:
	{
		WaitForSeconds_t1699091251 * L_24 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_24, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_24);
		bool L_25 = __this->get_U24disposing_2();
		if (L_25)
		{
			goto IL_0128;
		}
	}
	{
		__this->set_U24PC_3(3);
	}

IL_0128:
	{
		goto IL_01a1;
	}

IL_012d:
	{
		MenuNotification_t963843896 * L_26 = __this->get_U24this_0();
		MenuNotification_t963843896 * L_27 = __this->get_U24this_0();
		MenuNotification_t963843896 * L_28 = __this->get_U24this_0();
		NullCheck(L_28);
		RectTransform_t3704657025 * L_29 = L_28->get_notificationPanel_2();
		NullCheck(L_29);
		Vector2_t2156229523  L_30 = RectTransform_get_sizeDelta_m2183112744(L_29, /*hidden argument*/NULL);
		V_2 = L_30;
		float L_31 = (&V_2)->get_y_1();
		NullCheck(L_27);
		RuntimeObject* L_32 = MenuNotification_IMovePanel_m3165881322(L_27, ((float)((float)((-L_31))/(float)(2.0f))), (10.0f), /*hidden argument*/NULL);
		NullCheck(L_26);
		MonoBehaviour_StartCoroutine_m3411253000(L_26, L_32, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_33 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_33, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_33);
		bool L_34 = __this->get_U24disposing_2();
		if (L_34)
		{
			goto IL_0187;
		}
	}
	{
		__this->set_U24PC_3(4);
	}

IL_0187:
	{
		goto IL_01a1;
	}

IL_018c:
	{
		MenuNotification_t963843896 * L_35 = __this->get_U24this_0();
		NullCheck(L_35);
		L_35->set_moving_4((bool)0);
		__this->set_U24PC_3((-1));
	}

IL_019f:
	{
		return (bool)0;
	}

IL_01a1:
	{
		return (bool)1;
	}
}
// System.Object MenuNotification/<IShowPanel>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIShowPanelU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m714518898 (U3CIShowPanelU3Ec__Iterator0_t3293565631 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Object MenuNotification/<IShowPanel>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIShowPanelU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3690639795 (U3CIShowPanelU3Ec__Iterator0_t3293565631 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_1();
		return L_0;
	}
}
// System.Void MenuNotification/<IShowPanel>c__Iterator0::Dispose()
extern "C"  void U3CIShowPanelU3Ec__Iterator0_Dispose_m1448782197 (U3CIShowPanelU3Ec__Iterator0_t3293565631 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void MenuNotification/<IShowPanel>c__Iterator0::Reset()
extern "C"  void U3CIShowPanelU3Ec__Iterator0_Reset_m93146361 (U3CIShowPanelU3Ec__Iterator0_t3293565631 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIShowPanelU3Ec__Iterator0_Reset_m93146361_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void MenuPanel::.ctor()
extern "C"  void MenuPanel__ctor_m1267671451 (MenuPanel_t2709851952 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
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
// System.Void MenuRelativePosition::.ctor()
extern "C"  void MenuRelativePosition__ctor_m106390946 (MenuRelativePosition_t2871782404 * __this, const RuntimeMethod* method)
{
	{
		__this->set_xMultiplier_7((1.0f));
		__this->set_yMultiplier_8((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuRelativePosition::Start()
extern "C"  void MenuRelativePosition_Start_m1397684926 (MenuRelativePosition_t2871782404 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t3722313464 ));
		Vector3_t3722313464  L_0 = V_0;
		__this->set_startingPos_9(L_0);
		RectTransform_t3704657025 * L_1 = __this->get_targetRect_2();
		NullCheck(L_1);
		bool L_2 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_1, NULL);
		if (L_2)
		{
			goto IL_0031;
		}
	}
	{
		RectTransform_t3704657025 * L_3 = __this->get_targetRect_2();
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		__this->set_startingPos_9(L_4);
	}

IL_0031:
	{
		RectTransform_t3704657025 * L_5 = __this->get_xRelative_3();
		NullCheck(L_5);
		bool L_6 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_5, NULL);
		if (L_6)
		{
			goto IL_005b;
		}
	}
	{
		RectTransform_t3704657025 * L_7 = __this->get_xRelative_3();
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
		float L_9 = (&V_1)->get_x_1();
		__this->set_sXOffset_10(L_9);
	}

IL_005b:
	{
		RectTransform_t3704657025 * L_10 = __this->get_yRelative_4();
		NullCheck(L_10);
		bool L_11 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_10, NULL);
		if (L_11)
		{
			goto IL_0085;
		}
	}
	{
		RectTransform_t3704657025 * L_12 = __this->get_yRelative_4();
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		float L_14 = (&V_2)->get_y_2();
		__this->set_sYOffset_11(L_14);
	}

IL_0085:
	{
		return;
	}
}
// System.Void MenuRelativePosition::LateUpdate()
extern "C"  void MenuRelativePosition_LateUpdate_m2382793088 (MenuRelativePosition_t2871782404 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		RectTransform_t3704657025 * L_0 = __this->get_targetRect_2();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_0, NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		RectTransform_t3704657025 * L_2 = __this->get_targetRect_2();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RectTransform_t3704657025 * L_4 = __this->get_xRelative_3();
		NullCheck(L_4);
		bool L_5 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_4, NULL);
		if (L_5)
		{
			goto IL_006a;
		}
	}
	{
		Vector3_t3722313464 * L_6 = __this->get_address_of_startingPos_9();
		float L_7 = L_6->get_x_1();
		float L_8 = __this->get_xOffset_5();
		RectTransform_t3704657025 * L_9 = __this->get_xRelative_3();
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		float L_12 = __this->get_xMultiplier_7();
		float L_13 = __this->get_sXOffset_10();
		(&V_0)->set_x_1(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_7, (float)L_8)), (float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)))), (float)L_13)));
	}

IL_006a:
	{
		RectTransform_t3704657025 * L_14 = __this->get_yRelative_4();
		NullCheck(L_14);
		bool L_15 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_14, NULL);
		if (L_15)
		{
			goto IL_00b6;
		}
	}
	{
		Vector3_t3722313464 * L_16 = __this->get_address_of_startingPos_9();
		float L_17 = L_16->get_y_2();
		float L_18 = __this->get_yOffset_6();
		RectTransform_t3704657025 * L_19 = __this->get_yRelative_4();
		NullCheck(L_19);
		Vector3_t3722313464  L_20 = Transform_get_position_m36019626(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		float L_21 = (&V_2)->get_y_2();
		float L_22 = __this->get_yMultiplier_8();
		float L_23 = __this->get_sYOffset_11();
		(&V_0)->set_y_2(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_17, (float)L_18)), (float)((float)il2cpp_codegen_multiply((float)L_21, (float)L_22)))), (float)L_23)));
	}

IL_00b6:
	{
		RectTransform_t3704657025 * L_24 = __this->get_targetRect_2();
		Vector3_t3722313464  L_25 = V_0;
		NullCheck(L_24);
		Transform_set_position_m3387557959(L_24, L_25, /*hidden argument*/NULL);
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
// System.Void MenuSlowerScroll::.ctor()
extern "C"  void MenuSlowerScroll__ctor_m1203746860 (MenuSlowerScroll_t3166589528 * __this, const RuntimeMethod* method)
{
	{
		__this->set_intensity_4((0.1f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuSlowerScroll::Start()
extern "C"  void MenuSlowerScroll_Start_m3579541306 (MenuSlowerScroll_t3166589528 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuSlowerScroll_Start_m3579541306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RectTransform_t3704657025 * L_0 = Component_GetComponent_TisRectTransform_t3704657025_m3396022872(__this, /*hidden argument*/Component_GetComponent_TisRectTransform_t3704657025_m3396022872_RuntimeMethod_var);
		__this->set_thisRect_3(L_0);
		RectTransform_t3704657025 * L_1 = __this->get_thisRect_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_1, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002e;
		}
	}
	{
		RectTransform_t3704657025 * L_3 = __this->get_thisRect_3();
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = RectTransform_get_anchoredPosition_m1813443094(L_3, /*hidden argument*/NULL);
		__this->set_startPosition_5(L_4);
	}

IL_002e:
	{
		return;
	}
}
// System.Void MenuSlowerScroll::LateUpdate()
extern "C"  void MenuSlowerScroll_LateUpdate_m1010315803 (MenuSlowerScroll_t3166589528 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuSlowerScroll_LateUpdate_m1010315803_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		RectTransform_t3704657025 * L_0 = __this->get_thisRect_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		return;
	}

IL_0012:
	{
		Vector2_t2156229523  L_2 = __this->get_startPosition_5();
		V_0 = L_2;
		Vector2_t2156229523 * L_3 = (&V_0);
		float L_4 = L_3->get_y_1();
		ScrollRect_t4137855814 * L_5 = __this->get_scrollRect_2();
		NullCheck(L_5);
		RectTransform_t3704657025 * L_6 = ScrollRect_get_content_m2477524320(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = RectTransform_get_anchoredPosition_m1813443094(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		float L_8 = (&V_1)->get_y_1();
		float L_9 = __this->get_intensity_4();
		L_3->set_y_1(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)))));
		RectTransform_t3704657025 * L_10 = __this->get_thisRect_3();
		Vector2_t2156229523  L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_m4126691837(L_10, L_11, /*hidden argument*/NULL);
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
// System.Void StageInfo::.ctor()
extern "C"  void StageInfo__ctor_m185464256 (StageInfo_t2857013238 * __this, const RuntimeMethod* method)
{
	{
		__this->set_difficultyMultiplier_4((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageInfo::Awake()
extern "C"  void StageInfo_Awake_m308879600 (StageInfo_t2857013238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageInfo_Awake_m308879600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_0 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->set_instance_2(__this);
		goto IL_0036;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_2 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_2, __this, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Destroy_m565254235(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
	}

IL_0036:
	{
		GameObject_t1113636619 * L_5 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m166252750(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageInfo::SetStageInfo(System.Single)
extern "C"  void StageInfo_SetStageInfo_m1652981700 (StageInfo_t2857013238 * __this, float ___time0, const RuntimeMethod* method)
{
	{
		float L_0 = ___time0;
		__this->set_stageTime_3(L_0);
		return;
	}
}
// System.Void StageInfo::SetDifficultyMultiplier(System.Single)
extern "C"  void StageInfo_SetDifficultyMultiplier_m37392886 (StageInfo_t2857013238 * __this, float ___multiplier0, const RuntimeMethod* method)
{
	{
		float L_0 = ___multiplier0;
		__this->set_difficultyMultiplier_4(L_0);
		return;
	}
}
// System.Void StageInfo::SetWorldID(System.Int32)
extern "C"  void StageInfo_SetWorldID_m3211784811 (StageInfo_t2857013238 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		__this->set_worldID_6(L_0);
		return;
	}
}
// System.Int32 StageInfo::GetWorldID()
extern "C"  int32_t StageInfo_GetWorldID_m2363233804 (StageInfo_t2857013238 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_worldID_6();
		return L_0;
	}
}
// System.Void StageInfo::SetStageID(System.Int32)
extern "C"  void StageInfo_SetStageID_m3630089345 (StageInfo_t2857013238 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		__this->set_stageID_7(L_0);
		return;
	}
}
// System.Int32 StageInfo::GetStageID()
extern "C"  int32_t StageInfo_GetStageID_m210931970 (StageInfo_t2857013238 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_stageID_7();
		return L_0;
	}
}
// System.Int32 StageInfo::GetStartAmount()
extern "C"  int32_t StageInfo_GetStartAmount_m2338924739 (StageInfo_t2857013238 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0030;
	}

IL_0007:
	{
		float L_0 = __this->get_stageTime_3();
		SingleU5BU5D_t1444911251* L_1 = __this->get_starTimes_5();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		float L_5 = __this->get_difficultyMultiplier_4();
		if ((!(((float)L_0) < ((float)((float)il2cpp_codegen_multiply((float)L_4, (float)L_5))))))
		{
			goto IL_002c;
		}
	}
	{
		SingleU5BU5D_t1444911251* L_6 = __this->get_starTimes_5();
		NullCheck(L_6);
		int32_t L_7 = V_0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_6)->max_length)))), (int32_t)L_7));
	}

IL_002c:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_9 = V_0;
		SingleU5BU5D_t1444911251* L_10 = __this->get_starTimes_5();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return 0;
	}
}
// System.Int32 StageInfo::GetSavedStarAmount(System.Int32,System.Int32)
extern "C"  int32_t StageInfo_GetSavedStarAmount_m2316285987 (StageInfo_t2857013238 * __this, int32_t ___world0, int32_t ___stage1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageInfo_GetSavedStarAmount_m2316285987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = Int32_ToString_m372259452((&___world0), _stringLiteral3451565968, /*hidden argument*/NULL);
		String_t* L_1 = Int32_ToString_m372259452((&___stage1), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral2278870150, L_0, _stringLiteral382461207, L_1, /*hidden argument*/NULL);
		int32_t L_3 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_2, (-1), /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void StageInfo::SaveLevelStarAmount()
extern "C"  void StageInfo_SaveLevelStarAmount_m3256426961 (StageInfo_t2857013238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageInfo_SaveLevelStarAmount_m3256426961_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = StageInfo_GetStartAmount_m2338924739(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = __this->get_worldID_6();
		int32_t L_2 = __this->get_stageID_7();
		int32_t L_3 = StageInfo_GetSavedStarAmount_m2316285987(__this, L_1, L_2, /*hidden argument*/NULL);
		int32_t L_4 = V_0;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0054;
		}
	}
	{
		int32_t* L_5 = __this->get_address_of_worldID_6();
		String_t* L_6 = Int32_ToString_m372259452(L_5, _stringLiteral3451565968, /*hidden argument*/NULL);
		int32_t* L_7 = __this->get_address_of_stageID_7();
		String_t* L_8 = Int32_ToString_m372259452(L_7, _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral2278870150, L_6, _stringLiteral382461207, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, L_9, L_10, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void StageInfo::.cctor()
extern "C"  void StageInfo__cctor_m3754989971 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	{
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
// System.Void StageManager::.ctor()
extern "C"  void StageManager__ctor_m3331623394 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::Start()
extern "C"  void StageManager_Start_m2166152772 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		StageManager_Setup_m1835446729(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::Update()
extern "C"  void StageManager_Update_m448967036 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		StageManager_HandleInput_m2725362068(__this, /*hidden argument*/NULL);
		StageManager_UpdateTimerUI_m2579357050(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::HandleInput()
extern "C"  void StageManager_HandleInput_m2725362068 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_HandleInput_m2725362068_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_state_4();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)2)))
		{
			goto IL_00b2;
		}
	}
	{
		goto IL_00bd;
	}

IL_0020:
	{
		bool L_4 = __this->get_canMoveLine_14();
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetMouseButtonDown_m2081676745(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		__this->set_horizonLineMoving_15((bool)1);
		StageManager_SetHorizonLineAlpha_m30807878(__this, (1.0f), /*hidden argument*/NULL);
		goto IL_0070;
	}

IL_004d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_6 = Input_GetMouseButtonUp_m2924350851(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0070;
		}
	}
	{
		__this->set_horizonLineMoving_15((bool)0);
		StageManager_SetHorizonLineAlpha_m30807878(__this, (0.0f), /*hidden argument*/NULL);
		StageManager_CheckHorizonLineHit_m3203435684(__this, /*hidden argument*/NULL);
	}

IL_0070:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_7 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0081;
		}
	}
	{
		StageManager_OnMouseMove_m1371817865(__this, /*hidden argument*/NULL);
	}

IL_0081:
	{
		goto IL_00bd;
	}

IL_0086:
	{
		bool L_8 = __this->get_PFSelected_34();
		if (!L_8)
		{
			goto IL_00ad;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_9 = Input_GetMouseButton_m513753021(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_00a7;
		}
	}
	{
		StageManager_OnPFMove_m3369990314(__this, /*hidden argument*/NULL);
		goto IL_00ad;
	}

IL_00a7:
	{
		StageManager_CheckPFHit_m1617623315(__this, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		goto IL_00bd;
	}

IL_00b2:
	{
		StageManager_ChangingGameState_m4209157659(__this, /*hidden argument*/NULL);
		goto IL_00bd;
	}

IL_00bd:
	{
		return;
	}
}
// System.Void StageManager::Setup()
extern "C"  void StageManager_Setup_m1835446729 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_Setup_m1835446729_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		StageManager_SetHorizonLineAlpha_m30807878(__this, (0.0f), /*hidden argument*/NULL);
		__this->set_hitErrors_17(0);
		__this->set_canMoveLine_14((bool)1);
		__this->set_horizonLineMoving_15((bool)0);
		__this->set_stageCompleted_16((bool)0);
		__this->set_state_4(0);
		__this->set_PFSelected_34((bool)0);
		StageManager_setupPFs_m762153435(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = __this->get_image_5();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_3 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_initialImagePosition_6(L_3);
		GameObject_t1113636619 * L_4 = __this->get_image_5();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_6 = __this->get_image_5();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		float L_9 = (&V_0)->get_y_2();
		GameObject_t1113636619 * L_10 = __this->get_image_5();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t3722313464  L_12 = Transform_get_position_m36019626(L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		float L_13 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector3__ctor_m3353183577((&L_14), (0.0f), L_9, L_13, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_14, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_15 = __this->get_horizonLine_10();
		NullCheck(L_15);
		Transform_t3600365921 * L_16 = Component_get_transform_m3162698980(L_15, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_17 = __this->get_horizonLine_10();
		NullCheck(L_17);
		Transform_t3600365921 * L_18 = Component_get_transform_m3162698980(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t3722313464  L_19 = Transform_get_position_m36019626(L_18, /*hidden argument*/NULL);
		V_2 = L_19;
		float L_20 = (&V_2)->get_y_2();
		SpriteRenderer_t3235626157 * L_21 = __this->get_horizonLine_10();
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		V_3 = L_23;
		float L_24 = (&V_3)->get_z_3();
		Vector3_t3722313464  L_25;
		memset(&L_25, 0, sizeof(L_25));
		Vector3__ctor_m3353183577((&L_25), (0.0f), L_20, L_24, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_m3387557959(L_16, L_25, /*hidden argument*/NULL);
		StageManager_setupCanvas_m1599180444(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::setupPFs()
extern "C"  void StageManager_setupPFs_m762153435 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_setupPFs_m762153435_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_PF1_26();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_PF1_26();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		__this->set_InitialPF1_36(L_4);
		GameObject_t1113636619 * L_5 = __this->get_PF1_26();
		NullCheck(L_5);
		GameObject_SetActive_m796801857(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		GameObject_t1113636619 * L_6 = __this->get_PF2_27();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0064;
		}
	}
	{
		GameObject_t1113636619 * L_8 = __this->get_PF2_27();
		NullCheck(L_8);
		Transform_t3600365921 * L_9 = GameObject_get_transform_m1369836730(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t3722313464  L_10 = Transform_get_position_m36019626(L_9, /*hidden argument*/NULL);
		__this->set_InitialPF2_37(L_10);
		GameObject_t1113636619 * L_11 = __this->get_PF2_27();
		NullCheck(L_11);
		GameObject_SetActive_m796801857(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0064:
	{
		GameObject_t1113636619 * L_12 = __this->get_PF3_28();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_13 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0080;
		}
	}
	{
		GameObject_t1113636619 * L_14 = __this->get_PF3_28();
		NullCheck(L_14);
		GameObject_SetActive_m796801857(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0080:
	{
		GameObject_t1113636619 * L_15 = __this->get_PF4_29();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_16 = Object_op_Implicit_m3574996620(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		GameObject_t1113636619 * L_17 = __this->get_PF4_29();
		NullCheck(L_17);
		GameObject_SetActive_m796801857(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_009c:
	{
		return;
	}
}
// System.Void StageManager::setupCanvas()
extern "C"  void StageManager_setupCanvas_m1599180444 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_setupCanvas_m1599180444_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		CanvasGroup_t4083511760 * L_0 = __this->get_scrollView_24();
		NullCheck(L_0);
		CanvasGroup_set_alpha_m4032573(L_0, (0.0f), /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_1 = __this->get_imageHeader_7();
		NullCheck(L_1);
		Vector2_t2156229523  L_2 = RectTransform_get_anchoredPosition_m1813443094(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_3 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		__this->set_initialImageHeaderPosition_8(L_3);
		RectTransform_t3704657025 * L_4 = __this->get_imageHeader_7();
		RectTransform_t3704657025 * L_5 = __this->get_canvasCenter_9();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = RectTransform_get_anchoredPosition_m1813443094(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		float L_7 = (&V_0)->get_x_0();
		RectTransform_t3704657025 * L_8 = __this->get_imageHeader_7();
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = RectTransform_get_anchoredPosition_m1813443094(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_1)->get_y_1();
		Vector2_t2156229523  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector2__ctor_m3970636864((&L_11), L_7, L_10, /*hidden argument*/NULL);
		NullCheck(L_4);
		RectTransform_set_anchoredPosition_m4126691837(L_4, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::SetHorizonLineAlpha(System.Single)
extern "C"  void StageManager_SetHorizonLineAlpha_m30807878 (StageManager_t3296066545 * __this, float ___alpha0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_SetHorizonLineAlpha_m30807878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	SpriteRendererU5BU5D_t911335936* V_1 = NULL;
	SpriteRenderer_t3235626157 * V_2 = NULL;
	SpriteRendererU5BU5D_t911335936* V_3 = NULL;
	int32_t V_4 = 0;
	{
		SpriteRenderer_t3235626157 * L_0 = __this->get_horizonLine_10();
		NullCheck(L_0);
		Color_t2555686324  L_1 = SpriteRenderer_get_color_m904197748(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = ___alpha0;
		(&V_0)->set_a_3(L_2);
		SpriteRenderer_t3235626157 * L_3 = __this->get_horizonLine_10();
		Color_t2555686324  L_4 = V_0;
		NullCheck(L_3);
		SpriteRenderer_set_color_m3056777566(L_3, L_4, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_5 = __this->get_horizonLine_10();
		NullCheck(L_5);
		SpriteRendererU5BU5D_t911335936* L_6 = Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354(L_5, /*hidden argument*/Component_GetComponentsInChildren_TisSpriteRenderer_t3235626157_m3802774354_RuntimeMethod_var);
		V_1 = L_6;
		SpriteRendererU5BU5D_t911335936* L_7 = V_1;
		V_3 = L_7;
		V_4 = 0;
		goto IL_0057;
	}

IL_0036:
	{
		SpriteRendererU5BU5D_t911335936* L_8 = V_3;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		SpriteRenderer_t3235626157 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_2 = L_11;
		SpriteRenderer_t3235626157 * L_12 = V_2;
		NullCheck(L_12);
		Color_t2555686324  L_13 = SpriteRenderer_get_color_m904197748(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		float L_14 = ___alpha0;
		(&V_0)->set_a_3(L_14);
		SpriteRenderer_t3235626157 * L_15 = V_2;
		Color_t2555686324  L_16 = V_0;
		NullCheck(L_15);
		SpriteRenderer_set_color_m3056777566(L_15, L_16, /*hidden argument*/NULL);
		int32_t L_17 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0057:
	{
		int32_t L_18 = V_4;
		SpriteRendererU5BU5D_t911335936* L_19 = V_3;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_19)->max_length)))))))
		{
			goto IL_0036;
		}
	}
	{
		return;
	}
}
// System.Void StageManager::SetActive(UnityEngine.GameObject,System.Boolean)
extern "C"  void StageManager_SetActive_m3658661723 (StageManager_t3296066545 * __this, GameObject_t1113636619 * ___target0, bool ___active1, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = ___target0;
		bool L_1 = ___active1;
		NullCheck(L_0);
		GameObject_SetActive_m796801857(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::OnMouseMove()
extern "C"  void StageManager_OnMouseMove_m1371817865 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_OnMouseMove_m1371817865_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		(&V_0)->set_z_3((10.0f));
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = V_0;
		NullCheck(L_1);
		Vector3_t3722313464  L_3 = Camera_ScreenToWorldPoint_m3978588570(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		SpriteRenderer_t3235626157 * L_4 = __this->get_horizonLine_10();
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = Component_get_transform_m3162698980(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t3722313464  L_6 = Transform_get_position_m36019626(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		float L_7 = (&V_2)->get_x_1();
		float L_8 = (&V_0)->get_y_2();
		Vector3__ctor_m3353183577((&V_1), L_7, L_8, (-5.0f), /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_9 = __this->get_horizonLine_10();
		NullCheck(L_9);
		Transform_t3600365921 * L_10 = Component_get_transform_m3162698980(L_9, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_11 = __this->get_horizonLine_10();
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		Vector3_t3722313464  L_14 = V_1;
		float L_15 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_16 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_13, L_14, ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_15)), /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_set_position_m3387557959(L_10, L_16, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::OnPFMove()
extern "C"  void StageManager_OnPFMove_m3369990314 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_OnPFMove_m3369990314_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_0 = Input_get_mousePosition_m1616496925(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		(&V_0)->set_z_3((10.0f));
		Camera_t4157153871 * L_1 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = V_0;
		NullCheck(L_1);
		Vector3_t3722313464  L_3 = Camera_ScreenToWorldPoint_m3978588570(L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_1();
		float L_5 = (&V_0)->get_y_2();
		GameObject_t1113636619 * L_6 = __this->get_PF_30();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_z_3();
		Vector3__ctor_m3353183577((&V_1), L_4, L_5, L_9, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_10 = __this->get_PF_30();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = GameObject_get_transform_m1369836730(L_10, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = __this->get_PF_30();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t3722313464  L_14 = Transform_get_position_m36019626(L_13, /*hidden argument*/NULL);
		Vector3_t3722313464  L_15 = V_1;
		float L_16 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_14, L_15, ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_16)), /*hidden argument*/NULL);
		NullCheck(L_11);
		Transform_set_position_m3387557959(L_11, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::CheckPFHit()
extern "C"  void StageManager_CheckPFHit_m1617623315 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_CheckPFHit_m1617623315_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		GameObject_t1113636619 * L_0 = __this->get_PF_30();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		Vector3_t3722313464 * L_4 = __this->get_address_of_InitialPF_35();
		float L_5 = L_4->get_y_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)L_5));
		float L_6 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_7 = fabsf(L_6);
		IL2CPP_RUNTIME_CLASS_INIT(StageManager_t3296066545_il2cpp_TypeInfo_var);
		float L_8 = ((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->get_HIT_RANGE_2();
		if ((!(((float)L_7) < ((float)L_8))))
		{
			goto IL_0041;
		}
	}
	{
		StageManager_LockPF_m3398832264(__this, (bool)1, /*hidden argument*/NULL);
		goto IL_0048;
	}

IL_0041:
	{
		StageManager_LockPF_m3398832264(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0048:
	{
		return;
	}
}
// System.Void StageManager::LockPF(System.Boolean)
extern "C"  void StageManager_LockPF_m3398832264 (StageManager_t3296066545 * __this, bool ___hit0, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_PF_30();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_InitialPF_35();
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_2, /*hidden argument*/NULL);
		__this->set_PFSelected_34((bool)0);
		bool L_3 = ___hit0;
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_4 = __this->get_PFCount_25();
		__this->set_PFCount_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		int32_t L_5 = __this->get_PFCount_25();
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		StageManager_CompleteStage_m2785006177(__this, /*hidden argument*/NULL);
	}

IL_0042:
	{
		bool L_6 = ___hit0;
		if (L_6)
		{
			goto IL_0054;
		}
	}
	{
		GameObject_t1113636619 * L_7 = __this->get_PF_30();
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)0, /*hidden argument*/NULL);
	}

IL_0054:
	{
		return;
	}
}
// System.Void StageManager::CheckHorizonLineHit()
extern "C"  void StageManager_CheckHorizonLineHit_m3203435684 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_CheckHorizonLineHit_m3203435684_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		SpriteRenderer_t3235626157 * L_0 = __this->get_horizonLine_10();
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = Component_get_gameObject_m442555142(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_position_m36019626(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_y_2();
		GameObject_t1113636619 * L_5 = __this->get_horizonLineHit_12();
		NullCheck(L_5);
		Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = (&V_2)->get_y_2();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_4, (float)L_8));
		float L_9 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = fabsf(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(StageManager_t3296066545_il2cpp_TypeInfo_var);
		float L_11 = ((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->get_HIT_RANGE_2();
		if ((!(((float)L_10) < ((float)L_11))))
		{
			goto IL_0052;
		}
	}
	{
		StageManager_LockHorizonLine_m3269516584(__this, /*hidden argument*/NULL);
		goto IL_0052;
	}

IL_0052:
	{
		return;
	}
}
// System.Void StageManager::LockHorizonLine()
extern "C"  void StageManager_LockHorizonLine_m3269516584 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		__this->set_canMoveLine_14((bool)0);
		StageManager_SetHorizonLineAlpha_m30807878(__this, (1.0f), /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = __this->get_horizonLineHit_12();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		SpriteRenderer_t3235626157 * L_3 = __this->get_horizonLine_10();
		NullCheck(L_3);
		GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t3600365921 * L_5 = GameObject_get_transform_m1369836730(L_4, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_6 = __this->get_horizonLine_10();
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		float L_10 = (&V_1)->get_x_1();
		float L_11 = (&V_0)->get_y_2();
		Vector3_t3722313464  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m3353183577((&L_12), L_10, L_11, (-5.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_position_m3387557959(L_5, L_12, /*hidden argument*/NULL);
		StageManager_ChangeGameState_m3422576130(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::CompleteStage()
extern "C"  void StageManager_CompleteStage_m2785006177 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		__this->set_stageCompleted_16((bool)1);
		Text_t1901882714 * L_0 = __this->get_StageCompleted_18();
		NullCheck(L_0);
		Color_t2555686324  L_1 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_0);
		V_0 = L_1;
		(&V_0)->set_a_3((1.0f));
		Text_t1901882714 * L_2 = __this->get_StageCompleted_18();
		Color_t2555686324  L_3 = V_0;
		NullCheck(L_2);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		RuntimeObject* L_4 = StageManager_BackToMenu_m671746728(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::UpdateTimerUI()
extern "C"  void StageManager_UpdateTimerUI_m2579357050 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_UpdateTimerUI_m2579357050_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* G_B5_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B11_0 = NULL;
	{
		bool L_0 = __this->get_stageCompleted_16();
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		return;
	}

IL_000c:
	{
		float L_1 = __this->get_secondsCount_21();
		float L_2 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_secondsCount_21(((float)il2cpp_codegen_add((float)L_1, (float)L_2)));
		int32_t L_3 = __this->get_hourCount_23();
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)10))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t* L_4 = __this->get_address_of_hourCount_23();
		String_t* L_5 = Int32_ToString_m141394615(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_6 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614544, L_5, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_005c;
	}

IL_004b:
	{
		int32_t* L_7 = __this->get_address_of_hourCount_23();
		String_t* L_8 = Int32_ToString_m141394615(L_7, /*hidden argument*/NULL);
		G_B5_0 = L_8;
	}

IL_005c:
	{
		V_0 = G_B5_0;
		int32_t L_9 = __this->get_minuteCount_22();
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)10))))
		{
			goto IL_008a;
		}
	}
	{
		int32_t* L_10 = __this->get_address_of_minuteCount_22();
		String_t* L_11 = Int32_ToString_m141394615(L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_12 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614544, L_11, /*hidden argument*/NULL);
		G_B8_0 = L_12;
		goto IL_009b;
	}

IL_008a:
	{
		int32_t* L_13 = __this->get_address_of_minuteCount_22();
		String_t* L_14 = Int32_ToString_m141394615(L_13, /*hidden argument*/NULL);
		G_B8_0 = L_14;
	}

IL_009b:
	{
		V_1 = G_B8_0;
		float L_15 = __this->get_secondsCount_21();
		if ((!(((float)L_15) < ((float)(10.0f)))))
		{
			goto IL_00d0;
		}
	}
	{
		float L_16 = __this->get_secondsCount_21();
		V_3 = (((int32_t)((int32_t)L_16)));
		String_t* L_17 = Int32_ToString_m141394615((&V_3), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_18 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614544, L_17, /*hidden argument*/NULL);
		G_B11_0 = L_18;
		goto IL_00e6;
	}

IL_00d0:
	{
		float L_19 = __this->get_secondsCount_21();
		V_4 = (((int32_t)((int32_t)L_19)));
		String_t* L_20 = Int32_ToString_m141394615((&V_4), /*hidden argument*/NULL);
		G_B11_0 = L_20;
	}

IL_00e6:
	{
		V_2 = G_B11_0;
		Text_t1901882714 * L_21 = __this->get_timeText_19();
		StringU5BU5D_t1281789340* L_22 = ((StringU5BU5D_t1281789340*)SZArrayNew(StringU5BU5D_t1281789340_il2cpp_TypeInfo_var, (uint32_t)5));
		String_t* L_23 = V_0;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_23);
		StringU5BU5D_t1281789340* L_24 = L_22;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral3452614550);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral3452614550);
		StringU5BU5D_t1281789340* L_25 = L_24;
		String_t* L_26 = V_1;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_26);
		StringU5BU5D_t1281789340* L_27 = L_25;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral3452614550);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral3452614550);
		StringU5BU5D_t1281789340* L_28 = L_27;
		String_t* L_29 = V_2;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_29);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_30 = String_Concat_m1809518182(NULL /*static, unused*/, L_28, /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_30);
		float L_31 = __this->get_secondsCount_21();
		if ((!(((float)L_31) >= ((float)(60.0f)))))
		{
			goto IL_0147;
		}
	}
	{
		int32_t L_32 = __this->get_minuteCount_22();
		__this->set_minuteCount_22(((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1)));
		__this->set_secondsCount_21((0.0f));
		goto IL_0169;
	}

IL_0147:
	{
		int32_t L_33 = __this->get_minuteCount_22();
		if ((((int32_t)L_33) < ((int32_t)((int32_t)60))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_34 = __this->get_hourCount_23();
		__this->set_hourCount_23(((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)1)));
		__this->set_minuteCount_22(0);
	}

IL_0169:
	{
		return;
	}
}
// System.Collections.IEnumerator StageManager::BackToMenu()
extern "C"  RuntimeObject* StageManager_BackToMenu_m671746728 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_BackToMenu_m671746728_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CBackToMenuU3Ec__Iterator0_t1978105360 * V_0 = NULL;
	{
		U3CBackToMenuU3Ec__Iterator0_t1978105360 * L_0 = (U3CBackToMenuU3Ec__Iterator0_t1978105360 *)il2cpp_codegen_object_new(U3CBackToMenuU3Ec__Iterator0_t1978105360_il2cpp_TypeInfo_var);
		U3CBackToMenuU3Ec__Iterator0__ctor_m1262886672(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CBackToMenuU3Ec__Iterator0_t1978105360 * L_1 = V_0;
		return L_1;
	}
}
// System.Void StageManager::SelectPF(System.Int32)
extern "C"  void StageManager_SelectPF_m2766879051 (StageManager_t3296066545 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_SelectPF_m2766879051_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___index0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_003a;
			}
			case 2:
			{
				goto IL_0057;
			}
			case 3:
			{
				goto IL_0068;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_001d:
	{
		GameObject_t1113636619 * L_1 = __this->get_PF1_26();
		__this->set_PF_30(L_1);
		Vector3_t3722313464  L_2 = __this->get_InitialPF1_36();
		__this->set_InitialPF_35(L_2);
		goto IL_0088;
	}

IL_003a:
	{
		GameObject_t1113636619 * L_3 = __this->get_PF2_27();
		__this->set_PF_30(L_3);
		Vector3_t3722313464  L_4 = __this->get_InitialPF2_37();
		__this->set_InitialPF_35(L_4);
		goto IL_0088;
	}

IL_0057:
	{
		GameObject_t1113636619 * L_5 = __this->get_PF3_28();
		__this->set_PF_30(L_5);
		goto IL_0088;
	}

IL_0068:
	{
		GameObject_t1113636619 * L_6 = __this->get_PF4_29();
		__this->set_PF_30(L_6);
		goto IL_0088;
	}

IL_0079:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1948333211, /*hidden argument*/NULL);
		goto IL_0088;
	}

IL_0088:
	{
		GameObject_t1113636619 * L_7 = __this->get_PF_30();
		StageManager_SetActive_m3658661723(__this, L_7, (bool)1, /*hidden argument*/NULL);
		__this->set_PFSelected_34((bool)1);
		return;
	}
}
// System.Void StageManager::ChangeGameState()
extern "C"  void StageManager_ChangeGameState_m3422576130 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_PFCount_25();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		__this->set_state_4(2);
		StageManager_ChangeToEscapePoint_m39530200(__this, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001e:
	{
		StageManager_CompleteStage_m2785006177(__this, /*hidden argument*/NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Void StageManager::ChangingGameState()
extern "C"  void StageManager_ChangingGameState_m4209157659 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_ChangingGameState_m4209157659_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t1113636619 * L_0 = __this->get_image_5();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_2 = __this->get_image_5();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = GameObject_get_transform_m1369836730(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t3722313464  L_4 = Transform_get_position_m36019626(L_3, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_5 = __this->get_address_of_initialImagePosition_6();
		float L_6 = L_5->get_x_0();
		GameObject_t1113636619 * L_7 = __this->get_image_5();
		NullCheck(L_7);
		Transform_t3600365921 * L_8 = GameObject_get_transform_m1369836730(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_position_m36019626(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		float L_10 = (&V_0)->get_y_2();
		GameObject_t1113636619 * L_11 = __this->get_image_5();
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_position_m36019626(L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		float L_14 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector3__ctor_m3353183577((&L_15), L_6, L_10, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StageManager_t3296066545_il2cpp_TypeInfo_var);
		float L_16 = ((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->get_CHANGE_STATE_SPEED_3();
		float L_17 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_18 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_4, L_15, ((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_18, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_19 = __this->get_horizonLine_10();
		NullCheck(L_19);
		Transform_t3600365921 * L_20 = Component_get_transform_m3162698980(L_19, /*hidden argument*/NULL);
		SpriteRenderer_t3235626157 * L_21 = __this->get_horizonLine_10();
		NullCheck(L_21);
		Transform_t3600365921 * L_22 = Component_get_transform_m3162698980(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_position_m36019626(L_22, /*hidden argument*/NULL);
		Vector2_t2156229523 * L_24 = __this->get_address_of_initialImagePosition_6();
		float L_25 = L_24->get_x_0();
		SpriteRenderer_t3235626157 * L_26 = __this->get_horizonLine_10();
		NullCheck(L_26);
		Transform_t3600365921 * L_27 = Component_get_transform_m3162698980(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t3722313464  L_28 = Transform_get_position_m36019626(L_27, /*hidden argument*/NULL);
		V_2 = L_28;
		float L_29 = (&V_2)->get_y_2();
		SpriteRenderer_t3235626157 * L_30 = __this->get_horizonLine_10();
		NullCheck(L_30);
		Transform_t3600365921 * L_31 = Component_get_transform_m3162698980(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t3722313464  L_32 = Transform_get_position_m36019626(L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		float L_33 = (&V_3)->get_z_3();
		Vector3_t3722313464  L_34;
		memset(&L_34, 0, sizeof(L_34));
		Vector3__ctor_m3353183577((&L_34), L_25, L_29, L_33, /*hidden argument*/NULL);
		float L_35 = ((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->get_CHANGE_STATE_SPEED_3();
		float L_36 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t3722313464  L_37 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_23, L_34, ((float)il2cpp_codegen_multiply((float)L_35, (float)L_36)), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_m3387557959(L_20, L_37, /*hidden argument*/NULL);
		RectTransform_t3704657025 * L_38 = __this->get_imageHeader_7();
		RectTransform_t3704657025 * L_39 = __this->get_imageHeader_7();
		NullCheck(L_39);
		Vector2_t2156229523  L_40 = RectTransform_get_anchoredPosition_m1813443094(L_39, /*hidden argument*/NULL);
		Vector3_t3722313464  L_41 = __this->get_initialImageHeaderPosition_8();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_42 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		float L_43 = ((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->get_CHANGE_STATE_SPEED_3();
		float L_44 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2156229523  L_45 = Vector2_Lerp_m854472224(NULL /*static, unused*/, L_40, L_42, ((float)il2cpp_codegen_multiply((float)L_43, (float)L_44)), /*hidden argument*/NULL);
		NullCheck(L_38);
		RectTransform_set_anchoredPosition_m4126691837(L_38, L_45, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::ChangeToEscapePoint()
extern "C"  void StageManager_ChangeToEscapePoint_m39530200 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		CanvasGroup_t4083511760 * L_0 = __this->get_scrollView_24();
		RuntimeObject* L_1 = StageManager_FadeIn_m2385600318(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator StageManager::FadeIn(UnityEngine.CanvasGroup)
extern "C"  RuntimeObject* StageManager_FadeIn_m2385600318 (StageManager_t3296066545 * __this, CanvasGroup_t4083511760 * ___canvasObj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_FadeIn_m2385600318_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CFadeInU3Ec__Iterator1_t1536586007 * V_0 = NULL;
	{
		U3CFadeInU3Ec__Iterator1_t1536586007 * L_0 = (U3CFadeInU3Ec__Iterator1_t1536586007 *)il2cpp_codegen_object_new(U3CFadeInU3Ec__Iterator1_t1536586007_il2cpp_TypeInfo_var);
		U3CFadeInU3Ec__Iterator1__ctor_m577513256(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CFadeInU3Ec__Iterator1_t1536586007 * L_1 = V_0;
		CanvasGroup_t4083511760 * L_2 = ___canvasObj0;
		NullCheck(L_1);
		L_1->set_canvasObj_1(L_2);
		U3CFadeInU3Ec__Iterator1_t1536586007 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_2(__this);
		U3CFadeInU3Ec__Iterator1_t1536586007 * L_4 = V_0;
		return L_4;
	}
}
// System.Void StageManager::.cctor()
extern "C"  void StageManager__cctor_m2616850515 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager__cctor_m2616850515_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->set_HIT_RANGE_2((0.2f));
		((StageManager_t3296066545_StaticFields*)il2cpp_codegen_static_fields_for(StageManager_t3296066545_il2cpp_TypeInfo_var))->set_CHANGE_STATE_SPEED_3((5.0f));
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
// System.Void StageManager/<BackToMenu>c__Iterator0::.ctor()
extern "C"  void U3CBackToMenuU3Ec__Iterator0__ctor_m1262886672 (U3CBackToMenuU3Ec__Iterator0_t1978105360 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean StageManager/<BackToMenu>c__Iterator0::MoveNext()
extern "C"  bool U3CBackToMenuU3Ec__Iterator0_MoveNext_m3661158377 (U3CBackToMenuU3Ec__Iterator0_t1978105360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBackToMenuU3Ec__Iterator0_MoveNext_m3661158377_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_2();
		V_0 = L_0;
		__this->set_U24PC_2((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0045;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0021:
	{
		WaitForSeconds_t1699091251 * L_2 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_2, (2.0f), /*hidden argument*/NULL);
		__this->set_U24current_0(L_2);
		bool L_3 = __this->get_U24disposing_1();
		if (L_3)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_U24PC_2(1);
	}

IL_0040:
	{
		goto IL_0058;
	}

IL_0045:
	{
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, _stringLiteral1555075351, /*hidden argument*/NULL);
		__this->set_U24PC_2((-1));
	}

IL_0056:
	{
		return (bool)0;
	}

IL_0058:
	{
		return (bool)1;
	}
}
// System.Object StageManager/<BackToMenu>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CBackToMenuU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1427383118 (U3CBackToMenuU3Ec__Iterator0_t1978105360 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Object StageManager/<BackToMenu>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CBackToMenuU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3953717770 (U3CBackToMenuU3Ec__Iterator0_t1978105360 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_0();
		return L_0;
	}
}
// System.Void StageManager/<BackToMenu>c__Iterator0::Dispose()
extern "C"  void U3CBackToMenuU3Ec__Iterator0_Dispose_m249822750 (U3CBackToMenuU3Ec__Iterator0_t1978105360 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_1((bool)1);
		__this->set_U24PC_2((-1));
		return;
	}
}
// System.Void StageManager/<BackToMenu>c__Iterator0::Reset()
extern "C"  void U3CBackToMenuU3Ec__Iterator0_Reset_m4004275252 (U3CBackToMenuU3Ec__Iterator0_t1978105360 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CBackToMenuU3Ec__Iterator0_Reset_m4004275252_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
// System.Void StageManager/<FadeIn>c__Iterator1::.ctor()
extern "C"  void U3CFadeInU3Ec__Iterator1__ctor_m577513256 (U3CFadeInU3Ec__Iterator1_t1536586007 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean StageManager/<FadeIn>c__Iterator1::MoveNext()
extern "C"  bool U3CFadeInU3Ec__Iterator1_MoveNext_m4129774640 (U3CFadeInU3Ec__Iterator1_t1536586007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeInU3Ec__Iterator1_MoveNext_m4129774640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_5();
		V_0 = L_0;
		__this->set_U24PC_5((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_0096;
	}

IL_0021:
	{
		__this->set_U3CalphaU3E__0_0((0.0f));
		goto IL_0073;
	}

IL_0031:
	{
		float L_2 = __this->get_U3CalphaU3E__0_0();
		__this->set_U3CalphaU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)(0.03f))));
		CanvasGroup_t4083511760 * L_3 = __this->get_canvasObj_1();
		float L_4 = __this->get_U3CalphaU3E__0_0();
		NullCheck(L_3);
		CanvasGroup_set_alpha_m4032573(L_3, L_4, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_5 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_5, /*hidden argument*/NULL);
		__this->set_U24current_3(L_5);
		bool L_6 = __this->get_U24disposing_4();
		if (L_6)
		{
			goto IL_006e;
		}
	}
	{
		__this->set_U24PC_5(1);
	}

IL_006e:
	{
		goto IL_0098;
	}

IL_0073:
	{
		float L_7 = __this->get_U3CalphaU3E__0_0();
		if ((((float)L_7) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		StageManager_t3296066545 * L_8 = __this->get_U24this_2();
		NullCheck(L_8);
		L_8->set_state_4(1);
		__this->set_U24PC_5((-1));
	}

IL_0096:
	{
		return (bool)0;
	}

IL_0098:
	{
		return (bool)1;
	}
}
// System.Object StageManager/<FadeIn>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CFadeInU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3539193532 (U3CFadeInU3Ec__Iterator1_t1536586007 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object StageManager/<FadeIn>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CFadeInU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1243630312 (U3CFadeInU3Ec__Iterator1_t1536586007 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void StageManager/<FadeIn>c__Iterator1::Dispose()
extern "C"  void U3CFadeInU3Ec__Iterator1_Dispose_m1315267220 (U3CFadeInU3Ec__Iterator1_t1536586007 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void StageManager/<FadeIn>c__Iterator1::Reset()
extern "C"  void U3CFadeInU3Ec__Iterator1_Reset_m129395640 (U3CFadeInU3Ec__Iterator1_t1536586007 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CFadeInU3Ec__Iterator1_Reset_m129395640_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1314879016 * L_0 = (NotSupportedException_t1314879016 *)il2cpp_codegen_object_new(NotSupportedException_t1314879016_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m2730133172(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StagePhoto::.ctor()
extern "C"  void StagePhoto__ctor_m1232588937 (StagePhoto_t928294583 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StagePhoto::Start()
extern "C"  void StagePhoto_Start_m735353255 (StagePhoto_t928294583 * __this, const RuntimeMethod* method)
{
	{
		StagePhoto_Setup_m2572149096(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StagePhoto::Update()
extern "C"  void StagePhoto_Update_m3799303423 (StagePhoto_t928294583 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void StagePhoto::Setup()
extern "C"  void StagePhoto_Setup_m2572149096 (StagePhoto_t928294583 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void StagePhoto::SetWidthToCamera()
extern "C"  void StagePhoto_SetWidthToCamera_m2135346126 (StagePhoto_t928294583 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StagePhoto_SetWidthToCamera_m2135346126_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	SpriteRenderer_t3235626157 * V_1 = NULL;
	Sprite_t280657092 * V_2 = NULL;
	float V_3 = 0.0f;
	Rect_t2360479859  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Camera_t4157153871 * L_0 = Camera_get_main_m3643453163(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		float L_1 = Camera_get_orthographicSize_m3903216845(L_0, /*hidden argument*/NULL);
		int32_t L_2 = Screen_get_width_m345039817(NULL /*static, unused*/, /*hidden argument*/NULL);
		int32_t L_3 = Screen_get_height_m1623532518(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = ((float)((float)((float)il2cpp_codegen_multiply((float)((float)((float)L_1/(float)(2.0f))), (float)(((float)((float)L_2)))))/(float)(((float)((float)L_3)))));
		SpriteRenderer_t3235626157 * L_4 = Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3235626157_m2253180502_RuntimeMethod_var);
		V_1 = L_4;
		SpriteRenderer_t3235626157 * L_5 = V_1;
		NullCheck(L_5);
		Sprite_t280657092 * L_6 = SpriteRenderer_get_sprite_m663386871(L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Sprite_t280657092 * L_7 = V_2;
		NullCheck(L_7);
		Rect_t2360479859  L_8 = Sprite_get_textureRect_m3217515846(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		float L_9 = Rect_get_width_m3421484486((&V_4), /*hidden argument*/NULL);
		Sprite_t280657092 * L_10 = V_2;
		NullCheck(L_10);
		float L_11 = Sprite_get_pixelsPerUnit_m524644775(L_10, /*hidden argument*/NULL);
		V_3 = ((float)((float)L_9/(float)L_11));
		Transform_t3600365921 * L_12 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		float L_13 = V_0;
		float L_14 = V_3;
		float L_15 = V_0;
		float L_16 = V_3;
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m1719387948((&L_17), ((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_13)))/(float)L_14)), (float)(4.0f))), ((float)il2cpp_codegen_multiply((float)((float)((float)(((float)((float)L_15)))/(float)L_16)), (float)(4.0f))), /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_localScale_m3053443106(L_12, L_17, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
