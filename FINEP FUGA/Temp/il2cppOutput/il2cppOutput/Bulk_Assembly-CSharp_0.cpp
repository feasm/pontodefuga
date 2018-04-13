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

// AudioPlayer
struct AudioPlayer_t2934167794;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t3962482529;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.Component
struct Component_t1923634451;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.AudioSource
struct AudioSource_t3935305588;
// UnityEngine.AudioClip
struct AudioClip_t3680889665;
// EditorManager
struct EditorManager_t888126012;
// StageData
struct StageData_t251497815;
// System.Collections.Generic.List`1<Stage>
struct List_1_t3317114989;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t257213610;
// Stage
struct Stage_t1845040247;
// System.Collections.Generic.List`1<Point>
struct List_1_t2510128191;
// Point
struct Point_t1038053449;
// Element
struct Element_t769398275;
// EndPanel
struct EndPanel_t2070267055;
// System.Collections.IEnumerator
struct IEnumerator_t1853284238;
// UnityEngine.Coroutine
struct Coroutine_t3829159415;
// EndPanel/<IPlayEndSequence>c__Iterator0
struct U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627;
// UnityEngine.RectTransform
struct RectTransform_t3704657025;
// EndPanel/<IMoveRect>c__Iterator1
struct U3CIMoveRectU3Ec__Iterator1_t1700463851;
// EndPanel/<IScaleRect>c__Iterator2
struct U3CIScaleRectU3Ec__Iterator2_t3801923336;
// UnityEngine.UI.Image
struct Image_t2670269651;
// EndPanel/<IFadeImage>c__Iterator3
struct U3CIFadeImageU3Ec__Iterator3_t2878897811;
// EndPanel/<IPopScale>c__Iterator4
struct U3CIPopScaleU3Ec__Iterator4_t3413360195;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t1314943911;
// System.NotSupportedException
struct NotSupportedException_t1314879016;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t1699091251;
// UnityEngine.UI.Graphic
struct Graphic_t1660335611;
// StageInfo
struct StageInfo_t2857013238;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t3600365921;
// GameplayTransitions
struct GameplayTransitions_t431761729;
// GameplayTransitions/<IFadeAndLoadScene>c__Iterator0
struct U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349;
// GameplayTransitions/<IFadeRect>c__Iterator1
struct U3CIFadeRectU3Ec__Iterator1_t767004030;
// HelpBubble
struct HelpBubble_t570266065;
// HelpBubble/<IShowBubble>c__Iterator0
struct U3CIShowBubbleU3Ec__Iterator0_t2610264614;
// JSONParser
struct JSONParser_t75429706;
// MenuClouds
struct MenuClouds_t4198924910;
// MenuClouds/<IAnimateCloud>c__Iterator0
struct U3CIAnimateCloudU3Ec__Iterator0_t2877652068;
// MenuFlowManager
struct MenuFlowManager_t1614880941;
// MenuPanel
struct MenuPanel_t2709851952;
// MenuFlowManager/<ISelectLevel>c__Iterator0
struct U3CISelectLevelU3Ec__Iterator0_t772913338;
// MenuNotification
struct MenuNotification_t963843896;
// MenuFlowManager/<IPlayDelayedTip>c__Iterator1
struct U3CIPlayDelayedTipU3Ec__Iterator1_t1346711414;
// MenuFlowManager/<IFadeAndChangePanel>c__Iterator2
struct U3CIFadeAndChangePanelU3Ec__Iterator2_t4222820537;
// MenuFlowManager/<IFadeImage>c__Iterator3
struct U3CIFadeImageU3Ec__Iterator3_t2325737738;
// MenuFlowManager/<IMoveTitle>c__Iterator4
struct U3CIMoveTitleU3Ec__Iterator4_t1546248483;
// MenuFlowManager/<ISetTipPanel>c__Iterator5
struct U3CISetTipPanelU3Ec__Iterator5_t956795441;
// MenuLevelButton
struct MenuLevelButton_t3559006541;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// MenuLevelButton/<IPulse>c__Iterator0
struct U3CIPulseU3Ec__Iterator0_t2453214028;
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
// ObjectBuilderScript
struct ObjectBuilderScript_t920771485;
// Option
struct Option_t3411289914;
// PauseMenu
struct PauseMenu_t3916167947;
// PauseMenuButton
struct PauseMenuButton_t2049395553;
// PauseMenu/<IHidePanel>c__Iterator0
struct U3CIHidePanelU3Ec__Iterator0_t1813140080;
// PauseMenu/<IFadeBG>c__Iterator1
struct U3CIFadeBGU3Ec__Iterator1_t4004556069;
// PauseMenu/<IMoveButton>c__Iterator2
struct U3CIMoveButtonU3Ec__Iterator2_t2280749436;
// PF
struct PF_t166272826;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3235626157;
// ScrollManager
struct ScrollManager_t2903461311;
// System.Collections.Generic.List`1<PF>
struct List_1_t1638347568;
// ScrollManager/<addEventTrigger>c__AnonStorey0
struct U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795;
// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_t1076084509;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t3344766165;
// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t192896378;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t3664942305;
// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct UnityEvent_1_t489719741;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t3961765668;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t521873611;
// StageManager
struct StageManager_t3296066545;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t3903027533;
// System.Type
struct Type_t;
// UnityEngine.Sprite
struct Sprite_t280657092;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t899420910;
// UnityEngine.CanvasGroup
struct CanvasGroup_t4083511760;
// UnityEngine.SpriteRenderer[]
struct SpriteRendererU5BU5D_t911335936;
// UnityEngine.Camera
struct Camera_t4157153871;
// StageManager/<BackToMenu>c__Iterator0
struct U3CBackToMenuU3Ec__Iterator0_t1978105360;
// StageManager/<FadeIn>c__Iterator1
struct U3CFadeInU3Ec__Iterator1_t1536586007;
// StagePhoto
struct StagePhoto_t928294583;
// StepChecker
struct StepChecker_t1301311235;
// StepChecker/<IPopMark>c__Iterator0
struct U3CIPopMarkU3Ec__Iterator0_t3268555169;
// System.Char[]
struct CharU5BU5D_t3528271667;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1718750761;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t399612984;
// PF[]
struct PFU5BU5D_t3604245151;
// Stage[]
struct StageU5BU5D_t3007172558;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// Point[]
struct PointU5BU5D_t4135403636;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t1003666588;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t1677636661;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t1059417452;
// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct TriggerEvent_t3867320123;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.AudioSourceExtension
struct AudioSourceExtension_t3064908834;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t190067161;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1258266594;
// PauseMenuButton[]
struct PauseMenuButtonU5BU5D_t2517294588;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2439009922;
// MenuLevelButton[]
struct MenuLevelButtonU5BU5D_t58144480;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t143221404;
// UnityEngine.UI.Text
struct Text_t1901882714;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t107129948;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3328599146;
// AudioSFX[]
struct AudioSFXU5BU5D_t2541677417;
// MenuPanel[]
struct MenuPanelU5BU5D_t1968201233;
// System.String[]
struct StringU5BU5D_t1281789340;
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
// UnityEngine.UI.RectMask2D
struct RectMask2D_t3474889437;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t3661388177;
// UnityEngine.UI.FontData
struct FontData_t746620069;
// UnityEngine.TextGenerator
struct TextGenerator_t3211863866;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t1981460040;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t1457185986;

extern RuntimeClass* AudioPlayer_t2934167794_il2cpp_TypeInfo_var;
extern RuntimeClass* Object_t631007953_il2cpp_TypeInfo_var;
extern const uint32_t AudioPlayer_Awake_m3366530723_MetadataUsageId;
extern const uint32_t AudioPlayer_PlayAudio_m3596100579_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m1203868866_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3768177764_RuntimeMethod_var;
extern const RuntimeMethod* List_1_GetEnumerator_m3673851913_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m107143752_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m836587678_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m659273532_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2400404883_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m2106687285_RuntimeMethod_var;
extern const uint32_t EditorManager_BuildStage_m2285734006_MetadataUsageId;
extern RuntimeClass* EndPanel_t2070267055_il2cpp_TypeInfo_var;
extern const uint32_t EndPanel_Awake_m3402875113_MetadataUsageId;
extern const uint32_t EndPanel_PlayEndAnimation_m1188432607_MetadataUsageId;
extern RuntimeClass* U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627_il2cpp_TypeInfo_var;
extern const uint32_t EndPanel_IPlayEndSequence_m2667675806_MetadataUsageId;
extern RuntimeClass* U3CIMoveRectU3Ec__Iterator1_t1700463851_il2cpp_TypeInfo_var;
extern const uint32_t EndPanel_IMoveRect_m3711810308_MetadataUsageId;
extern RuntimeClass* U3CIScaleRectU3Ec__Iterator2_t3801923336_il2cpp_TypeInfo_var;
extern const uint32_t EndPanel_IScaleRect_m3835188359_MetadataUsageId;
extern RuntimeClass* U3CIFadeImageU3Ec__Iterator3_t2878897811_il2cpp_TypeInfo_var;
extern const uint32_t EndPanel_IFadeImage_m2328497366_MetadataUsageId;
extern RuntimeClass* U3CIPopScaleU3Ec__Iterator4_t3413360195_il2cpp_TypeInfo_var;
extern const uint32_t EndPanel_IPopScale_m158583595_MetadataUsageId;
extern RuntimeClass* Mathf_t3464937446_il2cpp_TypeInfo_var;
extern RuntimeClass* WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var;
extern const uint32_t U3CIFadeImageU3Ec__Iterator3_MoveNext_m1362718675_MetadataUsageId;
extern RuntimeClass* NotSupportedException_t1314879016_il2cpp_TypeInfo_var;
extern const uint32_t U3CIFadeImageU3Ec__Iterator3_Reset_m4211831438_MetadataUsageId;
extern RuntimeClass* Vector2_t2156229523_il2cpp_TypeInfo_var;
extern const uint32_t U3CIMoveRectU3Ec__Iterator1_MoveNext_m3364727981_MetadataUsageId;
extern const uint32_t U3CIMoveRectU3Ec__Iterator1_Reset_m3256979049_MetadataUsageId;
extern RuntimeClass* WaitForSeconds_t1699091251_il2cpp_TypeInfo_var;
extern RuntimeClass* StageInfo_t2857013238_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4073034007;
extern String_t* _stringLiteral3452614605;
extern const uint32_t U3CIPlayEndSequenceU3Ec__Iterator0_MoveNext_m1295108383_MetadataUsageId;
extern const uint32_t U3CIPlayEndSequenceU3Ec__Iterator0_Reset_m2757699173_MetadataUsageId;
extern RuntimeClass* Vector3_t3722313464_il2cpp_TypeInfo_var;
extern const uint32_t U3CIPopScaleU3Ec__Iterator4_MoveNext_m537174581_MetadataUsageId;
extern const uint32_t U3CIPopScaleU3Ec__Iterator4_Reset_m2706680571_MetadataUsageId;
extern const uint32_t U3CIScaleRectU3Ec__Iterator2_MoveNext_m2225914180_MetadataUsageId;
extern const uint32_t U3CIScaleRectU3Ec__Iterator2_Reset_m1663808615_MetadataUsageId;
extern RuntimeClass* U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349_il2cpp_TypeInfo_var;
extern const uint32_t GameplayTransitions_IFadeAndLoadScene_m653410608_MetadataUsageId;
extern RuntimeClass* U3CIFadeRectU3Ec__Iterator1_t767004030_il2cpp_TypeInfo_var;
extern const uint32_t GameplayTransitions_IFadeRect_m907006305_MetadataUsageId;
extern const uint32_t U3CIFadeAndLoadSceneU3Ec__Iterator0_MoveNext_m1563750454_MetadataUsageId;
extern const uint32_t U3CIFadeAndLoadSceneU3Ec__Iterator0_Reset_m1583206045_MetadataUsageId;
extern const uint32_t U3CIFadeRectU3Ec__Iterator1_MoveNext_m4191585309_MetadataUsageId;
extern const uint32_t U3CIFadeRectU3Ec__Iterator1_Reset_m1693989692_MetadataUsageId;
extern RuntimeClass* U3CIShowBubbleU3Ec__Iterator0_t2610264614_il2cpp_TypeInfo_var;
extern const uint32_t HelpBubble_IShowBubble_m622073866_MetadataUsageId;
extern const uint32_t U3CIShowBubbleU3Ec__Iterator0_MoveNext_m695943690_MetadataUsageId;
extern const uint32_t U3CIShowBubbleU3Ec__Iterator0_Reset_m4079515969_MetadataUsageId;
extern RuntimeClass* TextAsset_t3022178571_il2cpp_TypeInfo_var;
extern const RuntimeMethod* JsonUtility_FromJson_TisStageData_t251497815_m2539850222_RuntimeMethod_var;
extern String_t* _stringLiteral839100749;
extern const uint32_t JSONParser_LoadResources_m3124311211_MetadataUsageId;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3658904049;
extern const uint32_t JSONParser_SaveResources_m3830451285_MetadataUsageId;
extern RuntimeClass* U3CIAnimateCloudU3Ec__Iterator0_t2877652068_il2cpp_TypeInfo_var;
extern const uint32_t MenuClouds_IAnimateCloud_m607291686_MetadataUsageId;
extern const uint32_t U3CIAnimateCloudU3Ec__Iterator0_MoveNext_m345343725_MetadataUsageId;
extern const uint32_t U3CIAnimateCloudU3Ec__Iterator0_Reset_m2610897343_MetadataUsageId;
extern RuntimeClass* MenuFlowManager_t1614880941_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_SetLastPanel_m2599473069_MetadataUsageId;
extern const uint32_t MenuFlowManager_Setup_m838475575_MetadataUsageId;
extern RuntimeClass* Input_t1431474628_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_Update_m1759856524_MetadataUsageId;
extern const uint32_t MenuFlowManager_ChangePanel_m248027790_MetadataUsageId;
extern String_t* _stringLiteral291493374;
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
extern const uint32_t MenuFlowManager_IMoveTitle_m881204112_MetadataUsageId;
extern const uint32_t MenuFlowManager_PlayClickSound_m2133418347_MetadataUsageId;
extern const uint32_t MenuFlowManager_ShowTipPanel_m410722394_MetadataUsageId;
extern RuntimeClass* U3CISetTipPanelU3Ec__Iterator5_t956795441_il2cpp_TypeInfo_var;
extern const uint32_t MenuFlowManager_ISetTipPanel_m1650888798_MetadataUsageId;
extern const uint32_t MenuFlowManager__cctor_m4240302263_MetadataUsageId;
extern const uint32_t U3CIFadeAndChangePanelU3Ec__Iterator2_MoveNext_m2543383524_MetadataUsageId;
extern const uint32_t U3CIFadeAndChangePanelU3Ec__Iterator2_Reset_m634308582_MetadataUsageId;
extern const uint32_t U3CIFadeImageU3Ec__Iterator3_MoveNext_m3461052218_MetadataUsageId;
extern const uint32_t U3CIFadeImageU3Ec__Iterator3_Reset_m3095745968_MetadataUsageId;
extern const uint32_t U3CIMoveTitleU3Ec__Iterator4_MoveNext_m1493558177_MetadataUsageId;
extern const uint32_t U3CIMoveTitleU3Ec__Iterator4_Reset_m4182724530_MetadataUsageId;
extern const uint32_t U3CIPlayDelayedTipU3Ec__Iterator1_MoveNext_m2441972052_MetadataUsageId;
extern const uint32_t U3CIPlayDelayedTipU3Ec__Iterator1_Reset_m2471565827_MetadataUsageId;
extern const uint32_t U3CISelectLevelU3Ec__Iterator0_MoveNext_m1500675614_MetadataUsageId;
extern const uint32_t U3CISelectLevelU3Ec__Iterator0_Reset_m1268821664_MetadataUsageId;
extern const uint32_t U3CISetTipPanelU3Ec__Iterator5_MoveNext_m546186187_MetadataUsageId;
extern const uint32_t U3CISetTipPanelU3Ec__Iterator5_Reset_m3788105307_MetadataUsageId;
extern String_t* _stringLiteral1919288411;
extern const uint32_t MenuLevelButton__ctor_m972022857_MetadataUsageId;
extern RuntimeClass* ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var;
extern RuntimeClass* Int32_t2950945753_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3314962267;
extern String_t* _stringLiteral3451565968;
extern String_t* _stringLiteral1655699785;
extern String_t* _stringLiteral2703796567;
extern const uint32_t MenuLevelButton_Setup_m3441281685_MetadataUsageId;
extern const uint32_t MenuLevelButton_Update_m2907968190_MetadataUsageId;
extern const uint32_t MenuLevelButton_ActivateSelf_m1538653098_MetadataUsageId;
extern const uint32_t MenuLevelButton_ShowStarts_m3471610984_MetadataUsageId;
extern String_t* _stringLiteral2278870150;
extern String_t* _stringLiteral382461207;
extern String_t* _stringLiteral79945594;
extern String_t* _stringLiteral2642543365;
extern const uint32_t MenuLevelButton_ShowLevelCount_m1856586175_MetadataUsageId;
extern const uint32_t MenuLevelButton_Click_m1388688786_MetadataUsageId;
extern const uint32_t MenuLevelButton_SelectWorld_m1572165096_MetadataUsageId;
extern const uint32_t MenuLevelButton_SelectLevel_m66141631_MetadataUsageId;
extern const uint32_t MenuLevelButton_FadeToPanel_m1436600765_MetadataUsageId;
extern const uint32_t MenuLevelButton_StopPulse_m1390356242_MetadataUsageId;
extern RuntimeClass* U3CIPulseU3Ec__Iterator0_t2453214028_il2cpp_TypeInfo_var;
extern const uint32_t MenuLevelButton_IPulse_m2191181185_MetadataUsageId;
extern const uint32_t U3CIPulseU3Ec__Iterator0_MoveNext_m982244571_MetadataUsageId;
extern const uint32_t U3CIPulseU3Ec__Iterator0_Reset_m2787103542_MetadataUsageId;
extern String_t* _stringLiteral3452614641;
extern String_t* _stringLiteral2781991851;
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
extern RuntimeClass* Quaternion_t2301928331_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var;
extern const uint32_t ObjectBuilderScript_BuildObject_m60935440_MetadataUsageId;
extern const uint32_t PauseMenu_Update_m1844139191_MetadataUsageId;
extern RuntimeClass* U3CIHidePanelU3Ec__Iterator0_t1813140080_il2cpp_TypeInfo_var;
extern const uint32_t PauseMenu_IHidePanel_m1252136598_MetadataUsageId;
extern RuntimeClass* U3CIFadeBGU3Ec__Iterator1_t4004556069_il2cpp_TypeInfo_var;
extern const uint32_t PauseMenu_IFadeBG_m496742413_MetadataUsageId;
extern RuntimeClass* U3CIMoveButtonU3Ec__Iterator2_t2280749436_il2cpp_TypeInfo_var;
extern const uint32_t PauseMenu_IMoveButton_m3998061770_MetadataUsageId;
extern const uint32_t U3CIFadeBGU3Ec__Iterator1_MoveNext_m521724924_MetadataUsageId;
extern const uint32_t U3CIFadeBGU3Ec__Iterator1_Reset_m956069341_MetadataUsageId;
extern const uint32_t U3CIHidePanelU3Ec__Iterator0_MoveNext_m1113169740_MetadataUsageId;
extern const uint32_t U3CIHidePanelU3Ec__Iterator0_Reset_m1288757492_MetadataUsageId;
extern const uint32_t U3CIMoveButtonU3Ec__Iterator2_MoveNext_m1260386584_MetadataUsageId;
extern const uint32_t U3CIMoveButtonU3Ec__Iterator2_Reset_m138322812_MetadataUsageId;
extern String_t* _stringLiteral3011714597;
extern String_t* _stringLiteral2550604001;
extern String_t* _stringLiteral3742049075;
extern String_t* _stringLiteral3639419666;
extern const uint32_t PF__ctor_m3030524320_MetadataUsageId;
extern RuntimeClass* Debug_t3317548046_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1554596395;
extern const uint32_t PF_SetColor_m3601946841_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var;
extern const uint32_t PF_SetColorOnComponents_m2208196986_MetadataUsageId;
extern const RuntimeMethod* List_1_GetEnumerator_m3886182746_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_get_Current_m3702177537_RuntimeMethod_var;
extern const RuntimeMethod* Object_Instantiate_TisOption_t3411289914_m3769806585_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_MoveNext_m2744082053_RuntimeMethod_var;
extern const RuntimeMethod* Enumerator_Dispose_m1048307249_RuntimeMethod_var;
extern const uint32_t ScrollManager_loadPFs_m1716982294_MetadataUsageId;
extern RuntimeClass* U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795_il2cpp_TypeInfo_var;
extern RuntimeClass* Entry_t3344766165_il2cpp_TypeInfo_var;
extern RuntimeClass* UnityAction_1_t192896378_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Component_GetComponentInChildren_TisEventTrigger_t1076084509_m1530465545_RuntimeMethod_var;
extern const RuntimeMethod* U3CaddEventTriggerU3Ec__AnonStorey0_U3CU3Em__0_m1040240063_RuntimeMethod_var;
extern const RuntimeMethod* UnityAction_1__ctor_m2138728059_RuntimeMethod_var;
extern const RuntimeMethod* UnityEvent_1_AddListener_m3152081749_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m35675040_RuntimeMethod_var;
extern const uint32_t ScrollManager_addEventTrigger_m2813815451_MetadataUsageId;
extern const RuntimeMethod* GameObject_GetComponent_TisStageManager_t3296066545_m305820070_RuntimeMethod_var;
extern String_t* _stringLiteral1923419272;
extern const uint32_t ScrollManager_selectOption_m1988178586_MetadataUsageId;
extern const uint32_t StageInfo_Awake_m308879600_MetadataUsageId;
extern const uint32_t StageInfo_GetSavedStarAmount_m2316285987_MetadataUsageId;
extern const uint32_t StageInfo_SaveLevelStarAmount_m3256426961_MetadataUsageId;
extern String_t* _stringLiteral3452614528;
extern const uint32_t StageInfo_GetTimeString_m3819379987_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m444493417_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m2511544463_RuntimeMethod_var;
extern const uint32_t StageInfo_LevelExists_m3960227236_MetadataUsageId;
extern const uint32_t StageInfo_GetLevelCount_m2994796715_MetadataUsageId;
extern String_t* _stringLiteral3930751419;
extern const uint32_t StageInfo_UnlockNextLevel_m645837895_MetadataUsageId;
extern const RuntimeType* Sprite_t280657092_0_0_0_var;
extern RuntimeClass* Type_t_il2cpp_TypeInfo_var;
extern RuntimeClass* Sprite_t280657092_il2cpp_TypeInfo_var;
extern const uint32_t StageManager_Awake_m533670761_MetadataUsageId;
extern RuntimeClass* Stage_t1845040247_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral3452614544;
extern const uint32_t StageManager_FindStage_m117108134_MetadataUsageId;
extern const RuntimeMethod* Object_Instantiate_TisPF_t166272826_m253699196_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1524640104_RuntimeMethod_var;
extern const RuntimeMethod* List_1_Add_m1377909232_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Count_m1440737880_RuntimeMethod_var;
extern const uint32_t StageManager_SetupPFsFromJSON_m1347357461_MetadataUsageId;
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
extern const uint32_t StageManager_CompleteStage_m2785006177_MetadataUsageId;
extern String_t* _stringLiteral3450517443;
extern const uint32_t StageManager_UpdateTimerUI_m2579357050_MetadataUsageId;
extern RuntimeClass* U3CBackToMenuU3Ec__Iterator0_t1978105360_il2cpp_TypeInfo_var;
extern const uint32_t StageManager_BackToMenu_m671746728_MetadataUsageId;
extern const RuntimeMethod* List_1_get_Item_m3513474579_RuntimeMethod_var;
extern const RuntimeMethod* List_1_get_Item_m200663048_RuntimeMethod_var;
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
extern RuntimeClass* StepChecker_t1301311235_il2cpp_TypeInfo_var;
extern const uint32_t StepChecker_Awake_m3858692506_MetadataUsageId;
extern const uint32_t StepChecker_CheckMarkAtIndex_m3141407165_MetadataUsageId;
extern RuntimeClass* U3CIPopMarkU3Ec__Iterator0_t3268555169_il2cpp_TypeInfo_var;
extern const uint32_t StepChecker_IPopMark_m3907283909_MetadataUsageId;
extern const uint32_t U3CIPopMarkU3Ec__Iterator0_MoveNext_m1875670788_MetadataUsageId;
extern const uint32_t U3CIPopMarkU3Ec__Iterator0_Reset_m2421409105_MetadataUsageId;

struct AudioClipU5BU5D_t143221404;
struct RectTransformU5BU5D_t107129948;
struct AudioSFXU5BU5D_t2541677417;
struct ImageU5BU5D_t2439009922;
struct MenuPanelU5BU5D_t1968201233;
struct StringU5BU5D_t1281789340;
struct ObjectU5BU5D_t2843939325;
struct GameObjectU5BU5D_t3328599146;
struct MenuLevelButtonU5BU5D_t58144480;
struct PauseMenuButtonU5BU5D_t2517294588;
struct SingleU5BU5D_t1444911251;
struct SpriteRendererU5BU5D_t911335936;


#ifndef U3CMODULEU3E_T692745547_H
#define U3CMODULEU3E_T692745547_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t692745547 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T692745547_H
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
#ifndef LIST_1_T899420910_H
#define LIST_1_T899420910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t899420910  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t1718750761* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____items_1)); }
	inline Vector3U5BU5D_t1718750761* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t1718750761** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t1718750761* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t899420910, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t899420910_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	Vector3U5BU5D_t1718750761* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t899420910_StaticFields, ___EmptyArray_4)); }
	inline Vector3U5BU5D_t1718750761* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline Vector3U5BU5D_t1718750761** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(Vector3U5BU5D_t1718750761* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T899420910_H
#ifndef LIST_1_T521873611_H
#define LIST_1_T521873611_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct  List_1_t521873611  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	EntryU5BU5D_t399612984* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t521873611, ____items_1)); }
	inline EntryU5BU5D_t399612984* get__items_1() const { return ____items_1; }
	inline EntryU5BU5D_t399612984** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(EntryU5BU5D_t399612984* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t521873611, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t521873611, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t521873611_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	EntryU5BU5D_t399612984* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t521873611_StaticFields, ___EmptyArray_4)); }
	inline EntryU5BU5D_t399612984* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline EntryU5BU5D_t399612984** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(EntryU5BU5D_t399612984* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T521873611_H
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
#ifndef U3CIPOPSCALEU3EC__ITERATOR4_T3413360195_H
#define U3CIPOPSCALEU3EC__ITERATOR4_T3413360195_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndPanel/<IPopScale>c__Iterator4
struct  U3CIPopScaleU3Ec__Iterator4_t3413360195  : public RuntimeObject
{
public:
	// System.Single EndPanel/<IPopScale>c__Iterator4::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single EndPanel/<IPopScale>c__Iterator4::speed
	float ___speed_1;
	// UnityEngine.RectTransform EndPanel/<IPopScale>c__Iterator4::rect
	RectTransform_t3704657025 * ___rect_2;
	// System.Single EndPanel/<IPopScale>c__Iterator4::pop
	float ___pop_3;
	// System.Single EndPanel/<IPopScale>c__Iterator4::normal
	float ___normal_4;
	// System.Object EndPanel/<IPopScale>c__Iterator4::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean EndPanel/<IPopScale>c__Iterator4::$disposing
	bool ___U24disposing_6;
	// System.Int32 EndPanel/<IPopScale>c__Iterator4::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIPopScaleU3Ec__Iterator4_t3413360195, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIPopScaleU3Ec__Iterator4_t3413360195, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(U3CIPopScaleU3Ec__Iterator4_t3413360195, ___rect_2)); }
	inline RectTransform_t3704657025 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t3704657025 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t3704657025 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier((&___rect_2), value);
	}

	inline static int32_t get_offset_of_pop_3() { return static_cast<int32_t>(offsetof(U3CIPopScaleU3Ec__Iterator4_t3413360195, ___pop_3)); }
	inline float get_pop_3() const { return ___pop_3; }
	inline float* get_address_of_pop_3() { return &___pop_3; }
	inline void set_pop_3(float value)
	{
		___pop_3 = value;
	}

	inline static int32_t get_offset_of_normal_4() { return static_cast<int32_t>(offsetof(U3CIPopScaleU3Ec__Iterator4_t3413360195, ___normal_4)); }
	inline float get_normal_4() const { return ___normal_4; }
	inline float* get_address_of_normal_4() { return &___normal_4; }
	inline void set_normal_4(float value)
	{
		___normal_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CIPopScaleU3Ec__Iterator4_t3413360195, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CIPopScaleU3Ec__Iterator4_t3413360195, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CIPopScaleU3Ec__Iterator4_t3413360195, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIPOPSCALEU3EC__ITERATOR4_T3413360195_H
#ifndef U3CIPOPMARKU3EC__ITERATOR0_T3268555169_H
#define U3CIPOPMARKU3EC__ITERATOR0_T3268555169_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StepChecker/<IPopMark>c__Iterator0
struct  U3CIPopMarkU3Ec__Iterator0_t3268555169  : public RuntimeObject
{
public:
	// System.Int32 StepChecker/<IPopMark>c__Iterator0::index
	int32_t ___index_0;
	// UnityEngine.RectTransform StepChecker/<IPopMark>c__Iterator0::<rect>__1
	RectTransform_t3704657025 * ___U3CrectU3E__1_1;
	// System.Single StepChecker/<IPopMark>c__Iterator0::<lerp>__1
	float ___U3ClerpU3E__1_2;
	// System.Single StepChecker/<IPopMark>c__Iterator0::speed
	float ___speed_3;
	// System.Single StepChecker/<IPopMark>c__Iterator0::pop
	float ___pop_4;
	// System.Single StepChecker/<IPopMark>c__Iterator0::normal
	float ___normal_5;
	// StepChecker StepChecker/<IPopMark>c__Iterator0::$this
	StepChecker_t1301311235 * ___U24this_6;
	// System.Object StepChecker/<IPopMark>c__Iterator0::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean StepChecker/<IPopMark>c__Iterator0::$disposing
	bool ___U24disposing_8;
	// System.Int32 StepChecker/<IPopMark>c__Iterator0::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_U3CrectU3E__1_1() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___U3CrectU3E__1_1)); }
	inline RectTransform_t3704657025 * get_U3CrectU3E__1_1() const { return ___U3CrectU3E__1_1; }
	inline RectTransform_t3704657025 ** get_address_of_U3CrectU3E__1_1() { return &___U3CrectU3E__1_1; }
	inline void set_U3CrectU3E__1_1(RectTransform_t3704657025 * value)
	{
		___U3CrectU3E__1_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CrectU3E__1_1), value);
	}

	inline static int32_t get_offset_of_U3ClerpU3E__1_2() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___U3ClerpU3E__1_2)); }
	inline float get_U3ClerpU3E__1_2() const { return ___U3ClerpU3E__1_2; }
	inline float* get_address_of_U3ClerpU3E__1_2() { return &___U3ClerpU3E__1_2; }
	inline void set_U3ClerpU3E__1_2(float value)
	{
		___U3ClerpU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_pop_4() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___pop_4)); }
	inline float get_pop_4() const { return ___pop_4; }
	inline float* get_address_of_pop_4() { return &___pop_4; }
	inline void set_pop_4(float value)
	{
		___pop_4 = value;
	}

	inline static int32_t get_offset_of_normal_5() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___normal_5)); }
	inline float get_normal_5() const { return ___normal_5; }
	inline float* get_address_of_normal_5() { return &___normal_5; }
	inline void set_normal_5(float value)
	{
		___normal_5 = value;
	}

	inline static int32_t get_offset_of_U24this_6() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___U24this_6)); }
	inline StepChecker_t1301311235 * get_U24this_6() const { return ___U24this_6; }
	inline StepChecker_t1301311235 ** get_address_of_U24this_6() { return &___U24this_6; }
	inline void set_U24this_6(StepChecker_t1301311235 * value)
	{
		___U24this_6 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_6), value);
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CIPopMarkU3Ec__Iterator0_t3268555169, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIPOPMARKU3EC__ITERATOR0_T3268555169_H
#ifndef U3CISCALERECTU3EC__ITERATOR2_T3801923336_H
#define U3CISCALERECTU3EC__ITERATOR2_T3801923336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndPanel/<IScaleRect>c__Iterator2
struct  U3CIScaleRectU3Ec__Iterator2_t3801923336  : public RuntimeObject
{
public:
	// System.Single EndPanel/<IScaleRect>c__Iterator2::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single EndPanel/<IScaleRect>c__Iterator2::speed
	float ___speed_1;
	// UnityEngine.RectTransform EndPanel/<IScaleRect>c__Iterator2::rect
	RectTransform_t3704657025 * ___rect_2;
	// System.Single EndPanel/<IScaleRect>c__Iterator2::scale
	float ___scale_3;
	// System.Object EndPanel/<IScaleRect>c__Iterator2::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean EndPanel/<IScaleRect>c__Iterator2::$disposing
	bool ___U24disposing_5;
	// System.Int32 EndPanel/<IScaleRect>c__Iterator2::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIScaleRectU3Ec__Iterator2_t3801923336, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIScaleRectU3Ec__Iterator2_t3801923336, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(U3CIScaleRectU3Ec__Iterator2_t3801923336, ___rect_2)); }
	inline RectTransform_t3704657025 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t3704657025 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t3704657025 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier((&___rect_2), value);
	}

	inline static int32_t get_offset_of_scale_3() { return static_cast<int32_t>(offsetof(U3CIScaleRectU3Ec__Iterator2_t3801923336, ___scale_3)); }
	inline float get_scale_3() const { return ___scale_3; }
	inline float* get_address_of_scale_3() { return &___scale_3; }
	inline void set_scale_3(float value)
	{
		___scale_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CIScaleRectU3Ec__Iterator2_t3801923336, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CIScaleRectU3Ec__Iterator2_t3801923336, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CIScaleRectU3Ec__Iterator2_t3801923336, ___U24PC_6)); }
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
#endif // U3CISCALERECTU3EC__ITERATOR2_T3801923336_H
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
#ifndef U3CIPLAYENDSEQUENCEU3EC__ITERATOR0_T1176744627_H
#define U3CIPLAYENDSEQUENCEU3EC__ITERATOR0_T1176744627_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndPanel/<IPlayEndSequence>c__Iterator0
struct  U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627  : public RuntimeObject
{
public:
	// System.Single EndPanel/<IPlayEndSequence>c__Iterator0::delay
	float ___delay_0;
	// System.Int32 EndPanel/<IPlayEndSequence>c__Iterator0::<stars>__0
	int32_t ___U3CstarsU3E__0_1;
	// System.Int32 EndPanel/<IPlayEndSequence>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_2;
	// EndPanel EndPanel/<IPlayEndSequence>c__Iterator0::$this
	EndPanel_t2070267055 * ___U24this_3;
	// System.Object EndPanel/<IPlayEndSequence>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean EndPanel/<IPlayEndSequence>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 EndPanel/<IPlayEndSequence>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_delay_0() { return static_cast<int32_t>(offsetof(U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627, ___delay_0)); }
	inline float get_delay_0() const { return ___delay_0; }
	inline float* get_address_of_delay_0() { return &___delay_0; }
	inline void set_delay_0(float value)
	{
		___delay_0 = value;
	}

	inline static int32_t get_offset_of_U3CstarsU3E__0_1() { return static_cast<int32_t>(offsetof(U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627, ___U3CstarsU3E__0_1)); }
	inline int32_t get_U3CstarsU3E__0_1() const { return ___U3CstarsU3E__0_1; }
	inline int32_t* get_address_of_U3CstarsU3E__0_1() { return &___U3CstarsU3E__0_1; }
	inline void set_U3CstarsU3E__0_1(int32_t value)
	{
		___U3CstarsU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_U3CiU3E__1_2() { return static_cast<int32_t>(offsetof(U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627, ___U3CiU3E__1_2)); }
	inline int32_t get_U3CiU3E__1_2() const { return ___U3CiU3E__1_2; }
	inline int32_t* get_address_of_U3CiU3E__1_2() { return &___U3CiU3E__1_2; }
	inline void set_U3CiU3E__1_2(int32_t value)
	{
		___U3CiU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627, ___U24this_3)); }
	inline EndPanel_t2070267055 * get_U24this_3() const { return ___U24this_3; }
	inline EndPanel_t2070267055 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(EndPanel_t2070267055 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627, ___U24PC_6)); }
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
#endif // U3CIPLAYENDSEQUENCEU3EC__ITERATOR0_T1176744627_H
#ifndef U3CIFADEANDLOADSCENEU3EC__ITERATOR0_T3691831349_H
#define U3CIFADEANDLOADSCENEU3EC__ITERATOR0_T3691831349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameplayTransitions/<IFadeAndLoadScene>c__Iterator0
struct  U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349  : public RuntimeObject
{
public:
	// System.String GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::sceneName
	String_t* ___sceneName_0;
	// GameplayTransitions GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::$this
	GameplayTransitions_t431761729 * ___U24this_1;
	// System.Object GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::$current
	RuntimeObject * ___U24current_2;
	// System.Boolean GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::$PC
	int32_t ___U24PC_4;

public:
	inline static int32_t get_offset_of_sceneName_0() { return static_cast<int32_t>(offsetof(U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349, ___sceneName_0)); }
	inline String_t* get_sceneName_0() const { return ___sceneName_0; }
	inline String_t** get_address_of_sceneName_0() { return &___sceneName_0; }
	inline void set_sceneName_0(String_t* value)
	{
		___sceneName_0 = value;
		Il2CppCodeGenWriteBarrier((&___sceneName_0), value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349, ___U24this_1)); }
	inline GameplayTransitions_t431761729 * get_U24this_1() const { return ___U24this_1; }
	inline GameplayTransitions_t431761729 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(GameplayTransitions_t431761729 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}

	inline static int32_t get_offset_of_U24current_2() { return static_cast<int32_t>(offsetof(U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349, ___U24current_2)); }
	inline RuntimeObject * get_U24current_2() const { return ___U24current_2; }
	inline RuntimeObject ** get_address_of_U24current_2() { return &___U24current_2; }
	inline void set_U24current_2(RuntimeObject * value)
	{
		___U24current_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_2), value);
	}

	inline static int32_t get_offset_of_U24disposing_3() { return static_cast<int32_t>(offsetof(U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349, ___U24disposing_3)); }
	inline bool get_U24disposing_3() const { return ___U24disposing_3; }
	inline bool* get_address_of_U24disposing_3() { return &___U24disposing_3; }
	inline void set_U24disposing_3(bool value)
	{
		___U24disposing_3 = value;
	}

	inline static int32_t get_offset_of_U24PC_4() { return static_cast<int32_t>(offsetof(U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349, ___U24PC_4)); }
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
#endif // U3CIFADEANDLOADSCENEU3EC__ITERATOR0_T3691831349_H
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
#ifndef U3CIPULSEU3EC__ITERATOR0_T2453214028_H
#define U3CIPULSEU3EC__ITERATOR0_T2453214028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuLevelButton/<IPulse>c__Iterator0
struct  U3CIPulseU3Ec__Iterator0_t2453214028  : public RuntimeObject
{
public:
	// System.Single MenuLevelButton/<IPulse>c__Iterator0::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// UnityEngine.Transform MenuLevelButton/<IPulse>c__Iterator0::<trf>__0
	Transform_t3600365921 * ___U3CtrfU3E__0_1;
	// System.Single MenuLevelButton/<IPulse>c__Iterator0::speed
	float ___speed_2;
	// System.Boolean MenuLevelButton/<IPulse>c__Iterator0::loop
	bool ___loop_3;
	// MenuLevelButton MenuLevelButton/<IPulse>c__Iterator0::$this
	MenuLevelButton_t3559006541 * ___U24this_4;
	// System.Object MenuLevelButton/<IPulse>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean MenuLevelButton/<IPulse>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 MenuLevelButton/<IPulse>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIPulseU3Ec__Iterator0_t2453214028, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_U3CtrfU3E__0_1() { return static_cast<int32_t>(offsetof(U3CIPulseU3Ec__Iterator0_t2453214028, ___U3CtrfU3E__0_1)); }
	inline Transform_t3600365921 * get_U3CtrfU3E__0_1() const { return ___U3CtrfU3E__0_1; }
	inline Transform_t3600365921 ** get_address_of_U3CtrfU3E__0_1() { return &___U3CtrfU3E__0_1; }
	inline void set_U3CtrfU3E__0_1(Transform_t3600365921 * value)
	{
		___U3CtrfU3E__0_1 = value;
		Il2CppCodeGenWriteBarrier((&___U3CtrfU3E__0_1), value);
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(U3CIPulseU3Ec__Iterator0_t2453214028, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_loop_3() { return static_cast<int32_t>(offsetof(U3CIPulseU3Ec__Iterator0_t2453214028, ___loop_3)); }
	inline bool get_loop_3() const { return ___loop_3; }
	inline bool* get_address_of_loop_3() { return &___loop_3; }
	inline void set_loop_3(bool value)
	{
		___loop_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CIPulseU3Ec__Iterator0_t2453214028, ___U24this_4)); }
	inline MenuLevelButton_t3559006541 * get_U24this_4() const { return ___U24this_4; }
	inline MenuLevelButton_t3559006541 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(MenuLevelButton_t3559006541 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CIPulseU3Ec__Iterator0_t2453214028, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CIPulseU3Ec__Iterator0_t2453214028, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CIPulseU3Ec__Iterator0_t2453214028, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIPULSEU3EC__ITERATOR0_T2453214028_H
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
#ifndef U3CIHIDEPANELU3EC__ITERATOR0_T1813140080_H
#define U3CIHIDEPANELU3EC__ITERATOR0_T1813140080_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu/<IHidePanel>c__Iterator0
struct  U3CIHidePanelU3Ec__Iterator0_t1813140080  : public RuntimeObject
{
public:
	// System.Single PauseMenu/<IHidePanel>c__Iterator0::time
	float ___time_0;
	// System.Boolean PauseMenu/<IHidePanel>c__Iterator0::value
	bool ___value_1;
	// PauseMenu PauseMenu/<IHidePanel>c__Iterator0::$this
	PauseMenu_t3916167947 * ___U24this_2;
	// System.Object PauseMenu/<IHidePanel>c__Iterator0::$current
	RuntimeObject * ___U24current_3;
	// System.Boolean PauseMenu/<IHidePanel>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 PauseMenu/<IHidePanel>c__Iterator0::$PC
	int32_t ___U24PC_5;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(U3CIHidePanelU3Ec__Iterator0_t1813140080, ___time_0)); }
	inline float get_time_0() const { return ___time_0; }
	inline float* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(float value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(U3CIHidePanelU3Ec__Iterator0_t1813140080, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}

	inline static int32_t get_offset_of_U24this_2() { return static_cast<int32_t>(offsetof(U3CIHidePanelU3Ec__Iterator0_t1813140080, ___U24this_2)); }
	inline PauseMenu_t3916167947 * get_U24this_2() const { return ___U24this_2; }
	inline PauseMenu_t3916167947 ** get_address_of_U24this_2() { return &___U24this_2; }
	inline void set_U24this_2(PauseMenu_t3916167947 * value)
	{
		___U24this_2 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_2), value);
	}

	inline static int32_t get_offset_of_U24current_3() { return static_cast<int32_t>(offsetof(U3CIHidePanelU3Ec__Iterator0_t1813140080, ___U24current_3)); }
	inline RuntimeObject * get_U24current_3() const { return ___U24current_3; }
	inline RuntimeObject ** get_address_of_U24current_3() { return &___U24current_3; }
	inline void set_U24current_3(RuntimeObject * value)
	{
		___U24current_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_3), value);
	}

	inline static int32_t get_offset_of_U24disposing_4() { return static_cast<int32_t>(offsetof(U3CIHidePanelU3Ec__Iterator0_t1813140080, ___U24disposing_4)); }
	inline bool get_U24disposing_4() const { return ___U24disposing_4; }
	inline bool* get_address_of_U24disposing_4() { return &___U24disposing_4; }
	inline void set_U24disposing_4(bool value)
	{
		___U24disposing_4 = value;
	}

	inline static int32_t get_offset_of_U24PC_5() { return static_cast<int32_t>(offsetof(U3CIHidePanelU3Ec__Iterator0_t1813140080, ___U24PC_5)); }
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
#endif // U3CIHIDEPANELU3EC__ITERATOR0_T1813140080_H
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
#ifndef JSONPARSER_T75429706_H
#define JSONPARSER_T75429706_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JSONParser
struct  JSONParser_t75429706  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // JSONPARSER_T75429706_H
#ifndef U3CADDEVENTTRIGGERU3EC__ANONSTOREY0_T3108922795_H
#define U3CADDEVENTTRIGGERU3EC__ANONSTOREY0_T3108922795_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollManager/<addEventTrigger>c__AnonStorey0
struct  U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795  : public RuntimeObject
{
public:
	// System.Int32 ScrollManager/<addEventTrigger>c__AnonStorey0::index
	int32_t ___index_0;
	// ScrollManager ScrollManager/<addEventTrigger>c__AnonStorey0::$this
	ScrollManager_t2903461311 * ___U24this_1;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795, ___U24this_1)); }
	inline ScrollManager_t2903461311 * get_U24this_1() const { return ___U24this_1; }
	inline ScrollManager_t2903461311 ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(ScrollManager_t2903461311 * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CADDEVENTTRIGGERU3EC__ANONSTOREY0_T3108922795_H
#ifndef LIST_1_T1638347568_H
#define LIST_1_T1638347568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<PF>
struct  List_1_t1638347568  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PFU5BU5D_t3604245151* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1638347568, ____items_1)); }
	inline PFU5BU5D_t3604245151* get__items_1() const { return ____items_1; }
	inline PFU5BU5D_t3604245151** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PFU5BU5D_t3604245151* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1638347568, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1638347568, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t1638347568_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PFU5BU5D_t3604245151* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t1638347568_StaticFields, ___EmptyArray_4)); }
	inline PFU5BU5D_t3604245151* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PFU5BU5D_t3604245151** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PFU5BU5D_t3604245151* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T1638347568_H
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
	// UnityEngine.RectTransform MenuPanel::content
	RectTransform_t3704657025 * ___content_1;
	// System.Int32 MenuPanel::prevPanelID
	int32_t ___prevPanelID_2;

public:
	inline static int32_t get_offset_of_panel_0() { return static_cast<int32_t>(offsetof(MenuPanel_t2709851952, ___panel_0)); }
	inline GameObject_t1113636619 * get_panel_0() const { return ___panel_0; }
	inline GameObject_t1113636619 ** get_address_of_panel_0() { return &___panel_0; }
	inline void set_panel_0(GameObject_t1113636619 * value)
	{
		___panel_0 = value;
		Il2CppCodeGenWriteBarrier((&___panel_0), value);
	}

	inline static int32_t get_offset_of_content_1() { return static_cast<int32_t>(offsetof(MenuPanel_t2709851952, ___content_1)); }
	inline RectTransform_t3704657025 * get_content_1() const { return ___content_1; }
	inline RectTransform_t3704657025 ** get_address_of_content_1() { return &___content_1; }
	inline void set_content_1(RectTransform_t3704657025 * value)
	{
		___content_1 = value;
		Il2CppCodeGenWriteBarrier((&___content_1), value);
	}

	inline static int32_t get_offset_of_prevPanelID_2() { return static_cast<int32_t>(offsetof(MenuPanel_t2709851952, ___prevPanelID_2)); }
	inline int32_t get_prevPanelID_2() const { return ___prevPanelID_2; }
	inline int32_t* get_address_of_prevPanelID_2() { return &___prevPanelID_2; }
	inline void set_prevPanelID_2(int32_t value)
	{
		___prevPanelID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUPANEL_T2709851952_H
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
#ifndef STAGEDATA_T251497815_H
#define STAGEDATA_T251497815_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StageData
struct  StageData_t251497815  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Stage> StageData::stages
	List_1_t3317114989 * ___stages_0;

public:
	inline static int32_t get_offset_of_stages_0() { return static_cast<int32_t>(offsetof(StageData_t251497815, ___stages_0)); }
	inline List_1_t3317114989 * get_stages_0() const { return ___stages_0; }
	inline List_1_t3317114989 ** get_address_of_stages_0() { return &___stages_0; }
	inline void set_stages_0(List_1_t3317114989 * value)
	{
		___stages_0 = value;
		Il2CppCodeGenWriteBarrier((&___stages_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGEDATA_T251497815_H
#ifndef ABSTRACTEVENTDATA_T4171500731_H
#define ABSTRACTEVENTDATA_T4171500731_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.AbstractEventData
struct  AbstractEventData_t4171500731  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_t4171500731, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ABSTRACTEVENTDATA_T4171500731_H
#ifndef POINT_T1038053449_H
#define POINT_T1038053449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Point
struct  Point_t1038053449  : public RuntimeObject
{
public:
	// Element Point::pf
	Element_t769398275 * ___pf_0;
	// Element Point::line1
	Element_t769398275 * ___line1_1;
	// Element Point::line2
	Element_t769398275 * ___line2_2;

public:
	inline static int32_t get_offset_of_pf_0() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___pf_0)); }
	inline Element_t769398275 * get_pf_0() const { return ___pf_0; }
	inline Element_t769398275 ** get_address_of_pf_0() { return &___pf_0; }
	inline void set_pf_0(Element_t769398275 * value)
	{
		___pf_0 = value;
		Il2CppCodeGenWriteBarrier((&___pf_0), value);
	}

	inline static int32_t get_offset_of_line1_1() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___line1_1)); }
	inline Element_t769398275 * get_line1_1() const { return ___line1_1; }
	inline Element_t769398275 ** get_address_of_line1_1() { return &___line1_1; }
	inline void set_line1_1(Element_t769398275 * value)
	{
		___line1_1 = value;
		Il2CppCodeGenWriteBarrier((&___line1_1), value);
	}

	inline static int32_t get_offset_of_line2_2() { return static_cast<int32_t>(offsetof(Point_t1038053449, ___line2_2)); }
	inline Element_t769398275 * get_line2_2() const { return ___line2_2; }
	inline Element_t769398275 ** get_address_of_line2_2() { return &___line2_2; }
	inline void set_line2_2(Element_t769398275 * value)
	{
		___line2_2 = value;
		Il2CppCodeGenWriteBarrier((&___line2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T1038053449_H
#ifndef LIST_1_T3317114989_H
#define LIST_1_T3317114989_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Stage>
struct  List_1_t3317114989  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StageU5BU5D_t3007172558* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3317114989, ____items_1)); }
	inline StageU5BU5D_t3007172558* get__items_1() const { return ____items_1; }
	inline StageU5BU5D_t3007172558** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StageU5BU5D_t3007172558* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3317114989, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3317114989, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t3317114989_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	StageU5BU5D_t3007172558* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t3317114989_StaticFields, ___EmptyArray_4)); }
	inline StageU5BU5D_t3007172558* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline StageU5BU5D_t3007172558** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(StageU5BU5D_t3007172558* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T3317114989_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef LIST_1_T2510128191_H
#define LIST_1_T2510128191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Point>
struct  List_1_t2510128191  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PointU5BU5D_t4135403636* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t2510128191, ____items_1)); }
	inline PointU5BU5D_t4135403636* get__items_1() const { return ____items_1; }
	inline PointU5BU5D_t4135403636** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PointU5BU5D_t4135403636* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((&____items_1), value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t2510128191, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t2510128191, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t2510128191_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PointU5BU5D_t4135403636* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t2510128191_StaticFields, ___EmptyArray_4)); }
	inline PointU5BU5D_t4135403636* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PointU5BU5D_t4135403636** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PointU5BU5D_t4135403636* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LIST_1_T2510128191_H
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
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef UNITYEVENT_1_T489719741_H
#define UNITYEVENT_1_T489719741_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>
struct  UnityEvent_1_t489719741  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_t489719741, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_1_T489719741_H
#ifndef BASEEVENTDATA_T3903027533_H
#define BASEEVENTDATA_T3903027533_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.BaseEventData
struct  BaseEventData_t3903027533  : public AbstractEventData_t4171500731
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t1003666588 * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t3903027533, ___m_EventSystem_1)); }
	inline EventSystem_t1003666588 * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t1003666588 ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t1003666588 * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_EventSystem_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEEVENTDATA_T3903027533_H
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
#ifndef ENUMERATOR_T3527591445_H
#define ENUMERATOR_T3527591445_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<PF>
struct  Enumerator_t3527591445 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t1638347568 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	PF_t166272826 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t3527591445, ___l_0)); }
	inline List_1_t1638347568 * get_l_0() const { return ___l_0; }
	inline List_1_t1638347568 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t1638347568 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t3527591445, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t3527591445, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3527591445, ___current_3)); }
	inline PF_t166272826 * get_current_3() const { return ___current_3; }
	inline PF_t166272826 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(PF_t166272826 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T3527591445_H
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
#ifndef QUATERNION_T2301928331_H
#define QUATERNION_T2301928331_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2301928331 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2301928331_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2301928331  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2301928331_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2301928331  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2301928331 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2301928331  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2301928331_H
#ifndef SCENE_T2348375561_H
#define SCENE_T2348375561_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SceneManagement.Scene
struct  Scene_t2348375561 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t2348375561, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCENE_T2348375561_H
#ifndef ENUMERATOR_T104404772_H
#define ENUMERATOR_T104404772_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Point>
struct  Enumerator_t104404772 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t2510128191 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Point_t1038053449 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t104404772, ___l_0)); }
	inline List_1_t2510128191 * get_l_0() const { return ___l_0; }
	inline List_1_t2510128191 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t2510128191 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t104404772, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t104404772, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t104404772, ___current_3)); }
	inline Point_t1038053449 * get_current_3() const { return ___current_3; }
	inline Point_t1038053449 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Point_t1038053449 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T104404772_H
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
#ifndef ENUMERATOR_T911391570_H
#define ENUMERATOR_T911391570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<Stage>
struct  Enumerator_t911391570 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t3317114989 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Stage_t1845040247 * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t911391570, ___l_0)); }
	inline List_1_t3317114989 * get_l_0() const { return ___l_0; }
	inline List_1_t3317114989 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t3317114989 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t911391570, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t911391570, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t911391570, ___current_3)); }
	inline Stage_t1845040247 * get_current_3() const { return ___current_3; }
	inline Stage_t1845040247 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Stage_t1845040247 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T911391570_H
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
#ifndef ENUMERATOR_T2146457487_H
#define ENUMERATOR_T2146457487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_t2146457487 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::l
	List_1_t257213610 * ___l_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::next
	int32_t ___next_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::ver
	int32_t ___ver_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_l_0() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___l_0)); }
	inline List_1_t257213610 * get_l_0() const { return ___l_0; }
	inline List_1_t257213610 ** get_address_of_l_0() { return &___l_0; }
	inline void set_l_0(List_1_t257213610 * value)
	{
		___l_0 = value;
		Il2CppCodeGenWriteBarrier((&___l_0), value);
	}

	inline static int32_t get_offset_of_next_1() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___next_1)); }
	inline int32_t get_next_1() const { return ___next_1; }
	inline int32_t* get_address_of_next_1() { return &___next_1; }
	inline void set_next_1(int32_t value)
	{
		___next_1 = value;
	}

	inline static int32_t get_offset_of_ver_2() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___ver_2)); }
	inline int32_t get_ver_2() const { return ___ver_2; }
	inline int32_t* get_address_of_ver_2() { return &___ver_2; }
	inline void set_ver_2(int32_t value)
	{
		___ver_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t2146457487, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((&___current_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENUMERATOR_T2146457487_H
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
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___1)); }
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
#endif // BINDINGFLAGS_T2721792723_H
#ifndef PAUSEMENUBUTTON_T2049395553_H
#define PAUSEMENUBUTTON_T2049395553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenuButton
struct  PauseMenuButton_t2049395553  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image PauseMenuButton::image
	Image_t2670269651 * ___image_0;
	// UnityEngine.Vector2 PauseMenuButton::shownPosition
	Vector2_t2156229523  ___shownPosition_1;
	// UnityEngine.Vector2 PauseMenuButton::hiddenPosition
	Vector2_t2156229523  ___hiddenPosition_2;
	// System.Single PauseMenuButton::normalScale
	float ___normalScale_3;
	// System.Single PauseMenuButton::poppedScale
	float ___poppedScale_4;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(PauseMenuButton_t2049395553, ___image_0)); }
	inline Image_t2670269651 * get_image_0() const { return ___image_0; }
	inline Image_t2670269651 ** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(Image_t2670269651 * value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((&___image_0), value);
	}

	inline static int32_t get_offset_of_shownPosition_1() { return static_cast<int32_t>(offsetof(PauseMenuButton_t2049395553, ___shownPosition_1)); }
	inline Vector2_t2156229523  get_shownPosition_1() const { return ___shownPosition_1; }
	inline Vector2_t2156229523 * get_address_of_shownPosition_1() { return &___shownPosition_1; }
	inline void set_shownPosition_1(Vector2_t2156229523  value)
	{
		___shownPosition_1 = value;
	}

	inline static int32_t get_offset_of_hiddenPosition_2() { return static_cast<int32_t>(offsetof(PauseMenuButton_t2049395553, ___hiddenPosition_2)); }
	inline Vector2_t2156229523  get_hiddenPosition_2() const { return ___hiddenPosition_2; }
	inline Vector2_t2156229523 * get_address_of_hiddenPosition_2() { return &___hiddenPosition_2; }
	inline void set_hiddenPosition_2(Vector2_t2156229523  value)
	{
		___hiddenPosition_2 = value;
	}

	inline static int32_t get_offset_of_normalScale_3() { return static_cast<int32_t>(offsetof(PauseMenuButton_t2049395553, ___normalScale_3)); }
	inline float get_normalScale_3() const { return ___normalScale_3; }
	inline float* get_address_of_normalScale_3() { return &___normalScale_3; }
	inline void set_normalScale_3(float value)
	{
		___normalScale_3 = value;
	}

	inline static int32_t get_offset_of_poppedScale_4() { return static_cast<int32_t>(offsetof(PauseMenuButton_t2049395553, ___poppedScale_4)); }
	inline float get_poppedScale_4() const { return ___poppedScale_4; }
	inline float* get_address_of_poppedScale_4() { return &___poppedScale_4; }
	inline void set_poppedScale_4(float value)
	{
		___poppedScale_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSEMENUBUTTON_T2049395553_H
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef EVENTTRIGGERTYPE_T55832929_H
#define EVENTTRIGGERTYPE_T55832929_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTriggerType
struct  EventTriggerType_t55832929 
{
public:
	// System.Int32 UnityEngine.EventSystems.EventTriggerType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(EventTriggerType_t55832929, ___value___1)); }
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
#endif // EVENTTRIGGERTYPE_T55832929_H
#ifndef U3CIMOVEBUTTONU3EC__ITERATOR2_T2280749436_H
#define U3CIMOVEBUTTONU3EC__ITERATOR2_T2280749436_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu/<IMoveButton>c__Iterator2
struct  U3CIMoveButtonU3Ec__Iterator2_t2280749436  : public RuntimeObject
{
public:
	// System.Single PauseMenu/<IMoveButton>c__Iterator2::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single PauseMenu/<IMoveButton>c__Iterator2::speed
	float ___speed_1;
	// PauseMenuButton PauseMenu/<IMoveButton>c__Iterator2::button
	PauseMenuButton_t2049395553 * ___button_2;
	// System.Boolean PauseMenu/<IMoveButton>c__Iterator2::show
	bool ___show_3;
	// UnityEngine.Vector2 PauseMenu/<IMoveButton>c__Iterator2::<pos>__1
	Vector2_t2156229523  ___U3CposU3E__1_4;
	// System.Single PauseMenu/<IMoveButton>c__Iterator2::<scale>__1
	float ___U3CscaleU3E__1_5;
	// UnityEngine.Color PauseMenu/<IMoveButton>c__Iterator2::<c>__1
	Color_t2555686324  ___U3CcU3E__1_6;
	// System.Object PauseMenu/<IMoveButton>c__Iterator2::$current
	RuntimeObject * ___U24current_7;
	// System.Boolean PauseMenu/<IMoveButton>c__Iterator2::$disposing
	bool ___U24disposing_8;
	// System.Int32 PauseMenu/<IMoveButton>c__Iterator2::$PC
	int32_t ___U24PC_9;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___button_2)); }
	inline PauseMenuButton_t2049395553 * get_button_2() const { return ___button_2; }
	inline PauseMenuButton_t2049395553 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(PauseMenuButton_t2049395553 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier((&___button_2), value);
	}

	inline static int32_t get_offset_of_show_3() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___show_3)); }
	inline bool get_show_3() const { return ___show_3; }
	inline bool* get_address_of_show_3() { return &___show_3; }
	inline void set_show_3(bool value)
	{
		___show_3 = value;
	}

	inline static int32_t get_offset_of_U3CposU3E__1_4() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___U3CposU3E__1_4)); }
	inline Vector2_t2156229523  get_U3CposU3E__1_4() const { return ___U3CposU3E__1_4; }
	inline Vector2_t2156229523 * get_address_of_U3CposU3E__1_4() { return &___U3CposU3E__1_4; }
	inline void set_U3CposU3E__1_4(Vector2_t2156229523  value)
	{
		___U3CposU3E__1_4 = value;
	}

	inline static int32_t get_offset_of_U3CscaleU3E__1_5() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___U3CscaleU3E__1_5)); }
	inline float get_U3CscaleU3E__1_5() const { return ___U3CscaleU3E__1_5; }
	inline float* get_address_of_U3CscaleU3E__1_5() { return &___U3CscaleU3E__1_5; }
	inline void set_U3CscaleU3E__1_5(float value)
	{
		___U3CscaleU3E__1_5 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E__1_6() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___U3CcU3E__1_6)); }
	inline Color_t2555686324  get_U3CcU3E__1_6() const { return ___U3CcU3E__1_6; }
	inline Color_t2555686324 * get_address_of_U3CcU3E__1_6() { return &___U3CcU3E__1_6; }
	inline void set_U3CcU3E__1_6(Color_t2555686324  value)
	{
		___U3CcU3E__1_6 = value;
	}

	inline static int32_t get_offset_of_U24current_7() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___U24current_7)); }
	inline RuntimeObject * get_U24current_7() const { return ___U24current_7; }
	inline RuntimeObject ** get_address_of_U24current_7() { return &___U24current_7; }
	inline void set_U24current_7(RuntimeObject * value)
	{
		___U24current_7 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_7), value);
	}

	inline static int32_t get_offset_of_U24disposing_8() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___U24disposing_8)); }
	inline bool get_U24disposing_8() const { return ___U24disposing_8; }
	inline bool* get_address_of_U24disposing_8() { return &___U24disposing_8; }
	inline void set_U24disposing_8(bool value)
	{
		___U24disposing_8 = value;
	}

	inline static int32_t get_offset_of_U24PC_9() { return static_cast<int32_t>(offsetof(U3CIMoveButtonU3Ec__Iterator2_t2280749436, ___U24PC_9)); }
	inline int32_t get_U24PC_9() const { return ___U24PC_9; }
	inline int32_t* get_address_of_U24PC_9() { return &___U24PC_9; }
	inline void set_U24PC_9(int32_t value)
	{
		___U24PC_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIMOVEBUTTONU3EC__ITERATOR2_T2280749436_H
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
#ifndef TRIGGEREVENT_T3867320123_H
#define TRIGGEREVENT_T3867320123_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger/TriggerEvent
struct  TriggerEvent_t3867320123  : public UnityEvent_1_t489719741
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRIGGEREVENT_T3867320123_H
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
#ifndef U3CIFADEBGU3EC__ITERATOR1_T4004556069_H
#define U3CIFADEBGU3EC__ITERATOR1_T4004556069_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu/<IFadeBG>c__Iterator1
struct  U3CIFadeBGU3Ec__Iterator1_t4004556069  : public RuntimeObject
{
public:
	// System.Single PauseMenu/<IFadeBG>c__Iterator1::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single PauseMenu/<IFadeBG>c__Iterator1::speed
	float ___speed_1;
	// UnityEngine.Color PauseMenu/<IFadeBG>c__Iterator1::<c>__1
	Color_t2555686324  ___U3CcU3E__1_2;
	// System.Single PauseMenu/<IFadeBG>c__Iterator1::alpha
	float ___alpha_3;
	// PauseMenu PauseMenu/<IFadeBG>c__Iterator1::$this
	PauseMenu_t3916167947 * ___U24this_4;
	// System.Object PauseMenu/<IFadeBG>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean PauseMenu/<IFadeBG>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 PauseMenu/<IFadeBG>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIFadeBGU3Ec__Iterator1_t4004556069, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIFadeBGU3Ec__Iterator1_t4004556069, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E__1_2() { return static_cast<int32_t>(offsetof(U3CIFadeBGU3Ec__Iterator1_t4004556069, ___U3CcU3E__1_2)); }
	inline Color_t2555686324  get_U3CcU3E__1_2() const { return ___U3CcU3E__1_2; }
	inline Color_t2555686324 * get_address_of_U3CcU3E__1_2() { return &___U3CcU3E__1_2; }
	inline void set_U3CcU3E__1_2(Color_t2555686324  value)
	{
		___U3CcU3E__1_2 = value;
	}

	inline static int32_t get_offset_of_alpha_3() { return static_cast<int32_t>(offsetof(U3CIFadeBGU3Ec__Iterator1_t4004556069, ___alpha_3)); }
	inline float get_alpha_3() const { return ___alpha_3; }
	inline float* get_address_of_alpha_3() { return &___alpha_3; }
	inline void set_alpha_3(float value)
	{
		___alpha_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CIFadeBGU3Ec__Iterator1_t4004556069, ___U24this_4)); }
	inline PauseMenu_t3916167947 * get_U24this_4() const { return ___U24this_4; }
	inline PauseMenu_t3916167947 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(PauseMenu_t3916167947 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CIFadeBGU3Ec__Iterator1_t4004556069, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CIFadeBGU3Ec__Iterator1_t4004556069, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CIFadeBGU3Ec__Iterator1_t4004556069, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIFADEBGU3EC__ITERATOR1_T4004556069_H
#ifndef ELEMENT_T769398275_H
#define ELEMENT_T769398275_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Element
struct  Element_t769398275  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Element::position
	Vector3_t3722313464  ___position_0;
	// UnityEngine.Vector3 Element::rotation
	Vector3_t3722313464  ___rotation_1;
	// UnityEngine.Vector3 Element::scale
	Vector3_t3722313464  ___scale_2;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Element_t769398275, ___position_0)); }
	inline Vector3_t3722313464  get_position_0() const { return ___position_0; }
	inline Vector3_t3722313464 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t3722313464  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Element_t769398275, ___rotation_1)); }
	inline Vector3_t3722313464  get_rotation_1() const { return ___rotation_1; }
	inline Vector3_t3722313464 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Vector3_t3722313464  value)
	{
		___rotation_1 = value;
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(Element_t769398275, ___scale_2)); }
	inline Vector3_t3722313464  get_scale_2() const { return ___scale_2; }
	inline Vector3_t3722313464 * get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(Vector3_t3722313464  value)
	{
		___scale_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ELEMENT_T769398275_H
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
#ifndef U3CIMOVERECTU3EC__ITERATOR1_T1700463851_H
#define U3CIMOVERECTU3EC__ITERATOR1_T1700463851_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndPanel/<IMoveRect>c__Iterator1
struct  U3CIMoveRectU3Ec__Iterator1_t1700463851  : public RuntimeObject
{
public:
	// System.Single EndPanel/<IMoveRect>c__Iterator1::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single EndPanel/<IMoveRect>c__Iterator1::speed
	float ___speed_1;
	// UnityEngine.RectTransform EndPanel/<IMoveRect>c__Iterator1::rect
	RectTransform_t3704657025 * ___rect_2;
	// UnityEngine.Vector2 EndPanel/<IMoveRect>c__Iterator1::destination
	Vector2_t2156229523  ___destination_3;
	// System.Object EndPanel/<IMoveRect>c__Iterator1::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean EndPanel/<IMoveRect>c__Iterator1::$disposing
	bool ___U24disposing_5;
	// System.Int32 EndPanel/<IMoveRect>c__Iterator1::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIMoveRectU3Ec__Iterator1_t1700463851, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIMoveRectU3Ec__Iterator1_t1700463851, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(U3CIMoveRectU3Ec__Iterator1_t1700463851, ___rect_2)); }
	inline RectTransform_t3704657025 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t3704657025 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t3704657025 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier((&___rect_2), value);
	}

	inline static int32_t get_offset_of_destination_3() { return static_cast<int32_t>(offsetof(U3CIMoveRectU3Ec__Iterator1_t1700463851, ___destination_3)); }
	inline Vector2_t2156229523  get_destination_3() const { return ___destination_3; }
	inline Vector2_t2156229523 * get_address_of_destination_3() { return &___destination_3; }
	inline void set_destination_3(Vector2_t2156229523  value)
	{
		___destination_3 = value;
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CIMoveRectU3Ec__Iterator1_t1700463851, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CIMoveRectU3Ec__Iterator1_t1700463851, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CIMoveRectU3Ec__Iterator1_t1700463851, ___U24PC_6)); }
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
#endif // U3CIMOVERECTU3EC__ITERATOR1_T1700463851_H
#ifndef U3CIFADEIMAGEU3EC__ITERATOR3_T2878897811_H
#define U3CIFADEIMAGEU3EC__ITERATOR3_T2878897811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndPanel/<IFadeImage>c__Iterator3
struct  U3CIFadeImageU3Ec__Iterator3_t2878897811  : public RuntimeObject
{
public:
	// System.Single EndPanel/<IFadeImage>c__Iterator3::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single EndPanel/<IFadeImage>c__Iterator3::speed
	float ___speed_1;
	// UnityEngine.UI.Image EndPanel/<IFadeImage>c__Iterator3::image
	Image_t2670269651 * ___image_2;
	// UnityEngine.Color EndPanel/<IFadeImage>c__Iterator3::<c>__1
	Color_t2555686324  ___U3CcU3E__1_3;
	// System.Single EndPanel/<IFadeImage>c__Iterator3::alpha
	float ___alpha_4;
	// System.Object EndPanel/<IFadeImage>c__Iterator3::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean EndPanel/<IFadeImage>c__Iterator3::$disposing
	bool ___U24disposing_6;
	// System.Int32 EndPanel/<IFadeImage>c__Iterator3::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2878897811, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2878897811, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2878897811, ___image_2)); }
	inline Image_t2670269651 * get_image_2() const { return ___image_2; }
	inline Image_t2670269651 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t2670269651 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier((&___image_2), value);
	}

	inline static int32_t get_offset_of_U3CcU3E__1_3() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2878897811, ___U3CcU3E__1_3)); }
	inline Color_t2555686324  get_U3CcU3E__1_3() const { return ___U3CcU3E__1_3; }
	inline Color_t2555686324 * get_address_of_U3CcU3E__1_3() { return &___U3CcU3E__1_3; }
	inline void set_U3CcU3E__1_3(Color_t2555686324  value)
	{
		___U3CcU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_alpha_4() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2878897811, ___alpha_4)); }
	inline float get_alpha_4() const { return ___alpha_4; }
	inline float* get_address_of_alpha_4() { return &___alpha_4; }
	inline void set_alpha_4(float value)
	{
		___alpha_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2878897811, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2878897811, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2878897811, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIFADEIMAGEU3EC__ITERATOR3_T2878897811_H
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
#ifndef U3CIANIMATECLOUDU3EC__ITERATOR0_T2877652068_H
#define U3CIANIMATECLOUDU3EC__ITERATOR0_T2877652068_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuClouds/<IAnimateCloud>c__Iterator0
struct  U3CIAnimateCloudU3Ec__Iterator0_t2877652068  : public RuntimeObject
{
public:
	// UnityEngine.UI.Image MenuClouds/<IAnimateCloud>c__Iterator0::cloud
	Image_t2670269651 * ___cloud_0;
	// UnityEngine.Vector2 MenuClouds/<IAnimateCloud>c__Iterator0::<pos>__1
	Vector2_t2156229523  ___U3CposU3E__1_1;
	// System.Single MenuClouds/<IAnimateCloud>c__Iterator0::xMin
	float ___xMin_2;
	// System.Single MenuClouds/<IAnimateCloud>c__Iterator0::xMax
	float ___xMax_3;
	// System.Single MenuClouds/<IAnimateCloud>c__Iterator0::yMin
	float ___yMin_4;
	// System.Single MenuClouds/<IAnimateCloud>c__Iterator0::yMax
	float ___yMax_5;
	// System.Single MenuClouds/<IAnimateCloud>c__Iterator0::<timer>__1
	float ___U3CtimerU3E__1_6;
	// System.Single MenuClouds/<IAnimateCloud>c__Iterator0::<speed>__1
	float ___U3CspeedU3E__1_7;
	// System.Single MenuClouds/<IAnimateCloud>c__Iterator0::<transparency>__1
	float ___U3CtransparencyU3E__1_8;
	// UnityEngine.Color MenuClouds/<IAnimateCloud>c__Iterator0::<c>__2
	Color_t2555686324  ___U3CcU3E__2_9;
	// System.Object MenuClouds/<IAnimateCloud>c__Iterator0::$current
	RuntimeObject * ___U24current_10;
	// System.Boolean MenuClouds/<IAnimateCloud>c__Iterator0::$disposing
	bool ___U24disposing_11;
	// System.Int32 MenuClouds/<IAnimateCloud>c__Iterator0::$PC
	int32_t ___U24PC_12;

public:
	inline static int32_t get_offset_of_cloud_0() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___cloud_0)); }
	inline Image_t2670269651 * get_cloud_0() const { return ___cloud_0; }
	inline Image_t2670269651 ** get_address_of_cloud_0() { return &___cloud_0; }
	inline void set_cloud_0(Image_t2670269651 * value)
	{
		___cloud_0 = value;
		Il2CppCodeGenWriteBarrier((&___cloud_0), value);
	}

	inline static int32_t get_offset_of_U3CposU3E__1_1() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___U3CposU3E__1_1)); }
	inline Vector2_t2156229523  get_U3CposU3E__1_1() const { return ___U3CposU3E__1_1; }
	inline Vector2_t2156229523 * get_address_of_U3CposU3E__1_1() { return &___U3CposU3E__1_1; }
	inline void set_U3CposU3E__1_1(Vector2_t2156229523  value)
	{
		___U3CposU3E__1_1 = value;
	}

	inline static int32_t get_offset_of_xMin_2() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___xMin_2)); }
	inline float get_xMin_2() const { return ___xMin_2; }
	inline float* get_address_of_xMin_2() { return &___xMin_2; }
	inline void set_xMin_2(float value)
	{
		___xMin_2 = value;
	}

	inline static int32_t get_offset_of_xMax_3() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___xMax_3)); }
	inline float get_xMax_3() const { return ___xMax_3; }
	inline float* get_address_of_xMax_3() { return &___xMax_3; }
	inline void set_xMax_3(float value)
	{
		___xMax_3 = value;
	}

	inline static int32_t get_offset_of_yMin_4() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___yMin_4)); }
	inline float get_yMin_4() const { return ___yMin_4; }
	inline float* get_address_of_yMin_4() { return &___yMin_4; }
	inline void set_yMin_4(float value)
	{
		___yMin_4 = value;
	}

	inline static int32_t get_offset_of_yMax_5() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___yMax_5)); }
	inline float get_yMax_5() const { return ___yMax_5; }
	inline float* get_address_of_yMax_5() { return &___yMax_5; }
	inline void set_yMax_5(float value)
	{
		___yMax_5 = value;
	}

	inline static int32_t get_offset_of_U3CtimerU3E__1_6() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___U3CtimerU3E__1_6)); }
	inline float get_U3CtimerU3E__1_6() const { return ___U3CtimerU3E__1_6; }
	inline float* get_address_of_U3CtimerU3E__1_6() { return &___U3CtimerU3E__1_6; }
	inline void set_U3CtimerU3E__1_6(float value)
	{
		___U3CtimerU3E__1_6 = value;
	}

	inline static int32_t get_offset_of_U3CspeedU3E__1_7() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___U3CspeedU3E__1_7)); }
	inline float get_U3CspeedU3E__1_7() const { return ___U3CspeedU3E__1_7; }
	inline float* get_address_of_U3CspeedU3E__1_7() { return &___U3CspeedU3E__1_7; }
	inline void set_U3CspeedU3E__1_7(float value)
	{
		___U3CspeedU3E__1_7 = value;
	}

	inline static int32_t get_offset_of_U3CtransparencyU3E__1_8() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___U3CtransparencyU3E__1_8)); }
	inline float get_U3CtransparencyU3E__1_8() const { return ___U3CtransparencyU3E__1_8; }
	inline float* get_address_of_U3CtransparencyU3E__1_8() { return &___U3CtransparencyU3E__1_8; }
	inline void set_U3CtransparencyU3E__1_8(float value)
	{
		___U3CtransparencyU3E__1_8 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E__2_9() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___U3CcU3E__2_9)); }
	inline Color_t2555686324  get_U3CcU3E__2_9() const { return ___U3CcU3E__2_9; }
	inline Color_t2555686324 * get_address_of_U3CcU3E__2_9() { return &___U3CcU3E__2_9; }
	inline void set_U3CcU3E__2_9(Color_t2555686324  value)
	{
		___U3CcU3E__2_9 = value;
	}

	inline static int32_t get_offset_of_U24current_10() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___U24current_10)); }
	inline RuntimeObject * get_U24current_10() const { return ___U24current_10; }
	inline RuntimeObject ** get_address_of_U24current_10() { return &___U24current_10; }
	inline void set_U24current_10(RuntimeObject * value)
	{
		___U24current_10 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_10), value);
	}

	inline static int32_t get_offset_of_U24disposing_11() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___U24disposing_11)); }
	inline bool get_U24disposing_11() const { return ___U24disposing_11; }
	inline bool* get_address_of_U24disposing_11() { return &___U24disposing_11; }
	inline void set_U24disposing_11(bool value)
	{
		___U24disposing_11 = value;
	}

	inline static int32_t get_offset_of_U24PC_12() { return static_cast<int32_t>(offsetof(U3CIAnimateCloudU3Ec__Iterator0_t2877652068, ___U24PC_12)); }
	inline int32_t get_U24PC_12() const { return ___U24PC_12; }
	inline int32_t* get_address_of_U24PC_12() { return &___U24PC_12; }
	inline void set_U24PC_12(int32_t value)
	{
		___U24PC_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIANIMATECLOUDU3EC__ITERATOR0_T2877652068_H
#ifndef U3CIFADERECTU3EC__ITERATOR1_T767004030_H
#define U3CIFADERECTU3EC__ITERATOR1_T767004030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameplayTransitions/<IFadeRect>c__Iterator1
struct  U3CIFadeRectU3Ec__Iterator1_t767004030  : public RuntimeObject
{
public:
	// System.Single GameplayTransitions/<IFadeRect>c__Iterator1::<lerp>__0
	float ___U3ClerpU3E__0_0;
	// System.Single GameplayTransitions/<IFadeRect>c__Iterator1::speed
	float ___speed_1;
	// UnityEngine.RectTransform GameplayTransitions/<IFadeRect>c__Iterator1::rect
	RectTransform_t3704657025 * ___rect_2;
	// UnityEngine.Vector2 GameplayTransitions/<IFadeRect>c__Iterator1::<sizeDelta>__1
	Vector2_t2156229523  ___U3CsizeDeltaU3E__1_3;
	// System.Single GameplayTransitions/<IFadeRect>c__Iterator1::height
	float ___height_4;
	// System.Object GameplayTransitions/<IFadeRect>c__Iterator1::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean GameplayTransitions/<IFadeRect>c__Iterator1::$disposing
	bool ___U24disposing_6;
	// System.Int32 GameplayTransitions/<IFadeRect>c__Iterator1::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3ClerpU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIFadeRectU3Ec__Iterator1_t767004030, ___U3ClerpU3E__0_0)); }
	inline float get_U3ClerpU3E__0_0() const { return ___U3ClerpU3E__0_0; }
	inline float* get_address_of_U3ClerpU3E__0_0() { return &___U3ClerpU3E__0_0; }
	inline void set_U3ClerpU3E__0_0(float value)
	{
		___U3ClerpU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIFadeRectU3Ec__Iterator1_t767004030, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_rect_2() { return static_cast<int32_t>(offsetof(U3CIFadeRectU3Ec__Iterator1_t767004030, ___rect_2)); }
	inline RectTransform_t3704657025 * get_rect_2() const { return ___rect_2; }
	inline RectTransform_t3704657025 ** get_address_of_rect_2() { return &___rect_2; }
	inline void set_rect_2(RectTransform_t3704657025 * value)
	{
		___rect_2 = value;
		Il2CppCodeGenWriteBarrier((&___rect_2), value);
	}

	inline static int32_t get_offset_of_U3CsizeDeltaU3E__1_3() { return static_cast<int32_t>(offsetof(U3CIFadeRectU3Ec__Iterator1_t767004030, ___U3CsizeDeltaU3E__1_3)); }
	inline Vector2_t2156229523  get_U3CsizeDeltaU3E__1_3() const { return ___U3CsizeDeltaU3E__1_3; }
	inline Vector2_t2156229523 * get_address_of_U3CsizeDeltaU3E__1_3() { return &___U3CsizeDeltaU3E__1_3; }
	inline void set_U3CsizeDeltaU3E__1_3(Vector2_t2156229523  value)
	{
		___U3CsizeDeltaU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(U3CIFadeRectU3Ec__Iterator1_t767004030, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CIFadeRectU3Ec__Iterator1_t767004030, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CIFadeRectU3Ec__Iterator1_t767004030, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CIFadeRectU3Ec__Iterator1_t767004030, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIFADERECTU3EC__ITERATOR1_T767004030_H
#ifndef U3CISHOWBUBBLEU3EC__ITERATOR0_T2610264614_H
#define U3CISHOWBUBBLEU3EC__ITERATOR0_T2610264614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpBubble/<IShowBubble>c__Iterator0
struct  U3CIShowBubbleU3Ec__Iterator0_t2610264614  : public RuntimeObject
{
public:
	// System.Boolean HelpBubble/<IShowBubble>c__Iterator0::show
	bool ___show_0;
	// System.Single HelpBubble/<IShowBubble>c__Iterator0::<lerp>__0
	float ___U3ClerpU3E__0_1;
	// System.Single HelpBubble/<IShowBubble>c__Iterator0::speed
	float ___speed_2;
	// UnityEngine.Color HelpBubble/<IShowBubble>c__Iterator0::<c>__1
	Color_t2555686324  ___U3CcU3E__1_3;
	// HelpBubble HelpBubble/<IShowBubble>c__Iterator0::$this
	HelpBubble_t570266065 * ___U24this_4;
	// System.Object HelpBubble/<IShowBubble>c__Iterator0::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean HelpBubble/<IShowBubble>c__Iterator0::$disposing
	bool ___U24disposing_6;
	// System.Int32 HelpBubble/<IShowBubble>c__Iterator0::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_show_0() { return static_cast<int32_t>(offsetof(U3CIShowBubbleU3Ec__Iterator0_t2610264614, ___show_0)); }
	inline bool get_show_0() const { return ___show_0; }
	inline bool* get_address_of_show_0() { return &___show_0; }
	inline void set_show_0(bool value)
	{
		___show_0 = value;
	}

	inline static int32_t get_offset_of_U3ClerpU3E__0_1() { return static_cast<int32_t>(offsetof(U3CIShowBubbleU3Ec__Iterator0_t2610264614, ___U3ClerpU3E__0_1)); }
	inline float get_U3ClerpU3E__0_1() const { return ___U3ClerpU3E__0_1; }
	inline float* get_address_of_U3ClerpU3E__0_1() { return &___U3ClerpU3E__0_1; }
	inline void set_U3ClerpU3E__0_1(float value)
	{
		___U3ClerpU3E__0_1 = value;
	}

	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(U3CIShowBubbleU3Ec__Iterator0_t2610264614, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_U3CcU3E__1_3() { return static_cast<int32_t>(offsetof(U3CIShowBubbleU3Ec__Iterator0_t2610264614, ___U3CcU3E__1_3)); }
	inline Color_t2555686324  get_U3CcU3E__1_3() const { return ___U3CcU3E__1_3; }
	inline Color_t2555686324 * get_address_of_U3CcU3E__1_3() { return &___U3CcU3E__1_3; }
	inline void set_U3CcU3E__1_3(Color_t2555686324  value)
	{
		___U3CcU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_U24this_4() { return static_cast<int32_t>(offsetof(U3CIShowBubbleU3Ec__Iterator0_t2610264614, ___U24this_4)); }
	inline HelpBubble_t570266065 * get_U24this_4() const { return ___U24this_4; }
	inline HelpBubble_t570266065 ** get_address_of_U24this_4() { return &___U24this_4; }
	inline void set_U24this_4(HelpBubble_t570266065 * value)
	{
		___U24this_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_4), value);
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CIShowBubbleU3Ec__Iterator0_t2610264614, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CIShowBubbleU3Ec__Iterator0_t2610264614, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CIShowBubbleU3Ec__Iterator0_t2610264614, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CISHOWBUBBLEU3EC__ITERATOR0_T2610264614_H
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
	// System.Single MenuFlowManager/<IFadeImage>c__Iterator3::<timer>__0
	float ___U3CtimerU3E__0_0;
	// System.Single MenuFlowManager/<IFadeImage>c__Iterator3::speed
	float ___speed_1;
	// UnityEngine.UI.Image MenuFlowManager/<IFadeImage>c__Iterator3::image
	Image_t2670269651 * ___image_2;
	// UnityEngine.Vector2 MenuFlowManager/<IFadeImage>c__Iterator3::<rect>__1
	Vector2_t2156229523  ___U3CrectU3E__1_3;
	// System.Single MenuFlowManager/<IFadeImage>c__Iterator3::height
	float ___height_4;
	// System.Object MenuFlowManager/<IFadeImage>c__Iterator3::$current
	RuntimeObject * ___U24current_5;
	// System.Boolean MenuFlowManager/<IFadeImage>c__Iterator3::$disposing
	bool ___U24disposing_6;
	// System.Int32 MenuFlowManager/<IFadeImage>c__Iterator3::$PC
	int32_t ___U24PC_7;

public:
	inline static int32_t get_offset_of_U3CtimerU3E__0_0() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U3CtimerU3E__0_0)); }
	inline float get_U3CtimerU3E__0_0() const { return ___U3CtimerU3E__0_0; }
	inline float* get_address_of_U3CtimerU3E__0_0() { return &___U3CtimerU3E__0_0; }
	inline void set_U3CtimerU3E__0_0(float value)
	{
		___U3CtimerU3E__0_0 = value;
	}

	inline static int32_t get_offset_of_speed_1() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___speed_1)); }
	inline float get_speed_1() const { return ___speed_1; }
	inline float* get_address_of_speed_1() { return &___speed_1; }
	inline void set_speed_1(float value)
	{
		___speed_1 = value;
	}

	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___image_2)); }
	inline Image_t2670269651 * get_image_2() const { return ___image_2; }
	inline Image_t2670269651 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(Image_t2670269651 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier((&___image_2), value);
	}

	inline static int32_t get_offset_of_U3CrectU3E__1_3() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U3CrectU3E__1_3)); }
	inline Vector2_t2156229523  get_U3CrectU3E__1_3() const { return ___U3CrectU3E__1_3; }
	inline Vector2_t2156229523 * get_address_of_U3CrectU3E__1_3() { return &___U3CrectU3E__1_3; }
	inline void set_U3CrectU3E__1_3(Vector2_t2156229523  value)
	{
		___U3CrectU3E__1_3 = value;
	}

	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_U24current_5() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U24current_5)); }
	inline RuntimeObject * get_U24current_5() const { return ___U24current_5; }
	inline RuntimeObject ** get_address_of_U24current_5() { return &___U24current_5; }
	inline void set_U24current_5(RuntimeObject * value)
	{
		___U24current_5 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_5), value);
	}

	inline static int32_t get_offset_of_U24disposing_6() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U24disposing_6)); }
	inline bool get_U24disposing_6() const { return ___U24disposing_6; }
	inline bool* get_address_of_U24disposing_6() { return &___U24disposing_6; }
	inline void set_U24disposing_6(bool value)
	{
		___U24disposing_6 = value;
	}

	inline static int32_t get_offset_of_U24PC_7() { return static_cast<int32_t>(offsetof(U3CIFadeImageU3Ec__Iterator3_t2325737738, ___U24PC_7)); }
	inline int32_t get_U24PC_7() const { return ___U24PC_7; }
	inline int32_t* get_address_of_U24PC_7() { return &___U24PC_7; }
	inline void set_U24PC_7(int32_t value)
	{
		___U24PC_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIFADEIMAGEU3EC__ITERATOR3_T2325737738_H
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
#ifndef AUDIOSFX_T3924884152_H
#define AUDIOSFX_T3924884152_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioSFX
struct  AudioSFX_t3924884152 
{
public:
	// System.Int32 AudioSFX::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AudioSFX_t3924884152, ___value___1)); }
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
#endif // AUDIOSFX_T3924884152_H
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
#ifndef STAGE_T1845040247_H
#define STAGE_T1845040247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Stage
struct  Stage_t1845040247  : public RuntimeObject
{
public:
	// System.String Stage::name
	String_t* ___name_0;
	// UnityEngine.Vector3 Stage::horizonLineHit
	Vector3_t3722313464  ___horizonLineHit_1;
	// System.Collections.Generic.List`1<Point> Stage::pfs
	List_1_t2510128191 * ___pfs_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(Stage_t1845040247, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_horizonLineHit_1() { return static_cast<int32_t>(offsetof(Stage_t1845040247, ___horizonLineHit_1)); }
	inline Vector3_t3722313464  get_horizonLineHit_1() const { return ___horizonLineHit_1; }
	inline Vector3_t3722313464 * get_address_of_horizonLineHit_1() { return &___horizonLineHit_1; }
	inline void set_horizonLineHit_1(Vector3_t3722313464  value)
	{
		___horizonLineHit_1 = value;
	}

	inline static int32_t get_offset_of_pfs_2() { return static_cast<int32_t>(offsetof(Stage_t1845040247, ___pfs_2)); }
	inline List_1_t2510128191 * get_pfs_2() const { return ___pfs_2; }
	inline List_1_t2510128191 ** get_address_of_pfs_2() { return &___pfs_2; }
	inline void set_pfs_2(List_1_t2510128191 * value)
	{
		___pfs_2 = value;
		Il2CppCodeGenWriteBarrier((&___pfs_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STAGE_T1845040247_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
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
	// MenuFlowManager MenuFlowManager/<IMoveTitle>c__Iterator4::$this
	MenuFlowManager_t1614880941 * ___U24this_12;
	// System.Object MenuFlowManager/<IMoveTitle>c__Iterator4::$current
	RuntimeObject * ___U24current_13;
	// System.Boolean MenuFlowManager/<IMoveTitle>c__Iterator4::$disposing
	bool ___U24disposing_14;
	// System.Int32 MenuFlowManager/<IMoveTitle>c__Iterator4::$PC
	int32_t ___U24PC_15;

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

	inline static int32_t get_offset_of_U24this_12() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U24this_12)); }
	inline MenuFlowManager_t1614880941 * get_U24this_12() const { return ___U24this_12; }
	inline MenuFlowManager_t1614880941 ** get_address_of_U24this_12() { return &___U24this_12; }
	inline void set_U24this_12(MenuFlowManager_t1614880941 * value)
	{
		___U24this_12 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_12), value);
	}

	inline static int32_t get_offset_of_U24current_13() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U24current_13)); }
	inline RuntimeObject * get_U24current_13() const { return ___U24current_13; }
	inline RuntimeObject ** get_address_of_U24current_13() { return &___U24current_13; }
	inline void set_U24current_13(RuntimeObject * value)
	{
		___U24current_13 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_13), value);
	}

	inline static int32_t get_offset_of_U24disposing_14() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U24disposing_14)); }
	inline bool get_U24disposing_14() const { return ___U24disposing_14; }
	inline bool* get_address_of_U24disposing_14() { return &___U24disposing_14; }
	inline void set_U24disposing_14(bool value)
	{
		___U24disposing_14 = value;
	}

	inline static int32_t get_offset_of_U24PC_15() { return static_cast<int32_t>(offsetof(U3CIMoveTitleU3Ec__Iterator4_t1546248483, ___U24PC_15)); }
	inline int32_t get_U24PC_15() const { return ___U24PC_15; }
	inline int32_t* get_address_of_U24PC_15() { return &___U24PC_15; }
	inline void set_U24PC_15(int32_t value)
	{
		___U24PC_15 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CIMOVETITLEU3EC__ITERATOR4_T1546248483_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_1;

public:
	inline static int32_t get_offset_of__impl_1() { return static_cast<int32_t>(offsetof(Type_t, ____impl_1)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_1() const { return ____impl_1; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_1() { return &____impl_1; }
	inline void set__impl_1(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_1 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_2;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_6;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_7;

public:
	inline static int32_t get_offset_of_Delimiter_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_2)); }
	inline Il2CppChar get_Delimiter_2() const { return ___Delimiter_2; }
	inline Il2CppChar* get_address_of_Delimiter_2() { return &___Delimiter_2; }
	inline void set_Delimiter_2(Il2CppChar value)
	{
		___Delimiter_2 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_3)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_3() const { return ___EmptyTypes_3; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_3() { return &___EmptyTypes_3; }
	inline void set_EmptyTypes_3(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_3 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_3), value);
	}

	inline static int32_t get_offset_of_FilterAttribute_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_4)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_4() const { return ___FilterAttribute_4; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_4() { return &___FilterAttribute_4; }
	inline void set_FilterAttribute_4(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_4 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_4), value);
	}

	inline static int32_t get_offset_of_FilterName_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_5)); }
	inline MemberFilter_t426314064 * get_FilterName_5() const { return ___FilterName_5; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_5() { return &___FilterName_5; }
	inline void set_FilterName_5(MemberFilter_t426314064 * value)
	{
		___FilterName_5 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_5), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_6)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_6() const { return ___FilterNameIgnoreCase_6; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_6() { return &___FilterNameIgnoreCase_6; }
	inline void set_FilterNameIgnoreCase_6(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_6 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_6), value);
	}

	inline static int32_t get_offset_of_Missing_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_7)); }
	inline RuntimeObject * get_Missing_7() const { return ___Missing_7; }
	inline RuntimeObject ** get_address_of_Missing_7() { return &___Missing_7; }
	inline void set_Missing_7(RuntimeObject * value)
	{
		___Missing_7 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
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
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___prev_9)); }
	inline MulticastDelegate_t * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___kpm_next_10)); }
	inline MulticastDelegate_t * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T_H
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
#ifndef TEXTASSET_T3022178571_H
#define TEXTASSET_T3022178571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextAsset
struct  TextAsset_t3022178571  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTASSET_T3022178571_H
#ifndef ENTRY_T3344766165_H
#define ENTRY_T3344766165_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger/Entry
struct  Entry_t3344766165  : public RuntimeObject
{
public:
	// UnityEngine.EventSystems.EventTriggerType UnityEngine.EventSystems.EventTrigger/Entry::eventID
	int32_t ___eventID_0;
	// UnityEngine.EventSystems.EventTrigger/TriggerEvent UnityEngine.EventSystems.EventTrigger/Entry::callback
	TriggerEvent_t3867320123 * ___callback_1;

public:
	inline static int32_t get_offset_of_eventID_0() { return static_cast<int32_t>(offsetof(Entry_t3344766165, ___eventID_0)); }
	inline int32_t get_eventID_0() const { return ___eventID_0; }
	inline int32_t* get_address_of_eventID_0() { return &___eventID_0; }
	inline void set_eventID_0(int32_t value)
	{
		___eventID_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(Entry_t3344766165, ___callback_1)); }
	inline TriggerEvent_t3867320123 * get_callback_1() const { return ___callback_1; }
	inline TriggerEvent_t3867320123 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(TriggerEvent_t3867320123 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((&___callback_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENTRY_T3344766165_H
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
#ifndef UNITYACTION_1_T192896378_H
#define UNITYACTION_1_T192896378_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct  UnityAction_1_t192896378  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_1_T192896378_H
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
#ifndef PAUSEMENU_T3916167947_H
#define PAUSEMENU_T3916167947_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PauseMenu
struct  PauseMenu_t3916167947  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PauseMenu::pausePanel
	GameObject_t1113636619 * ___pausePanel_2;
	// UnityEngine.UI.Image PauseMenu::background
	Image_t2670269651 * ___background_3;
	// PauseMenuButton[] PauseMenu::menuButtons
	PauseMenuButtonU5BU5D_t2517294588* ___menuButtons_4;

public:
	inline static int32_t get_offset_of_pausePanel_2() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___pausePanel_2)); }
	inline GameObject_t1113636619 * get_pausePanel_2() const { return ___pausePanel_2; }
	inline GameObject_t1113636619 ** get_address_of_pausePanel_2() { return &___pausePanel_2; }
	inline void set_pausePanel_2(GameObject_t1113636619 * value)
	{
		___pausePanel_2 = value;
		Il2CppCodeGenWriteBarrier((&___pausePanel_2), value);
	}

	inline static int32_t get_offset_of_background_3() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___background_3)); }
	inline Image_t2670269651 * get_background_3() const { return ___background_3; }
	inline Image_t2670269651 ** get_address_of_background_3() { return &___background_3; }
	inline void set_background_3(Image_t2670269651 * value)
	{
		___background_3 = value;
		Il2CppCodeGenWriteBarrier((&___background_3), value);
	}

	inline static int32_t get_offset_of_menuButtons_4() { return static_cast<int32_t>(offsetof(PauseMenu_t3916167947, ___menuButtons_4)); }
	inline PauseMenuButtonU5BU5D_t2517294588* get_menuButtons_4() const { return ___menuButtons_4; }
	inline PauseMenuButtonU5BU5D_t2517294588** get_address_of_menuButtons_4() { return &___menuButtons_4; }
	inline void set_menuButtons_4(PauseMenuButtonU5BU5D_t2517294588* value)
	{
		___menuButtons_4 = value;
		Il2CppCodeGenWriteBarrier((&___menuButtons_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PAUSEMENU_T3916167947_H
#ifndef EDITORMANAGER_T888126012_H
#define EDITORMANAGER_T888126012_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EditorManager
struct  EditorManager_t888126012  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.SpriteRenderer EditorManager::image
	SpriteRenderer_t3235626157 * ___image_2;
	// UnityEngine.Transform EditorManager::horizontalLineHit
	Transform_t3600365921 * ___horizontalLineHit_3;
	// PF[] EditorManager::PFs
	PFU5BU5D_t3604245151* ___PFs_4;
	// Stage EditorManager::stage
	Stage_t1845040247 * ___stage_5;
	// System.String EditorManager::helpMessage
	String_t* ___helpMessage_6;

public:
	inline static int32_t get_offset_of_image_2() { return static_cast<int32_t>(offsetof(EditorManager_t888126012, ___image_2)); }
	inline SpriteRenderer_t3235626157 * get_image_2() const { return ___image_2; }
	inline SpriteRenderer_t3235626157 ** get_address_of_image_2() { return &___image_2; }
	inline void set_image_2(SpriteRenderer_t3235626157 * value)
	{
		___image_2 = value;
		Il2CppCodeGenWriteBarrier((&___image_2), value);
	}

	inline static int32_t get_offset_of_horizontalLineHit_3() { return static_cast<int32_t>(offsetof(EditorManager_t888126012, ___horizontalLineHit_3)); }
	inline Transform_t3600365921 * get_horizontalLineHit_3() const { return ___horizontalLineHit_3; }
	inline Transform_t3600365921 ** get_address_of_horizontalLineHit_3() { return &___horizontalLineHit_3; }
	inline void set_horizontalLineHit_3(Transform_t3600365921 * value)
	{
		___horizontalLineHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___horizontalLineHit_3), value);
	}

	inline static int32_t get_offset_of_PFs_4() { return static_cast<int32_t>(offsetof(EditorManager_t888126012, ___PFs_4)); }
	inline PFU5BU5D_t3604245151* get_PFs_4() const { return ___PFs_4; }
	inline PFU5BU5D_t3604245151** get_address_of_PFs_4() { return &___PFs_4; }
	inline void set_PFs_4(PFU5BU5D_t3604245151* value)
	{
		___PFs_4 = value;
		Il2CppCodeGenWriteBarrier((&___PFs_4), value);
	}

	inline static int32_t get_offset_of_stage_5() { return static_cast<int32_t>(offsetof(EditorManager_t888126012, ___stage_5)); }
	inline Stage_t1845040247 * get_stage_5() const { return ___stage_5; }
	inline Stage_t1845040247 ** get_address_of_stage_5() { return &___stage_5; }
	inline void set_stage_5(Stage_t1845040247 * value)
	{
		___stage_5 = value;
		Il2CppCodeGenWriteBarrier((&___stage_5), value);
	}

	inline static int32_t get_offset_of_helpMessage_6() { return static_cast<int32_t>(offsetof(EditorManager_t888126012, ___helpMessage_6)); }
	inline String_t* get_helpMessage_6() const { return ___helpMessage_6; }
	inline String_t** get_address_of_helpMessage_6() { return &___helpMessage_6; }
	inline void set_helpMessage_6(String_t* value)
	{
		___helpMessage_6 = value;
		Il2CppCodeGenWriteBarrier((&___helpMessage_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EDITORMANAGER_T888126012_H
#ifndef MENUCLOUDS_T4198924910_H
#define MENUCLOUDS_T4198924910_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MenuClouds
struct  MenuClouds_t4198924910  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Image[] MenuClouds::clouds
	ImageU5BU5D_t2439009922* ___clouds_2;

public:
	inline static int32_t get_offset_of_clouds_2() { return static_cast<int32_t>(offsetof(MenuClouds_t4198924910, ___clouds_2)); }
	inline ImageU5BU5D_t2439009922* get_clouds_2() const { return ___clouds_2; }
	inline ImageU5BU5D_t2439009922** get_address_of_clouds_2() { return &___clouds_2; }
	inline void set_clouds_2(ImageU5BU5D_t2439009922* value)
	{
		___clouds_2 = value;
		Il2CppCodeGenWriteBarrier((&___clouds_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUCLOUDS_T4198924910_H
#ifndef OPTION_T3411289914_H
#define OPTION_T3411289914_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Option
struct  Option_t3411289914  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform Option::line1
	RectTransform_t3704657025 * ___line1_2;
	// UnityEngine.RectTransform Option::line2
	RectTransform_t3704657025 * ___line2_3;

public:
	inline static int32_t get_offset_of_line1_2() { return static_cast<int32_t>(offsetof(Option_t3411289914, ___line1_2)); }
	inline RectTransform_t3704657025 * get_line1_2() const { return ___line1_2; }
	inline RectTransform_t3704657025 ** get_address_of_line1_2() { return &___line1_2; }
	inline void set_line1_2(RectTransform_t3704657025 * value)
	{
		___line1_2 = value;
		Il2CppCodeGenWriteBarrier((&___line1_2), value);
	}

	inline static int32_t get_offset_of_line2_3() { return static_cast<int32_t>(offsetof(Option_t3411289914, ___line2_3)); }
	inline RectTransform_t3704657025 * get_line2_3() const { return ___line2_3; }
	inline RectTransform_t3704657025 ** get_address_of_line2_3() { return &___line2_3; }
	inline void set_line2_3(RectTransform_t3704657025 * value)
	{
		___line2_3 = value;
		Il2CppCodeGenWriteBarrier((&___line2_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OPTION_T3411289914_H
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
#ifndef AUDIOPLAYER_T2934167794_H
#define AUDIOPLAYER_T2934167794_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioPlayer
struct  AudioPlayer_t2934167794  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.AudioSource AudioPlayer::aSrc
	AudioSource_t3935305588 * ___aSrc_3;
	// UnityEngine.AudioClip[] AudioPlayer::audioClips
	AudioClipU5BU5D_t143221404* ___audioClips_4;

public:
	inline static int32_t get_offset_of_aSrc_3() { return static_cast<int32_t>(offsetof(AudioPlayer_t2934167794, ___aSrc_3)); }
	inline AudioSource_t3935305588 * get_aSrc_3() const { return ___aSrc_3; }
	inline AudioSource_t3935305588 ** get_address_of_aSrc_3() { return &___aSrc_3; }
	inline void set_aSrc_3(AudioSource_t3935305588 * value)
	{
		___aSrc_3 = value;
		Il2CppCodeGenWriteBarrier((&___aSrc_3), value);
	}

	inline static int32_t get_offset_of_audioClips_4() { return static_cast<int32_t>(offsetof(AudioPlayer_t2934167794, ___audioClips_4)); }
	inline AudioClipU5BU5D_t143221404* get_audioClips_4() const { return ___audioClips_4; }
	inline AudioClipU5BU5D_t143221404** get_address_of_audioClips_4() { return &___audioClips_4; }
	inline void set_audioClips_4(AudioClipU5BU5D_t143221404* value)
	{
		___audioClips_4 = value;
		Il2CppCodeGenWriteBarrier((&___audioClips_4), value);
	}
};

struct AudioPlayer_t2934167794_StaticFields
{
public:
	// AudioPlayer AudioPlayer::instance
	AudioPlayer_t2934167794 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(AudioPlayer_t2934167794_StaticFields, ___instance_2)); }
	inline AudioPlayer_t2934167794 * get_instance_2() const { return ___instance_2; }
	inline AudioPlayer_t2934167794 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(AudioPlayer_t2934167794 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier((&___instance_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AUDIOPLAYER_T2934167794_H
#ifndef EVENTTRIGGER_T1076084509_H
#define EVENTTRIGGER_T1076084509_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.EventSystems.EventTrigger
struct  EventTrigger_t1076084509  : public MonoBehaviour_t3962482529
{
public:
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::m_Delegates
	List_1_t521873611 * ___m_Delegates_2;
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::delegates
	List_1_t521873611 * ___delegates_3;

public:
	inline static int32_t get_offset_of_m_Delegates_2() { return static_cast<int32_t>(offsetof(EventTrigger_t1076084509, ___m_Delegates_2)); }
	inline List_1_t521873611 * get_m_Delegates_2() const { return ___m_Delegates_2; }
	inline List_1_t521873611 ** get_address_of_m_Delegates_2() { return &___m_Delegates_2; }
	inline void set_m_Delegates_2(List_1_t521873611 * value)
	{
		___m_Delegates_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Delegates_2), value);
	}

	inline static int32_t get_offset_of_delegates_3() { return static_cast<int32_t>(offsetof(EventTrigger_t1076084509, ___delegates_3)); }
	inline List_1_t521873611 * get_delegates_3() const { return ___delegates_3; }
	inline List_1_t521873611 ** get_address_of_delegates_3() { return &___delegates_3; }
	inline void set_delegates_3(List_1_t521873611 * value)
	{
		___delegates_3 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTTRIGGER_T1076084509_H
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
#ifndef OBJECTBUILDERSCRIPT_T920771485_H
#define OBJECTBUILDERSCRIPT_T920771485_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectBuilderScript
struct  ObjectBuilderScript_t920771485  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ObjectBuilderScript::obj
	GameObject_t1113636619 * ___obj_2;
	// UnityEngine.Vector3 ObjectBuilderScript::spawnPoint
	Vector3_t3722313464  ___spawnPoint_3;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(ObjectBuilderScript_t920771485, ___obj_2)); }
	inline GameObject_t1113636619 * get_obj_2() const { return ___obj_2; }
	inline GameObject_t1113636619 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObject_t1113636619 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_2), value);
	}

	inline static int32_t get_offset_of_spawnPoint_3() { return static_cast<int32_t>(offsetof(ObjectBuilderScript_t920771485, ___spawnPoint_3)); }
	inline Vector3_t3722313464  get_spawnPoint_3() const { return ___spawnPoint_3; }
	inline Vector3_t3722313464 * get_address_of_spawnPoint_3() { return &___spawnPoint_3; }
	inline void set_spawnPoint_3(Vector3_t3722313464  value)
	{
		___spawnPoint_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTBUILDERSCRIPT_T920771485_H
#ifndef HELPBUBBLE_T570266065_H
#define HELPBUBBLE_T570266065_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HelpBubble
struct  HelpBubble_t570266065  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.UI.Text HelpBubble::bubbleText
	Text_t1901882714 * ___bubbleText_2;
	// UnityEngine.UI.Image HelpBubble::bubbleImage
	Image_t2670269651 * ___bubbleImage_3;
	// System.Boolean HelpBubble::shown
	bool ___shown_4;

public:
	inline static int32_t get_offset_of_bubbleText_2() { return static_cast<int32_t>(offsetof(HelpBubble_t570266065, ___bubbleText_2)); }
	inline Text_t1901882714 * get_bubbleText_2() const { return ___bubbleText_2; }
	inline Text_t1901882714 ** get_address_of_bubbleText_2() { return &___bubbleText_2; }
	inline void set_bubbleText_2(Text_t1901882714 * value)
	{
		___bubbleText_2 = value;
		Il2CppCodeGenWriteBarrier((&___bubbleText_2), value);
	}

	inline static int32_t get_offset_of_bubbleImage_3() { return static_cast<int32_t>(offsetof(HelpBubble_t570266065, ___bubbleImage_3)); }
	inline Image_t2670269651 * get_bubbleImage_3() const { return ___bubbleImage_3; }
	inline Image_t2670269651 ** get_address_of_bubbleImage_3() { return &___bubbleImage_3; }
	inline void set_bubbleImage_3(Image_t2670269651 * value)
	{
		___bubbleImage_3 = value;
		Il2CppCodeGenWriteBarrier((&___bubbleImage_3), value);
	}

	inline static int32_t get_offset_of_shown_4() { return static_cast<int32_t>(offsetof(HelpBubble_t570266065, ___shown_4)); }
	inline bool get_shown_4() const { return ___shown_4; }
	inline bool* get_address_of_shown_4() { return &___shown_4; }
	inline void set_shown_4(bool value)
	{
		___shown_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HELPBUBBLE_T570266065_H
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
	// PF StageManager::PFPrefab
	PF_t166272826 * ___PFPrefab_26;
	// System.Collections.Generic.List`1<PF> StageManager::PFs
	List_1_t1638347568 * ___PFs_27;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> StageManager::initialPFsPosition
	List_1_t899420910 * ___initialPFsPosition_28;
	// PF StageManager::PF
	PF_t166272826 * ___PF_29;
	// System.Boolean StageManager::PFSelected
	bool ___PFSelected_30;
	// UnityEngine.Vector3 StageManager::InitialPF
	Vector3_t3722313464  ___InitialPF_31;
	// UnityEngine.Vector3 StageManager::InitialPF1
	Vector3_t3722313464  ___InitialPF1_32;
	// UnityEngine.Vector3 StageManager::InitialPF2
	Vector3_t3722313464  ___InitialPF2_33;
	// UnityEngine.GameObject StageManager::PF1Indicator
	GameObject_t1113636619 * ___PF1Indicator_34;
	// UnityEngine.GameObject StageManager::PF2Indicator
	GameObject_t1113636619 * ___PF2Indicator_35;
	// UnityEngine.GameObject StageManager::PFIndicator
	GameObject_t1113636619 * ___PFIndicator_36;
	// Stage StageManager::stage
	Stage_t1845040247 * ___stage_37;

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

	inline static int32_t get_offset_of_PFPrefab_26() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PFPrefab_26)); }
	inline PF_t166272826 * get_PFPrefab_26() const { return ___PFPrefab_26; }
	inline PF_t166272826 ** get_address_of_PFPrefab_26() { return &___PFPrefab_26; }
	inline void set_PFPrefab_26(PF_t166272826 * value)
	{
		___PFPrefab_26 = value;
		Il2CppCodeGenWriteBarrier((&___PFPrefab_26), value);
	}

	inline static int32_t get_offset_of_PFs_27() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PFs_27)); }
	inline List_1_t1638347568 * get_PFs_27() const { return ___PFs_27; }
	inline List_1_t1638347568 ** get_address_of_PFs_27() { return &___PFs_27; }
	inline void set_PFs_27(List_1_t1638347568 * value)
	{
		___PFs_27 = value;
		Il2CppCodeGenWriteBarrier((&___PFs_27), value);
	}

	inline static int32_t get_offset_of_initialPFsPosition_28() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___initialPFsPosition_28)); }
	inline List_1_t899420910 * get_initialPFsPosition_28() const { return ___initialPFsPosition_28; }
	inline List_1_t899420910 ** get_address_of_initialPFsPosition_28() { return &___initialPFsPosition_28; }
	inline void set_initialPFsPosition_28(List_1_t899420910 * value)
	{
		___initialPFsPosition_28 = value;
		Il2CppCodeGenWriteBarrier((&___initialPFsPosition_28), value);
	}

	inline static int32_t get_offset_of_PF_29() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF_29)); }
	inline PF_t166272826 * get_PF_29() const { return ___PF_29; }
	inline PF_t166272826 ** get_address_of_PF_29() { return &___PF_29; }
	inline void set_PF_29(PF_t166272826 * value)
	{
		___PF_29 = value;
		Il2CppCodeGenWriteBarrier((&___PF_29), value);
	}

	inline static int32_t get_offset_of_PFSelected_30() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PFSelected_30)); }
	inline bool get_PFSelected_30() const { return ___PFSelected_30; }
	inline bool* get_address_of_PFSelected_30() { return &___PFSelected_30; }
	inline void set_PFSelected_30(bool value)
	{
		___PFSelected_30 = value;
	}

	inline static int32_t get_offset_of_InitialPF_31() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___InitialPF_31)); }
	inline Vector3_t3722313464  get_InitialPF_31() const { return ___InitialPF_31; }
	inline Vector3_t3722313464 * get_address_of_InitialPF_31() { return &___InitialPF_31; }
	inline void set_InitialPF_31(Vector3_t3722313464  value)
	{
		___InitialPF_31 = value;
	}

	inline static int32_t get_offset_of_InitialPF1_32() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___InitialPF1_32)); }
	inline Vector3_t3722313464  get_InitialPF1_32() const { return ___InitialPF1_32; }
	inline Vector3_t3722313464 * get_address_of_InitialPF1_32() { return &___InitialPF1_32; }
	inline void set_InitialPF1_32(Vector3_t3722313464  value)
	{
		___InitialPF1_32 = value;
	}

	inline static int32_t get_offset_of_InitialPF2_33() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___InitialPF2_33)); }
	inline Vector3_t3722313464  get_InitialPF2_33() const { return ___InitialPF2_33; }
	inline Vector3_t3722313464 * get_address_of_InitialPF2_33() { return &___InitialPF2_33; }
	inline void set_InitialPF2_33(Vector3_t3722313464  value)
	{
		___InitialPF2_33 = value;
	}

	inline static int32_t get_offset_of_PF1Indicator_34() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF1Indicator_34)); }
	inline GameObject_t1113636619 * get_PF1Indicator_34() const { return ___PF1Indicator_34; }
	inline GameObject_t1113636619 ** get_address_of_PF1Indicator_34() { return &___PF1Indicator_34; }
	inline void set_PF1Indicator_34(GameObject_t1113636619 * value)
	{
		___PF1Indicator_34 = value;
		Il2CppCodeGenWriteBarrier((&___PF1Indicator_34), value);
	}

	inline static int32_t get_offset_of_PF2Indicator_35() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PF2Indicator_35)); }
	inline GameObject_t1113636619 * get_PF2Indicator_35() const { return ___PF2Indicator_35; }
	inline GameObject_t1113636619 ** get_address_of_PF2Indicator_35() { return &___PF2Indicator_35; }
	inline void set_PF2Indicator_35(GameObject_t1113636619 * value)
	{
		___PF2Indicator_35 = value;
		Il2CppCodeGenWriteBarrier((&___PF2Indicator_35), value);
	}

	inline static int32_t get_offset_of_PFIndicator_36() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___PFIndicator_36)); }
	inline GameObject_t1113636619 * get_PFIndicator_36() const { return ___PFIndicator_36; }
	inline GameObject_t1113636619 ** get_address_of_PFIndicator_36() { return &___PFIndicator_36; }
	inline void set_PFIndicator_36(GameObject_t1113636619 * value)
	{
		___PFIndicator_36 = value;
		Il2CppCodeGenWriteBarrier((&___PFIndicator_36), value);
	}

	inline static int32_t get_offset_of_stage_37() { return static_cast<int32_t>(offsetof(StageManager_t3296066545, ___stage_37)); }
	inline Stage_t1845040247 * get_stage_37() const { return ___stage_37; }
	inline Stage_t1845040247 ** get_address_of_stage_37() { return &___stage_37; }
	inline void set_stage_37(Stage_t1845040247 * value)
	{
		___stage_37 = value;
		Il2CppCodeGenWriteBarrier((&___stage_37), value);
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
#ifndef SCROLLMANAGER_T2903461311_H
#define SCROLLMANAGER_T2903461311_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollManager
struct  ScrollManager_t2903461311  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject ScrollManager::scrollContent
	GameObject_t1113636619 * ___scrollContent_2;
	// Option ScrollManager::optionPF1
	Option_t3411289914 * ___optionPF1_3;
	// Option ScrollManager::optionPF2
	Option_t3411289914 * ___optionPF2_4;
	// PF ScrollManager::PF1
	PF_t166272826 * ___PF1_5;
	// PF ScrollManager::PF2
	PF_t166272826 * ___PF2_6;
	// StageManager ScrollManager::stageManager
	StageManager_t3296066545 * ___stageManager_7;

public:
	inline static int32_t get_offset_of_scrollContent_2() { return static_cast<int32_t>(offsetof(ScrollManager_t2903461311, ___scrollContent_2)); }
	inline GameObject_t1113636619 * get_scrollContent_2() const { return ___scrollContent_2; }
	inline GameObject_t1113636619 ** get_address_of_scrollContent_2() { return &___scrollContent_2; }
	inline void set_scrollContent_2(GameObject_t1113636619 * value)
	{
		___scrollContent_2 = value;
		Il2CppCodeGenWriteBarrier((&___scrollContent_2), value);
	}

	inline static int32_t get_offset_of_optionPF1_3() { return static_cast<int32_t>(offsetof(ScrollManager_t2903461311, ___optionPF1_3)); }
	inline Option_t3411289914 * get_optionPF1_3() const { return ___optionPF1_3; }
	inline Option_t3411289914 ** get_address_of_optionPF1_3() { return &___optionPF1_3; }
	inline void set_optionPF1_3(Option_t3411289914 * value)
	{
		___optionPF1_3 = value;
		Il2CppCodeGenWriteBarrier((&___optionPF1_3), value);
	}

	inline static int32_t get_offset_of_optionPF2_4() { return static_cast<int32_t>(offsetof(ScrollManager_t2903461311, ___optionPF2_4)); }
	inline Option_t3411289914 * get_optionPF2_4() const { return ___optionPF2_4; }
	inline Option_t3411289914 ** get_address_of_optionPF2_4() { return &___optionPF2_4; }
	inline void set_optionPF2_4(Option_t3411289914 * value)
	{
		___optionPF2_4 = value;
		Il2CppCodeGenWriteBarrier((&___optionPF2_4), value);
	}

	inline static int32_t get_offset_of_PF1_5() { return static_cast<int32_t>(offsetof(ScrollManager_t2903461311, ___PF1_5)); }
	inline PF_t166272826 * get_PF1_5() const { return ___PF1_5; }
	inline PF_t166272826 ** get_address_of_PF1_5() { return &___PF1_5; }
	inline void set_PF1_5(PF_t166272826 * value)
	{
		___PF1_5 = value;
		Il2CppCodeGenWriteBarrier((&___PF1_5), value);
	}

	inline static int32_t get_offset_of_PF2_6() { return static_cast<int32_t>(offsetof(ScrollManager_t2903461311, ___PF2_6)); }
	inline PF_t166272826 * get_PF2_6() const { return ___PF2_6; }
	inline PF_t166272826 ** get_address_of_PF2_6() { return &___PF2_6; }
	inline void set_PF2_6(PF_t166272826 * value)
	{
		___PF2_6 = value;
		Il2CppCodeGenWriteBarrier((&___PF2_6), value);
	}

	inline static int32_t get_offset_of_stageManager_7() { return static_cast<int32_t>(offsetof(ScrollManager_t2903461311, ___stageManager_7)); }
	inline StageManager_t3296066545 * get_stageManager_7() const { return ___stageManager_7; }
	inline StageManager_t3296066545 ** get_address_of_stageManager_7() { return &___stageManager_7; }
	inline void set_stageManager_7(StageManager_t3296066545 * value)
	{
		___stageManager_7 = value;
		Il2CppCodeGenWriteBarrier((&___stageManager_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCROLLMANAGER_T2903461311_H
#ifndef STEPCHECKER_T1301311235_H
#define STEPCHECKER_T1301311235_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StepChecker
struct  StepChecker_t1301311235  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform[] StepChecker::checkRects
	RectTransformU5BU5D_t107129948* ___checkRects_3;

public:
	inline static int32_t get_offset_of_checkRects_3() { return static_cast<int32_t>(offsetof(StepChecker_t1301311235, ___checkRects_3)); }
	inline RectTransformU5BU5D_t107129948* get_checkRects_3() const { return ___checkRects_3; }
	inline RectTransformU5BU5D_t107129948** get_address_of_checkRects_3() { return &___checkRects_3; }
	inline void set_checkRects_3(RectTransformU5BU5D_t107129948* value)
	{
		___checkRects_3 = value;
		Il2CppCodeGenWriteBarrier((&___checkRects_3), value);
	}
};

struct StepChecker_t1301311235_StaticFields
{
public:
	// StepChecker StepChecker::manager
	StepChecker_t1301311235 * ___manager_2;

public:
	inline static int32_t get_offset_of_manager_2() { return static_cast<int32_t>(offsetof(StepChecker_t1301311235_StaticFields, ___manager_2)); }
	inline StepChecker_t1301311235 * get_manager_2() const { return ___manager_2; }
	inline StepChecker_t1301311235 ** get_address_of_manager_2() { return &___manager_2; }
	inline void set_manager_2(StepChecker_t1301311235 * value)
	{
		___manager_2 = value;
		Il2CppCodeGenWriteBarrier((&___manager_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STEPCHECKER_T1301311235_H
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
	// UnityEngine.UI.Text MenuLevelButton::completedLevelsText
	Text_t1901882714 * ___completedLevelsText_5;
	// UnityEngine.GameObject MenuLevelButton::activePanel
	GameObject_t1113636619 * ___activePanel_6;
	// UnityEngine.GameObject MenuLevelButton::inactivePanel
	GameObject_t1113636619 * ___inactivePanel_7;
	// System.String MenuLevelButton::levelKeyPrefix
	String_t* ___levelKeyPrefix_8;
	// System.Int32 MenuLevelButton::level
	int32_t ___level_9;
	// System.String MenuLevelButton::inactiveMessage
	String_t* ___inactiveMessage_10;
	// MenuNotification MenuLevelButton::notificationManager
	MenuNotification_t963843896 * ___notificationManager_11;
	// MenuFlowManager MenuLevelButton::flowManager
	MenuFlowManager_t1614880941 * ___flowManager_12;
	// System.Boolean MenuLevelButton::pulse
	bool ___pulse_13;
	// System.Single MenuLevelButton::pulseScale
	float ___pulseScale_14;
	// System.Single MenuLevelButton::normalScale
	float ___normalScale_15;
	// UnityEngine.Coroutine MenuLevelButton::pulseCoroutine
	Coroutine_t3829159415 * ___pulseCoroutine_16;

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

	inline static int32_t get_offset_of_completedLevelsText_5() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___completedLevelsText_5)); }
	inline Text_t1901882714 * get_completedLevelsText_5() const { return ___completedLevelsText_5; }
	inline Text_t1901882714 ** get_address_of_completedLevelsText_5() { return &___completedLevelsText_5; }
	inline void set_completedLevelsText_5(Text_t1901882714 * value)
	{
		___completedLevelsText_5 = value;
		Il2CppCodeGenWriteBarrier((&___completedLevelsText_5), value);
	}

	inline static int32_t get_offset_of_activePanel_6() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___activePanel_6)); }
	inline GameObject_t1113636619 * get_activePanel_6() const { return ___activePanel_6; }
	inline GameObject_t1113636619 ** get_address_of_activePanel_6() { return &___activePanel_6; }
	inline void set_activePanel_6(GameObject_t1113636619 * value)
	{
		___activePanel_6 = value;
		Il2CppCodeGenWriteBarrier((&___activePanel_6), value);
	}

	inline static int32_t get_offset_of_inactivePanel_7() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___inactivePanel_7)); }
	inline GameObject_t1113636619 * get_inactivePanel_7() const { return ___inactivePanel_7; }
	inline GameObject_t1113636619 ** get_address_of_inactivePanel_7() { return &___inactivePanel_7; }
	inline void set_inactivePanel_7(GameObject_t1113636619 * value)
	{
		___inactivePanel_7 = value;
		Il2CppCodeGenWriteBarrier((&___inactivePanel_7), value);
	}

	inline static int32_t get_offset_of_levelKeyPrefix_8() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___levelKeyPrefix_8)); }
	inline String_t* get_levelKeyPrefix_8() const { return ___levelKeyPrefix_8; }
	inline String_t** get_address_of_levelKeyPrefix_8() { return &___levelKeyPrefix_8; }
	inline void set_levelKeyPrefix_8(String_t* value)
	{
		___levelKeyPrefix_8 = value;
		Il2CppCodeGenWriteBarrier((&___levelKeyPrefix_8), value);
	}

	inline static int32_t get_offset_of_level_9() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___level_9)); }
	inline int32_t get_level_9() const { return ___level_9; }
	inline int32_t* get_address_of_level_9() { return &___level_9; }
	inline void set_level_9(int32_t value)
	{
		___level_9 = value;
	}

	inline static int32_t get_offset_of_inactiveMessage_10() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___inactiveMessage_10)); }
	inline String_t* get_inactiveMessage_10() const { return ___inactiveMessage_10; }
	inline String_t** get_address_of_inactiveMessage_10() { return &___inactiveMessage_10; }
	inline void set_inactiveMessage_10(String_t* value)
	{
		___inactiveMessage_10 = value;
		Il2CppCodeGenWriteBarrier((&___inactiveMessage_10), value);
	}

	inline static int32_t get_offset_of_notificationManager_11() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___notificationManager_11)); }
	inline MenuNotification_t963843896 * get_notificationManager_11() const { return ___notificationManager_11; }
	inline MenuNotification_t963843896 ** get_address_of_notificationManager_11() { return &___notificationManager_11; }
	inline void set_notificationManager_11(MenuNotification_t963843896 * value)
	{
		___notificationManager_11 = value;
		Il2CppCodeGenWriteBarrier((&___notificationManager_11), value);
	}

	inline static int32_t get_offset_of_flowManager_12() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___flowManager_12)); }
	inline MenuFlowManager_t1614880941 * get_flowManager_12() const { return ___flowManager_12; }
	inline MenuFlowManager_t1614880941 ** get_address_of_flowManager_12() { return &___flowManager_12; }
	inline void set_flowManager_12(MenuFlowManager_t1614880941 * value)
	{
		___flowManager_12 = value;
		Il2CppCodeGenWriteBarrier((&___flowManager_12), value);
	}

	inline static int32_t get_offset_of_pulse_13() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___pulse_13)); }
	inline bool get_pulse_13() const { return ___pulse_13; }
	inline bool* get_address_of_pulse_13() { return &___pulse_13; }
	inline void set_pulse_13(bool value)
	{
		___pulse_13 = value;
	}

	inline static int32_t get_offset_of_pulseScale_14() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___pulseScale_14)); }
	inline float get_pulseScale_14() const { return ___pulseScale_14; }
	inline float* get_address_of_pulseScale_14() { return &___pulseScale_14; }
	inline void set_pulseScale_14(float value)
	{
		___pulseScale_14 = value;
	}

	inline static int32_t get_offset_of_normalScale_15() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___normalScale_15)); }
	inline float get_normalScale_15() const { return ___normalScale_15; }
	inline float* get_address_of_normalScale_15() { return &___normalScale_15; }
	inline void set_normalScale_15(float value)
	{
		___normalScale_15 = value;
	}

	inline static int32_t get_offset_of_pulseCoroutine_16() { return static_cast<int32_t>(offsetof(MenuLevelButton_t3559006541, ___pulseCoroutine_16)); }
	inline Coroutine_t3829159415 * get_pulseCoroutine_16() const { return ___pulseCoroutine_16; }
	inline Coroutine_t3829159415 ** get_address_of_pulseCoroutine_16() { return &___pulseCoroutine_16; }
	inline void set_pulseCoroutine_16(Coroutine_t3829159415 * value)
	{
		___pulseCoroutine_16 = value;
		Il2CppCodeGenWriteBarrier((&___pulseCoroutine_16), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENULEVELBUTTON_T3559006541_H
#ifndef ENDPANEL_T2070267055_H
#define ENDPANEL_T2070267055_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EndPanel
struct  EndPanel_t2070267055  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject EndPanel::endPanel
	GameObject_t1113636619 * ___endPanel_3;
	// UnityEngine.UI.Image EndPanel::background
	Image_t2670269651 * ___background_4;
	// UnityEngine.UI.Image EndPanel::stageImage
	Image_t2670269651 * ___stageImage_5;
	// UnityEngine.UI.Image EndPanel::bgPanel
	Image_t2670269651 * ___bgPanel_6;
	// UnityEngine.UI.Image EndPanel::exitOp1
	Image_t2670269651 * ___exitOp1_7;
	// UnityEngine.UI.Image EndPanel::exitOp2
	Image_t2670269651 * ___exitOp2_8;
	// UnityEngine.RectTransform EndPanel::totalTimeOb
	RectTransform_t3704657025 * ___totalTimeOb_9;
	// UnityEngine.RectTransform EndPanel::nextStarOb
	RectTransform_t3704657025 * ___nextStarOb_10;
	// UnityEngine.UI.Text EndPanel::totalTimeText
	Text_t1901882714 * ___totalTimeText_11;
	// UnityEngine.UI.Text EndPanel::nextStarText
	Text_t1901882714 * ___nextStarText_12;
	// UnityEngine.RectTransform[] EndPanel::disabledStars
	RectTransformU5BU5D_t107129948* ___disabledStars_13;
	// UnityEngine.RectTransform[] EndPanel::enabledStars
	RectTransformU5BU5D_t107129948* ___enabledStars_14;
	// AudioSFX[] EndPanel::starSounds
	AudioSFXU5BU5D_t2541677417* ___starSounds_15;
	// UnityEngine.UI.Image EndPanel::stampImage
	Image_t2670269651 * ___stampImage_16;
	// System.Boolean EndPanel::playing
	bool ___playing_17;

public:
	inline static int32_t get_offset_of_endPanel_3() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___endPanel_3)); }
	inline GameObject_t1113636619 * get_endPanel_3() const { return ___endPanel_3; }
	inline GameObject_t1113636619 ** get_address_of_endPanel_3() { return &___endPanel_3; }
	inline void set_endPanel_3(GameObject_t1113636619 * value)
	{
		___endPanel_3 = value;
		Il2CppCodeGenWriteBarrier((&___endPanel_3), value);
	}

	inline static int32_t get_offset_of_background_4() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___background_4)); }
	inline Image_t2670269651 * get_background_4() const { return ___background_4; }
	inline Image_t2670269651 ** get_address_of_background_4() { return &___background_4; }
	inline void set_background_4(Image_t2670269651 * value)
	{
		___background_4 = value;
		Il2CppCodeGenWriteBarrier((&___background_4), value);
	}

	inline static int32_t get_offset_of_stageImage_5() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___stageImage_5)); }
	inline Image_t2670269651 * get_stageImage_5() const { return ___stageImage_5; }
	inline Image_t2670269651 ** get_address_of_stageImage_5() { return &___stageImage_5; }
	inline void set_stageImage_5(Image_t2670269651 * value)
	{
		___stageImage_5 = value;
		Il2CppCodeGenWriteBarrier((&___stageImage_5), value);
	}

	inline static int32_t get_offset_of_bgPanel_6() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___bgPanel_6)); }
	inline Image_t2670269651 * get_bgPanel_6() const { return ___bgPanel_6; }
	inline Image_t2670269651 ** get_address_of_bgPanel_6() { return &___bgPanel_6; }
	inline void set_bgPanel_6(Image_t2670269651 * value)
	{
		___bgPanel_6 = value;
		Il2CppCodeGenWriteBarrier((&___bgPanel_6), value);
	}

	inline static int32_t get_offset_of_exitOp1_7() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___exitOp1_7)); }
	inline Image_t2670269651 * get_exitOp1_7() const { return ___exitOp1_7; }
	inline Image_t2670269651 ** get_address_of_exitOp1_7() { return &___exitOp1_7; }
	inline void set_exitOp1_7(Image_t2670269651 * value)
	{
		___exitOp1_7 = value;
		Il2CppCodeGenWriteBarrier((&___exitOp1_7), value);
	}

	inline static int32_t get_offset_of_exitOp2_8() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___exitOp2_8)); }
	inline Image_t2670269651 * get_exitOp2_8() const { return ___exitOp2_8; }
	inline Image_t2670269651 ** get_address_of_exitOp2_8() { return &___exitOp2_8; }
	inline void set_exitOp2_8(Image_t2670269651 * value)
	{
		___exitOp2_8 = value;
		Il2CppCodeGenWriteBarrier((&___exitOp2_8), value);
	}

	inline static int32_t get_offset_of_totalTimeOb_9() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___totalTimeOb_9)); }
	inline RectTransform_t3704657025 * get_totalTimeOb_9() const { return ___totalTimeOb_9; }
	inline RectTransform_t3704657025 ** get_address_of_totalTimeOb_9() { return &___totalTimeOb_9; }
	inline void set_totalTimeOb_9(RectTransform_t3704657025 * value)
	{
		___totalTimeOb_9 = value;
		Il2CppCodeGenWriteBarrier((&___totalTimeOb_9), value);
	}

	inline static int32_t get_offset_of_nextStarOb_10() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___nextStarOb_10)); }
	inline RectTransform_t3704657025 * get_nextStarOb_10() const { return ___nextStarOb_10; }
	inline RectTransform_t3704657025 ** get_address_of_nextStarOb_10() { return &___nextStarOb_10; }
	inline void set_nextStarOb_10(RectTransform_t3704657025 * value)
	{
		___nextStarOb_10 = value;
		Il2CppCodeGenWriteBarrier((&___nextStarOb_10), value);
	}

	inline static int32_t get_offset_of_totalTimeText_11() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___totalTimeText_11)); }
	inline Text_t1901882714 * get_totalTimeText_11() const { return ___totalTimeText_11; }
	inline Text_t1901882714 ** get_address_of_totalTimeText_11() { return &___totalTimeText_11; }
	inline void set_totalTimeText_11(Text_t1901882714 * value)
	{
		___totalTimeText_11 = value;
		Il2CppCodeGenWriteBarrier((&___totalTimeText_11), value);
	}

	inline static int32_t get_offset_of_nextStarText_12() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___nextStarText_12)); }
	inline Text_t1901882714 * get_nextStarText_12() const { return ___nextStarText_12; }
	inline Text_t1901882714 ** get_address_of_nextStarText_12() { return &___nextStarText_12; }
	inline void set_nextStarText_12(Text_t1901882714 * value)
	{
		___nextStarText_12 = value;
		Il2CppCodeGenWriteBarrier((&___nextStarText_12), value);
	}

	inline static int32_t get_offset_of_disabledStars_13() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___disabledStars_13)); }
	inline RectTransformU5BU5D_t107129948* get_disabledStars_13() const { return ___disabledStars_13; }
	inline RectTransformU5BU5D_t107129948** get_address_of_disabledStars_13() { return &___disabledStars_13; }
	inline void set_disabledStars_13(RectTransformU5BU5D_t107129948* value)
	{
		___disabledStars_13 = value;
		Il2CppCodeGenWriteBarrier((&___disabledStars_13), value);
	}

	inline static int32_t get_offset_of_enabledStars_14() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___enabledStars_14)); }
	inline RectTransformU5BU5D_t107129948* get_enabledStars_14() const { return ___enabledStars_14; }
	inline RectTransformU5BU5D_t107129948** get_address_of_enabledStars_14() { return &___enabledStars_14; }
	inline void set_enabledStars_14(RectTransformU5BU5D_t107129948* value)
	{
		___enabledStars_14 = value;
		Il2CppCodeGenWriteBarrier((&___enabledStars_14), value);
	}

	inline static int32_t get_offset_of_starSounds_15() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___starSounds_15)); }
	inline AudioSFXU5BU5D_t2541677417* get_starSounds_15() const { return ___starSounds_15; }
	inline AudioSFXU5BU5D_t2541677417** get_address_of_starSounds_15() { return &___starSounds_15; }
	inline void set_starSounds_15(AudioSFXU5BU5D_t2541677417* value)
	{
		___starSounds_15 = value;
		Il2CppCodeGenWriteBarrier((&___starSounds_15), value);
	}

	inline static int32_t get_offset_of_stampImage_16() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___stampImage_16)); }
	inline Image_t2670269651 * get_stampImage_16() const { return ___stampImage_16; }
	inline Image_t2670269651 ** get_address_of_stampImage_16() { return &___stampImage_16; }
	inline void set_stampImage_16(Image_t2670269651 * value)
	{
		___stampImage_16 = value;
		Il2CppCodeGenWriteBarrier((&___stampImage_16), value);
	}

	inline static int32_t get_offset_of_playing_17() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055, ___playing_17)); }
	inline bool get_playing_17() const { return ___playing_17; }
	inline bool* get_address_of_playing_17() { return &___playing_17; }
	inline void set_playing_17(bool value)
	{
		___playing_17 = value;
	}
};

struct EndPanel_t2070267055_StaticFields
{
public:
	// EndPanel EndPanel::manager
	EndPanel_t2070267055 * ___manager_2;

public:
	inline static int32_t get_offset_of_manager_2() { return static_cast<int32_t>(offsetof(EndPanel_t2070267055_StaticFields, ___manager_2)); }
	inline EndPanel_t2070267055 * get_manager_2() const { return ___manager_2; }
	inline EndPanel_t2070267055 ** get_address_of_manager_2() { return &___manager_2; }
	inline void set_manager_2(EndPanel_t2070267055 * value)
	{
		___manager_2 = value;
		Il2CppCodeGenWriteBarrier((&___manager_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENDPANEL_T2070267055_H
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
	// UnityEngine.RectTransform MenuFlowManager::canvas
	RectTransform_t3704657025 * ___canvas_5;
	// UnityEngine.RectTransform MenuFlowManager::panel_title
	RectTransform_t3704657025 * ___panel_title_6;
	// UnityEngine.RectTransform MenuFlowManager::panel_sky
	RectTransform_t3704657025 * ___panel_sky_7;
	// UnityEngine.RectTransform MenuFlowManager::panel_levels
	RectTransform_t3704657025 * ___panel_levels_8;
	// UnityEngine.UI.Image[] MenuFlowManager::fadeImages
	ImageU5BU5D_t2439009922* ___fadeImages_9;
	// MenuPanel[] MenuFlowManager::panels
	MenuPanelU5BU5D_t1968201233* ___panels_10;
	// UnityEngine.AudioClip[] MenuFlowManager::tipClips
	AudioClipU5BU5D_t143221404* ___tipClips_11;
	// System.String[] MenuFlowManager::tipTexts
	StringU5BU5D_t1281789340* ___tipTexts_12;
	// UnityEngine.Transform MenuFlowManager::tipPanel
	Transform_t3600365921 * ___tipPanel_13;
	// UnityEngine.UI.Text MenuFlowManager::tipText
	Text_t1901882714 * ___tipText_14;
	// System.Boolean MenuFlowManager::changing
	bool ___changing_15;
	// System.Boolean MenuFlowManager::fadingTitle
	bool ___fadingTitle_16;
	// System.Boolean MenuFlowManager::fadingTipPanel
	bool ___fadingTipPanel_17;
	// System.Boolean MenuFlowManager::goBack
	bool ___goBack_18;
	// System.Int32 MenuFlowManager::currPanel
	int32_t ___currPanel_19;
	// UnityEngine.AudioSource MenuFlowManager::aSrc
	AudioSource_t3935305588 * ___aSrc_20;
	// UnityEngine.AudioClip MenuFlowManager::clickClip
	AudioClip_t3680889665 * ___clickClip_21;
	// MenuNotification MenuFlowManager::notification
	MenuNotification_t963843896 * ___notification_22;

public:
	inline static int32_t get_offset_of_canvas_5() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___canvas_5)); }
	inline RectTransform_t3704657025 * get_canvas_5() const { return ___canvas_5; }
	inline RectTransform_t3704657025 ** get_address_of_canvas_5() { return &___canvas_5; }
	inline void set_canvas_5(RectTransform_t3704657025 * value)
	{
		___canvas_5 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_5), value);
	}

	inline static int32_t get_offset_of_panel_title_6() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___panel_title_6)); }
	inline RectTransform_t3704657025 * get_panel_title_6() const { return ___panel_title_6; }
	inline RectTransform_t3704657025 ** get_address_of_panel_title_6() { return &___panel_title_6; }
	inline void set_panel_title_6(RectTransform_t3704657025 * value)
	{
		___panel_title_6 = value;
		Il2CppCodeGenWriteBarrier((&___panel_title_6), value);
	}

	inline static int32_t get_offset_of_panel_sky_7() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___panel_sky_7)); }
	inline RectTransform_t3704657025 * get_panel_sky_7() const { return ___panel_sky_7; }
	inline RectTransform_t3704657025 ** get_address_of_panel_sky_7() { return &___panel_sky_7; }
	inline void set_panel_sky_7(RectTransform_t3704657025 * value)
	{
		___panel_sky_7 = value;
		Il2CppCodeGenWriteBarrier((&___panel_sky_7), value);
	}

	inline static int32_t get_offset_of_panel_levels_8() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___panel_levels_8)); }
	inline RectTransform_t3704657025 * get_panel_levels_8() const { return ___panel_levels_8; }
	inline RectTransform_t3704657025 ** get_address_of_panel_levels_8() { return &___panel_levels_8; }
	inline void set_panel_levels_8(RectTransform_t3704657025 * value)
	{
		___panel_levels_8 = value;
		Il2CppCodeGenWriteBarrier((&___panel_levels_8), value);
	}

	inline static int32_t get_offset_of_fadeImages_9() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___fadeImages_9)); }
	inline ImageU5BU5D_t2439009922* get_fadeImages_9() const { return ___fadeImages_9; }
	inline ImageU5BU5D_t2439009922** get_address_of_fadeImages_9() { return &___fadeImages_9; }
	inline void set_fadeImages_9(ImageU5BU5D_t2439009922* value)
	{
		___fadeImages_9 = value;
		Il2CppCodeGenWriteBarrier((&___fadeImages_9), value);
	}

	inline static int32_t get_offset_of_panels_10() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___panels_10)); }
	inline MenuPanelU5BU5D_t1968201233* get_panels_10() const { return ___panels_10; }
	inline MenuPanelU5BU5D_t1968201233** get_address_of_panels_10() { return &___panels_10; }
	inline void set_panels_10(MenuPanelU5BU5D_t1968201233* value)
	{
		___panels_10 = value;
		Il2CppCodeGenWriteBarrier((&___panels_10), value);
	}

	inline static int32_t get_offset_of_tipClips_11() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___tipClips_11)); }
	inline AudioClipU5BU5D_t143221404* get_tipClips_11() const { return ___tipClips_11; }
	inline AudioClipU5BU5D_t143221404** get_address_of_tipClips_11() { return &___tipClips_11; }
	inline void set_tipClips_11(AudioClipU5BU5D_t143221404* value)
	{
		___tipClips_11 = value;
		Il2CppCodeGenWriteBarrier((&___tipClips_11), value);
	}

	inline static int32_t get_offset_of_tipTexts_12() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___tipTexts_12)); }
	inline StringU5BU5D_t1281789340* get_tipTexts_12() const { return ___tipTexts_12; }
	inline StringU5BU5D_t1281789340** get_address_of_tipTexts_12() { return &___tipTexts_12; }
	inline void set_tipTexts_12(StringU5BU5D_t1281789340* value)
	{
		___tipTexts_12 = value;
		Il2CppCodeGenWriteBarrier((&___tipTexts_12), value);
	}

	inline static int32_t get_offset_of_tipPanel_13() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___tipPanel_13)); }
	inline Transform_t3600365921 * get_tipPanel_13() const { return ___tipPanel_13; }
	inline Transform_t3600365921 ** get_address_of_tipPanel_13() { return &___tipPanel_13; }
	inline void set_tipPanel_13(Transform_t3600365921 * value)
	{
		___tipPanel_13 = value;
		Il2CppCodeGenWriteBarrier((&___tipPanel_13), value);
	}

	inline static int32_t get_offset_of_tipText_14() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___tipText_14)); }
	inline Text_t1901882714 * get_tipText_14() const { return ___tipText_14; }
	inline Text_t1901882714 ** get_address_of_tipText_14() { return &___tipText_14; }
	inline void set_tipText_14(Text_t1901882714 * value)
	{
		___tipText_14 = value;
		Il2CppCodeGenWriteBarrier((&___tipText_14), value);
	}

	inline static int32_t get_offset_of_changing_15() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___changing_15)); }
	inline bool get_changing_15() const { return ___changing_15; }
	inline bool* get_address_of_changing_15() { return &___changing_15; }
	inline void set_changing_15(bool value)
	{
		___changing_15 = value;
	}

	inline static int32_t get_offset_of_fadingTitle_16() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___fadingTitle_16)); }
	inline bool get_fadingTitle_16() const { return ___fadingTitle_16; }
	inline bool* get_address_of_fadingTitle_16() { return &___fadingTitle_16; }
	inline void set_fadingTitle_16(bool value)
	{
		___fadingTitle_16 = value;
	}

	inline static int32_t get_offset_of_fadingTipPanel_17() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___fadingTipPanel_17)); }
	inline bool get_fadingTipPanel_17() const { return ___fadingTipPanel_17; }
	inline bool* get_address_of_fadingTipPanel_17() { return &___fadingTipPanel_17; }
	inline void set_fadingTipPanel_17(bool value)
	{
		___fadingTipPanel_17 = value;
	}

	inline static int32_t get_offset_of_goBack_18() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___goBack_18)); }
	inline bool get_goBack_18() const { return ___goBack_18; }
	inline bool* get_address_of_goBack_18() { return &___goBack_18; }
	inline void set_goBack_18(bool value)
	{
		___goBack_18 = value;
	}

	inline static int32_t get_offset_of_currPanel_19() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___currPanel_19)); }
	inline int32_t get_currPanel_19() const { return ___currPanel_19; }
	inline int32_t* get_address_of_currPanel_19() { return &___currPanel_19; }
	inline void set_currPanel_19(int32_t value)
	{
		___currPanel_19 = value;
	}

	inline static int32_t get_offset_of_aSrc_20() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___aSrc_20)); }
	inline AudioSource_t3935305588 * get_aSrc_20() const { return ___aSrc_20; }
	inline AudioSource_t3935305588 ** get_address_of_aSrc_20() { return &___aSrc_20; }
	inline void set_aSrc_20(AudioSource_t3935305588 * value)
	{
		___aSrc_20 = value;
		Il2CppCodeGenWriteBarrier((&___aSrc_20), value);
	}

	inline static int32_t get_offset_of_clickClip_21() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___clickClip_21)); }
	inline AudioClip_t3680889665 * get_clickClip_21() const { return ___clickClip_21; }
	inline AudioClip_t3680889665 ** get_address_of_clickClip_21() { return &___clickClip_21; }
	inline void set_clickClip_21(AudioClip_t3680889665 * value)
	{
		___clickClip_21 = value;
		Il2CppCodeGenWriteBarrier((&___clickClip_21), value);
	}

	inline static int32_t get_offset_of_notification_22() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941, ___notification_22)); }
	inline MenuNotification_t963843896 * get_notification_22() const { return ___notification_22; }
	inline MenuNotification_t963843896 ** get_address_of_notification_22() { return &___notification_22; }
	inline void set_notification_22(MenuNotification_t963843896 * value)
	{
		___notification_22 = value;
		Il2CppCodeGenWriteBarrier((&___notification_22), value);
	}
};

struct MenuFlowManager_t1614880941_StaticFields
{
public:
	// System.Boolean MenuFlowManager::gameJustBegun
	bool ___gameJustBegun_2;
	// System.Int32 MenuFlowManager::lastPanel
	int32_t ___lastPanel_3;
	// UnityEngine.Vector2 MenuFlowManager::lastContentPos
	Vector2_t2156229523  ___lastContentPos_4;

public:
	inline static int32_t get_offset_of_gameJustBegun_2() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941_StaticFields, ___gameJustBegun_2)); }
	inline bool get_gameJustBegun_2() const { return ___gameJustBegun_2; }
	inline bool* get_address_of_gameJustBegun_2() { return &___gameJustBegun_2; }
	inline void set_gameJustBegun_2(bool value)
	{
		___gameJustBegun_2 = value;
	}

	inline static int32_t get_offset_of_lastPanel_3() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941_StaticFields, ___lastPanel_3)); }
	inline int32_t get_lastPanel_3() const { return ___lastPanel_3; }
	inline int32_t* get_address_of_lastPanel_3() { return &___lastPanel_3; }
	inline void set_lastPanel_3(int32_t value)
	{
		___lastPanel_3 = value;
	}

	inline static int32_t get_offset_of_lastContentPos_4() { return static_cast<int32_t>(offsetof(MenuFlowManager_t1614880941_StaticFields, ___lastContentPos_4)); }
	inline Vector2_t2156229523  get_lastContentPos_4() const { return ___lastContentPos_4; }
	inline Vector2_t2156229523 * get_address_of_lastContentPos_4() { return &___lastContentPos_4; }
	inline void set_lastContentPos_4(Vector2_t2156229523  value)
	{
		___lastContentPos_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MENUFLOWMANAGER_T1614880941_H
#ifndef GAMEPLAYTRANSITIONS_T431761729_H
#define GAMEPLAYTRANSITIONS_T431761729_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameplayTransitions
struct  GameplayTransitions_t431761729  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.RectTransform[] GameplayTransitions::fadeRects
	RectTransformU5BU5D_t107129948* ___fadeRects_2;
	// UnityEngine.RectTransform GameplayTransitions::canvas
	RectTransform_t3704657025 * ___canvas_3;

public:
	inline static int32_t get_offset_of_fadeRects_2() { return static_cast<int32_t>(offsetof(GameplayTransitions_t431761729, ___fadeRects_2)); }
	inline RectTransformU5BU5D_t107129948* get_fadeRects_2() const { return ___fadeRects_2; }
	inline RectTransformU5BU5D_t107129948** get_address_of_fadeRects_2() { return &___fadeRects_2; }
	inline void set_fadeRects_2(RectTransformU5BU5D_t107129948* value)
	{
		___fadeRects_2 = value;
		Il2CppCodeGenWriteBarrier((&___fadeRects_2), value);
	}

	inline static int32_t get_offset_of_canvas_3() { return static_cast<int32_t>(offsetof(GameplayTransitions_t431761729, ___canvas_3)); }
	inline RectTransform_t3704657025 * get_canvas_3() const { return ___canvas_3; }
	inline RectTransform_t3704657025 ** get_address_of_canvas_3() { return &___canvas_3; }
	inline void set_canvas_3(RectTransform_t3704657025 * value)
	{
		___canvas_3 = value;
		Il2CppCodeGenWriteBarrier((&___canvas_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMEPLAYTRANSITIONS_T431761729_H
#ifndef PF_T166272826_H
#define PF_T166272826_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PF
struct  PF_t166272826  : public MonoBehaviour_t3962482529
{
public:
	// UnityEngine.GameObject PF::line1
	GameObject_t1113636619 * ___line1_2;
	// UnityEngine.GameObject PF::line2
	GameObject_t1113636619 * ___line2_3;
	// System.Int32 PF::id
	int32_t ___id_4;
	// System.String PF::color1
	String_t* ___color1_5;
	// System.String PF::color2
	String_t* ___color2_6;
	// System.String PF::color3
	String_t* ___color3_7;
	// System.String PF::color4
	String_t* ___color4_8;

public:
	inline static int32_t get_offset_of_line1_2() { return static_cast<int32_t>(offsetof(PF_t166272826, ___line1_2)); }
	inline GameObject_t1113636619 * get_line1_2() const { return ___line1_2; }
	inline GameObject_t1113636619 ** get_address_of_line1_2() { return &___line1_2; }
	inline void set_line1_2(GameObject_t1113636619 * value)
	{
		___line1_2 = value;
		Il2CppCodeGenWriteBarrier((&___line1_2), value);
	}

	inline static int32_t get_offset_of_line2_3() { return static_cast<int32_t>(offsetof(PF_t166272826, ___line2_3)); }
	inline GameObject_t1113636619 * get_line2_3() const { return ___line2_3; }
	inline GameObject_t1113636619 ** get_address_of_line2_3() { return &___line2_3; }
	inline void set_line2_3(GameObject_t1113636619 * value)
	{
		___line2_3 = value;
		Il2CppCodeGenWriteBarrier((&___line2_3), value);
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(PF_t166272826, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_color1_5() { return static_cast<int32_t>(offsetof(PF_t166272826, ___color1_5)); }
	inline String_t* get_color1_5() const { return ___color1_5; }
	inline String_t** get_address_of_color1_5() { return &___color1_5; }
	inline void set_color1_5(String_t* value)
	{
		___color1_5 = value;
		Il2CppCodeGenWriteBarrier((&___color1_5), value);
	}

	inline static int32_t get_offset_of_color2_6() { return static_cast<int32_t>(offsetof(PF_t166272826, ___color2_6)); }
	inline String_t* get_color2_6() const { return ___color2_6; }
	inline String_t** get_address_of_color2_6() { return &___color2_6; }
	inline void set_color2_6(String_t* value)
	{
		___color2_6 = value;
		Il2CppCodeGenWriteBarrier((&___color2_6), value);
	}

	inline static int32_t get_offset_of_color3_7() { return static_cast<int32_t>(offsetof(PF_t166272826, ___color3_7)); }
	inline String_t* get_color3_7() const { return ___color3_7; }
	inline String_t** get_address_of_color3_7() { return &___color3_7; }
	inline void set_color3_7(String_t* value)
	{
		___color3_7 = value;
		Il2CppCodeGenWriteBarrier((&___color3_7), value);
	}

	inline static int32_t get_offset_of_color4_8() { return static_cast<int32_t>(offsetof(PF_t166272826, ___color4_8)); }
	inline String_t* get_color4_8() const { return ___color4_8; }
	inline String_t** get_address_of_color4_8() { return &___color4_8; }
	inline void set_color4_8(String_t* value)
	{
		___color4_8 = value;
		Il2CppCodeGenWriteBarrier((&___color4_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PF_T166272826_H
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
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t107129948  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RectTransform_t3704657025 * m_Items[1];

public:
	inline RectTransform_t3704657025 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectTransform_t3704657025 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectTransform_t3704657025 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RectTransform_t3704657025 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectTransform_t3704657025 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectTransform_t3704657025 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// AudioSFX[]
struct AudioSFXU5BU5D_t2541677417  : public RuntimeArray
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
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
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
// PauseMenuButton[]
struct PauseMenuButtonU5BU5D_t2517294588  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PauseMenuButton_t2049395553 * m_Items[1];

public:
	inline PauseMenuButton_t2049395553 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PauseMenuButton_t2049395553 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PauseMenuButton_t2049395553 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PauseMenuButton_t2049395553 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PauseMenuButton_t2049395553 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PauseMenuButton_t2049395553 * value)
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


// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
extern "C"  Enumerator_t2146457487  List_1_GetEnumerator_m2930774921_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
extern "C"  RuntimeObject * Enumerator_get_Current_m470245444_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
extern "C"  bool Enumerator_MoveNext_m2142368520_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
extern "C"  void Enumerator_Dispose_m3007748546_gshared (Enumerator_t2146457487 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
extern "C"  RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m1405553448_gshared (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  RuntimeObject * Component_GetComponent_TisRuntimeObject_m2906321015_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1135049463_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Vector3_t3722313464  p1, Quaternion_t2301928331  p2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared (GameObject_t1113636619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
extern "C"  RuntimeObject * Object_Instantiate_TisRuntimeObject_m1061214600_gshared (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, Transform_t3600365921 * p1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
extern "C"  RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void UnityAction_1__ctor_m2434317150_gshared (UnityAction_1_t3664942305 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
extern "C"  void UnityEvent_1_AddListener_m3703050833_gshared (UnityEvent_1_t3961765668 * __this, UnityAction_1_t3664942305 * p0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
extern "C"  void List_1_Add_m3338814081_gshared (List_1_t257213610 * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
extern "C"  RuntimeObject * List_1_get_Item_m2287542950_gshared (List_1_t257213610 * __this, int32_t p0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
extern "C"  int32_t List_1_get_Count_m2934127733_gshared (List_1_t257213610 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
extern "C"  void List_1_Add_m1524640104_gshared (List_1_t899420910 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
extern "C"  ObjectU5BU5D_t2843939325* Component_GetComponentsInChildren_TisRuntimeObject_m1308288322_gshared (Component_t1923634451 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
extern "C"  Vector3_t3722313464  List_1_get_Item_m200663048_gshared (List_1_t899420910 * __this, int32_t p0, const RuntimeMethod* method);

// System.Void UnityEngine.MonoBehaviour::.ctor()
extern "C"  void MonoBehaviour__ctor_m1579109191 (MonoBehaviour_t3962482529 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m1810815630 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Inequality_m4071470834 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, Object_t631007953 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
extern "C"  GameObject_t1113636619 * Component_get_gameObject_m442555142 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
extern "C"  void Object_Destroy_m565254235 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
extern "C"  void Object_DontDestroyOnLoad_m166252750 (RuntimeObject * __this /* static, unused */, Object_t631007953 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
extern "C"  void AudioSource_set_pitch_m2413801168 (AudioSource_t3935305588 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
extern "C"  void AudioSource_PlayOneShot_m1688286683 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// StageData JSONParser::LoadResources()
extern "C"  StageData_t251497815 * JSONParser_LoadResources_m3124311211 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Stage>::GetEnumerator()
#define List_1_GetEnumerator_m1203868866(__this, method) ((  Enumerator_t911391570  (*) (List_1_t3317114989 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Stage>::get_Current()
#define Enumerator_get_Current_m3768177764(__this, method) ((  Stage_t1845040247 * (*) (Enumerator_t911391570 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Point>::GetEnumerator()
#define List_1_GetEnumerator_m3673851913(__this, method) ((  Enumerator_t104404772  (*) (List_1_t2510128191 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<Point>::get_Current()
#define Enumerator_get_Current_m107143752(__this, method) ((  Point_t1038053449 * (*) (Enumerator_t104404772 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Point>::MoveNext()
#define Enumerator_MoveNext_m836587678(__this, method) ((  bool (*) (Enumerator_t104404772 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Point>::Dispose()
#define Enumerator_Dispose_m659273532(__this, method) ((  void (*) (Enumerator_t104404772 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1/Enumerator<Stage>::MoveNext()
#define Enumerator_MoveNext_m2400404883(__this, method) ((  bool (*) (Enumerator_t911391570 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<Stage>::Dispose()
#define Enumerator_Dispose_m2106687285(__this, method) ((  void (*) (Enumerator_t911391570 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// System.Void JSONParser::SaveResources(StageData)
extern "C"  void JSONParser_SaveResources_m3830451285 (RuntimeObject * __this /* static, unused */, StageData_t251497815 * ___stageData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Object::.ctor()
extern "C"  void Object__ctor_m297566312 (RuntimeObject * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EndPanel::PlayAnimation(System.Single)
extern "C"  void EndPanel_PlayAnimation_m1386632741 (EndPanel_t2070267055 * __this, float ___delay0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EndPanel::IPlayEndSequence(System.Single)
extern "C"  RuntimeObject* EndPanel_IPlayEndSequence_m2667675806 (EndPanel_t2070267055 * __this, float ___delay0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
extern "C"  Coroutine_t3829159415 * MonoBehaviour_StartCoroutine_m3411253000 (MonoBehaviour_t3962482529 * __this, RuntimeObject* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EndPanel/<IPlayEndSequence>c__Iterator0::.ctor()
extern "C"  void U3CIPlayEndSequenceU3Ec__Iterator0__ctor_m2589333097 (U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EndPanel/<IMoveRect>c__Iterator1::.ctor()
extern "C"  void U3CIMoveRectU3Ec__Iterator1__ctor_m22941572 (U3CIMoveRectU3Ec__Iterator1_t1700463851 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EndPanel/<IScaleRect>c__Iterator2::.ctor()
extern "C"  void U3CIScaleRectU3Ec__Iterator2__ctor_m923793539 (U3CIScaleRectU3Ec__Iterator2_t3801923336 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EndPanel/<IFadeImage>c__Iterator3::.ctor()
extern "C"  void U3CIFadeImageU3Ec__Iterator3__ctor_m3674287814 (U3CIFadeImageU3Ec__Iterator3_t2878897811 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EndPanel/<IPopScale>c__Iterator4::.ctor()
extern "C"  void U3CIPopScaleU3Ec__Iterator4__ctor_m4090061044 (U3CIPopScaleU3Ec__Iterator4_t3413360195 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Time::get_deltaTime()
extern "C"  float Time_get_deltaTime_m372706562 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
extern "C"  float Mathf_Lerp_m1004423579 (RuntimeObject * __this /* static, unused */, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
extern "C"  void WaitForEndOfFrame__ctor_m1381314187 (WaitForEndOfFrame_t1314943911 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.NotSupportedException::.ctor()
extern "C"  void NotSupportedException__ctor_m2730133172 (NotSupportedException_t1314879016 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
extern "C"  Vector2_t2156229523  RectTransform_get_anchoredPosition_m1813443094 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::Lerp(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
extern "C"  Vector2_t2156229523  Vector2_Lerp_m854472224 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, Vector2_t2156229523  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
extern "C"  void RectTransform_set_anchoredPosition_m4126691837 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C"  void WaitForSeconds__ctor_m2199082655 (WaitForSeconds_t1699091251 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
extern "C"  void GameObject_SetActive_m796801857 (GameObject_t1113636619 * __this, bool p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EndPanel::IFadeImage(UnityEngine.UI.Image,System.Single,System.Single)
extern "C"  RuntimeObject* EndPanel_IFadeImage_m2328497366 (EndPanel_t2070267055 * __this, Image_t2670269651 * ___image0, float ___alpha1, float ___speed2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
extern "C"  RectTransform_t3704657025 * Graphic_get_rectTransform_m1167152468 (Graphic_t1660335611 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
extern "C"  void Vector2__ctor_m3970636864 (Vector2_t2156229523 * __this, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EndPanel::IMoveRect(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single)
extern "C"  RuntimeObject* EndPanel_IMoveRect_m3711810308 (EndPanel_t2070267055 * __this, RectTransform_t3704657025 * ___rect0, Vector2_t2156229523  ___destination1, float ___speed2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageInfo::GetStartAmount()
extern "C"  int32_t StageInfo_GetStartAmount_m2338924739 (StageInfo_t2857013238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single StageInfo::GetTimeForStar(System.Int32)
extern "C"  float StageInfo_GetTimeForStar_m679637488 (StageInfo_t2857013238 * __this, int32_t ___star0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String StageInfo::GetTimeString(System.Single,System.String,System.String)
extern "C"  String_t* StageInfo_GetTimeString_m3819379987 (StageInfo_t2857013238 * __this, float ___time0, String_t* ___minSufix1, String_t* ___secSufix2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String StageInfo::GetTimeString(System.String,System.String)
extern "C"  String_t* StageInfo_GetTimeString_m957071269 (StageInfo_t2857013238 * __this, String_t* ___minSufix0, String_t* ___secSufix1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EndPanel::IPopScale(UnityEngine.RectTransform,System.Single,System.Single,System.Single)
extern "C"  RuntimeObject* EndPanel_IPopScale_m158583595 (EndPanel_t2070267055 * __this, RectTransform_t3704657025 * ___rect0, float ___normal1, float ___pop2, float ___speed3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void AudioPlayer::PlayAudio(AudioSFX,System.Single)
extern "C"  void AudioPlayer_PlayAudio_m3596100579 (AudioPlayer_t2934167794 * __this, int32_t ___id0, float ___pitch1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator EndPanel::IScaleRect(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  RuntimeObject* EndPanel_IScaleRect_m3835188359 (EndPanel_t2070267055 * __this, RectTransform_t3704657025 * ___rect0, float ___scale1, float ___speed2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
extern "C"  Vector3_t3722313464  Transform_get_localScale_m129152068 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
extern "C"  Vector3_t3722313464  Vector3_get_one_m1629952498 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_op_Multiply_m3376773913 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector3_t3722313464  Vector3_Lerp_m407887542 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, Vector3_t3722313464  p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
extern "C"  void Transform_set_localScale_m3053443106 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameplayTransitions::IFadeRect(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  RuntimeObject* GameplayTransitions_IFadeRect_m907006305 (GameplayTransitions_t431761729 * __this, RectTransform_t3704657025 * ___rect0, float ___height1, float ___speed2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameplayTransitions::IFadeAndLoadScene(System.String)
extern "C"  RuntimeObject* GameplayTransitions_IFadeAndLoadScene_m653410608 (GameplayTransitions_t431761729 * __this, String_t* ___sceneName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
extern "C"  Scene_t2348375561  SceneManager_GetActiveScene_m1825203488 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_name()
extern "C"  String_t* Scene_get_name_m622963475 (Scene_t2348375561 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameplayTransitions::FadeAndLoadScene(System.String)
extern "C"  void GameplayTransitions_FadeAndLoadScene_m2930887448 (GameplayTransitions_t431761729 * __this, String_t* ___sceneName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::.ctor()
extern "C"  void U3CIFadeAndLoadSceneU3Ec__Iterator0__ctor_m2947427921 (U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void GameplayTransitions/<IFadeRect>c__Iterator1::.ctor()
extern "C"  void U3CIFadeRectU3Ec__Iterator1__ctor_m3941750016 (U3CIFadeRectU3Ec__Iterator1_t767004030 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
extern "C"  Vector2_t2156229523  RectTransform_get_sizeDelta_m2183112744 (RectTransform_t3704657025 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
extern "C"  void SceneManager_LoadScene_m1758133949 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
extern "C"  void RectTransform_set_sizeDelta_m3462269772 (RectTransform_t3704657025 * __this, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator HelpBubble::IShowBubble(System.Boolean,System.Single)
extern "C"  RuntimeObject* HelpBubble_IShowBubble_m622073866 (HelpBubble_t570266065 * __this, bool ___show0, float ___speed1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void HelpBubble/<IShowBubble>c__Iterator0::.ctor()
extern "C"  void U3CIShowBubbleU3Ec__Iterator0__ctor_m2940427812 (U3CIShowBubbleU3Ec__Iterator0_t2610264614 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
extern "C"  Vector3_t3722313464  Vector3_get_zero_m1409827619 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
extern "C"  Object_t631007953 * Resources_Load_m3880010804 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.JsonUtility::FromJson<StageData>(System.String)
#define JsonUtility_FromJson_TisStageData_t251497815_m2539850222(__this /* static, unused */, p0, method) ((  StageData_t251497815 * (*) (RuntimeObject * /* static, unused */, String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1405553448_gshared)(__this /* static, unused */, p0, method)
// System.String UnityEngine.JsonUtility::ToJson(System.Object)
extern "C"  String_t* JsonUtility_ToJson_m3644929270 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Application::get_dataPath()
extern "C"  String_t* Application_get_dataPath_m4232621142 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String)
extern "C"  String_t* String_Concat_m3937257545 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.File::WriteAllText(System.String,System.String)
extern "C"  void File_WriteAllText_m167356635 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuClouds::Setup()
extern "C"  void MenuClouds_Setup_m4167529796 (MenuClouds_t4198924910 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Resolution UnityEngine.Screen::get_currentResolution()
extern "C"  Resolution_t2487619763  Screen_get_currentResolution_m1680624610 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Resolution::get_width()
extern "C"  int32_t Resolution_get_width_m400677188 (Resolution_t2487619763 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Resolution::get_height()
extern "C"  int32_t Resolution_get_height_m933996501 (Resolution_t2487619763 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuClouds::IAnimateCloud(UnityEngine.UI.Image,System.Single,System.Single,System.Single,System.Single)
extern "C"  RuntimeObject* MenuClouds_IAnimateCloud_m607291686 (MenuClouds_t4198924910 * __this, Image_t2670269651 * ___cloud0, float ___xMin1, float ___xMax2, float ___yMin3, float ___yMax4, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuClouds/<IAnimateCloud>c__Iterator0::.ctor()
extern "C"  void U3CIAnimateCloudU3Ec__Iterator0__ctor_m1112974102 (U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
extern "C"  float Random_Range_m2202990745 (RuntimeObject * __this /* static, unused */, float p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
extern "C"  int32_t Random_Range_m4054026115 (RuntimeObject * __this /* static, unused */, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
extern "C"  float Mathf_Clamp01_m56433566 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
extern "C"  Vector2_t2156229523  Vector2_get_zero_m540426400 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::Setup()
extern "C"  void MenuFlowManager_Setup_m838475575 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::HideTitle(System.Single)
extern "C"  void MenuFlowManager_HideTitle_m3170754055 (MenuFlowManager_t1614880941 * __this, float ___speed0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::ChangePanel(System.Int32)
extern "C"  void MenuFlowManager_ChangePanel_m248027790 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::IFadeImage(UnityEngine.UI.Image,System.Single,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IFadeImage_m3217344465 (MenuFlowManager_t1614880941 * __this, Image_t2670269651 * ___image0, float ___height1, float ___speed2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
extern "C"  bool Input_GetKeyDown_m17791917 (RuntimeObject * __this /* static, unused */, int32_t p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Application::Quit()
extern "C"  void Application_Quit_m470877999 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::FadeAndChangePanel(System.Int32)
extern "C"  void MenuFlowManager_FadeAndChangePanel_m1298059106 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::ShowTitle()
extern "C"  void MenuFlowManager_ShowTitle_m2941382879 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::PlayClickSound()
extern "C"  void MenuFlowManager_PlayClickSound_m2133418347 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::HideTipPanel()
extern "C"  void MenuFlowManager_HideTipPanel_m3589008205 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::StopTipClip()
extern "C"  void MenuFlowManager_StopTipClip_m2882255584 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::IFadeAndChangePanel(System.Int32)
extern "C"  RuntimeObject* MenuFlowManager_IFadeAndChangePanel_m1870868 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Int32 StageInfo::GetWorldID()
extern "C"  int32_t StageInfo_GetWorldID_m2363233804 (StageInfo_t2857013238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::Stop()
extern "C"  void AudioSource_Stop_m2682712816 (AudioSource_t3935305588 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void MenuFlowManager::ShowTitle(System.Single)
extern "C"  void MenuFlowManager_ShowTitle_m3496804772 (MenuFlowManager_t1614880941 * __this, float ___speed0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::IMoveTitle(System.Single,System.Single,System.Single,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IMoveTitle_m881204112 (MenuFlowManager_t1614880941 * __this, float ___pos_title0, float ___pos_sky1, float ___pos_levels2, float ___speed3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager/<IMoveTitle>c__Iterator4::.ctor()
extern "C"  void U3CIMoveTitleU3Ec__Iterator4__ctor_m3054799051 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuFlowManager::ISetTipPanel(System.Single)
extern "C"  RuntimeObject* MenuFlowManager_ISetTipPanel_m1650888798 (MenuFlowManager_t1614880941 * __this, float ___destScale0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager/<ISetTipPanel>c__Iterator5::.ctor()
extern "C"  void U3CISetTipPanelU3Ec__Iterator5__ctor_m1747929998 (U3CISetTipPanelU3Ec__Iterator5_t956795441 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
extern "C"  Vector3_t3722313464  Vector2_op_Implicit_m1860157806 (RuntimeObject * __this /* static, unused */, Vector2_t2156229523  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
extern "C"  Vector2_t2156229523  Vector2_op_Implicit_m4260192859 (RuntimeObject * __this /* static, unused */, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip,System.Single)
extern "C"  void AudioSource_PlayOneShot_m2678069419 (AudioSource_t3935305588 * __this, AudioClip_t3680889665 * p0, float p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::Setup()
extern "C"  void MenuLevelButton_Setup_m3441281685 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString(System.String)
extern "C"  String_t* Int32_ToString_m372259452 (int32_t* __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m3755062657 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object[])
extern "C"  String_t* String_Concat_m2971454694 (RuntimeObject * __this /* static, unused */, ObjectU5BU5D_t2843939325* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
extern "C"  void MonoBehaviour_print_m330341231 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::ActivateSelf(System.Boolean)
extern "C"  void MenuLevelButton_ActivateSelf_m1538653098 (MenuLevelButton_t3559006541 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::ShowStarts(System.Int32)
extern "C"  void MenuLevelButton_ShowStarts_m3471610984 (MenuLevelButton_t3559006541 * __this, int32_t ___amount0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::ShowLevelCount()
extern "C"  void MenuLevelButton_ShowLevelCount_m1856586175 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::StartPulse()
extern "C"  void MenuLevelButton_StartPulse_m732904399 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::StopPulse()
extern "C"  void MenuLevelButton_StopPulse_m1390356242 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Color::get_white()
extern "C"  Color_t2555686324  Color_get_white_m332174077 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageInfo::GetLevelCount(System.Int32)
extern "C"  int32_t StageInfo_GetLevelCount_m2994796715 (StageInfo_t2857013238 * __this, int32_t ___worldID0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
extern "C"  String_t* String_Concat_m2163913788 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, String_t* p2, String_t* p3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
extern "C"  bool GameObject_get_activeSelf_m1767405923 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton::DoSinglePulse()
extern "C"  void MenuLevelButton_DoSinglePulse_m2171373596 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::SelectWorld(System.Int32)
extern "C"  void MenuFlowManager_SelectWorld_m4120408508 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::SelectLevel(System.Int32)
extern "C"  void MenuFlowManager_SelectLevel_m1642849559 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator MenuLevelButton::IPulse(System.Single,System.Boolean)
extern "C"  RuntimeObject* MenuLevelButton_IPulse_m2191181185 (MenuLevelButton_t3559006541 * __this, float ___speed0, bool ___loop1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::get_transform()
extern "C"  Transform_t3600365921 * Component_get_transform_m3162698980 (Component_t1923634451 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
extern "C"  void MonoBehaviour_StopCoroutine_m907039165 (MonoBehaviour_t3962482529 * __this, Coroutine_t3829159415 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelButton/<IPulse>c__Iterator0::.ctor()
extern "C"  void U3CIPulseU3Ec__Iterator0__ctor_m3283826807 (U3CIPulseU3Ec__Iterator0_t2453214028 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuLevelScreen::OrganizeLevelScreen()
extern "C"  void MenuLevelScreen_OrganizeLevelScreen_m3344403122 (MenuLevelScreen_t2132622692 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean StageInfo::LevelExists(System.String)
extern "C"  bool StageInfo_LevelExists_m3960227236 (StageInfo_t2857013238 * __this, String_t* ___levelName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
extern "C"  Quaternion_t2301928331  Quaternion_get_identity_m3722672781 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1113636619_m3006960551(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1113636619 * (*) (RuntimeObject * /* static, unused */, GameObject_t1113636619 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void PauseMenu::HideMenu()
extern "C"  void PauseMenu_HideMenu_m2870079875 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseMenu::ShowMenu()
extern "C"  void PauseMenu_ShowMenu_m3564380446 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void EndPanel::PlayEndAnimation(System.Single)
extern "C"  void EndPanel_PlayEndAnimation_m1188432607 (RuntimeObject * __this /* static, unused */, float ___delay0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StepChecker::CheckMarkAtIndex(System.Int32)
extern "C"  void StepChecker_CheckMarkAtIndex_m3141407165 (RuntimeObject * __this /* static, unused */, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PauseMenu::IHidePanel(System.Boolean,System.Single)
extern "C"  RuntimeObject* PauseMenu_IHidePanel_m1252136598 (PauseMenu_t3916167947 * __this, bool ___value0, float ___time1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PauseMenu::IFadeBG(System.Single,System.Single)
extern "C"  RuntimeObject* PauseMenu_IFadeBG_m496742413 (PauseMenu_t3916167947 * __this, float ___alpha0, float ___speed1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PauseMenu::IMoveButton(PauseMenuButton,System.Boolean,System.Single)
extern "C"  RuntimeObject* PauseMenu_IMoveButton_m3998061770 (PauseMenu_t3916167947 * __this, PauseMenuButton_t2049395553 * ___button0, bool ___show1, float ___speed2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseMenu/<IHidePanel>c__Iterator0::.ctor()
extern "C"  void U3CIHidePanelU3Ec__Iterator0__ctor_m48949479 (U3CIHidePanelU3Ec__Iterator0_t1813140080 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseMenu/<IFadeBG>c__Iterator1::.ctor()
extern "C"  void U3CIFadeBGU3Ec__Iterator1__ctor_m4221527533 (U3CIFadeBGU3Ec__Iterator1_t4004556069 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PauseMenu/<IMoveButton>c__Iterator2::.ctor()
extern "C"  void U3CIMoveButtonU3Ec__Iterator2__ctor_m791223576 (U3CIMoveButtonU3Ec__Iterator2_t2280749436 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PF::SetColor()
extern "C"  void PF_SetColor_m3601946841 (PF_t166272826 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ColorUtility::TryParseHtmlString(System.String,UnityEngine.Color&)
extern "C"  bool ColorUtility_TryParseHtmlString_m1532239634 (RuntimeObject * __this /* static, unused */, String_t* p0, Color_t2555686324 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m4051431634 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void PF::SetColorOnComponents(UnityEngine.Color)
extern "C"  void PF_SetColorOnComponents_m2208196986 (PF_t166272826 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
#define GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(__this, method) ((  SpriteRenderer_t3235626157 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
extern "C"  void SpriteRenderer_set_color_m3056777566 (SpriteRenderer_t3235626157 * __this, Color_t2555686324  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollManager::loadPFs()
extern "C"  void ScrollManager_loadPFs_m1716982294 (ScrollManager_t2903461311 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<PF>::GetEnumerator()
#define List_1_GetEnumerator_m3886182746(__this, method) ((  Enumerator_t3527591445  (*) (List_1_t1638347568 *, const RuntimeMethod*))List_1_GetEnumerator_m2930774921_gshared)(__this, method)
// !0 System.Collections.Generic.List`1/Enumerator<PF>::get_Current()
#define Enumerator_get_Current_m3702177537(__this, method) ((  PF_t166272826 * (*) (Enumerator_t3527591445 *, const RuntimeMethod*))Enumerator_get_Current_m470245444_gshared)(__this, method)
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
extern "C"  Transform_t3600365921 * GameObject_get_transform_m1369836730 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<Option>(!!0,UnityEngine.Transform)
#define Object_Instantiate_TisOption_t3411289914_m3769806585(__this /* static, unused */, p0, p1, method) ((  Option_t3411289914 * (*) (RuntimeObject * /* static, unused */, Option_t3411289914 *, Transform_t3600365921 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1061214600_gshared)(__this /* static, unused */, p0, p1, method)
// System.Void ScrollManager::setPF(Option,PF)
extern "C"  void ScrollManager_setPF_m1785322983 (ScrollManager_t2903461311 * __this, Option_t3411289914 * ___newPF0, PF_t166272826 * ___scenePF1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollManager::addEventTrigger(Option,System.Int32)
extern "C"  void ScrollManager_addEventTrigger_m2813815451 (ScrollManager_t2903461311 * __this, Option_t3411289914 * ___newPF0, int32_t ___index1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.List`1/Enumerator<PF>::MoveNext()
#define Enumerator_MoveNext_m2744082053(__this, method) ((  bool (*) (Enumerator_t3527591445 *, const RuntimeMethod*))Enumerator_MoveNext_m2142368520_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1/Enumerator<PF>::Dispose()
#define Enumerator_Dispose_m1048307249(__this, method) ((  void (*) (Enumerator_t3527591445 *, const RuntimeMethod*))Enumerator_Dispose_m3007748546_gshared)(__this, method)
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
extern "C"  Vector3_t3722313464  Transform_get_localPosition_m4234289348 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
extern "C"  GameObject_t1113636619 * GameObject_get_gameObject_m3693461266 (GameObject_t1113636619 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Transform::get_localEulerAngles()
extern "C"  Vector3_t3722313464  Transform_get_localEulerAngles_m2136926248 (Transform_t3600365921 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
extern "C"  void Transform_set_localEulerAngles_m4202601546 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollManager/<addEventTrigger>c__AnonStorey0::.ctor()
extern "C"  void U3CaddEventTriggerU3Ec__AnonStorey0__ctor_m2167869819 (U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Component::GetComponentInChildren<UnityEngine.EventSystems.EventTrigger>()
#define Component_GetComponentInChildren_TisEventTrigger_t1076084509_m1530465545(__this, method) ((  EventTrigger_t1076084509 * (*) (Component_t1923634451 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m1033527003_gshared)(__this, method)
// System.Void UnityEngine.EventSystems.EventTrigger/Entry::.ctor()
extern "C"  void Entry__ctor_m2653221409 (Entry_t3344766165 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.IntPtr)
#define UnityAction_1__ctor_m2138728059(__this, p0, p1, method) ((  void (*) (UnityAction_1_t192896378 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m2434317150_gshared)(__this, p0, p1, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.EventSystems.BaseEventData>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
#define UnityEvent_1_AddListener_m3152081749(__this, p0, method) ((  void (*) (UnityEvent_1_t489719741 *, UnityAction_1_t192896378 *, const RuntimeMethod*))UnityEvent_1_AddListener_m3703050833_gshared)(__this, p0, method)
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry> UnityEngine.EventSystems.EventTrigger::get_triggers()
extern "C"  List_1_t521873611 * EventTrigger_get_triggers_m968087715 (EventTrigger_t1076084509 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(!0)
#define List_1_Add_m35675040(__this, p0, method) ((  void (*) (List_1_t521873611 *, Entry_t3344766165 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
extern "C"  GameObject_t1113636619 * GameObject_Find_m2032535176 (RuntimeObject * __this /* static, unused */, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.GameObject::GetComponent<StageManager>()
#define GameObject_GetComponent_TisStageManager_t3296066545_m305820070(__this, method) ((  StageManager_t3296066545 * (*) (GameObject_t1113636619 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m2049753423_gshared)(__this, method)
// System.Void StageManager::SelectPF(System.Int32)
extern "C"  void StageManager_SelectPF_m2766879051 (StageManager_t3296066545 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollManager::selectOption(System.Int32)
extern "C"  void ScrollManager_selectOption_m1988178586 (ScrollManager_t2903461311 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageInfo::GetSavedStarAmount(System.Int32,System.Int32)
extern "C"  int32_t StageInfo_GetSavedStarAmount_m2316285987 (StageInfo_t2857013238 * __this, int32_t ___world0, int32_t ___stage1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
extern "C"  int32_t Mathf_FloorToInt_m1870542928 (RuntimeObject * __this /* static, unused */, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Int32::ToString()
extern "C"  String_t* Int32_ToString_m141394615 (int32_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<Stage>::get_Item(System.Int32)
#define List_1_get_Item_m444493417(__this, p0, method) ((  Stage_t1845040247 * (*) (List_1_t3317114989 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// System.Int32 System.String::Compare(System.String,System.String)
extern "C"  int32_t String_Compare_m3735043349 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.List`1<Stage>::get_Count()
#define List_1_get_Count_m2511544463(__this, method) ((  int32_t (*) (List_1_t3317114989 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
// System.Int32 System.String::get_Length()
extern "C"  int32_t String_get_Length_m3847582255 (String_t* __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Substring(System.Int32,System.Int32)
extern "C"  String_t* String_Substring_m1610150815 (String_t* __this, int32_t p0, int32_t p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void MenuFlowManager::SetLastPanel(System.Int32)
extern "C"  void MenuFlowManager_SetLastPanel_m2599473069 (RuntimeObject * __this /* static, unused */, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// Stage StageManager::FindStage(StageData)
extern "C"  Stage_t1845040247 * StageManager_FindStage_m117108134 (StageManager_t3296066545 * __this, StageData_t251497815 * ___stageData0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
extern "C"  Type_t * Type_GetTypeFromHandle_m1620074514 (RuntimeObject * __this /* static, unused */, RuntimeTypeHandle_t3027515415  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
extern "C"  Object_t631007953 * Resources_Load_m3480190876 (RuntimeObject * __this /* static, unused */, String_t* p0, Type_t * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
extern "C"  void SpriteRenderer_set_sprite_m1286893786 (SpriteRenderer_t3235626157 * __this, Sprite_t280657092 * p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::SetupHLFromJSON()
extern "C"  void StageManager_SetupHLFromJSON_m3096444899 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::SetupPFsFromJSON()
extern "C"  void StageManager_SetupPFsFromJSON_m1347357461 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Int32 StageInfo::GetStageID()
extern "C"  int32_t StageInfo_GetStageID_m210931970 (StageInfo_t2857013238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.String::op_Equality(System.String,System.String)
extern "C"  bool String_op_Equality_m920492651 (RuntimeObject * __this /* static, unused */, String_t* p0, String_t* p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void Stage::.ctor()
extern "C"  void Stage__ctor_m4059895171 (Stage_t1845040247 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
extern "C"  void Transform_set_localPosition_m4128471975 (Transform_t3600365921 * __this, Vector3_t3722313464  p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !!0 UnityEngine.Object::Instantiate<PF>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisPF_t166272826_m253699196(__this /* static, unused */, p0, p1, p2, method) ((  PF_t166272826 * (*) (RuntimeObject * /* static, unused */, PF_t166272826 *, Vector3_t3722313464 , Quaternion_t2301928331 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m1135049463_gshared)(__this /* static, unused */, p0, p1, p2, method)
// System.Void PF::Setup(System.Int32)
extern "C"  void PF_Setup_m159701545 (PF_t166272826 * __this, int32_t ___id0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
extern "C"  void Vector3__ctor_m3353183577 (Vector3_t3722313464 * __this, float p0, float p1, float p2, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager::setLine(UnityEngine.GameObject,Element)
extern "C"  void StageManager_setLine_m202802628 (StageManager_t3296066545 * __this, GameObject_t1113636619 * ___line0, Element_t769398275 * ___jsonLine1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Add(!0)
#define List_1_Add_m1524640104(__this, p0, method) ((  void (*) (List_1_t899420910 *, Vector3_t3722313464 , const RuntimeMethod*))List_1_Add_m1524640104_gshared)(__this, p0, method)
// System.Void System.Collections.Generic.List`1<PF>::Add(!0)
#define List_1_Add_m1377909232(__this, p0, method) ((  void (*) (List_1_t1638347568 *, PF_t166272826 *, const RuntimeMethod*))List_1_Add_m3338814081_gshared)(__this, p0, method)
// System.Int32 System.Collections.Generic.List`1<Point>::get_Count()
#define List_1_get_Count_m1440737880(__this, method) ((  int32_t (*) (List_1_t2510128191 *, const RuntimeMethod*))List_1_get_Count_m2934127733_gshared)(__this, method)
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
// System.Void StageManager::setupCanvas()
extern "C"  void StageManager_setupCanvas_m1599180444 (StageManager_t3296066545 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.CanvasGroup::set_alpha(System.Single)
extern "C"  void CanvasGroup_set_alpha_m4032573 (CanvasGroup_t4083511760 * __this, float p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
extern "C"  Color_t2555686324  SpriteRenderer_get_color_m904197748 (SpriteRenderer_t3235626157 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void StageInfo::SetStageInfo(System.Single)
extern "C"  void StageInfo_SetStageInfo_m1652981700 (StageInfo_t2857013238 * __this, float ___time0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageInfo::SaveLevelStarAmount()
extern "C"  void StageInfo_SaveLevelStarAmount_m3256426961 (StageInfo_t2857013238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageInfo::UnlockNextLevel()
extern "C"  void StageInfo_UnlockNextLevel_m645837895 (StageInfo_t2857013238 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StageManager/<BackToMenu>c__Iterator0::.ctor()
extern "C"  void U3CBackToMenuU3Ec__Iterator0__ctor_m1262886672 (U3CBackToMenuU3Ec__Iterator0_t1978105360 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// !0 System.Collections.Generic.List`1<PF>::get_Item(System.Int32)
#define List_1_get_Item_m3513474579(__this, p0, method) ((  PF_t166272826 * (*) (List_1_t1638347568 *, int32_t, const RuntimeMethod*))List_1_get_Item_m2287542950_gshared)(__this, p0, method)
// !0 System.Collections.Generic.List`1<UnityEngine.Vector3>::get_Item(System.Int32)
#define List_1_get_Item_m200663048(__this, p0, method) ((  Vector3_t3722313464  (*) (List_1_t899420910 *, int32_t, const RuntimeMethod*))List_1_get_Item_m200663048_gshared)(__this, p0, method)
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
// System.Int32 UnityEngine.Screen::get_height()
extern "C"  int32_t Screen_get_height_m1623532518 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void StepChecker::CheckMark(System.Int32)
extern "C"  void StepChecker_CheckMark_m2313278227 (StepChecker_t1301311235 * __this, int32_t ___index0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator StepChecker::IPopMark(System.Int32,System.Single,System.Single,System.Single)
extern "C"  RuntimeObject* StepChecker_IPopMark_m3907283909 (StepChecker_t1301311235 * __this, int32_t ___index0, float ___normal1, float ___pop2, float ___speed3, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void StepChecker/<IPopMark>c__Iterator0::.ctor()
extern "C"  void U3CIPopMarkU3Ec__Iterator0__ctor_m955372422 (U3CIPopMarkU3Ec__Iterator0_t3268555169 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
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
// System.Void AudioPlayer::.ctor()
extern "C"  void AudioPlayer__ctor_m959948675 (AudioPlayer_t2934167794 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void AudioPlayer::Awake()
extern "C"  void AudioPlayer_Awake_m3366530723 (AudioPlayer_t2934167794 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioPlayer_Awake_m3366530723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		AudioPlayer_t2934167794 * L_0 = ((AudioPlayer_t2934167794_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_t2934167794_il2cpp_TypeInfo_var))->get_instance_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		((AudioPlayer_t2934167794_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_t2934167794_il2cpp_TypeInfo_var))->set_instance_2(__this);
		goto IL_0036;
	}

IL_001b:
	{
		AudioPlayer_t2934167794 * L_2 = ((AudioPlayer_t2934167794_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_t2934167794_il2cpp_TypeInfo_var))->get_instance_2();
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
// System.Void AudioPlayer::PlayAudio(AudioSFX,System.Single)
extern "C"  void AudioPlayer_PlayAudio_m3596100579 (AudioPlayer_t2934167794 * __this, int32_t ___id0, float ___pitch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AudioPlayer_PlayAudio_m3596100579_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___id0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		int32_t L_2 = V_0;
		AudioClipU5BU5D_t143221404* L_3 = __this->get_audioClips_4();
		NullCheck(L_3);
		if ((((int32_t)L_2) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_3)->max_length)))))))
		{
			goto IL_0047;
		}
	}
	{
		AudioSource_t3935305588 * L_4 = __this->get_aSrc_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_4, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		AudioSource_t3935305588 * L_6 = __this->get_aSrc_3();
		float L_7 = ___pitch1;
		NullCheck(L_6);
		AudioSource_set_pitch_m2413801168(L_6, L_7, /*hidden argument*/NULL);
		AudioSource_t3935305588 * L_8 = __this->get_aSrc_3();
		AudioClipU5BU5D_t143221404* L_9 = __this->get_audioClips_4();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		AudioClip_t3680889665 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		AudioSource_PlayOneShot_m1688286683(L_8, L_12, /*hidden argument*/NULL);
	}

IL_0047:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void EditorManager::.ctor()
extern "C"  void EditorManager__ctor_m1377198835 (EditorManager_t888126012 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EditorManager::Start()
extern "C"  void EditorManager_Start_m2470385893 (EditorManager_t888126012 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void EditorManager::BuildStage()
extern "C"  void EditorManager_BuildStage_m2285734006 (EditorManager_t888126012 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EditorManager_BuildStage_m2285734006_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StageData_t251497815 * V_0 = NULL;
	Stage_t1845040247 * V_1 = NULL;
	Enumerator_t911391570  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Point_t1038053449 * V_3 = NULL;
	Enumerator_t104404772  V_4;
	memset(&V_4, 0, sizeof(V_4));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		StageData_t251497815 * L_0 = JSONParser_LoadResources_m3124311211(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		StageData_t251497815 * L_1 = V_0;
		NullCheck(L_1);
		List_1_t3317114989 * L_2 = L_1->get_stages_0();
		NullCheck(L_2);
		Enumerator_t911391570  L_3 = List_1_GetEnumerator_m1203868866(L_2, /*hidden argument*/List_1_GetEnumerator_m1203868866_RuntimeMethod_var);
		V_2 = L_3;
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0090;
		}

IL_0017:
		{
			Stage_t1845040247 * L_4 = Enumerator_get_Current_m3768177764((&V_2), /*hidden argument*/Enumerator_get_Current_m3768177764_RuntimeMethod_var);
			V_1 = L_4;
			Stage_t1845040247 * L_5 = V_1;
			NullCheck(L_5);
			List_1_t2510128191 * L_6 = L_5->get_pfs_2();
			NullCheck(L_6);
			Enumerator_t104404772  L_7 = List_1_GetEnumerator_m3673851913(L_6, /*hidden argument*/List_1_GetEnumerator_m3673851913_RuntimeMethod_var);
			V_4 = L_7;
		}

IL_002c:
		try
		{ // begin try (depth: 2)
			{
				goto IL_0071;
			}

IL_0031:
			{
				Point_t1038053449 * L_8 = Enumerator_get_Current_m107143752((&V_4), /*hidden argument*/Enumerator_get_Current_m107143752_RuntimeMethod_var);
				V_3 = L_8;
				Point_t1038053449 * L_9 = V_3;
				NullCheck(L_9);
				Element_t769398275 * L_10 = L_9->get_pf_0();
				NullCheck(L_10);
				Vector3_t3722313464 * L_11 = L_10->get_address_of_position_0();
				Vector3_t3722313464 * L_12 = L_11;
				float L_13 = L_12->get_x_1();
				L_12->set_x_1(((float)il2cpp_codegen_add((float)L_13, (float)(2.138265f))));
				Point_t1038053449 * L_14 = V_3;
				NullCheck(L_14);
				Element_t769398275 * L_15 = L_14->get_pf_0();
				NullCheck(L_15);
				Vector3_t3722313464 * L_16 = L_15->get_address_of_position_0();
				Vector3_t3722313464 * L_17 = L_16;
				float L_18 = L_17->get_y_2();
				L_17->set_y_2(((float)il2cpp_codegen_subtract((float)L_18, (float)(0.438922f))));
			}

IL_0071:
			{
				bool L_19 = Enumerator_MoveNext_m836587678((&V_4), /*hidden argument*/Enumerator_MoveNext_m836587678_RuntimeMethod_var);
				if (L_19)
				{
					goto IL_0031;
				}
			}

IL_007d:
			{
				IL2CPP_LEAVE(0x90, FINALLY_0082);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0082;
		}

FINALLY_0082:
		{ // begin finally (depth: 2)
			Enumerator_Dispose_m659273532((&V_4), /*hidden argument*/Enumerator_Dispose_m659273532_RuntimeMethod_var);
			IL2CPP_END_FINALLY(130)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(130)
		{
			IL2CPP_JUMP_TBL(0x90, IL_0090)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0090:
		{
			bool L_20 = Enumerator_MoveNext_m2400404883((&V_2), /*hidden argument*/Enumerator_MoveNext_m2400404883_RuntimeMethod_var);
			if (L_20)
			{
				goto IL_0017;
			}
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xAF, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2106687285((&V_2), /*hidden argument*/Enumerator_Dispose_m2106687285_RuntimeMethod_var);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xAF, IL_00af)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00af:
	{
		StageData_t251497815 * L_21 = V_0;
		JSONParser_SaveResources_m3830451285(NULL /*static, unused*/, L_21, /*hidden argument*/NULL);
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
// System.Void Element::.ctor()
extern "C"  void Element__ctor_m3780076391 (Element_t769398275 * __this, const RuntimeMethod* method)
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
// System.Void EndPanel::.ctor()
extern "C"  void EndPanel__ctor_m4173573022 (EndPanel_t2070267055 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EndPanel::Awake()
extern "C"  void EndPanel_Awake_m3402875113 (EndPanel_t2070267055 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndPanel_Awake_m3402875113_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((EndPanel_t2070267055_StaticFields*)il2cpp_codegen_static_fields_for(EndPanel_t2070267055_il2cpp_TypeInfo_var))->set_manager_2(__this);
		return;
	}
}
// System.Void EndPanel::PlayEndAnimation(System.Single)
extern "C"  void EndPanel_PlayEndAnimation_m1188432607 (RuntimeObject * __this /* static, unused */, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndPanel_PlayEndAnimation_m1188432607_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		EndPanel_t2070267055 * L_0 = ((EndPanel_t2070267055_StaticFields*)il2cpp_codegen_static_fields_for(EndPanel_t2070267055_il2cpp_TypeInfo_var))->get_manager_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		EndPanel_t2070267055 * L_2 = ((EndPanel_t2070267055_StaticFields*)il2cpp_codegen_static_fields_for(EndPanel_t2070267055_il2cpp_TypeInfo_var))->get_manager_2();
		float L_3 = ___delay0;
		NullCheck(L_2);
		EndPanel_PlayAnimation_m1386632741(L_2, L_3, /*hidden argument*/NULL);
	}

IL_001b:
	{
		return;
	}
}
// System.Void EndPanel::PlayAnimation(System.Single)
extern "C"  void EndPanel_PlayAnimation_m1386632741 (EndPanel_t2070267055 * __this, float ___delay0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_playing_17();
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
		__this->set_playing_17((bool)1);
		float L_1 = ___delay0;
		RuntimeObject* L_2 = EndPanel_IPlayEndSequence_m2667675806(__this, L_1, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator EndPanel::IPlayEndSequence(System.Single)
extern "C"  RuntimeObject* EndPanel_IPlayEndSequence_m2667675806 (EndPanel_t2070267055 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndPanel_IPlayEndSequence_m2667675806_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * V_0 = NULL;
	{
		U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * L_0 = (U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 *)il2cpp_codegen_object_new(U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627_il2cpp_TypeInfo_var);
		U3CIPlayEndSequenceU3Ec__Iterator0__ctor_m2589333097(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * L_1 = V_0;
		float L_2 = ___delay0;
		NullCheck(L_1);
		L_1->set_delay_0(L_2);
		U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_3(__this);
		U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator EndPanel::IMoveRect(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single)
extern "C"  RuntimeObject* EndPanel_IMoveRect_m3711810308 (EndPanel_t2070267055 * __this, RectTransform_t3704657025 * ___rect0, Vector2_t2156229523  ___destination1, float ___speed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndPanel_IMoveRect_m3711810308_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIMoveRectU3Ec__Iterator1_t1700463851 * V_0 = NULL;
	{
		U3CIMoveRectU3Ec__Iterator1_t1700463851 * L_0 = (U3CIMoveRectU3Ec__Iterator1_t1700463851 *)il2cpp_codegen_object_new(U3CIMoveRectU3Ec__Iterator1_t1700463851_il2cpp_TypeInfo_var);
		U3CIMoveRectU3Ec__Iterator1__ctor_m22941572(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIMoveRectU3Ec__Iterator1_t1700463851 * L_1 = V_0;
		float L_2 = ___speed2;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIMoveRectU3Ec__Iterator1_t1700463851 * L_3 = V_0;
		RectTransform_t3704657025 * L_4 = ___rect0;
		NullCheck(L_3);
		L_3->set_rect_2(L_4);
		U3CIMoveRectU3Ec__Iterator1_t1700463851 * L_5 = V_0;
		Vector2_t2156229523  L_6 = ___destination1;
		NullCheck(L_5);
		L_5->set_destination_3(L_6);
		U3CIMoveRectU3Ec__Iterator1_t1700463851 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator EndPanel::IScaleRect(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  RuntimeObject* EndPanel_IScaleRect_m3835188359 (EndPanel_t2070267055 * __this, RectTransform_t3704657025 * ___rect0, float ___scale1, float ___speed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndPanel_IScaleRect_m3835188359_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIScaleRectU3Ec__Iterator2_t3801923336 * V_0 = NULL;
	{
		U3CIScaleRectU3Ec__Iterator2_t3801923336 * L_0 = (U3CIScaleRectU3Ec__Iterator2_t3801923336 *)il2cpp_codegen_object_new(U3CIScaleRectU3Ec__Iterator2_t3801923336_il2cpp_TypeInfo_var);
		U3CIScaleRectU3Ec__Iterator2__ctor_m923793539(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIScaleRectU3Ec__Iterator2_t3801923336 * L_1 = V_0;
		float L_2 = ___speed2;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIScaleRectU3Ec__Iterator2_t3801923336 * L_3 = V_0;
		RectTransform_t3704657025 * L_4 = ___rect0;
		NullCheck(L_3);
		L_3->set_rect_2(L_4);
		U3CIScaleRectU3Ec__Iterator2_t3801923336 * L_5 = V_0;
		float L_6 = ___scale1;
		NullCheck(L_5);
		L_5->set_scale_3(L_6);
		U3CIScaleRectU3Ec__Iterator2_t3801923336 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator EndPanel::IFadeImage(UnityEngine.UI.Image,System.Single,System.Single)
extern "C"  RuntimeObject* EndPanel_IFadeImage_m2328497366 (EndPanel_t2070267055 * __this, Image_t2670269651 * ___image0, float ___alpha1, float ___speed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndPanel_IFadeImage_m2328497366_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIFadeImageU3Ec__Iterator3_t2878897811 * V_0 = NULL;
	{
		U3CIFadeImageU3Ec__Iterator3_t2878897811 * L_0 = (U3CIFadeImageU3Ec__Iterator3_t2878897811 *)il2cpp_codegen_object_new(U3CIFadeImageU3Ec__Iterator3_t2878897811_il2cpp_TypeInfo_var);
		U3CIFadeImageU3Ec__Iterator3__ctor_m3674287814(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIFadeImageU3Ec__Iterator3_t2878897811 * L_1 = V_0;
		float L_2 = ___speed2;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIFadeImageU3Ec__Iterator3_t2878897811 * L_3 = V_0;
		Image_t2670269651 * L_4 = ___image0;
		NullCheck(L_3);
		L_3->set_image_2(L_4);
		U3CIFadeImageU3Ec__Iterator3_t2878897811 * L_5 = V_0;
		float L_6 = ___alpha1;
		NullCheck(L_5);
		L_5->set_alpha_4(L_6);
		U3CIFadeImageU3Ec__Iterator3_t2878897811 * L_7 = V_0;
		return L_7;
	}
}
// System.Collections.IEnumerator EndPanel::IPopScale(UnityEngine.RectTransform,System.Single,System.Single,System.Single)
extern "C"  RuntimeObject* EndPanel_IPopScale_m158583595 (EndPanel_t2070267055 * __this, RectTransform_t3704657025 * ___rect0, float ___normal1, float ___pop2, float ___speed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EndPanel_IPopScale_m158583595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIPopScaleU3Ec__Iterator4_t3413360195 * V_0 = NULL;
	{
		U3CIPopScaleU3Ec__Iterator4_t3413360195 * L_0 = (U3CIPopScaleU3Ec__Iterator4_t3413360195 *)il2cpp_codegen_object_new(U3CIPopScaleU3Ec__Iterator4_t3413360195_il2cpp_TypeInfo_var);
		U3CIPopScaleU3Ec__Iterator4__ctor_m4090061044(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIPopScaleU3Ec__Iterator4_t3413360195 * L_1 = V_0;
		float L_2 = ___speed3;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIPopScaleU3Ec__Iterator4_t3413360195 * L_3 = V_0;
		RectTransform_t3704657025 * L_4 = ___rect0;
		NullCheck(L_3);
		L_3->set_rect_2(L_4);
		U3CIPopScaleU3Ec__Iterator4_t3413360195 * L_5 = V_0;
		float L_6 = ___pop2;
		NullCheck(L_5);
		L_5->set_pop_3(L_6);
		U3CIPopScaleU3Ec__Iterator4_t3413360195 * L_7 = V_0;
		float L_8 = ___normal1;
		NullCheck(L_7);
		L_7->set_normal_4(L_8);
		U3CIPopScaleU3Ec__Iterator4_t3413360195 * L_9 = V_0;
		return L_9;
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
// System.Void EndPanel/<IFadeImage>c__Iterator3::.ctor()
extern "C"  void U3CIFadeImageU3Ec__Iterator3__ctor_m3674287814 (U3CIFadeImageU3Ec__Iterator3_t2878897811 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EndPanel/<IFadeImage>c__Iterator3::MoveNext()
extern "C"  bool U3CIFadeImageU3Ec__Iterator3_MoveNext_m1362718675 (U3CIFadeImageU3Ec__Iterator3_t2878897811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeImageU3Ec__Iterator3_MoveNext_m1362718675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00b2;
			}
		}
	}
	{
		goto IL_00c9;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_00b2;
	}

IL_0031:
	{
		float L_2 = __this->get_U3ClerpU3E__0_0();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_1();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		Image_t2670269651 * L_5 = __this->get_image_2();
		NullCheck(L_5);
		Color_t2555686324  L_6 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_5);
		__this->set_U3CcU3E__1_3(L_6);
		Color_t2555686324 * L_7 = __this->get_address_of_U3CcU3E__1_3();
		Color_t2555686324 * L_8 = __this->get_address_of_U3CcU3E__1_3();
		float L_9 = L_8->get_a_3();
		float L_10 = __this->get_alpha_4();
		float L_11 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		L_7->set_a_3(L_12);
		Image_t2670269651 * L_13 = __this->get_image_2();
		Color_t2555686324  L_14 = __this->get_U3CcU3E__1_3();
		NullCheck(L_13);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_14);
		WaitForEndOfFrame_t1314943911 * L_15 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_15, /*hidden argument*/NULL);
		__this->set_U24current_5(L_15);
		bool L_16 = __this->get_U24disposing_6();
		if (L_16)
		{
			goto IL_00ad;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_00ad:
	{
		goto IL_00cb;
	}

IL_00b2:
	{
		float L_17 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_17) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_00c9:
	{
		return (bool)0;
	}

IL_00cb:
	{
		return (bool)1;
	}
}
// System.Object EndPanel/<IFadeImage>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIFadeImageU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2457504806 (U3CIFadeImageU3Ec__Iterator3_t2878897811 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object EndPanel/<IFadeImage>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIFadeImageU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m3041573029 (U3CIFadeImageU3Ec__Iterator3_t2878897811 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void EndPanel/<IFadeImage>c__Iterator3::Dispose()
extern "C"  void U3CIFadeImageU3Ec__Iterator3_Dispose_m133615544 (U3CIFadeImageU3Ec__Iterator3_t2878897811 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void EndPanel/<IFadeImage>c__Iterator3::Reset()
extern "C"  void U3CIFadeImageU3Ec__Iterator3_Reset_m4211831438 (U3CIFadeImageU3Ec__Iterator3_t2878897811 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeImageU3Ec__Iterator3_Reset_m4211831438_MetadataUsageId);
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
// System.Void EndPanel/<IMoveRect>c__Iterator1::.ctor()
extern "C"  void U3CIMoveRectU3Ec__Iterator1__ctor_m22941572 (U3CIMoveRectU3Ec__Iterator1_t1700463851 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EndPanel/<IMoveRect>c__Iterator1::MoveNext()
extern "C"  bool U3CIMoveRectU3Ec__Iterator1_MoveNext_m3364727981 (U3CIMoveRectU3Ec__Iterator1_t1700463851 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIMoveRectU3Ec__Iterator1_MoveNext_m3364727981_MetadataUsageId);
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
				goto IL_0090;
			}
		}
	}
	{
		goto IL_00a7;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_0090;
	}

IL_0031:
	{
		float L_2 = __this->get_U3ClerpU3E__0_0();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_1();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		RectTransform_t3704657025 * L_5 = __this->get_rect_2();
		RectTransform_t3704657025 * L_6 = __this->get_rect_2();
		NullCheck(L_6);
		Vector2_t2156229523  L_7 = RectTransform_get_anchoredPosition_m1813443094(L_6, /*hidden argument*/NULL);
		Vector2_t2156229523  L_8 = __this->get_destination_3();
		float L_9 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_10 = Vector2_Lerp_m854472224(NULL /*static, unused*/, L_7, L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_5);
		RectTransform_set_anchoredPosition_m4126691837(L_5, L_10, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_11 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_11, /*hidden argument*/NULL);
		__this->set_U24current_4(L_11);
		bool L_12 = __this->get_U24disposing_5();
		if (L_12)
		{
			goto IL_008b;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_008b:
	{
		goto IL_00a9;
	}

IL_0090:
	{
		float L_13 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_13) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_U24PC_6((-1));
	}

IL_00a7:
	{
		return (bool)0;
	}

IL_00a9:
	{
		return (bool)1;
	}
}
// System.Object EndPanel/<IMoveRect>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIMoveRectU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1108159140 (U3CIMoveRectU3Ec__Iterator1_t1700463851 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object EndPanel/<IMoveRect>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIMoveRectU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2237588140 (U3CIMoveRectU3Ec__Iterator1_t1700463851 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void EndPanel/<IMoveRect>c__Iterator1::Dispose()
extern "C"  void U3CIMoveRectU3Ec__Iterator1_Dispose_m1393024390 (U3CIMoveRectU3Ec__Iterator1_t1700463851 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void EndPanel/<IMoveRect>c__Iterator1::Reset()
extern "C"  void U3CIMoveRectU3Ec__Iterator1_Reset_m3256979049 (U3CIMoveRectU3Ec__Iterator1_t1700463851 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIMoveRectU3Ec__Iterator1_Reset_m3256979049_MetadataUsageId);
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
// System.Void EndPanel/<IPlayEndSequence>c__Iterator0::.ctor()
extern "C"  void U3CIPlayEndSequenceU3Ec__Iterator0__ctor_m2589333097 (U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EndPanel/<IPlayEndSequence>c__Iterator0::MoveNext()
extern "C"  bool U3CIPlayEndSequenceU3Ec__Iterator0_MoveNext_m1295108383 (U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPlayEndSequenceU3Ec__Iterator0_MoveNext_m1295108383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float V_1 = 0.0f;
	{
		int32_t L_0 = __this->get_U24PC_6();
		V_0 = L_0;
		__this->set_U24PC_6((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_004d;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_00d3;
			}
			case 3:
			{
				goto IL_0199;
			}
			case 4:
			{
				goto IL_02bf;
			}
			case 5:
			{
				goto IL_0314;
			}
			case 6:
			{
				goto IL_0375;
			}
			case 7:
			{
				goto IL_044b;
			}
			case 8:
			{
				goto IL_04cc;
			}
			case 9:
			{
				goto IL_0558;
			}
			case 10:
			{
				goto IL_05e4;
			}
			case 11:
			{
				goto IL_063f;
			}
			case 12:
			{
				goto IL_069a;
			}
		}
	}
	{
		goto IL_06a1;
	}

IL_004d:
	{
		float L_2 = __this->get_delay_0();
		WaitForSeconds_t1699091251 * L_3 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_3, L_2, /*hidden argument*/NULL);
		__this->set_U24current_4(L_3);
		bool L_4 = __this->get_U24disposing_5();
		if (L_4)
		{
			goto IL_006d;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_006d:
	{
		goto IL_06a3;
	}

IL_0072:
	{
		EndPanel_t2070267055 * L_5 = __this->get_U24this_3();
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = L_5->get_endPanel_3();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)1, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_7 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_8 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_9 = __this->get_U24this_3();
		NullCheck(L_9);
		Image_t2670269651 * L_10 = L_9->get_background_4();
		NullCheck(L_8);
		RuntimeObject* L_11 = EndPanel_IFadeImage_m2328497366(L_8, L_10, (1.0f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_7);
		MonoBehaviour_StartCoroutine_m3411253000(L_7, L_11, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_12 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_12, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_12);
		bool L_13 = __this->get_U24disposing_5();
		if (L_13)
		{
			goto IL_00ce;
		}
	}
	{
		__this->set_U24PC_6(2);
	}

IL_00ce:
	{
		goto IL_06a3;
	}

IL_00d3:
	{
		EndPanel_t2070267055 * L_14 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_15 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_16 = __this->get_U24this_3();
		NullCheck(L_16);
		Image_t2670269651 * L_17 = L_16->get_stageImage_5();
		NullCheck(L_17);
		RectTransform_t3704657025 * L_18 = Graphic_get_rectTransform_m1167152468(L_17, /*hidden argument*/NULL);
		Vector2_t2156229523  L_19;
		memset(&L_19, 0, sizeof(L_19));
		Vector2__ctor_m3970636864((&L_19), (100.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_15);
		RuntimeObject* L_20 = EndPanel_IMoveRect_m3711810308(L_15, L_18, L_19, (2.5f), /*hidden argument*/NULL);
		NullCheck(L_14);
		MonoBehaviour_StartCoroutine_m3411253000(L_14, L_20, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_21 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_22 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_23 = __this->get_U24this_3();
		NullCheck(L_23);
		Image_t2670269651 * L_24 = L_23->get_stageImage_5();
		NullCheck(L_22);
		RuntimeObject* L_25 = EndPanel_IFadeImage_m2328497366(L_22, L_24, (1.0f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_21);
		MonoBehaviour_StartCoroutine_m3411253000(L_21, L_25, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_26 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_27 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_28 = __this->get_U24this_3();
		NullCheck(L_28);
		Image_t2670269651 * L_29 = L_28->get_bgPanel_6();
		NullCheck(L_29);
		RectTransform_t3704657025 * L_30 = Graphic_get_rectTransform_m1167152468(L_29, /*hidden argument*/NULL);
		Vector2_t2156229523  L_31;
		memset(&L_31, 0, sizeof(L_31));
		Vector2__ctor_m3970636864((&L_31), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		RuntimeObject* L_32 = EndPanel_IMoveRect_m3711810308(L_27, L_30, L_31, (2.5f), /*hidden argument*/NULL);
		NullCheck(L_26);
		MonoBehaviour_StartCoroutine_m3411253000(L_26, L_32, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_33 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_33, (0.3f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_33);
		bool L_34 = __this->get_U24disposing_5();
		if (L_34)
		{
			goto IL_0194;
		}
	}
	{
		__this->set_U24PC_6(3);
	}

IL_0194:
	{
		goto IL_06a3;
	}

IL_0199:
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_35 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_35);
		int32_t L_36 = StageInfo_GetStartAmount_m2338924739(L_35, /*hidden argument*/NULL);
		__this->set_U3CstarsU3E__0_1(L_36);
		int32_t L_37 = __this->get_U3CstarsU3E__0_1();
		if ((((int32_t)L_37) >= ((int32_t)3)))
		{
			goto IL_01ed;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_38 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		int32_t L_39 = __this->get_U3CstarsU3E__0_1();
		NullCheck(L_38);
		float L_40 = StageInfo_GetTimeForStar_m679637488(L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_40;
		EndPanel_t2070267055 * L_41 = __this->get_U24this_3();
		NullCheck(L_41);
		Text_t1901882714 * L_42 = L_41->get_nextStarText_12();
		StageInfo_t2857013238 * L_43 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		float L_44 = V_1;
		NullCheck(L_43);
		String_t* L_45 = StageInfo_GetTimeString_m3819379987(L_43, L_44, _stringLiteral4073034007, _stringLiteral3452614605, /*hidden argument*/NULL);
		NullCheck(L_42);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_42, L_45);
	}

IL_01ed:
	{
		EndPanel_t2070267055 * L_46 = __this->get_U24this_3();
		NullCheck(L_46);
		RectTransform_t3704657025 * L_47 = L_46->get_nextStarOb_10();
		NullCheck(L_47);
		GameObject_t1113636619 * L_48 = Component_get_gameObject_m442555142(L_47, /*hidden argument*/NULL);
		int32_t L_49 = __this->get_U3CstarsU3E__0_1();
		NullCheck(L_48);
		GameObject_SetActive_m796801857(L_48, (bool)((((int32_t)L_49) < ((int32_t)3))? 1 : 0), /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_50 = __this->get_U24this_3();
		NullCheck(L_50);
		Text_t1901882714 * L_51 = L_50->get_totalTimeText_11();
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_52 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_52);
		String_t* L_53 = StageInfo_GetTimeString_m957071269(L_52, _stringLiteral4073034007, _stringLiteral3452614605, /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_51, L_53);
		EndPanel_t2070267055 * L_54 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_55 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_56 = __this->get_U24this_3();
		NullCheck(L_56);
		RectTransform_t3704657025 * L_57 = L_56->get_totalTimeOb_9();
		Vector2_t2156229523  L_58;
		memset(&L_58, 0, sizeof(L_58));
		Vector2__ctor_m3970636864((&L_58), (-500.0f), (175.0f), /*hidden argument*/NULL);
		NullCheck(L_55);
		RuntimeObject* L_59 = EndPanel_IMoveRect_m3711810308(L_55, L_57, L_58, (2.5f), /*hidden argument*/NULL);
		NullCheck(L_54);
		MonoBehaviour_StartCoroutine_m3411253000(L_54, L_59, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_60 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_61 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_62 = __this->get_U24this_3();
		NullCheck(L_62);
		RectTransform_t3704657025 * L_63 = L_62->get_nextStarOb_10();
		Vector2_t2156229523  L_64;
		memset(&L_64, 0, sizeof(L_64));
		Vector2__ctor_m3970636864((&L_64), (-500.0f), (-135.0f), /*hidden argument*/NULL);
		NullCheck(L_61);
		RuntimeObject* L_65 = EndPanel_IMoveRect_m3711810308(L_61, L_63, L_64, (2.5f), /*hidden argument*/NULL);
		NullCheck(L_60);
		MonoBehaviour_StartCoroutine_m3411253000(L_60, L_65, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_66 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_66, (0.2f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_66);
		bool L_67 = __this->get_U24disposing_5();
		if (L_67)
		{
			goto IL_02ba;
		}
	}
	{
		__this->set_U24PC_6(4);
	}

IL_02ba:
	{
		goto IL_06a3;
	}

IL_02bf:
	{
		EndPanel_t2070267055 * L_68 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_69 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_70 = __this->get_U24this_3();
		NullCheck(L_70);
		RectTransform_t3704657025 * L_71 = L_70->get_totalTimeOb_9();
		NullCheck(L_69);
		RuntimeObject* L_72 = EndPanel_IPopScale_m158583595(L_69, L_71, (1.0f), (1.5f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_68);
		MonoBehaviour_StartCoroutine_m3411253000(L_68, L_72, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_73 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_73, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_73);
		bool L_74 = __this->get_U24disposing_5();
		if (L_74)
		{
			goto IL_030f;
		}
	}
	{
		__this->set_U24PC_6(5);
	}

IL_030f:
	{
		goto IL_06a3;
	}

IL_0314:
	{
		EndPanel_t2070267055 * L_75 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_76 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_77 = __this->get_U24this_3();
		NullCheck(L_77);
		RectTransform_t3704657025 * L_78 = L_77->get_nextStarOb_10();
		NullCheck(L_76);
		RuntimeObject* L_79 = EndPanel_IPopScale_m158583595(L_76, L_78, (1.0f), (1.5f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_75);
		MonoBehaviour_StartCoroutine_m3411253000(L_75, L_79, /*hidden argument*/NULL);
		__this->set_U3CiU3E__1_2(0);
		goto IL_0416;
	}

IL_0351:
	{
		WaitForSeconds_t1699091251 * L_80 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_80, (0.6f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_80);
		bool L_81 = __this->get_U24disposing_5();
		if (L_81)
		{
			goto IL_0370;
		}
	}
	{
		__this->set_U24PC_6(6);
	}

IL_0370:
	{
		goto IL_06a3;
	}

IL_0375:
	{
		EndPanel_t2070267055 * L_82 = __this->get_U24this_3();
		NullCheck(L_82);
		RectTransformU5BU5D_t107129948* L_83 = L_82->get_enabledStars_14();
		int32_t L_84 = __this->get_U3CiU3E__1_2();
		NullCheck(L_83);
		int32_t L_85 = L_84;
		RectTransform_t3704657025 * L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		NullCheck(L_86);
		GameObject_t1113636619 * L_87 = Component_get_gameObject_m442555142(L_86, /*hidden argument*/NULL);
		NullCheck(L_87);
		GameObject_SetActive_m796801857(L_87, (bool)1, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_88 = __this->get_U24this_3();
		NullCheck(L_88);
		RectTransformU5BU5D_t107129948* L_89 = L_88->get_disabledStars_13();
		int32_t L_90 = __this->get_U3CiU3E__1_2();
		NullCheck(L_89);
		int32_t L_91 = L_90;
		RectTransform_t3704657025 * L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		GameObject_t1113636619 * L_93 = Component_get_gameObject_m442555142(L_92, /*hidden argument*/NULL);
		NullCheck(L_93);
		GameObject_SetActive_m796801857(L_93, (bool)0, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_94 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_95 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_96 = __this->get_U24this_3();
		NullCheck(L_96);
		RectTransformU5BU5D_t107129948* L_97 = L_96->get_enabledStars_14();
		int32_t L_98 = __this->get_U3CiU3E__1_2();
		NullCheck(L_97);
		int32_t L_99 = L_98;
		RectTransform_t3704657025 * L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_95);
		RuntimeObject* L_101 = EndPanel_IPopScale_m158583595(L_95, L_100, (1.0f), (3.0f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_94);
		MonoBehaviour_StartCoroutine_m3411253000(L_94, L_101, /*hidden argument*/NULL);
		AudioPlayer_t2934167794 * L_102 = ((AudioPlayer_t2934167794_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_t2934167794_il2cpp_TypeInfo_var))->get_instance_2();
		EndPanel_t2070267055 * L_103 = __this->get_U24this_3();
		NullCheck(L_103);
		AudioSFXU5BU5D_t2541677417* L_104 = L_103->get_starSounds_15();
		int32_t L_105 = __this->get_U3CiU3E__1_2();
		NullCheck(L_104);
		int32_t L_106 = L_105;
		int32_t L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_102);
		AudioPlayer_PlayAudio_m3596100579(L_102, L_107, (1.0f), /*hidden argument*/NULL);
		int32_t L_108 = __this->get_U3CiU3E__1_2();
		__this->set_U3CiU3E__1_2(((int32_t)il2cpp_codegen_add((int32_t)L_108, (int32_t)1)));
	}

IL_0416:
	{
		int32_t L_109 = __this->get_U3CiU3E__1_2();
		int32_t L_110 = __this->get_U3CstarsU3E__0_1();
		if ((((int32_t)L_109) < ((int32_t)L_110)))
		{
			goto IL_0351;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_111 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_111, (0.6f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_111);
		bool L_112 = __this->get_U24disposing_5();
		if (L_112)
		{
			goto IL_0446;
		}
	}
	{
		__this->set_U24PC_6(7);
	}

IL_0446:
	{
		goto IL_06a3;
	}

IL_044b:
	{
		EndPanel_t2070267055 * L_113 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_114 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_115 = __this->get_U24this_3();
		NullCheck(L_115);
		Image_t2670269651 * L_116 = L_115->get_stampImage_16();
		NullCheck(L_116);
		RectTransform_t3704657025 * L_117 = Graphic_get_rectTransform_m1167152468(L_116, /*hidden argument*/NULL);
		NullCheck(L_114);
		RuntimeObject* L_118 = EndPanel_IScaleRect_m3835188359(L_114, L_117, (1.0f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_113);
		MonoBehaviour_StartCoroutine_m3411253000(L_113, L_118, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_119 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_120 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_121 = __this->get_U24this_3();
		NullCheck(L_121);
		Image_t2670269651 * L_122 = L_121->get_stampImage_16();
		NullCheck(L_120);
		RuntimeObject* L_123 = EndPanel_IFadeImage_m2328497366(L_120, L_122, (1.0f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_119);
		MonoBehaviour_StartCoroutine_m3411253000(L_119, L_123, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_124 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_124, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_124);
		bool L_125 = __this->get_U24disposing_5();
		if (L_125)
		{
			goto IL_04c7;
		}
	}
	{
		__this->set_U24PC_6(8);
	}

IL_04c7:
	{
		goto IL_06a3;
	}

IL_04cc:
	{
		EndPanel_t2070267055 * L_126 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_127 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_128 = __this->get_U24this_3();
		NullCheck(L_128);
		Image_t2670269651 * L_129 = L_128->get_exitOp1_7();
		NullCheck(L_129);
		RectTransform_t3704657025 * L_130 = Graphic_get_rectTransform_m1167152468(L_129, /*hidden argument*/NULL);
		Vector2_t2156229523  L_131;
		memset(&L_131, 0, sizeof(L_131));
		Vector2__ctor_m3970636864((&L_131), (-135.0f), (125.0f), /*hidden argument*/NULL);
		NullCheck(L_127);
		RuntimeObject* L_132 = EndPanel_IMoveRect_m3711810308(L_127, L_130, L_131, (2.5f), /*hidden argument*/NULL);
		NullCheck(L_126);
		MonoBehaviour_StartCoroutine_m3411253000(L_126, L_132, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_133 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_134 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_135 = __this->get_U24this_3();
		NullCheck(L_135);
		Image_t2670269651 * L_136 = L_135->get_exitOp1_7();
		NullCheck(L_134);
		RuntimeObject* L_137 = EndPanel_IFadeImage_m2328497366(L_134, L_136, (1.0f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_133);
		MonoBehaviour_StartCoroutine_m3411253000(L_133, L_137, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_138 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_138, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_138);
		bool L_139 = __this->get_U24disposing_5();
		if (L_139)
		{
			goto IL_0553;
		}
	}
	{
		__this->set_U24PC_6(((int32_t)9));
	}

IL_0553:
	{
		goto IL_06a3;
	}

IL_0558:
	{
		EndPanel_t2070267055 * L_140 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_141 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_142 = __this->get_U24this_3();
		NullCheck(L_142);
		Image_t2670269651 * L_143 = L_142->get_exitOp2_8();
		NullCheck(L_143);
		RectTransform_t3704657025 * L_144 = Graphic_get_rectTransform_m1167152468(L_143, /*hidden argument*/NULL);
		Vector2_t2156229523  L_145;
		memset(&L_145, 0, sizeof(L_145));
		Vector2__ctor_m3970636864((&L_145), (-135.0f), (-125.0f), /*hidden argument*/NULL);
		NullCheck(L_141);
		RuntimeObject* L_146 = EndPanel_IMoveRect_m3711810308(L_141, L_144, L_145, (2.5f), /*hidden argument*/NULL);
		NullCheck(L_140);
		MonoBehaviour_StartCoroutine_m3411253000(L_140, L_146, /*hidden argument*/NULL);
		EndPanel_t2070267055 * L_147 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_148 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_149 = __this->get_U24this_3();
		NullCheck(L_149);
		Image_t2670269651 * L_150 = L_149->get_exitOp2_8();
		NullCheck(L_148);
		RuntimeObject* L_151 = EndPanel_IFadeImage_m2328497366(L_148, L_150, (1.0f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_147);
		MonoBehaviour_StartCoroutine_m3411253000(L_147, L_151, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_152 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_152, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_152);
		bool L_153 = __this->get_U24disposing_5();
		if (L_153)
		{
			goto IL_05df;
		}
	}
	{
		__this->set_U24PC_6(((int32_t)10));
	}

IL_05df:
	{
		goto IL_06a3;
	}

IL_05e4:
	{
		EndPanel_t2070267055 * L_154 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_155 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_156 = __this->get_U24this_3();
		NullCheck(L_156);
		Image_t2670269651 * L_157 = L_156->get_exitOp1_7();
		NullCheck(L_157);
		RectTransform_t3704657025 * L_158 = Graphic_get_rectTransform_m1167152468(L_157, /*hidden argument*/NULL);
		NullCheck(L_155);
		RuntimeObject* L_159 = EndPanel_IPopScale_m158583595(L_155, L_158, (1.0f), (0.95f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_154);
		MonoBehaviour_StartCoroutine_m3411253000(L_154, L_159, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_160 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_160, (0.1f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_160);
		bool L_161 = __this->get_U24disposing_5();
		if (L_161)
		{
			goto IL_063a;
		}
	}
	{
		__this->set_U24PC_6(((int32_t)11));
	}

IL_063a:
	{
		goto IL_06a3;
	}

IL_063f:
	{
		EndPanel_t2070267055 * L_162 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_163 = __this->get_U24this_3();
		EndPanel_t2070267055 * L_164 = __this->get_U24this_3();
		NullCheck(L_164);
		Image_t2670269651 * L_165 = L_164->get_exitOp2_8();
		NullCheck(L_165);
		RectTransform_t3704657025 * L_166 = Graphic_get_rectTransform_m1167152468(L_165, /*hidden argument*/NULL);
		NullCheck(L_163);
		RuntimeObject* L_167 = EndPanel_IPopScale_m158583595(L_163, L_166, (1.0f), (0.95f), (2.5f), /*hidden argument*/NULL);
		NullCheck(L_162);
		MonoBehaviour_StartCoroutine_m3411253000(L_162, L_167, /*hidden argument*/NULL);
		WaitForSeconds_t1699091251 * L_168 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_168, (0.3f), /*hidden argument*/NULL);
		__this->set_U24current_4(L_168);
		bool L_169 = __this->get_U24disposing_5();
		if (L_169)
		{
			goto IL_0695;
		}
	}
	{
		__this->set_U24PC_6(((int32_t)12));
	}

IL_0695:
	{
		goto IL_06a3;
	}

IL_069a:
	{
		__this->set_U24PC_6((-1));
	}

IL_06a1:
	{
		return (bool)0;
	}

IL_06a3:
	{
		return (bool)1;
	}
}
// System.Object EndPanel/<IPlayEndSequence>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIPlayEndSequenceU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3889091779 (U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object EndPanel/<IPlayEndSequence>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIPlayEndSequenceU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1188038184 (U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void EndPanel/<IPlayEndSequence>c__Iterator0::Dispose()
extern "C"  void U3CIPlayEndSequenceU3Ec__Iterator0_Dispose_m2785974143 (U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void EndPanel/<IPlayEndSequence>c__Iterator0::Reset()
extern "C"  void U3CIPlayEndSequenceU3Ec__Iterator0_Reset_m2757699173 (U3CIPlayEndSequenceU3Ec__Iterator0_t1176744627 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPlayEndSequenceU3Ec__Iterator0_Reset_m2757699173_MetadataUsageId);
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
// System.Void EndPanel/<IPopScale>c__Iterator4::.ctor()
extern "C"  void U3CIPopScaleU3Ec__Iterator4__ctor_m4090061044 (U3CIPopScaleU3Ec__Iterator4_t3413360195 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EndPanel/<IPopScale>c__Iterator4::MoveNext()
extern "C"  bool U3CIPopScaleU3Ec__Iterator4_MoveNext_m537174581 (U3CIPopScaleU3Ec__Iterator4_t3413360195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPopScaleU3Ec__Iterator4_MoveNext_m537174581_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	Vector3_t3722313464  G_B5_1;
	memset(&G_B5_1, 0, sizeof(G_B5_1));
	RectTransform_t3704657025 * G_B5_2 = NULL;
	Vector3_t3722313464  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	Vector3_t3722313464  G_B4_1;
	memset(&G_B4_1, 0, sizeof(G_B4_1));
	RectTransform_t3704657025 * G_B4_2 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t3722313464  G_B6_1;
	memset(&G_B6_1, 0, sizeof(G_B6_1));
	Vector3_t3722313464  G_B6_2;
	memset(&G_B6_2, 0, sizeof(G_B6_2));
	RectTransform_t3704657025 * G_B6_3 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00b5;
			}
		}
	}
	{
		goto IL_00cc;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_00b5;
	}

IL_0031:
	{
		float L_2 = __this->get_U3ClerpU3E__0_0();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_1();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		RectTransform_t3704657025 * L_5 = __this->get_rect_2();
		RectTransform_t3704657025 * L_6 = __this->get_rect_2();
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_localScale_m129152068(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_U3ClerpU3E__0_0();
		G_B4_0 = L_8;
		G_B4_1 = L_7;
		G_B4_2 = L_5;
		if ((!(((float)L_9) < ((float)(0.5f)))))
		{
			G_B5_0 = L_8;
			G_B5_1 = L_7;
			G_B5_2 = L_5;
			goto IL_007b;
		}
	}
	{
		float L_10 = __this->get_pop_3();
		G_B6_0 = L_10;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0081;
	}

IL_007b:
	{
		float L_11 = __this->get_normal_4();
		G_B6_0 = L_11;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0081:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_12 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, G_B6_1, G_B6_0, /*hidden argument*/NULL);
		float L_13 = __this->get_U3ClerpU3E__0_0();
		Vector3_t3722313464  L_14 = Vector3_Lerp_m407887542(NULL /*static, unused*/, G_B6_2, L_12, L_13, /*hidden argument*/NULL);
		NullCheck(G_B6_3);
		Transform_set_localScale_m3053443106(G_B6_3, L_14, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_15 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_15, /*hidden argument*/NULL);
		__this->set_U24current_5(L_15);
		bool L_16 = __this->get_U24disposing_6();
		if (L_16)
		{
			goto IL_00b0;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_00b0:
	{
		goto IL_00ce;
	}

IL_00b5:
	{
		float L_17 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_17) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_00cc:
	{
		return (bool)0;
	}

IL_00ce:
	{
		return (bool)1;
	}
}
// System.Object EndPanel/<IPopScale>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIPopScaleU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1909626247 (U3CIPopScaleU3Ec__Iterator4_t3413360195 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object EndPanel/<IPopScale>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIPopScaleU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m33610714 (U3CIPopScaleU3Ec__Iterator4_t3413360195 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void EndPanel/<IPopScale>c__Iterator4::Dispose()
extern "C"  void U3CIPopScaleU3Ec__Iterator4_Dispose_m533247371 (U3CIPopScaleU3Ec__Iterator4_t3413360195 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void EndPanel/<IPopScale>c__Iterator4::Reset()
extern "C"  void U3CIPopScaleU3Ec__Iterator4_Reset_m2706680571 (U3CIPopScaleU3Ec__Iterator4_t3413360195 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPopScaleU3Ec__Iterator4_Reset_m2706680571_MetadataUsageId);
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
// System.Void EndPanel/<IScaleRect>c__Iterator2::.ctor()
extern "C"  void U3CIScaleRectU3Ec__Iterator2__ctor_m923793539 (U3CIScaleRectU3Ec__Iterator2_t3801923336 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean EndPanel/<IScaleRect>c__Iterator2::MoveNext()
extern "C"  bool U3CIScaleRectU3Ec__Iterator2_MoveNext_m2225914180 (U3CIScaleRectU3Ec__Iterator2_t3801923336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIScaleRectU3Ec__Iterator2_MoveNext_m2225914180_MetadataUsageId);
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
				goto IL_009a;
			}
		}
	}
	{
		goto IL_00b1;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_009a;
	}

IL_0031:
	{
		float L_2 = __this->get_U3ClerpU3E__0_0();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_1();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		RectTransform_t3704657025 * L_5 = __this->get_rect_2();
		RectTransform_t3704657025 * L_6 = __this->get_rect_2();
		NullCheck(L_6);
		Vector3_t3722313464  L_7 = Transform_get_localScale_m129152068(L_6, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_8 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = __this->get_scale_3();
		Vector3_t3722313464  L_10 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_U3ClerpU3E__0_0();
		Vector3_t3722313464  L_12 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_7, L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_set_localScale_m3053443106(L_5, L_12, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_13 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_13, /*hidden argument*/NULL);
		__this->set_U24current_4(L_13);
		bool L_14 = __this->get_U24disposing_5();
		if (L_14)
		{
			goto IL_0095;
		}
	}
	{
		__this->set_U24PC_6(1);
	}

IL_0095:
	{
		goto IL_00b3;
	}

IL_009a:
	{
		float L_15 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_15) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_U24PC_6((-1));
	}

IL_00b1:
	{
		return (bool)0;
	}

IL_00b3:
	{
		return (bool)1;
	}
}
// System.Object EndPanel/<IScaleRect>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIScaleRectU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m4282324430 (U3CIScaleRectU3Ec__Iterator2_t3801923336 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Object EndPanel/<IScaleRect>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIScaleRectU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m724445994 (U3CIScaleRectU3Ec__Iterator2_t3801923336 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_4();
		return L_0;
	}
}
// System.Void EndPanel/<IScaleRect>c__Iterator2::Dispose()
extern "C"  void U3CIScaleRectU3Ec__Iterator2_Dispose_m3054795740 (U3CIScaleRectU3Ec__Iterator2_t3801923336 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_5((bool)1);
		__this->set_U24PC_6((-1));
		return;
	}
}
// System.Void EndPanel/<IScaleRect>c__Iterator2::Reset()
extern "C"  void U3CIScaleRectU3Ec__Iterator2_Reset_m1663808615 (U3CIScaleRectU3Ec__Iterator2_t3801923336 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIScaleRectU3Ec__Iterator2_Reset_m1663808615_MetadataUsageId);
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
// System.Void GameplayTransitions::.ctor()
extern "C"  void GameplayTransitions__ctor_m3437046667 (GameplayTransitions_t431761729 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameplayTransitions::Start()
extern "C"  void GameplayTransitions_Start_m2213376651 (GameplayTransitions_t431761729 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0007:
	{
		RectTransformU5BU5D_t107129948* L_0 = __this->get_fadeRects_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RectTransform_t3704657025 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RuntimeObject* L_4 = GameplayTransitions_IFadeRect_m907006305(__this, L_3, (0.0f), (2.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_4, /*hidden argument*/NULL);
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_6 = V_0;
		RectTransformU5BU5D_t107129948* L_7 = __this->get_fadeRects_2();
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_7)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void GameplayTransitions::FadeAndLoadScene(System.String)
extern "C"  void GameplayTransitions_FadeAndLoadScene_m2930887448 (GameplayTransitions_t431761729 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___sceneName0;
		RuntimeObject* L_1 = GameplayTransitions_IFadeAndLoadScene_m653410608(__this, L_0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameplayTransitions::FadeAndReloadScene()
extern "C"  void GameplayTransitions_FadeAndReloadScene_m4275617461 (GameplayTransitions_t431761729 * __this, const RuntimeMethod* method)
{
	Scene_t2348375561  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Scene_t2348375561  L_0 = SceneManager_GetActiveScene_m1825203488(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1 = Scene_get_name_m622963475((&V_0), /*hidden argument*/NULL);
		GameplayTransitions_FadeAndLoadScene_m2930887448(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator GameplayTransitions::IFadeAndLoadScene(System.String)
extern "C"  RuntimeObject* GameplayTransitions_IFadeAndLoadScene_m653410608 (GameplayTransitions_t431761729 * __this, String_t* ___sceneName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameplayTransitions_IFadeAndLoadScene_m653410608_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * V_0 = NULL;
	{
		U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * L_0 = (U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 *)il2cpp_codegen_object_new(U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349_il2cpp_TypeInfo_var);
		U3CIFadeAndLoadSceneU3Ec__Iterator0__ctor_m2947427921(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * L_1 = V_0;
		String_t* L_2 = ___sceneName0;
		NullCheck(L_1);
		L_1->set_sceneName_0(L_2);
		U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * L_4 = V_0;
		return L_4;
	}
}
// System.Collections.IEnumerator GameplayTransitions::IFadeRect(UnityEngine.RectTransform,System.Single,System.Single)
extern "C"  RuntimeObject* GameplayTransitions_IFadeRect_m907006305 (GameplayTransitions_t431761729 * __this, RectTransform_t3704657025 * ___rect0, float ___height1, float ___speed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameplayTransitions_IFadeRect_m907006305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIFadeRectU3Ec__Iterator1_t767004030 * V_0 = NULL;
	{
		U3CIFadeRectU3Ec__Iterator1_t767004030 * L_0 = (U3CIFadeRectU3Ec__Iterator1_t767004030 *)il2cpp_codegen_object_new(U3CIFadeRectU3Ec__Iterator1_t767004030_il2cpp_TypeInfo_var);
		U3CIFadeRectU3Ec__Iterator1__ctor_m3941750016(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIFadeRectU3Ec__Iterator1_t767004030 * L_1 = V_0;
		float L_2 = ___speed2;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIFadeRectU3Ec__Iterator1_t767004030 * L_3 = V_0;
		RectTransform_t3704657025 * L_4 = ___rect0;
		NullCheck(L_3);
		L_3->set_rect_2(L_4);
		U3CIFadeRectU3Ec__Iterator1_t767004030 * L_5 = V_0;
		float L_6 = ___height1;
		NullCheck(L_5);
		L_5->set_height_4(L_6);
		U3CIFadeRectU3Ec__Iterator1_t767004030 * L_7 = V_0;
		return L_7;
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
// System.Void GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::.ctor()
extern "C"  void U3CIFadeAndLoadSceneU3Ec__Iterator0__ctor_m2947427921 (U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::MoveNext()
extern "C"  bool U3CIFadeAndLoadSceneU3Ec__Iterator0_MoveNext_m1563750454 (U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeAndLoadSceneU3Ec__Iterator0_MoveNext_m1563750454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t2156229523  V_2;
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
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_00bc;
	}

IL_0021:
	{
		V_1 = 0;
		goto IL_0073;
	}

IL_0028:
	{
		GameplayTransitions_t431761729 * L_2 = __this->get_U24this_1();
		GameplayTransitions_t431761729 * L_3 = __this->get_U24this_1();
		GameplayTransitions_t431761729 * L_4 = __this->get_U24this_1();
		NullCheck(L_4);
		RectTransformU5BU5D_t107129948* L_5 = L_4->get_fadeRects_2();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RectTransform_t3704657025 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		GameplayTransitions_t431761729 * L_9 = __this->get_U24this_1();
		NullCheck(L_9);
		RectTransform_t3704657025 * L_10 = L_9->get_canvas_3();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_y_1();
		NullCheck(L_3);
		RuntimeObject* L_13 = GameplayTransitions_IFadeRect_m907006305(L_3, L_8, ((float)((float)L_12/(float)(2.0f))), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		MonoBehaviour_StartCoroutine_m3411253000(L_2, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0073:
	{
		int32_t L_15 = V_1;
		GameplayTransitions_t431761729 * L_16 = __this->get_U24this_1();
		NullCheck(L_16);
		RectTransformU5BU5D_t107129948* L_17 = L_16->get_fadeRects_2();
		NullCheck(L_17);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_18 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_18, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_18);
		bool L_19 = __this->get_U24disposing_3();
		if (L_19)
		{
			goto IL_00a5;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00a5:
	{
		goto IL_00be;
	}

IL_00aa:
	{
		String_t* L_20 = __this->get_sceneName_0();
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_00bc:
	{
		return (bool)0;
	}

IL_00be:
	{
		return (bool)1;
	}
}
// System.Object GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIFadeAndLoadSceneU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3099774292 (U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Object GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIFadeAndLoadSceneU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2842421985 (U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_2();
		return L_0;
	}
}
// System.Void GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::Dispose()
extern "C"  void U3CIFadeAndLoadSceneU3Ec__Iterator0_Dispose_m2193110999 (U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_3((bool)1);
		__this->set_U24PC_4((-1));
		return;
	}
}
// System.Void GameplayTransitions/<IFadeAndLoadScene>c__Iterator0::Reset()
extern "C"  void U3CIFadeAndLoadSceneU3Ec__Iterator0_Reset_m1583206045 (U3CIFadeAndLoadSceneU3Ec__Iterator0_t3691831349 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeAndLoadSceneU3Ec__Iterator0_Reset_m1583206045_MetadataUsageId);
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
// System.Void GameplayTransitions/<IFadeRect>c__Iterator1::.ctor()
extern "C"  void U3CIFadeRectU3Ec__Iterator1__ctor_m3941750016 (U3CIFadeRectU3Ec__Iterator1_t767004030 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean GameplayTransitions/<IFadeRect>c__Iterator1::MoveNext()
extern "C"  bool U3CIFadeRectU3Ec__Iterator1_MoveNext_m4191585309 (U3CIFadeRectU3Ec__Iterator1_t767004030 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeRectU3Ec__Iterator1_MoveNext_m4191585309_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00b2;
			}
		}
	}
	{
		goto IL_00c9;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_00b2;
	}

IL_0031:
	{
		float L_2 = __this->get_U3ClerpU3E__0_0();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_1();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		RectTransform_t3704657025 * L_5 = __this->get_rect_2();
		NullCheck(L_5);
		Vector2_t2156229523  L_6 = RectTransform_get_sizeDelta_m2183112744(L_5, /*hidden argument*/NULL);
		__this->set_U3CsizeDeltaU3E__1_3(L_6);
		Vector2_t2156229523 * L_7 = __this->get_address_of_U3CsizeDeltaU3E__1_3();
		Vector2_t2156229523 * L_8 = __this->get_address_of_U3CsizeDeltaU3E__1_3();
		float L_9 = L_8->get_y_1();
		float L_10 = __this->get_height_4();
		float L_11 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_12 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_9, L_10, L_11, /*hidden argument*/NULL);
		L_7->set_y_1(L_12);
		RectTransform_t3704657025 * L_13 = __this->get_rect_2();
		Vector2_t2156229523  L_14 = __this->get_U3CsizeDeltaU3E__1_3();
		NullCheck(L_13);
		RectTransform_set_sizeDelta_m3462269772(L_13, L_14, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_15 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_15, /*hidden argument*/NULL);
		__this->set_U24current_5(L_15);
		bool L_16 = __this->get_U24disposing_6();
		if (L_16)
		{
			goto IL_00ad;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_00ad:
	{
		goto IL_00cb;
	}

IL_00b2:
	{
		float L_17 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_17) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_00c9:
	{
		return (bool)0;
	}

IL_00cb:
	{
		return (bool)1;
	}
}
// System.Object GameplayTransitions/<IFadeRect>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIFadeRectU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2952455069 (U3CIFadeRectU3Ec__Iterator1_t767004030 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object GameplayTransitions/<IFadeRect>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIFadeRectU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m1105782232 (U3CIFadeRectU3Ec__Iterator1_t767004030 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void GameplayTransitions/<IFadeRect>c__Iterator1::Dispose()
extern "C"  void U3CIFadeRectU3Ec__Iterator1_Dispose_m2373744119 (U3CIFadeRectU3Ec__Iterator1_t767004030 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void GameplayTransitions/<IFadeRect>c__Iterator1::Reset()
extern "C"  void U3CIFadeRectU3Ec__Iterator1_Reset_m1693989692 (U3CIFadeRectU3Ec__Iterator1_t767004030 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeRectU3Ec__Iterator1_Reset_m1693989692_MetadataUsageId);
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
// System.Void HelpBubble::.ctor()
extern "C"  void HelpBubble__ctor_m2606775396 (HelpBubble_t570266065 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void HelpBubble::SetBubbleText(System.String)
extern "C"  void HelpBubble_SetBubbleText_m2791102133 (HelpBubble_t570266065 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Text_t1901882714 * L_0 = __this->get_bubbleText_2();
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		return;
	}
}
// System.Void HelpBubble::ToggleBubble()
extern "C"  void HelpBubble_ToggleBubble_m246601653 (HelpBubble_t570266065 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_shown_4();
		RuntimeObject* L_1 = HelpBubble_IShowBubble_m622073866(__this, (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0), (5.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator HelpBubble::IShowBubble(System.Boolean,System.Single)
extern "C"  RuntimeObject* HelpBubble_IShowBubble_m622073866 (HelpBubble_t570266065 * __this, bool ___show0, float ___speed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HelpBubble_IShowBubble_m622073866_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIShowBubbleU3Ec__Iterator0_t2610264614 * V_0 = NULL;
	{
		U3CIShowBubbleU3Ec__Iterator0_t2610264614 * L_0 = (U3CIShowBubbleU3Ec__Iterator0_t2610264614 *)il2cpp_codegen_object_new(U3CIShowBubbleU3Ec__Iterator0_t2610264614_il2cpp_TypeInfo_var);
		U3CIShowBubbleU3Ec__Iterator0__ctor_m2940427812(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIShowBubbleU3Ec__Iterator0_t2610264614 * L_1 = V_0;
		bool L_2 = ___show0;
		NullCheck(L_1);
		L_1->set_show_0(L_2);
		U3CIShowBubbleU3Ec__Iterator0_t2610264614 * L_3 = V_0;
		float L_4 = ___speed1;
		NullCheck(L_3);
		L_3->set_speed_2(L_4);
		U3CIShowBubbleU3Ec__Iterator0_t2610264614 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_4(__this);
		U3CIShowBubbleU3Ec__Iterator0_t2610264614 * L_6 = V_0;
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
// System.Void HelpBubble/<IShowBubble>c__Iterator0::.ctor()
extern "C"  void U3CIShowBubbleU3Ec__Iterator0__ctor_m2940427812 (U3CIShowBubbleU3Ec__Iterator0_t2610264614 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean HelpBubble/<IShowBubble>c__Iterator0::MoveNext()
extern "C"  bool U3CIShowBubbleU3Ec__Iterator0_MoveNext_m695943690 (U3CIShowBubbleU3Ec__Iterator0_t2610264614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIShowBubbleU3Ec__Iterator0_MoveNext_m695943690_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B5_0 = 0.0f;
	Color_t2555686324 * G_B5_1 = NULL;
	float G_B4_0 = 0.0f;
	Color_t2555686324 * G_B4_1 = NULL;
	float G_B6_0 = 0.0f;
	float G_B6_1 = 0.0f;
	Color_t2555686324 * G_B6_2 = NULL;
	Vector3_t3722313464  G_B8_0;
	memset(&G_B8_0, 0, sizeof(G_B8_0));
	RectTransform_t3704657025 * G_B8_1 = NULL;
	Vector3_t3722313464  G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	RectTransform_t3704657025 * G_B7_1 = NULL;
	Vector3_t3722313464  G_B9_0;
	memset(&G_B9_0, 0, sizeof(G_B9_0));
	Vector3_t3722313464  G_B9_1;
	memset(&G_B9_1, 0, sizeof(G_B9_1));
	RectTransform_t3704657025 * G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	Color_t2555686324 * G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	Color_t2555686324 * G_B10_1 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	Color_t2555686324 * G_B12_2 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_01a3;
			}
		}
	}
	{
		goto IL_01ba;
	}

IL_0021:
	{
		HelpBubble_t570266065 * L_2 = __this->get_U24this_4();
		bool L_3 = __this->get_show_0();
		NullCheck(L_2);
		L_2->set_shown_4(L_3);
		__this->set_U3ClerpU3E__0_1((0.0f));
		goto IL_01a3;
	}

IL_0042:
	{
		float L_4 = __this->get_U3ClerpU3E__0_1();
		float L_5 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_2();
		__this->set_U3ClerpU3E__0_1(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))));
		HelpBubble_t570266065 * L_7 = __this->get_U24this_4();
		NullCheck(L_7);
		Image_t2670269651 * L_8 = L_7->get_bubbleImage_3();
		NullCheck(L_8);
		Color_t2555686324  L_9 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		__this->set_U3CcU3E__1_3(L_9);
		Color_t2555686324 * L_10 = __this->get_address_of_U3CcU3E__1_3();
		Color_t2555686324 * L_11 = __this->get_address_of_U3CcU3E__1_3();
		float L_12 = L_11->get_a_3();
		bool L_13 = __this->get_show_0();
		G_B4_0 = L_12;
		G_B4_1 = L_10;
		if (!L_13)
		{
			G_B5_0 = L_12;
			G_B5_1 = L_10;
			goto IL_0097;
		}
	}
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_009c;
	}

IL_0097:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_009c:
	{
		float L_14 = __this->get_U3ClerpU3E__0_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_15 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, G_B6_1, G_B6_0, ((float)il2cpp_codegen_multiply((float)L_14, (float)(1.1f))), /*hidden argument*/NULL);
		G_B6_2->set_a_3(L_15);
		HelpBubble_t570266065 * L_16 = __this->get_U24this_4();
		NullCheck(L_16);
		Image_t2670269651 * L_17 = L_16->get_bubbleImage_3();
		Color_t2555686324  L_18 = __this->get_U3CcU3E__1_3();
		NullCheck(L_17);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		HelpBubble_t570266065 * L_19 = __this->get_U24this_4();
		NullCheck(L_19);
		Image_t2670269651 * L_20 = L_19->get_bubbleImage_3();
		NullCheck(L_20);
		RectTransform_t3704657025 * L_21 = Graphic_get_rectTransform_m1167152468(L_20, /*hidden argument*/NULL);
		HelpBubble_t570266065 * L_22 = __this->get_U24this_4();
		NullCheck(L_22);
		Image_t2670269651 * L_23 = L_22->get_bubbleImage_3();
		NullCheck(L_23);
		RectTransform_t3704657025 * L_24 = Graphic_get_rectTransform_m1167152468(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		Vector3_t3722313464  L_25 = Transform_get_localScale_m129152068(L_24, /*hidden argument*/NULL);
		bool L_26 = __this->get_show_0();
		G_B7_0 = L_25;
		G_B7_1 = L_21;
		if (!L_26)
		{
			G_B8_0 = L_25;
			G_B8_1 = L_21;
			goto IL_0102;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_27 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B9_0 = L_27;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0107;
	}

IL_0102:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_28 = Vector3_get_zero_m1409827619(NULL /*static, unused*/, /*hidden argument*/NULL);
		G_B9_0 = L_28;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0107:
	{
		float L_29 = __this->get_U3ClerpU3E__0_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_30 = Vector3_Lerp_m407887542(NULL /*static, unused*/, G_B9_1, G_B9_0, L_29, /*hidden argument*/NULL);
		NullCheck(G_B9_2);
		Transform_set_localScale_m3053443106(G_B9_2, L_30, /*hidden argument*/NULL);
		HelpBubble_t570266065 * L_31 = __this->get_U24this_4();
		NullCheck(L_31);
		Text_t1901882714 * L_32 = L_31->get_bubbleText_2();
		NullCheck(L_32);
		Color_t2555686324  L_33 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_32);
		__this->set_U3CcU3E__1_3(L_33);
		Color_t2555686324 * L_34 = __this->get_address_of_U3CcU3E__1_3();
		Color_t2555686324 * L_35 = __this->get_address_of_U3CcU3E__1_3();
		float L_36 = L_35->get_a_3();
		bool L_37 = __this->get_show_0();
		G_B10_0 = L_36;
		G_B10_1 = L_34;
		if (!L_37)
		{
			G_B11_0 = L_36;
			G_B11_1 = L_34;
			goto IL_0153;
		}
	}
	{
		G_B12_0 = (1.0f);
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_0158;
	}

IL_0153:
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_0158:
	{
		float L_38 = __this->get_U3ClerpU3E__0_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_39 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, G_B12_1, G_B12_0, ((float)il2cpp_codegen_multiply((float)L_38, (float)(1.1f))), /*hidden argument*/NULL);
		G_B12_2->set_a_3(L_39);
		HelpBubble_t570266065 * L_40 = __this->get_U24this_4();
		NullCheck(L_40);
		Text_t1901882714 * L_41 = L_40->get_bubbleText_2();
		Color_t2555686324  L_42 = __this->get_U3CcU3E__1_3();
		NullCheck(L_41);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_42);
		WaitForEndOfFrame_t1314943911 * L_43 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_43, /*hidden argument*/NULL);
		__this->set_U24current_5(L_43);
		bool L_44 = __this->get_U24disposing_6();
		if (L_44)
		{
			goto IL_019e;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_019e:
	{
		goto IL_01bc;
	}

IL_01a3:
	{
		float L_45 = __this->get_U3ClerpU3E__0_1();
		if ((((float)L_45) < ((float)(1.0f))))
		{
			goto IL_0042;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_01ba:
	{
		return (bool)0;
	}

IL_01bc:
	{
		return (bool)1;
	}
}
// System.Object HelpBubble/<IShowBubble>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIShowBubbleU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3153140807 (U3CIShowBubbleU3Ec__Iterator0_t2610264614 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object HelpBubble/<IShowBubble>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIShowBubbleU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m617291593 (U3CIShowBubbleU3Ec__Iterator0_t2610264614 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void HelpBubble/<IShowBubble>c__Iterator0::Dispose()
extern "C"  void U3CIShowBubbleU3Ec__Iterator0_Dispose_m2028250199 (U3CIShowBubbleU3Ec__Iterator0_t2610264614 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void HelpBubble/<IShowBubble>c__Iterator0::Reset()
extern "C"  void U3CIShowBubbleU3Ec__Iterator0_Reset_m4079515969 (U3CIShowBubbleU3Ec__Iterator0_t2610264614 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIShowBubbleU3Ec__Iterator0_Reset_m4079515969_MetadataUsageId);
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
// System.Void JSONParser::.ctor()
extern "C"  void JSONParser__ctor_m1536803805 (JSONParser_t75429706 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// StageData JSONParser::LoadResources()
extern "C"  StageData_t251497815 * JSONParser_LoadResources_m3124311211 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONParser_LoadResources_m3124311211_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TextAsset_t3022178571 * V_0 = NULL;
	String_t* V_1 = NULL;
	{
		Object_t631007953 * L_0 = Resources_Load_m3880010804(NULL /*static, unused*/, _stringLiteral839100749, /*hidden argument*/NULL);
		V_0 = ((TextAsset_t3022178571 *)IsInstClass((RuntimeObject*)L_0, TextAsset_t3022178571_il2cpp_TypeInfo_var));
		TextAsset_t3022178571 * L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		V_1 = L_2;
		String_t* L_3 = V_1;
		StageData_t251497815 * L_4 = JsonUtility_FromJson_TisStageData_t251497815_m2539850222(NULL /*static, unused*/, L_3, /*hidden argument*/JsonUtility_FromJson_TisStageData_t251497815_m2539850222_RuntimeMethod_var);
		return L_4;
	}
}
// System.Void JSONParser::SaveResources(StageData)
extern "C"  void JSONParser_SaveResources_m3830451285 (RuntimeObject * __this /* static, unused */, StageData_t251497815 * ___stageData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JSONParser_SaveResources_m3830451285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StageData_t251497815 * L_0 = ___stageData0;
		String_t* L_1 = JsonUtility_ToJson_m3644929270(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = Application_get_dataPath_m4232621142(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, L_2, _stringLiteral3658904049, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		File_WriteAllText_m167356635(NULL /*static, unused*/, L_3, L_5, /*hidden argument*/NULL);
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
// System.Void MenuClouds::.ctor()
extern "C"  void MenuClouds__ctor_m1199534535 (MenuClouds_t4198924910 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuClouds::Start()
extern "C"  void MenuClouds_Start_m447620171 (MenuClouds_t4198924910 * __this, const RuntimeMethod* method)
{
	{
		MenuClouds_Setup_m4167529796(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuClouds::Setup()
extern "C"  void MenuClouds_Setup_m4167529796 (MenuClouds_t4198924910 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Resolution_t2487619763  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Resolution_t2487619763  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = 0;
		goto IL_0046;
	}

IL_0007:
	{
		ImageU5BU5D_t2439009922* L_0 = __this->get_clouds_2();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Image_t2670269651 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		Resolution_t2487619763  L_4 = Screen_get_currentResolution_m1680624610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_4;
		int32_t L_5 = Resolution_get_width_m400677188((&V_1), /*hidden argument*/NULL);
		Resolution_t2487619763  L_6 = Screen_get_currentResolution_m1680624610(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_6;
		int32_t L_7 = Resolution_get_height_m933996501((&V_2), /*hidden argument*/NULL);
		RuntimeObject* L_8 = MenuClouds_IAnimateCloud_m607291686(__this, L_3, (0.0f), (((float)((float)L_5))), (0.0f), (((float)((float)L_7))), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_8, /*hidden argument*/NULL);
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0046:
	{
		int32_t L_10 = V_0;
		ImageU5BU5D_t2439009922* L_11 = __this->get_clouds_2();
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator MenuClouds::IAnimateCloud(UnityEngine.UI.Image,System.Single,System.Single,System.Single,System.Single)
extern "C"  RuntimeObject* MenuClouds_IAnimateCloud_m607291686 (MenuClouds_t4198924910 * __this, Image_t2670269651 * ___cloud0, float ___xMin1, float ___xMax2, float ___yMin3, float ___yMax4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuClouds_IAnimateCloud_m607291686_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * V_0 = NULL;
	{
		U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * L_0 = (U3CIAnimateCloudU3Ec__Iterator0_t2877652068 *)il2cpp_codegen_object_new(U3CIAnimateCloudU3Ec__Iterator0_t2877652068_il2cpp_TypeInfo_var);
		U3CIAnimateCloudU3Ec__Iterator0__ctor_m1112974102(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * L_1 = V_0;
		Image_t2670269651 * L_2 = ___cloud0;
		NullCheck(L_1);
		L_1->set_cloud_0(L_2);
		U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * L_3 = V_0;
		float L_4 = ___xMin1;
		NullCheck(L_3);
		L_3->set_xMin_2(L_4);
		U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * L_5 = V_0;
		float L_6 = ___xMax2;
		NullCheck(L_5);
		L_5->set_xMax_3(L_6);
		U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * L_7 = V_0;
		float L_8 = ___yMin3;
		NullCheck(L_7);
		L_7->set_yMin_4(L_8);
		U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * L_9 = V_0;
		float L_10 = ___yMax4;
		NullCheck(L_9);
		L_9->set_yMax_5(L_10);
		U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * L_11 = V_0;
		return L_11;
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
// System.Void MenuClouds/<IAnimateCloud>c__Iterator0::.ctor()
extern "C"  void U3CIAnimateCloudU3Ec__Iterator0__ctor_m1112974102 (U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuClouds/<IAnimateCloud>c__Iterator0::MoveNext()
extern "C"  bool U3CIAnimateCloudU3Ec__Iterator0_MoveNext_m345343725 (U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIAnimateCloudU3Ec__Iterator0_MoveNext_m345343725_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	float G_B4_0 = 0.0f;
	U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * G_B4_1 = NULL;
	float G_B3_0 = 0.0f;
	U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * G_B3_1 = NULL;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * G_B5_2 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_12();
		V_0 = L_0;
		__this->set_U24PC_12((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_01c8;
			}
		}
	}
	{
		goto IL_01e4;
	}

IL_0021:
	{
		Image_t2670269651 * L_2 = __this->get_cloud_0();
		NullCheck(L_2);
		RectTransform_t3704657025 * L_3 = Graphic_get_rectTransform_m1167152468(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector2_t2156229523  L_4 = RectTransform_get_anchoredPosition_m1813443094(L_3, /*hidden argument*/NULL);
		__this->set_U3CposU3E__1_1(L_4);
		Vector2_t2156229523 * L_5 = __this->get_address_of_U3CposU3E__1_1();
		float L_6 = __this->get_xMin_2();
		float L_7 = __this->get_xMax_3();
		float L_8 = Random_Range_m2202990745(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		L_5->set_x_0(L_8);
		Vector2_t2156229523 * L_9 = __this->get_address_of_U3CposU3E__1_1();
		float L_10 = __this->get_yMin_4();
		float L_11 = __this->get_yMax_5();
		float L_12 = Random_Range_m2202990745(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		L_9->set_y_1(L_12);
		Image_t2670269651 * L_13 = __this->get_cloud_0();
		NullCheck(L_13);
		RectTransform_t3704657025 * L_14 = Graphic_get_rectTransform_m1167152468(L_13, /*hidden argument*/NULL);
		Vector2_t2156229523  L_15 = __this->get_U3CposU3E__1_1();
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_m4126691837(L_14, L_15, /*hidden argument*/NULL);
		float L_16 = Random_Range_m2202990745(NULL /*static, unused*/, (2.0f), (7.0f), /*hidden argument*/NULL);
		__this->set_U3CtimerU3E__1_6(L_16);
		float L_17 = Random_Range_m2202990745(NULL /*static, unused*/, (10.0f), (30.0f), /*hidden argument*/NULL);
		__this->set_U3CspeedU3E__1_7(L_17);
		float L_18 = __this->get_U3CspeedU3E__1_7();
		int32_t L_19 = Random_Range_m4054026115(NULL /*static, unused*/, 0, 2, /*hidden argument*/NULL);
		G_B3_0 = L_18;
		G_B3_1 = __this;
		if (L_19)
		{
			G_B4_0 = L_18;
			G_B4_1 = __this;
			goto IL_00cc;
		}
	}
	{
		G_B5_0 = (1.0f);
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_00d1;
	}

IL_00cc:
	{
		G_B5_0 = (-1.0f);
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_00d1:
	{
		NullCheck(G_B5_2);
		G_B5_2->set_U3CspeedU3E__1_7(((float)il2cpp_codegen_multiply((float)G_B5_1, (float)G_B5_0)));
		__this->set_U3CtransparencyU3E__1_8((0.0f));
		goto IL_01c8;
	}

IL_00e7:
	{
		float L_20 = __this->get_U3CtimerU3E__1_6();
		float L_21 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtimerU3E__1_6(((float)il2cpp_codegen_subtract((float)L_20, (float)L_21)));
		float L_22 = __this->get_U3CtransparencyU3E__1_8();
		float L_23 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtransparencyU3E__1_8(((float)il2cpp_codegen_add((float)L_22, (float)L_23)));
		float L_24 = __this->get_U3CtimerU3E__1_6();
		if ((!(((float)L_24) < ((float)(1.0f)))))
		{
			goto IL_0127;
		}
	}
	{
		float L_25 = __this->get_U3CtimerU3E__1_6();
		__this->set_U3CtransparencyU3E__1_8(L_25);
	}

IL_0127:
	{
		Image_t2670269651 * L_26 = __this->get_cloud_0();
		NullCheck(L_26);
		Color_t2555686324  L_27 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_26);
		__this->set_U3CcU3E__2_9(L_27);
		Color_t2555686324 * L_28 = __this->get_address_of_U3CcU3E__2_9();
		float L_29 = __this->get_U3CtransparencyU3E__1_8();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_30 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_29, /*hidden argument*/NULL);
		L_28->set_a_3(L_30);
		Image_t2670269651 * L_31 = __this->get_cloud_0();
		Color_t2555686324  L_32 = __this->get_U3CcU3E__2_9();
		NullCheck(L_31);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_32);
		Image_t2670269651 * L_33 = __this->get_cloud_0();
		NullCheck(L_33);
		RectTransform_t3704657025 * L_34 = Graphic_get_rectTransform_m1167152468(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		Vector2_t2156229523  L_35 = RectTransform_get_anchoredPosition_m1813443094(L_34, /*hidden argument*/NULL);
		__this->set_U3CposU3E__1_1(L_35);
		Vector2_t2156229523 * L_36 = __this->get_address_of_U3CposU3E__1_1();
		Vector2_t2156229523 * L_37 = L_36;
		float L_38 = L_37->get_x_0();
		float L_39 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_40 = __this->get_U3CspeedU3E__1_7();
		L_37->set_x_0(((float)il2cpp_codegen_add((float)L_38, (float)((float)il2cpp_codegen_multiply((float)L_39, (float)L_40)))));
		Image_t2670269651 * L_41 = __this->get_cloud_0();
		NullCheck(L_41);
		RectTransform_t3704657025 * L_42 = Graphic_get_rectTransform_m1167152468(L_41, /*hidden argument*/NULL);
		Vector2_t2156229523  L_43 = __this->get_U3CposU3E__1_1();
		NullCheck(L_42);
		RectTransform_set_anchoredPosition_m4126691837(L_42, L_43, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_44 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_44, /*hidden argument*/NULL);
		__this->set_U24current_10(L_44);
		bool L_45 = __this->get_U24disposing_11();
		if (L_45)
		{
			goto IL_01c3;
		}
	}
	{
		__this->set_U24PC_12(1);
	}

IL_01c3:
	{
		goto IL_01e6;
	}

IL_01c8:
	{
		float L_46 = __this->get_U3CtimerU3E__1_6();
		if ((((float)L_46) > ((float)(0.0f))))
		{
			goto IL_00e7;
		}
	}
	{
		goto IL_0021;
	}
	// Dead block : IL_01dd: ldarg.0

IL_01e4:
	{
		return (bool)0;
	}

IL_01e6:
	{
		return (bool)1;
	}
}
// System.Object MenuClouds/<IAnimateCloud>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIAnimateCloudU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2262446939 (U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Object MenuClouds/<IAnimateCloud>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIAnimateCloudU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1943412148 (U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_10();
		return L_0;
	}
}
// System.Void MenuClouds/<IAnimateCloud>c__Iterator0::Dispose()
extern "C"  void U3CIAnimateCloudU3Ec__Iterator0_Dispose_m3197063139 (U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_11((bool)1);
		__this->set_U24PC_12((-1));
		return;
	}
}
// System.Void MenuClouds/<IAnimateCloud>c__Iterator0::Reset()
extern "C"  void U3CIAnimateCloudU3Ec__Iterator0_Reset_m2610897343 (U3CIAnimateCloudU3Ec__Iterator0_t2877652068 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIAnimateCloudU3Ec__Iterator0_Reset_m2610897343_MetadataUsageId);
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
// System.Void MenuFlowManager::.ctor()
extern "C"  void MenuFlowManager__ctor_m828583747 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	{
		__this->set_currPanel_19((-1));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::SetLastPanel(System.Int32)
extern "C"  void MenuFlowManager_SetLastPanel_m2599473069 (RuntimeObject * __this /* static, unused */, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_SetLastPanel_m2599473069_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___id0;
		IL2CPP_RUNTIME_CLASS_INIT(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var);
		((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->set_lastPanel_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_1 = Vector2_get_zero_m540426400(NULL /*static, unused*/, /*hidden argument*/NULL);
		((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->set_lastContentPos_4(L_1);
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
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var);
		bool L_0 = ((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->get_gameJustBegun_2();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		MenuFlowManager_HideTitle_m3170754055(__this, (100.0f), /*hidden argument*/NULL);
	}

IL_0015:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var);
		((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->set_gameJustBegun_2((bool)0);
		int32_t L_1 = ((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->get_lastPanel_3();
		MenuFlowManager_ChangePanel_m248027790(__this, L_1, /*hidden argument*/NULL);
		int32_t L_2 = __this->get_currPanel_19();
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_007e;
		}
	}
	{
		int32_t L_3 = __this->get_currPanel_19();
		MenuPanelU5BU5D_t1968201233* L_4 = __this->get_panels_10();
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_007e;
		}
	}
	{
		MenuPanelU5BU5D_t1968201233* L_5 = __this->get_panels_10();
		int32_t L_6 = __this->get_currPanel_19();
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MenuPanel_t2709851952 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		RectTransform_t3704657025 * L_9 = L_8->get_content_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_9, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		MenuPanelU5BU5D_t1968201233* L_11 = __this->get_panels_10();
		int32_t L_12 = __this->get_currPanel_19();
		NullCheck(L_11);
		int32_t L_13 = L_12;
		MenuPanel_t2709851952 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		RectTransform_t3704657025 * L_15 = L_14->get_content_1();
		IL2CPP_RUNTIME_CLASS_INIT(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_16 = ((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->get_lastContentPos_4();
		NullCheck(L_15);
		RectTransform_set_anchoredPosition_m4126691837(L_15, L_16, /*hidden argument*/NULL);
	}

IL_007e:
	{
		V_0 = 0;
		goto IL_00a8;
	}

IL_0085:
	{
		ImageU5BU5D_t2439009922* L_17 = __this->get_fadeImages_9();
		int32_t L_18 = V_0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Image_t2670269651 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		RuntimeObject* L_21 = MenuFlowManager_IFadeImage_m3217344465(__this, L_20, (0.0f), (2.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_21, /*hidden argument*/NULL);
		int32_t L_22 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_00a8:
	{
		int32_t L_23 = V_0;
		ImageU5BU5D_t2439009922* L_24 = __this->get_fadeImages_9();
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_24)->max_length)))))))
		{
			goto IL_0085;
		}
	}
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
		bool L_0 = __this->get_changing_15();
		if (L_0)
		{
			goto IL_0086;
		}
	}
	{
		bool L_1 = __this->get_fadingTitle_16();
		if (L_1)
		{
			goto IL_0086;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_002d;
		}
	}
	{
		bool L_3 = __this->get_goBack_18();
		if (!L_3)
		{
			goto IL_0086;
		}
	}

IL_002d:
	{
		int32_t L_4 = __this->get_currPanel_19();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		Application_Quit_m470877999(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_003e:
	{
		int32_t L_5 = __this->get_currPanel_19();
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		MenuPanelU5BU5D_t1968201233* L_6 = __this->get_panels_10();
		int32_t L_7 = __this->get_currPanel_19();
		NullCheck(L_6);
		int32_t L_8 = L_7;
		MenuPanel_t2709851952 * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		int32_t L_10 = L_9->get_prevPanelID_2();
		MenuFlowManager_FadeAndChangePanel_m1298059106(__this, L_10, /*hidden argument*/NULL);
	}

IL_0062:
	{
		int32_t L_11 = __this->get_currPanel_19();
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		MenuFlowManager_ShowTitle_m2941382879(__this, /*hidden argument*/NULL);
	}

IL_0074:
	{
		MenuFlowManager_PlayClickSound_m2133418347(__this, /*hidden argument*/NULL);
		MenuFlowManager_HideTipPanel_m3589008205(__this, /*hidden argument*/NULL);
		MenuFlowManager_StopTipClip_m2882255584(__this, /*hidden argument*/NULL);
	}

IL_0086:
	{
		int32_t L_12 = __this->get_currPanel_19();
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_13 = __this->get_currPanel_19();
		MenuPanelU5BU5D_t1968201233* L_14 = __this->get_panels_10();
		NullCheck(L_14);
		if ((((int32_t)L_13) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_14)->max_length)))))))
		{
			goto IL_00de;
		}
	}
	{
		MenuPanelU5BU5D_t1968201233* L_15 = __this->get_panels_10();
		int32_t L_16 = __this->get_currPanel_19();
		NullCheck(L_15);
		int32_t L_17 = L_16;
		MenuPanel_t2709851952 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		RectTransform_t3704657025 * L_19 = L_18->get_content_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_20 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_19, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_00de;
		}
	}
	{
		MenuPanelU5BU5D_t1968201233* L_21 = __this->get_panels_10();
		int32_t L_22 = __this->get_currPanel_19();
		NullCheck(L_21);
		int32_t L_23 = L_22;
		MenuPanel_t2709851952 * L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		RectTransform_t3704657025 * L_25 = L_24->get_content_1();
		NullCheck(L_25);
		Vector2_t2156229523  L_26 = RectTransform_get_anchoredPosition_m1813443094(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var);
		((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->set_lastContentPos_4(L_26);
	}

IL_00de:
	{
		__this->set_goBack_18((bool)0);
		return;
	}
}
// System.Void MenuFlowManager::ChangePanel(System.Int32)
extern "C"  void MenuFlowManager_ChangePanel_m248027790 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_ChangePanel_m248027790_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___id0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_1 = ___id0;
		MenuPanelU5BU5D_t1968201233* L_2 = __this->get_panels_10();
		NullCheck(L_2);
		if ((((int32_t)L_1) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0041;
		}
	}
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_001c:
	{
		MenuPanelU5BU5D_t1968201233* L_3 = __this->get_panels_10();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		MenuPanel_t2709851952 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = L_6->get_panel_0();
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)0, /*hidden argument*/NULL);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0033:
	{
		int32_t L_9 = V_0;
		MenuPanelU5BU5D_t1968201233* L_10 = __this->get_panels_10();
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_10)->max_length)))))))
		{
			goto IL_001c;
		}
	}

IL_0041:
	{
		int32_t L_11 = ___id0;
		if ((((int32_t)L_11) < ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_12 = ___id0;
		MenuPanelU5BU5D_t1968201233* L_13 = __this->get_panels_10();
		NullCheck(L_13);
		if ((((int32_t)L_12) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_13)->max_length)))))))
		{
			goto IL_0069;
		}
	}
	{
		MenuPanelU5BU5D_t1968201233* L_14 = __this->get_panels_10();
		int32_t L_15 = ___id0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		MenuPanel_t2709851952 * L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_t1113636619 * L_18 = L_17->get_panel_0();
		NullCheck(L_18);
		GameObject_SetActive_m796801857(L_18, (bool)1, /*hidden argument*/NULL);
	}

IL_0069:
	{
		int32_t L_19 = ___id0;
		__this->set_currPanel_19(L_19);
		int32_t L_20 = __this->get_currPanel_19();
		IL2CPP_RUNTIME_CLASS_INIT(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var);
		((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->set_lastPanel_3(L_20);
		return;
	}
}
// System.Void MenuFlowManager::FadeAndChangePanel(System.Int32)
extern "C"  void MenuFlowManager_FadeAndChangePanel_m1298059106 (MenuFlowManager_t1614880941 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_changing_15();
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		bool L_1 = __this->get_fadingTitle_16();
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
		RuntimeObject* L_3 = MenuFlowManager_IFadeAndChangePanel_m1870868(__this, L_2, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_3, /*hidden argument*/NULL);
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
	{
		bool L_0 = __this->get_changing_15();
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
		V_0 = _stringLiteral291493374;
		String_t* L_1 = V_0;
		bool L_2 = Application_CanStreamedLevelBeLoaded_m348022888(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_3 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		int32_t L_4 = ___id0;
		NullCheck(L_3);
		StageInfo_SetStageID_m3630089345(L_3, L_4, /*hidden argument*/NULL);
		String_t* L_5 = V_0;
		RuntimeObject* L_6 = MenuFlowManager_ISelectLevel_m3146372250(__this, L_5, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_6, /*hidden argument*/NULL);
	}

IL_0036:
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
		AudioSource_t3935305588 * L_0 = __this->get_aSrc_20();
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
		AudioSource_t3935305588 * L_0 = __this->get_aSrc_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		AudioSource_t3935305588 * L_2 = __this->get_aSrc_20();
		NullCheck(L_2);
		bool L_3 = AudioSource_get_isPlaying_m1896551654(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		MenuNotification_t963843896 * L_4 = __this->get_notification_22();
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
		float L_2 = ___speed2;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIFadeImageU3Ec__Iterator3_t2325737738 * L_3 = V_0;
		Image_t2670269651 * L_4 = ___image0;
		NullCheck(L_3);
		L_3->set_image_2(L_4);
		U3CIFadeImageU3Ec__Iterator3_t2325737738 * L_5 = V_0;
		float L_6 = ___height1;
		NullCheck(L_5);
		L_5->set_height_4(L_6);
		U3CIFadeImageU3Ec__Iterator3_t2325737738 * L_7 = V_0;
		return L_7;
	}
}
// System.Void MenuFlowManager::ShowTitle()
extern "C"  void MenuFlowManager_ShowTitle_m2941382879 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	{
		MenuFlowManager_ShowTitle_m3496804772(__this, (0.75f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::ShowTitle(System.Single)
extern "C"  void MenuFlowManager_ShowTitle_m3496804772 (MenuFlowManager_t1614880941 * __this, float ___speed0, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		bool L_0 = __this->get_fadingTitle_16();
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
		RectTransform_t3704657025 * L_1 = __this->get_panel_levels_8();
		NullCheck(L_1);
		Vector2_t2156229523  L_2 = RectTransform_get_sizeDelta_m2183112744(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		float L_4 = ___speed0;
		RuntimeObject* L_5 = MenuFlowManager_IMoveTitle_m881204112(__this, (0.0f), (0.0f), ((-L_3)), L_4, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::HideTitle()
extern "C"  void MenuFlowManager_HideTitle_m1195043599 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	{
		MenuFlowManager_HideTitle_m3170754055(__this, (0.75f), /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuFlowManager::HideTitle(System.Single)
extern "C"  void MenuFlowManager_HideTitle_m3170754055 (MenuFlowManager_t1614880941 * __this, float ___speed0, const RuntimeMethod* method)
{
	Vector2_t2156229523  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2156229523  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		bool L_0 = __this->get_fadingTitle_16();
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
		RectTransform_t3704657025 * L_1 = __this->get_canvas_5();
		NullCheck(L_1);
		Vector2_t2156229523  L_2 = RectTransform_get_sizeDelta_m2183112744(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_1();
		RectTransform_t3704657025 * L_4 = __this->get_panel_sky_7();
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = RectTransform_get_sizeDelta_m2183112744(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = (&V_1)->get_y_1();
		float L_7 = ___speed0;
		RuntimeObject* L_8 = MenuFlowManager_IMoveTitle_m881204112(__this, L_3, ((float)((float)L_6/(float)(2.0f))), (0.0f), L_7, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator MenuFlowManager::IMoveTitle(System.Single,System.Single,System.Single,System.Single)
extern "C"  RuntimeObject* MenuFlowManager_IMoveTitle_m881204112 (MenuFlowManager_t1614880941 * __this, float ___pos_title0, float ___pos_sky1, float ___pos_levels2, float ___speed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager_IMoveTitle_m881204112_MetadataUsageId);
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
		float L_8 = ___speed3;
		NullCheck(L_7);
		L_7->set_speed_10(L_8);
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_U24this_12(__this);
		U3CIMoveTitleU3Ec__Iterator4_t1546248483 * L_10 = V_0;
		return L_10;
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
		AudioPlayer_t2934167794 * L_0 = ((AudioPlayer_t2934167794_StaticFields*)il2cpp_codegen_static_fields_for(AudioPlayer_t2934167794_il2cpp_TypeInfo_var))->get_instance_2();
		float L_1 = Random_Range_m2202990745(NULL /*static, unused*/, (0.9f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioPlayer_PlayAudio_m3596100579(L_0, 0, L_1, /*hidden argument*/NULL);
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
		bool L_0 = __this->get_fadingTipPanel_17();
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
		StringU5BU5D_t1281789340* L_5 = __this->get_tipTexts_12();
		NullCheck(L_5);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1))) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0057;
		}
	}
	{
		Text_t1901882714 * L_6 = __this->get_tipText_14();
		StringU5BU5D_t1281789340* L_7 = __this->get_tipTexts_12();
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
		bool L_0 = __this->get_fadingTipPanel_17();
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
// System.Void MenuFlowManager::GoBack()
extern "C"  void MenuFlowManager_GoBack_m2142385028 (MenuFlowManager_t1614880941 * __this, const RuntimeMethod* method)
{
	{
		__this->set_goBack_18((bool)1);
		return;
	}
}
// System.Void MenuFlowManager::.cctor()
extern "C"  void MenuFlowManager__cctor_m4240302263 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuFlowManager__cctor_m4240302263_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->set_gameJustBegun_2((bool)1);
		((MenuFlowManager_t1614880941_StaticFields*)il2cpp_codegen_static_fields_for(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var))->set_lastPanel_3((-1));
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
	Vector2_t2156229523  V_2;
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
				goto IL_010c;
			}
			case 2:
			{
				goto IL_01df;
			}
		}
	}
	{
		goto IL_01f2;
	}

IL_0025:
	{
		MenuFlowManager_t1614880941 * L_2 = __this->get_U24this_1();
		NullCheck(L_2);
		L_2->set_changing_15((bool)1);
		MenuFlowManager_t1614880941 * L_3 = __this->get_U24this_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_currPanel_19();
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_5 = __this->get_U24this_1();
		NullCheck(L_5);
		int32_t L_6 = L_5->get_currPanel_19();
		MenuFlowManager_t1614880941 * L_7 = __this->get_U24this_1();
		NullCheck(L_7);
		MenuPanelU5BU5D_t1968201233* L_8 = L_7->get_panels_10();
		NullCheck(L_8);
		if ((((int32_t)L_6) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_8)->max_length)))))))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_9 = __this->get_id_0();
		if ((((int32_t)L_9) < ((int32_t)0)))
		{
			goto IL_010c;
		}
	}
	{
		int32_t L_10 = __this->get_id_0();
		MenuFlowManager_t1614880941 * L_11 = __this->get_U24this_1();
		NullCheck(L_11);
		MenuPanelU5BU5D_t1968201233* L_12 = L_11->get_panels_10();
		NullCheck(L_12);
		if ((((int32_t)L_10) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_12)->max_length)))))))
		{
			goto IL_010c;
		}
	}
	{
		V_1 = 0;
		goto IL_00d5;
	}

IL_008a:
	{
		MenuFlowManager_t1614880941 * L_13 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_14 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_15 = __this->get_U24this_1();
		NullCheck(L_15);
		ImageU5BU5D_t2439009922* L_16 = L_15->get_fadeImages_9();
		int32_t L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		Image_t2670269651 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		MenuFlowManager_t1614880941 * L_20 = __this->get_U24this_1();
		NullCheck(L_20);
		RectTransform_t3704657025 * L_21 = L_20->get_canvas_5();
		NullCheck(L_21);
		Vector2_t2156229523  L_22 = RectTransform_get_sizeDelta_m2183112744(L_21, /*hidden argument*/NULL);
		V_2 = L_22;
		float L_23 = (&V_2)->get_y_1();
		NullCheck(L_14);
		RuntimeObject* L_24 = MenuFlowManager_IFadeImage_m3217344465(L_14, L_19, ((float)((float)L_23/(float)(2.0f))), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_13);
		MonoBehaviour_StartCoroutine_m3411253000(L_13, L_24, /*hidden argument*/NULL);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_00d5:
	{
		int32_t L_26 = V_1;
		MenuFlowManager_t1614880941 * L_27 = __this->get_U24this_1();
		NullCheck(L_27);
		ImageU5BU5D_t2439009922* L_28 = L_27->get_fadeImages_9();
		NullCheck(L_28);
		if ((((int32_t)L_26) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_28)->max_length)))))))
		{
			goto IL_008a;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_29 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_29, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_29);
		bool L_30 = __this->get_U24disposing_3();
		if (L_30)
		{
			goto IL_0107;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_0107:
	{
		goto IL_01f4;
	}

IL_010c:
	{
		MenuFlowManager_t1614880941 * L_31 = __this->get_U24this_1();
		int32_t L_32 = __this->get_id_0();
		NullCheck(L_31);
		MenuFlowManager_ChangePanel_m248027790(L_31, L_32, /*hidden argument*/NULL);
		MenuFlowManager_t1614880941 * L_33 = __this->get_U24this_1();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_currPanel_19();
		if ((((int32_t)L_34) < ((int32_t)0)))
		{
			goto IL_01df;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_35 = __this->get_U24this_1();
		NullCheck(L_35);
		int32_t L_36 = L_35->get_currPanel_19();
		MenuFlowManager_t1614880941 * L_37 = __this->get_U24this_1();
		NullCheck(L_37);
		MenuPanelU5BU5D_t1968201233* L_38 = L_37->get_panels_10();
		NullCheck(L_38);
		if ((((int32_t)L_36) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_38)->max_length)))))))
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_39 = __this->get_id_0();
		if ((((int32_t)L_39) < ((int32_t)0)))
		{
			goto IL_01df;
		}
	}
	{
		int32_t L_40 = __this->get_id_0();
		MenuFlowManager_t1614880941 * L_41 = __this->get_U24this_1();
		NullCheck(L_41);
		MenuPanelU5BU5D_t1968201233* L_42 = L_41->get_panels_10();
		NullCheck(L_42);
		if ((((int32_t)L_40) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_42)->max_length)))))))
		{
			goto IL_01df;
		}
	}
	{
		V_3 = 0;
		goto IL_01a8;
	}

IL_0176:
	{
		MenuFlowManager_t1614880941 * L_43 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_44 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_45 = __this->get_U24this_1();
		NullCheck(L_45);
		ImageU5BU5D_t2439009922* L_46 = L_45->get_fadeImages_9();
		int32_t L_47 = V_3;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Image_t2670269651 * L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_44);
		RuntimeObject* L_50 = MenuFlowManager_IFadeImage_m3217344465(L_44, L_49, (0.0f), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_43);
		MonoBehaviour_StartCoroutine_m3411253000(L_43, L_50, /*hidden argument*/NULL);
		int32_t L_51 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)1));
	}

IL_01a8:
	{
		int32_t L_52 = V_3;
		MenuFlowManager_t1614880941 * L_53 = __this->get_U24this_1();
		NullCheck(L_53);
		ImageU5BU5D_t2439009922* L_54 = L_53->get_fadeImages_9();
		NullCheck(L_54);
		if ((((int32_t)L_52) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_54)->max_length)))))))
		{
			goto IL_0176;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_55 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_55, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_55);
		bool L_56 = __this->get_U24disposing_3();
		if (L_56)
		{
			goto IL_01da;
		}
	}
	{
		__this->set_U24PC_4(2);
	}

IL_01da:
	{
		goto IL_01f4;
	}

IL_01df:
	{
		MenuFlowManager_t1614880941 * L_57 = __this->get_U24this_1();
		NullCheck(L_57);
		L_57->set_changing_15((bool)0);
		__this->set_U24PC_4((-1));
	}

IL_01f2:
	{
		return (bool)0;
	}

IL_01f4:
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
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_004f;
			}
			case 2:
			{
				goto IL_0073;
			}
		}
	}
	{
		goto IL_0107;
	}

IL_0025:
	{
		__this->set_U3CtimerU3E__0_0((0.0f));
		WaitForEndOfFrame_t1314943911 * L_2 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_2, /*hidden argument*/NULL);
		__this->set_U24current_5(L_2);
		bool L_3 = __this->get_U24disposing_6();
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_004a:
	{
		goto IL_0109;
	}

IL_004f:
	{
		goto IL_00f0;
	}

IL_0054:
	{
		WaitForEndOfFrame_t1314943911 * L_4 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_4, /*hidden argument*/NULL);
		__this->set_U24current_5(L_4);
		bool L_5 = __this->get_U24disposing_6();
		if (L_5)
		{
			goto IL_006e;
		}
	}
	{
		__this->set_U24PC_7(2);
	}

IL_006e:
	{
		goto IL_0109;
	}

IL_0073:
	{
		float L_6 = __this->get_U3CtimerU3E__0_0();
		float L_7 = __this->get_speed_1();
		float L_8 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_U3CtimerU3E__0_0(((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))));
		float L_9 = __this->get_U3CtimerU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_10 = Mathf_Clamp01_m56433566(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->set_U3CtimerU3E__0_0(L_10);
		Image_t2670269651 * L_11 = __this->get_image_2();
		NullCheck(L_11);
		RectTransform_t3704657025 * L_12 = Graphic_get_rectTransform_m1167152468(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector2_t2156229523  L_13 = RectTransform_get_sizeDelta_m2183112744(L_12, /*hidden argument*/NULL);
		__this->set_U3CrectU3E__1_3(L_13);
		Vector2_t2156229523 * L_14 = __this->get_address_of_U3CrectU3E__1_3();
		Vector2_t2156229523 * L_15 = __this->get_address_of_U3CrectU3E__1_3();
		float L_16 = L_15->get_y_1();
		float L_17 = __this->get_height_4();
		float L_18 = __this->get_U3CtimerU3E__0_0();
		float L_19 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_16, L_17, L_18, /*hidden argument*/NULL);
		L_14->set_y_1(L_19);
		Image_t2670269651 * L_20 = __this->get_image_2();
		NullCheck(L_20);
		RectTransform_t3704657025 * L_21 = Graphic_get_rectTransform_m1167152468(L_20, /*hidden argument*/NULL);
		Vector2_t2156229523  L_22 = __this->get_U3CrectU3E__1_3();
		NullCheck(L_21);
		RectTransform_set_sizeDelta_m3462269772(L_21, L_22, /*hidden argument*/NULL);
	}

IL_00f0:
	{
		float L_23 = __this->get_U3CtimerU3E__0_0();
		if ((((float)L_23) < ((float)(1.0f))))
		{
			goto IL_0054;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_0107:
	{
		return (bool)0;
	}

IL_0109:
	{
		return (bool)1;
	}
}
// System.Object MenuFlowManager/<IFadeImage>c__Iterator3::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIFadeImageU3Ec__Iterator3_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2483374885 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object MenuFlowManager/<IFadeImage>c__Iterator3::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIFadeImageU3Ec__Iterator3_System_Collections_IEnumerator_get_Current_m2127858497 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void MenuFlowManager/<IFadeImage>c__Iterator3::Dispose()
extern "C"  void U3CIFadeImageU3Ec__Iterator3_Dispose_m1458538498 (U3CIFadeImageU3Ec__Iterator3_t2325737738 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
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
		int32_t L_0 = __this->get_U24PC_15();
		V_0 = L_0;
		__this->set_U24PC_15((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0228;
			}
		}
	}
	{
		goto IL_024b;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		MenuFlowManager_t1614880941 * L_2 = __this->get_U24this_12();
		NullCheck(L_2);
		L_2->set_fadingTitle_16((bool)1);
		MenuFlowManager_t1614880941 * L_3 = __this->get_U24this_12();
		NullCheck(L_3);
		RectTransform_t3704657025 * L_4 = L_3->get_panel_title_6();
		NullCheck(L_4);
		Vector2_t2156229523  L_5 = RectTransform_get_anchoredPosition_m1813443094(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_6 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		__this->set_U3CsPos_titleU3E__0_1(L_6);
		MenuFlowManager_t1614880941 * L_7 = __this->get_U24this_12();
		NullCheck(L_7);
		RectTransform_t3704657025 * L_8 = L_7->get_panel_sky_7();
		NullCheck(L_8);
		Vector2_t2156229523  L_9 = RectTransform_get_anchoredPosition_m1813443094(L_8, /*hidden argument*/NULL);
		Vector3_t3722313464  L_10 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_9, /*hidden argument*/NULL);
		__this->set_U3CsPos_skyU3E__0_2(L_10);
		MenuFlowManager_t1614880941 * L_11 = __this->get_U24this_12();
		NullCheck(L_11);
		RectTransform_t3704657025 * L_12 = L_11->get_panel_levels_8();
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
		float L_24 = __this->get_U3ClerpU3E__0_0();
		float L_25 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_26 = __this->get_speed_10();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_24, (float)((float)il2cpp_codegen_multiply((float)L_25, (float)L_26)))));
		MenuFlowManager_t1614880941 * L_27 = __this->get_U24this_12();
		NullCheck(L_27);
		RectTransform_t3704657025 * L_28 = L_27->get_panel_title_6();
		NullCheck(L_28);
		Vector2_t2156229523  L_29 = RectTransform_get_anchoredPosition_m1813443094(L_28, /*hidden argument*/NULL);
		V_1 = L_29;
		float L_30 = (&V_1)->get_y_1();
		Vector3_t3722313464 * L_31 = __this->get_address_of_U3CdPos_titleU3E__0_4();
		float L_32 = L_31->get_y_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_33 = fabsf(((float)il2cpp_codegen_subtract((float)L_30, (float)L_32)));
		__this->set_U3CdiffU3E__1_11(L_33);
		MenuFlowManager_t1614880941 * L_34 = __this->get_U24this_12();
		NullCheck(L_34);
		bool L_35 = L_34->get_fadingTitle_16();
		if (!L_35)
		{
			goto IL_014d;
		}
	}
	{
		float L_36 = __this->get_U3CdiffU3E__1_11();
		if ((!(((float)L_36) < ((float)(5.0f)))))
		{
			goto IL_0158;
		}
	}

IL_014d:
	{
		__this->set_U3ClerpU3E__0_0((1.0f));
	}

IL_0158:
	{
		MenuFlowManager_t1614880941 * L_37 = __this->get_U24this_12();
		NullCheck(L_37);
		RectTransform_t3704657025 * L_38 = L_37->get_panel_title_6();
		MenuFlowManager_t1614880941 * L_39 = __this->get_U24this_12();
		NullCheck(L_39);
		RectTransform_t3704657025 * L_40 = L_39->get_panel_title_6();
		NullCheck(L_40);
		Vector2_t2156229523  L_41 = RectTransform_get_anchoredPosition_m1813443094(L_40, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_42 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_41, /*hidden argument*/NULL);
		Vector3_t3722313464  L_43 = __this->get_U3CdPos_titleU3E__0_4();
		float L_44 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_45 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_42, L_43, L_44, /*hidden argument*/NULL);
		Vector2_t2156229523  L_46 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_45, /*hidden argument*/NULL);
		NullCheck(L_38);
		RectTransform_set_anchoredPosition_m4126691837(L_38, L_46, /*hidden argument*/NULL);
		MenuFlowManager_t1614880941 * L_47 = __this->get_U24this_12();
		NullCheck(L_47);
		RectTransform_t3704657025 * L_48 = L_47->get_panel_sky_7();
		MenuFlowManager_t1614880941 * L_49 = __this->get_U24this_12();
		NullCheck(L_49);
		RectTransform_t3704657025 * L_50 = L_49->get_panel_sky_7();
		NullCheck(L_50);
		Vector2_t2156229523  L_51 = RectTransform_get_anchoredPosition_m1813443094(L_50, /*hidden argument*/NULL);
		Vector3_t3722313464  L_52 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_51, /*hidden argument*/NULL);
		Vector3_t3722313464  L_53 = __this->get_U3CdPos_skyU3E__0_6();
		float L_54 = __this->get_U3ClerpU3E__0_0();
		Vector3_t3722313464  L_55 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_52, L_53, L_54, /*hidden argument*/NULL);
		Vector2_t2156229523  L_56 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_55, /*hidden argument*/NULL);
		NullCheck(L_48);
		RectTransform_set_anchoredPosition_m4126691837(L_48, L_56, /*hidden argument*/NULL);
		MenuFlowManager_t1614880941 * L_57 = __this->get_U24this_12();
		NullCheck(L_57);
		RectTransform_t3704657025 * L_58 = L_57->get_panel_levels_8();
		MenuFlowManager_t1614880941 * L_59 = __this->get_U24this_12();
		NullCheck(L_59);
		RectTransform_t3704657025 * L_60 = L_59->get_panel_levels_8();
		NullCheck(L_60);
		Vector2_t2156229523  L_61 = RectTransform_get_anchoredPosition_m1813443094(L_60, /*hidden argument*/NULL);
		Vector3_t3722313464  L_62 = Vector2_op_Implicit_m1860157806(NULL /*static, unused*/, L_61, /*hidden argument*/NULL);
		Vector3_t3722313464  L_63 = __this->get_U3CdPos_levelsU3E__0_8();
		float L_64 = __this->get_U3ClerpU3E__0_0();
		Vector3_t3722313464  L_65 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_62, L_63, L_64, /*hidden argument*/NULL);
		Vector2_t2156229523  L_66 = Vector2_op_Implicit_m4260192859(NULL /*static, unused*/, L_65, /*hidden argument*/NULL);
		NullCheck(L_58);
		RectTransform_set_anchoredPosition_m4126691837(L_58, L_66, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_67 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_67, /*hidden argument*/NULL);
		__this->set_U24current_13(L_67);
		bool L_68 = __this->get_U24disposing_14();
		if (L_68)
		{
			goto IL_0223;
		}
	}
	{
		__this->set_U24PC_15(1);
	}

IL_0223:
	{
		goto IL_024d;
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
		MenuFlowManager_t1614880941 * L_70 = __this->get_U24this_12();
		NullCheck(L_70);
		L_70->set_fadingTitle_16((bool)0);
		__this->set_U24PC_15((-1));
	}

IL_024b:
	{
		return (bool)0;
	}

IL_024d:
	{
		return (bool)1;
	}
}
// System.Object MenuFlowManager/<IMoveTitle>c__Iterator4::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIMoveTitleU3Ec__Iterator4_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m3703267124 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_13();
		return L_0;
	}
}
// System.Object MenuFlowManager/<IMoveTitle>c__Iterator4::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIMoveTitleU3Ec__Iterator4_System_Collections_IEnumerator_get_Current_m505249181 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_13();
		return L_0;
	}
}
// System.Void MenuFlowManager/<IMoveTitle>c__Iterator4::Dispose()
extern "C"  void U3CIMoveTitleU3Ec__Iterator4_Dispose_m2790082648 (U3CIMoveTitleU3Ec__Iterator4_t1546248483 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_14((bool)1);
		__this->set_U24PC_15((-1));
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
		AudioSource_t3935305588 * L_6 = L_5->get_aSrc_20();
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
		AudioClipU5BU5D_t143221404* L_11 = L_10->get_tipClips_11();
		NullCheck(L_11);
		if ((((int32_t)L_9) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_11)->max_length)))))))
		{
			goto IL_00c4;
		}
	}
	{
		MenuFlowManager_t1614880941 * L_12 = __this->get_U24this_2();
		NullCheck(L_12);
		AudioClipU5BU5D_t143221404* L_13 = L_12->get_tipClips_11();
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
		AudioSource_t3935305588 * L_19 = L_18->get_aSrc_20();
		MenuFlowManager_t1614880941 * L_20 = __this->get_U24this_2();
		NullCheck(L_20);
		AudioClipU5BU5D_t143221404* L_21 = L_20->get_tipClips_11();
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
	Vector2_t2156229523  V_2;
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
				goto IL_00aa;
			}
		}
	}
	{
		goto IL_00bc;
	}

IL_0021:
	{
		V_1 = 0;
		goto IL_0073;
	}

IL_0028:
	{
		MenuFlowManager_t1614880941 * L_2 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_3 = __this->get_U24this_1();
		MenuFlowManager_t1614880941 * L_4 = __this->get_U24this_1();
		NullCheck(L_4);
		ImageU5BU5D_t2439009922* L_5 = L_4->get_fadeImages_9();
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		Image_t2670269651 * L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		MenuFlowManager_t1614880941 * L_9 = __this->get_U24this_1();
		NullCheck(L_9);
		RectTransform_t3704657025 * L_10 = L_9->get_canvas_5();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = RectTransform_get_sizeDelta_m2183112744(L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		float L_12 = (&V_2)->get_y_1();
		NullCheck(L_3);
		RuntimeObject* L_13 = MenuFlowManager_IFadeImage_m3217344465(L_3, L_8, ((float)((float)L_12/(float)(2.0f))), (2.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		MonoBehaviour_StartCoroutine_m3411253000(L_2, L_13, /*hidden argument*/NULL);
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0073:
	{
		int32_t L_15 = V_1;
		MenuFlowManager_t1614880941 * L_16 = __this->get_U24this_1();
		NullCheck(L_16);
		ImageU5BU5D_t2439009922* L_17 = L_16->get_fadeImages_9();
		NullCheck(L_17);
		if ((((int32_t)L_15) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_17)->max_length)))))))
		{
			goto IL_0028;
		}
	}
	{
		WaitForSeconds_t1699091251 * L_18 = (WaitForSeconds_t1699091251 *)il2cpp_codegen_object_new(WaitForSeconds_t1699091251_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m2199082655(L_18, (0.5f), /*hidden argument*/NULL);
		__this->set_U24current_2(L_18);
		bool L_19 = __this->get_U24disposing_3();
		if (L_19)
		{
			goto IL_00a5;
		}
	}
	{
		__this->set_U24PC_4(1);
	}

IL_00a5:
	{
		goto IL_00be;
	}

IL_00aa:
	{
		String_t* L_20 = __this->get_name_0();
		SceneManager_LoadScene_m1758133949(NULL /*static, unused*/, L_20, /*hidden argument*/NULL);
		__this->set_U24PC_4((-1));
	}

IL_00bc:
	{
		return (bool)0;
	}

IL_00be:
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
		L_2->set_fadingTipPanel_17((bool)1);
		__this->set_U3ClerpU3E__0_0((0.0f));
		MenuFlowManager_t1614880941 * L_3 = __this->get_U24this_3();
		NullCheck(L_3);
		Transform_t3600365921 * L_4 = L_3->get_tipPanel_13();
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
		Transform_t3600365921 * L_10 = L_9->get_tipPanel_13();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_11 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		MenuFlowManager_t1614880941 * L_12 = __this->get_U24this_3();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = L_12->get_tipPanel_13();
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
		L_23->set_fadingTipPanel_17((bool)0);
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
		__this->set_levelKeyPrefix_8(_stringLiteral1919288411);
		__this->set_level_9(1);
		__this->set_pulseScale_14((1.0f));
		__this->set_normalScale_15((1.0f));
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuLevelButton::Start()
extern "C"  void MenuLevelButton_Start_m1936534555 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	{
		MenuLevelButton_Setup_m3441281685(__this, /*hidden argument*/NULL);
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
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		ObjectU5BU5D_t2843939325* L_0 = ((ObjectU5BU5D_t2843939325*)SZArrayNew(ObjectU5BU5D_t2843939325_il2cpp_TypeInfo_var, (uint32_t)5));
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, _stringLiteral3314962267);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral3314962267);
		ObjectU5BU5D_t2843939325* L_1 = L_0;
		String_t* L_2 = __this->get_levelKeyPrefix_8();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_2);
		ObjectU5BU5D_t2843939325* L_3 = L_1;
		int32_t* L_4 = __this->get_address_of_level_9();
		String_t* L_5 = Int32_ToString_m372259452(L_4, _stringLiteral3451565968, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_5);
		ObjectU5BU5D_t2843939325* L_6 = L_3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral1655699785);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)_stringLiteral1655699785);
		ObjectU5BU5D_t2843939325* L_7 = L_6;
		String_t* L_8 = __this->get_levelKeyPrefix_8();
		int32_t* L_9 = __this->get_address_of_level_9();
		String_t* L_10 = Int32_ToString_m372259452(L_9, _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3314962267, L_8, L_10, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_level_9();
		int32_t L_13 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		int32_t L_14 = L_13;
		RuntimeObject * L_15 = Box(Int32_t2950945753_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_15);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_15);
		String_t* L_16 = String_Concat_m2971454694(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		MonoBehaviour_print_m330341231(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		String_t* L_17 = __this->get_levelKeyPrefix_8();
		int32_t* L_18 = __this->get_address_of_level_9();
		String_t* L_19 = Int32_ToString_m372259452(L_18, _stringLiteral3451565968, /*hidden argument*/NULL);
		String_t* L_20 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3314962267, L_17, L_19, /*hidden argument*/NULL);
		int32_t L_21 = __this->get_level_9();
		int32_t L_22 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_22) == ((int32_t)1))? 1 : 0);
		String_t* L_23 = __this->get_levelKeyPrefix_8();
		int32_t* L_24 = __this->get_address_of_level_9();
		String_t* L_25 = Int32_ToString_m372259452(L_24, _stringLiteral3451565968, /*hidden argument*/NULL);
		String_t* L_26 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2703796567, L_23, L_25, /*hidden argument*/NULL);
		int32_t L_27 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_26, (-1), /*hidden argument*/NULL);
		V_1 = L_27;
		bool L_28 = V_0;
		MenuLevelButton_ActivateSelf_m1538653098(__this, L_28, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		MenuLevelButton_ShowStarts_m3471610984(__this, L_29, /*hidden argument*/NULL);
		MenuLevelButton_ShowLevelCount_m1856586175(__this, /*hidden argument*/NULL);
		__this->set_pulse_13((bool)1);
		return;
	}
}
// System.Void MenuLevelButton::Update()
extern "C"  void MenuLevelButton_Update_m2907968190 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_Update_m2907968190_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	{
		bool L_0 = __this->get_pulse_13();
		if (!L_0)
		{
			goto IL_007f;
		}
	}
	{
		String_t* L_1 = __this->get_levelKeyPrefix_8();
		int32_t* L_2 = __this->get_address_of_level_9();
		String_t* L_3 = Int32_ToString_m372259452(L_2, _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral3314962267, L_1, L_3, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_level_9();
		int32_t L_6 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_6) == ((int32_t)1))? 1 : 0);
		String_t* L_7 = __this->get_levelKeyPrefix_8();
		int32_t* L_8 = __this->get_address_of_level_9();
		String_t* L_9 = Int32_ToString_m372259452(L_8, _stringLiteral3451565968, /*hidden argument*/NULL);
		String_t* L_10 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2703796567, L_7, L_9, /*hidden argument*/NULL);
		int32_t L_11 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_10, (-1), /*hidden argument*/NULL);
		V_1 = L_11;
		int32_t L_12 = V_1;
		if ((((int32_t)L_12) >= ((int32_t)0)))
		{
			goto IL_0079;
		}
	}
	{
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_0079;
		}
	}
	{
		MenuLevelButton_StartPulse_m732904399(__this, /*hidden argument*/NULL);
		goto IL_007f;
	}

IL_0079:
	{
		MenuLevelButton_StopPulse_m1390356242(__this, /*hidden argument*/NULL);
	}

IL_007f:
	{
		__this->set_pulse_13((bool)0);
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
		GameObject_t1113636619 * L_6 = __this->get_activePanel_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_6, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		GameObject_t1113636619 * L_8 = __this->get_activePanel_6();
		bool L_9 = ___value0;
		NullCheck(L_8);
		GameObject_SetActive_m796801857(L_8, L_9, /*hidden argument*/NULL);
	}

IL_005c:
	{
		GameObject_t1113636619 * L_10 = __this->get_inactivePanel_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_11 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_10, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_007c;
		}
	}
	{
		GameObject_t1113636619 * L_12 = __this->get_inactivePanel_7();
		bool L_13 = ___value0;
		NullCheck(L_12);
		GameObject_SetActive_m796801857(L_12, (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_007c:
	{
		return;
	}
}
// System.Void MenuLevelButton::ShowStarts(System.Int32)
extern "C"  void MenuLevelButton_ShowStarts_m3471610984 (MenuLevelButton_t3559006541 * __this, int32_t ___amount0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_ShowStarts_m3471610984_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	GameObject_t1113636619 * G_B9_0 = NULL;
	GameObject_t1113636619 * G_B5_0 = NULL;
	GameObject_t1113636619 * G_B7_0 = NULL;
	GameObject_t1113636619 * G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	GameObject_t1113636619 * G_B8_1 = NULL;
	int32_t G_B10_0 = 0;
	GameObject_t1113636619 * G_B10_1 = NULL;
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
		goto IL_0062;
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
		G_B5_0 = L_12;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			G_B9_0 = L_12;
			goto IL_0058;
		}
	}
	{
		int32_t L_15 = ___amount0;
		G_B6_0 = G_B5_0;
		if ((((int32_t)L_15) >= ((int32_t)0)))
		{
			G_B7_0 = G_B5_0;
			goto IL_0055;
		}
	}
	{
		Text_t1901882714 * L_16 = __this->get_completedLevelsText_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_17 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_16, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		G_B8_0 = ((int32_t)(L_17));
		G_B8_1 = G_B6_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B8_0 = 1;
		G_B8_1 = G_B7_0;
	}

IL_0056:
	{
		G_B10_0 = G_B8_0;
		G_B10_1 = G_B8_1;
		goto IL_0059;
	}

IL_0058:
	{
		G_B10_0 = 0;
		G_B10_1 = G_B9_0;
	}

IL_0059:
	{
		NullCheck(G_B10_1);
		GameObject_SetActive_m796801857(G_B10_1, (bool)G_B10_0, /*hidden argument*/NULL);
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_1;
		GameObjectU5BU5D_t3328599146* L_20 = __this->get_inactiveStars_3();
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_20)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
// System.Void MenuLevelButton::ShowLevelCount()
extern "C"  void MenuLevelButton_ShowLevelCount_m1856586175 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_ShowLevelCount_m1856586175_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		Text_t1901882714 * L_0 = __this->get_completedLevelsText_5();
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
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_2 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		int32_t L_3 = __this->get_level_9();
		NullCheck(L_2);
		int32_t L_4 = StageInfo_GetLevelCount_m2994796715(L_2, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		V_1 = 0;
		V_2 = 0;
		goto IL_0072;
	}

IL_002c:
	{
		int32_t* L_5 = __this->get_address_of_level_9();
		String_t* L_6 = Int32_ToString_m372259452(L_5, _stringLiteral3451565968, /*hidden argument*/NULL);
		int32_t L_7 = V_2;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		String_t* L_8 = Int32_ToString_m372259452((&V_4), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_9 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral2278870150, L_6, _stringLiteral382461207, L_8, /*hidden argument*/NULL);
		int32_t L_10 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_9, (-1), /*hidden argument*/NULL);
		V_3 = L_10;
		int32_t L_11 = V_3;
		if ((((int32_t)L_11) <= ((int32_t)0)))
		{
			goto IL_006e;
		}
	}
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_006e:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0072:
	{
		int32_t L_14 = V_2;
		int32_t L_15 = V_0;
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_002c;
		}
	}
	{
		Text_t1901882714 * L_16 = __this->get_completedLevelsText_5();
		String_t* L_17 = Int32_ToString_m372259452((&V_1), _stringLiteral3451565968, /*hidden argument*/NULL);
		String_t* L_18 = Int32_ToString_m372259452((&V_0), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m2163913788(NULL /*static, unused*/, L_17, _stringLiteral79945594, L_18, _stringLiteral2642543365, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
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
		GameObject_t1113636619 * L_0 = __this->get_activePanel_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_activePanel_6();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0038;
		}
	}
	{
		MenuNotification_t963843896 * L_4 = __this->get_notificationManager_11();
		String_t* L_5 = __this->get_inactiveMessage_10();
		NullCheck(L_4);
		MenuNotification_ShowMessage_m1081873921(L_4, L_5, /*hidden argument*/NULL);
		MenuLevelButton_DoSinglePulse_m2171373596(__this, /*hidden argument*/NULL);
	}

IL_0038:
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
		GameObject_t1113636619 * L_0 = __this->get_activePanel_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_activePanel_6();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}

IL_0021:
	{
		MenuFlowManager_t1614880941 * L_4 = __this->get_flowManager_12();
		int32_t L_5 = __this->get_level_9();
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
		GameObject_t1113636619 * L_0 = __this->get_activePanel_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_activePanel_6();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0032;
		}
	}

IL_0021:
	{
		MenuFlowManager_t1614880941 * L_4 = __this->get_flowManager_12();
		int32_t L_5 = __this->get_level_9();
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
		GameObject_t1113636619 * L_0 = __this->get_activePanel_6();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m1810815630(NULL /*static, unused*/, L_0, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		GameObject_t1113636619 * L_2 = __this->get_activePanel_6();
		NullCheck(L_2);
		bool L_3 = GameObject_get_activeSelf_m1767405923(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002d;
		}
	}

IL_0021:
	{
		MenuFlowManager_t1614880941 * L_4 = __this->get_flowManager_12();
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
		__this->set_levelKeyPrefix_8(L_0);
		return;
	}
}
// System.Void MenuLevelButton::DoSinglePulse()
extern "C"  void MenuLevelButton_DoSinglePulse_m2171373596 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = MenuLevelButton_IPulse_m2191181185(__this, (10.0f), (bool)0, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MenuLevelButton::StartPulse()
extern "C"  void MenuLevelButton_StartPulse_m732904399 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	{
		MenuLevelButton_StopPulse_m1390356242(__this, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_0 = Component_get_gameObject_m442555142(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = GameObject_get_activeSelf_m1767405923(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002e;
		}
	}
	{
		RuntimeObject* L_2 = MenuLevelButton_IPulse_m2191181185(__this, (2.0f), (bool)1, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_3 = MonoBehaviour_StartCoroutine_m3411253000(__this, L_2, /*hidden argument*/NULL);
		__this->set_pulseCoroutine_16(L_3);
	}

IL_002e:
	{
		return;
	}
}
// System.Void MenuLevelButton::StopPulse()
extern "C"  void MenuLevelButton_StopPulse_m1390356242 (MenuLevelButton_t3559006541 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_StopPulse_m1390356242_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Transform_t3600365921 * L_0 = Component_get_transform_m3162698980(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_1 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_normalScale_15();
		Vector3_t3722313464  L_3 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_m3053443106(L_0, L_3, /*hidden argument*/NULL);
		Coroutine_t3829159415 * L_4 = __this->get_pulseCoroutine_16();
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		Coroutine_t3829159415 * L_5 = __this->get_pulseCoroutine_16();
		MonoBehaviour_StopCoroutine_m907039165(__this, L_5, /*hidden argument*/NULL);
	}

IL_0032:
	{
		return;
	}
}
// System.Collections.IEnumerator MenuLevelButton::IPulse(System.Single,System.Boolean)
extern "C"  RuntimeObject* MenuLevelButton_IPulse_m2191181185 (MenuLevelButton_t3559006541 * __this, float ___speed0, bool ___loop1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MenuLevelButton_IPulse_m2191181185_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIPulseU3Ec__Iterator0_t2453214028 * V_0 = NULL;
	{
		U3CIPulseU3Ec__Iterator0_t2453214028 * L_0 = (U3CIPulseU3Ec__Iterator0_t2453214028 *)il2cpp_codegen_object_new(U3CIPulseU3Ec__Iterator0_t2453214028_il2cpp_TypeInfo_var);
		U3CIPulseU3Ec__Iterator0__ctor_m3283826807(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIPulseU3Ec__Iterator0_t2453214028 * L_1 = V_0;
		float L_2 = ___speed0;
		NullCheck(L_1);
		L_1->set_speed_2(L_2);
		U3CIPulseU3Ec__Iterator0_t2453214028 * L_3 = V_0;
		bool L_4 = ___loop1;
		NullCheck(L_3);
		L_3->set_loop_3(L_4);
		U3CIPulseU3Ec__Iterator0_t2453214028 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_4(__this);
		U3CIPulseU3Ec__Iterator0_t2453214028 * L_6 = V_0;
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
// System.Void MenuLevelButton/<IPulse>c__Iterator0::.ctor()
extern "C"  void U3CIPulseU3Ec__Iterator0__ctor_m3283826807 (U3CIPulseU3Ec__Iterator0_t2453214028 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean MenuLevelButton/<IPulse>c__Iterator0::MoveNext()
extern "C"  bool U3CIPulseU3Ec__Iterator0_MoveNext_m982244571 (U3CIPulseU3Ec__Iterator0_t2453214028 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPulseU3Ec__Iterator0_MoveNext_m982244571_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_00bf;
			}
			case 2:
			{
				goto IL_014d;
			}
		}
	}
	{
		goto IL_016f;
	}

IL_0025:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		MenuLevelButton_t3559006541 * L_2 = __this->get_U24this_4();
		NullCheck(L_2);
		Transform_t3600365921 * L_3 = Component_get_transform_m3162698980(L_2, /*hidden argument*/NULL);
		__this->set_U3CtrfU3E__0_1(L_3);
	}

IL_0041:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_00bf;
	}

IL_0051:
	{
		float L_4 = __this->get_U3ClerpU3E__0_0();
		float L_5 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_2();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))));
		Transform_t3600365921 * L_7 = __this->get_U3CtrfU3E__0_1();
		Transform_t3600365921 * L_8 = __this->get_U3CtrfU3E__0_1();
		NullCheck(L_8);
		Vector3_t3722313464  L_9 = Transform_get_localScale_m129152068(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_10 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		MenuLevelButton_t3559006541 * L_11 = __this->get_U24this_4();
		NullCheck(L_11);
		float L_12 = L_11->get_pulseScale_14();
		Vector3_t3722313464  L_13 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_10, L_12, /*hidden argument*/NULL);
		float L_14 = __this->get_U3ClerpU3E__0_0();
		Vector3_t3722313464  L_15 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_9, L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localScale_m3053443106(L_7, L_15, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_16 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_16, /*hidden argument*/NULL);
		__this->set_U24current_5(L_16);
		bool L_17 = __this->get_U24disposing_6();
		if (L_17)
		{
			goto IL_00ba;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_00ba:
	{
		goto IL_0171;
	}

IL_00bf:
	{
		float L_18 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_18) < ((float)(1.0f))))
		{
			goto IL_0051;
		}
	}
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_014d;
	}

IL_00df:
	{
		float L_19 = __this->get_U3ClerpU3E__0_0();
		float L_20 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_21 = __this->get_speed_2();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_19, (float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)))));
		Transform_t3600365921 * L_22 = __this->get_U3CtrfU3E__0_1();
		Transform_t3600365921 * L_23 = __this->get_U3CtrfU3E__0_1();
		NullCheck(L_23);
		Vector3_t3722313464  L_24 = Transform_get_localScale_m129152068(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_25 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		MenuLevelButton_t3559006541 * L_26 = __this->get_U24this_4();
		NullCheck(L_26);
		float L_27 = L_26->get_normalScale_15();
		Vector3_t3722313464  L_28 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_25, L_27, /*hidden argument*/NULL);
		float L_29 = __this->get_U3ClerpU3E__0_0();
		Vector3_t3722313464  L_30 = Vector3_Lerp_m407887542(NULL /*static, unused*/, L_24, L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_set_localScale_m3053443106(L_22, L_30, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_31 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_31, /*hidden argument*/NULL);
		__this->set_U24current_5(L_31);
		bool L_32 = __this->get_U24disposing_6();
		if (L_32)
		{
			goto IL_0148;
		}
	}
	{
		__this->set_U24PC_7(2);
	}

IL_0148:
	{
		goto IL_0171;
	}

IL_014d:
	{
		float L_33 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_33) < ((float)(1.0f))))
		{
			goto IL_00df;
		}
	}
	{
		bool L_34 = __this->get_loop_3();
		if (L_34)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_016f:
	{
		return (bool)0;
	}

IL_0171:
	{
		return (bool)1;
	}
}
// System.Object MenuLevelButton/<IPulse>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIPulseU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2260371206 (U3CIPulseU3Ec__Iterator0_t2453214028 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object MenuLevelButton/<IPulse>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIPulseU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m1903420061 (U3CIPulseU3Ec__Iterator0_t2453214028 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void MenuLevelButton/<IPulse>c__Iterator0::Dispose()
extern "C"  void U3CIPulseU3Ec__Iterator0_Dispose_m4163204595 (U3CIPulseU3Ec__Iterator0_t2453214028 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void MenuLevelButton/<IPulse>c__Iterator0::Reset()
extern "C"  void U3CIPulseU3Ec__Iterator0_Reset_m2787103542 (U3CIPulseU3Ec__Iterator0_t2453214028 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPulseU3Ec__Iterator0_Reset_m2787103542_MetadataUsageId);
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
// System.Void MenuLevelScreen::Start()
extern "C"  void MenuLevelScreen_Start_m929057998 (MenuLevelScreen_t2132622692 * __this, const RuntimeMethod* method)
{
	{
		MenuLevelScreen_OrganizeLevelScreen_m3344403122(__this, /*hidden argument*/NULL);
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
		String_t* L_6 = String_Concat_m3755062657(NULL /*static, unused*/, L_3, _stringLiteral3452614641, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		StageInfo_t2857013238 * L_7 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		String_t* L_8 = V_2;
		NullCheck(L_7);
		bool L_9 = StageInfo_LevelExists_m3960227236(L_7, L_8, /*hidden argument*/NULL);
		V_5 = L_9;
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		float L_11 = V_0;
		float L_12 = __this->get_scrollIncrement_5();
		V_0 = ((float)il2cpp_codegen_add((float)L_11, (float)L_12));
	}

IL_005e:
	{
		MenuLevelButtonU5BU5D_t58144480* L_13 = __this->get_buttons_2();
		int32_t L_14 = V_1;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		MenuLevelButton_t3559006541 * L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_t1113636619 * L_17 = Component_get_gameObject_m442555142(L_16, /*hidden argument*/NULL);
		bool L_18 = V_5;
		NullCheck(L_17);
		GameObject_SetActive_m796801857(L_17, L_18, /*hidden argument*/NULL);
		MenuLevelButtonU5BU5D_t58144480* L_19 = __this->get_buttons_2();
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = L_20;
		MenuLevelButton_t3559006541 * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_23 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_23);
		int32_t L_24 = StageInfo_GetWorldID_m2363233804(L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		String_t* L_25 = Int32_ToString_m372259452((&V_6), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_26 = String_Concat_m3755062657(NULL /*static, unused*/, _stringLiteral2781991851, L_25, _stringLiteral382461207, /*hidden argument*/NULL);
		NullCheck(L_22);
		MenuLevelButton_SetLevelKeyPrefix_m971040662(L_22, L_26, /*hidden argument*/NULL);
		MenuLevelButtonU5BU5D_t58144480* L_27 = __this->get_buttons_2();
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		MenuLevelButton_t3559006541 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		MenuLevelButton_Setup_m3441281685(L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b7:
	{
		int32_t L_32 = V_1;
		MenuLevelButtonU5BU5D_t58144480* L_33 = __this->get_buttons_2();
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_33)->max_length)))))))
		{
			goto IL_000e;
		}
	}
	{
		RectTransform_t3704657025 * L_34 = __this->get_scrollRect_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		bool L_35 = Object_op_Inequality_m4071470834(NULL /*static, unused*/, L_34, (Object_t631007953 *)NULL, /*hidden argument*/NULL);
		if (!L_35)
		{
			goto IL_00f8;
		}
	}
	{
		RectTransform_t3704657025 * L_36 = __this->get_scrollRect_3();
		NullCheck(L_36);
		Vector2_t2156229523  L_37 = RectTransform_get_sizeDelta_m2183112744(L_36, /*hidden argument*/NULL);
		V_7 = L_37;
		float L_38 = V_0;
		(&V_7)->set_y_1(L_38);
		RectTransform_t3704657025 * L_39 = __this->get_scrollRect_3();
		Vector2_t2156229523  L_40 = V_7;
		NullCheck(L_39);
		RectTransform_set_sizeDelta_m3462269772(L_39, L_40, /*hidden argument*/NULL);
	}

IL_00f8:
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
// System.Void ObjectBuilderScript::.ctor()
extern "C"  void ObjectBuilderScript__ctor_m2747617648 (ObjectBuilderScript_t920771485 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ObjectBuilderScript::BuildObject()
extern "C"  void ObjectBuilderScript_BuildObject_m60935440 (ObjectBuilderScript_t920771485 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ObjectBuilderScript_BuildObject_m60935440_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_obj_2();
		Vector3_t3722313464  L_1 = __this->get_spawnPoint_3();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
		Quaternion_t2301928331  L_2 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1113636619_m3006960551(NULL /*static, unused*/, L_0, L_1, L_2, /*hidden argument*/Object_Instantiate_TisGameObject_t1113636619_m3006960551_RuntimeMethod_var);
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
// System.Void Option::.ctor()
extern "C"  void Option__ctor_m1791189442 (Option_t3411289914 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
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
// System.Void PauseMenu::.ctor()
extern "C"  void PauseMenu__ctor_m3854158124 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PauseMenu::Update()
extern "C"  void PauseMenu_Update_m1844139191 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_Update_m1844139191_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		GameObject_t1113636619 * L_1 = __this->get_pausePanel_2();
		NullCheck(L_1);
		bool L_2 = GameObject_get_activeSelf_m1767405923(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		PauseMenu_HideMenu_m2870079875(__this, /*hidden argument*/NULL);
		goto IL_002d;
	}

IL_0027:
	{
		PauseMenu_ShowMenu_m3564380446(__this, /*hidden argument*/NULL);
	}

IL_002d:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_3 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		EndPanel_PlayEndAnimation_m1188432607(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
	}

IL_0043:
	{
		V_0 = ((int32_t)48);
		goto IL_0063;
	}

IL_004b:
	{
		int32_t L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1431474628_il2cpp_TypeInfo_var);
		bool L_5 = Input_GetKeyDown_m17791917(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_6 = V_0;
		StepChecker_CheckMarkAtIndex_m3141407165(NULL /*static, unused*/, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)48))), /*hidden argument*/NULL);
	}

IL_005f:
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0063:
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)58))))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
// System.Void PauseMenu::ShowMenu()
extern "C"  void PauseMenu_ShowMenu_m3564380446 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = PauseMenu_IHidePanel_m1252136598(__this, (bool)0, (0.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = PauseMenu_IFadeBG_m496742413(__this, (0.95f), (5.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0050;
	}

IL_0031:
	{
		PauseMenuButtonU5BU5D_t2517294588* L_2 = __this->get_menuButtons_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PauseMenuButton_t2049395553 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		RuntimeObject* L_6 = PauseMenu_IMoveButton_m3998061770(__this, L_5, (bool)1, (2.5f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_8 = V_0;
		PauseMenuButtonU5BU5D_t2517294588* L_9 = __this->get_menuButtons_4();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
// System.Void PauseMenu::HideMenu()
extern "C"  void PauseMenu_HideMenu_m2870079875 (PauseMenu_t3916167947 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = PauseMenu_IHidePanel_m1252136598(__this, (bool)1, (0.2f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject* L_1 = PauseMenu_IFadeBG_m496742413(__this, (0.0f), (5.0f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_1, /*hidden argument*/NULL);
		V_0 = 0;
		goto IL_0050;
	}

IL_0031:
	{
		PauseMenuButtonU5BU5D_t2517294588* L_2 = __this->get_menuButtons_4();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		PauseMenuButton_t2049395553 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		RuntimeObject* L_6 = PauseMenu_IMoveButton_m3998061770(__this, L_5, (bool)0, (2.5f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0050:
	{
		int32_t L_8 = V_0;
		PauseMenuButtonU5BU5D_t2517294588* L_9 = __this->get_menuButtons_4();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_9)->max_length)))))))
		{
			goto IL_0031;
		}
	}
	{
		return;
	}
}
// System.Collections.IEnumerator PauseMenu::IHidePanel(System.Boolean,System.Single)
extern "C"  RuntimeObject* PauseMenu_IHidePanel_m1252136598 (PauseMenu_t3916167947 * __this, bool ___value0, float ___time1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_IHidePanel_m1252136598_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIHidePanelU3Ec__Iterator0_t1813140080 * V_0 = NULL;
	{
		U3CIHidePanelU3Ec__Iterator0_t1813140080 * L_0 = (U3CIHidePanelU3Ec__Iterator0_t1813140080 *)il2cpp_codegen_object_new(U3CIHidePanelU3Ec__Iterator0_t1813140080_il2cpp_TypeInfo_var);
		U3CIHidePanelU3Ec__Iterator0__ctor_m48949479(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIHidePanelU3Ec__Iterator0_t1813140080 * L_1 = V_0;
		float L_2 = ___time1;
		NullCheck(L_1);
		L_1->set_time_0(L_2);
		U3CIHidePanelU3Ec__Iterator0_t1813140080 * L_3 = V_0;
		bool L_4 = ___value0;
		NullCheck(L_3);
		L_3->set_value_1(L_4);
		U3CIHidePanelU3Ec__Iterator0_t1813140080 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_2(__this);
		U3CIHidePanelU3Ec__Iterator0_t1813140080 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator PauseMenu::IFadeBG(System.Single,System.Single)
extern "C"  RuntimeObject* PauseMenu_IFadeBG_m496742413 (PauseMenu_t3916167947 * __this, float ___alpha0, float ___speed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_IFadeBG_m496742413_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIFadeBGU3Ec__Iterator1_t4004556069 * V_0 = NULL;
	{
		U3CIFadeBGU3Ec__Iterator1_t4004556069 * L_0 = (U3CIFadeBGU3Ec__Iterator1_t4004556069 *)il2cpp_codegen_object_new(U3CIFadeBGU3Ec__Iterator1_t4004556069_il2cpp_TypeInfo_var);
		U3CIFadeBGU3Ec__Iterator1__ctor_m4221527533(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIFadeBGU3Ec__Iterator1_t4004556069 * L_1 = V_0;
		float L_2 = ___speed1;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIFadeBGU3Ec__Iterator1_t4004556069 * L_3 = V_0;
		float L_4 = ___alpha0;
		NullCheck(L_3);
		L_3->set_alpha_3(L_4);
		U3CIFadeBGU3Ec__Iterator1_t4004556069 * L_5 = V_0;
		NullCheck(L_5);
		L_5->set_U24this_4(__this);
		U3CIFadeBGU3Ec__Iterator1_t4004556069 * L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator PauseMenu::IMoveButton(PauseMenuButton,System.Boolean,System.Single)
extern "C"  RuntimeObject* PauseMenu_IMoveButton_m3998061770 (PauseMenu_t3916167947 * __this, PauseMenuButton_t2049395553 * ___button0, bool ___show1, float ___speed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PauseMenu_IMoveButton_m3998061770_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIMoveButtonU3Ec__Iterator2_t2280749436 * V_0 = NULL;
	{
		U3CIMoveButtonU3Ec__Iterator2_t2280749436 * L_0 = (U3CIMoveButtonU3Ec__Iterator2_t2280749436 *)il2cpp_codegen_object_new(U3CIMoveButtonU3Ec__Iterator2_t2280749436_il2cpp_TypeInfo_var);
		U3CIMoveButtonU3Ec__Iterator2__ctor_m791223576(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIMoveButtonU3Ec__Iterator2_t2280749436 * L_1 = V_0;
		float L_2 = ___speed2;
		NullCheck(L_1);
		L_1->set_speed_1(L_2);
		U3CIMoveButtonU3Ec__Iterator2_t2280749436 * L_3 = V_0;
		PauseMenuButton_t2049395553 * L_4 = ___button0;
		NullCheck(L_3);
		L_3->set_button_2(L_4);
		U3CIMoveButtonU3Ec__Iterator2_t2280749436 * L_5 = V_0;
		bool L_6 = ___show1;
		NullCheck(L_5);
		L_5->set_show_3(L_6);
		U3CIMoveButtonU3Ec__Iterator2_t2280749436 * L_7 = V_0;
		return L_7;
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
// System.Void PauseMenu/<IFadeBG>c__Iterator1::.ctor()
extern "C"  void U3CIFadeBGU3Ec__Iterator1__ctor_m4221527533 (U3CIFadeBGU3Ec__Iterator1_t4004556069 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PauseMenu/<IFadeBG>c__Iterator1::MoveNext()
extern "C"  bool U3CIFadeBGU3Ec__Iterator1_MoveNext_m521724924 (U3CIFadeBGU3Ec__Iterator1_t4004556069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeBGU3Ec__Iterator1_MoveNext_m521724924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_7();
		V_0 = L_0;
		__this->set_U24PC_7((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00bc;
			}
		}
	}
	{
		goto IL_00d3;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_00bc;
	}

IL_0031:
	{
		float L_2 = __this->get_U3ClerpU3E__0_0();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_1();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		PauseMenu_t3916167947 * L_5 = __this->get_U24this_4();
		NullCheck(L_5);
		Image_t2670269651 * L_6 = L_5->get_background_3();
		NullCheck(L_6);
		Color_t2555686324  L_7 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		__this->set_U3CcU3E__1_2(L_7);
		Color_t2555686324 * L_8 = __this->get_address_of_U3CcU3E__1_2();
		Color_t2555686324 * L_9 = __this->get_address_of_U3CcU3E__1_2();
		float L_10 = L_9->get_a_3();
		float L_11 = __this->get_alpha_3();
		float L_12 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_13 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, L_10, L_11, L_12, /*hidden argument*/NULL);
		L_8->set_a_3(L_13);
		PauseMenu_t3916167947 * L_14 = __this->get_U24this_4();
		NullCheck(L_14);
		Image_t2670269651 * L_15 = L_14->get_background_3();
		Color_t2555686324  L_16 = __this->get_U3CcU3E__1_2();
		NullCheck(L_15);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_15, L_16);
		WaitForEndOfFrame_t1314943911 * L_17 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_17, /*hidden argument*/NULL);
		__this->set_U24current_5(L_17);
		bool L_18 = __this->get_U24disposing_6();
		if (L_18)
		{
			goto IL_00b7;
		}
	}
	{
		__this->set_U24PC_7(1);
	}

IL_00b7:
	{
		goto IL_00d5;
	}

IL_00bc:
	{
		float L_19 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_19) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_U24PC_7((-1));
	}

IL_00d3:
	{
		return (bool)0;
	}

IL_00d5:
	{
		return (bool)1;
	}
}
// System.Object PauseMenu/<IFadeBG>c__Iterator1::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIFadeBGU3Ec__Iterator1_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2035595788 (U3CIFadeBGU3Ec__Iterator1_t4004556069 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Object PauseMenu/<IFadeBG>c__Iterator1::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIFadeBGU3Ec__Iterator1_System_Collections_IEnumerator_get_Current_m2782922656 (U3CIFadeBGU3Ec__Iterator1_t4004556069 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_5();
		return L_0;
	}
}
// System.Void PauseMenu/<IFadeBG>c__Iterator1::Dispose()
extern "C"  void U3CIFadeBGU3Ec__Iterator1_Dispose_m4268604903 (U3CIFadeBGU3Ec__Iterator1_t4004556069 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_6((bool)1);
		__this->set_U24PC_7((-1));
		return;
	}
}
// System.Void PauseMenu/<IFadeBG>c__Iterator1::Reset()
extern "C"  void U3CIFadeBGU3Ec__Iterator1_Reset_m956069341 (U3CIFadeBGU3Ec__Iterator1_t4004556069 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIFadeBGU3Ec__Iterator1_Reset_m956069341_MetadataUsageId);
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
// System.Void PauseMenu/<IHidePanel>c__Iterator0::.ctor()
extern "C"  void U3CIHidePanelU3Ec__Iterator0__ctor_m48949479 (U3CIHidePanelU3Ec__Iterator0_t1813140080 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PauseMenu/<IHidePanel>c__Iterator0::MoveNext()
extern "C"  bool U3CIHidePanelU3Ec__Iterator0_MoveNext_m1113169740 (U3CIHidePanelU3Ec__Iterator0_t1813140080 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIHidePanelU3Ec__Iterator0_MoveNext_m1113169740_MetadataUsageId);
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
		goto IL_0066;
	}

IL_0021:
	{
		float L_2 = __this->get_time_0();
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
		goto IL_0068;
	}

IL_0046:
	{
		PauseMenu_t3916167947 * L_5 = __this->get_U24this_2();
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = L_5->get_pausePanel_2();
		bool L_7 = __this->get_value_1();
		NullCheck(L_6);
		GameObject_SetActive_m796801857(L_6, (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		__this->set_U24PC_5((-1));
	}

IL_0066:
	{
		return (bool)0;
	}

IL_0068:
	{
		return (bool)1;
	}
}
// System.Object PauseMenu/<IHidePanel>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIHidePanelU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m356501331 (U3CIHidePanelU3Ec__Iterator0_t1813140080 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Object PauseMenu/<IHidePanel>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIHidePanelU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m4175877855 (U3CIHidePanelU3Ec__Iterator0_t1813140080 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_3();
		return L_0;
	}
}
// System.Void PauseMenu/<IHidePanel>c__Iterator0::Dispose()
extern "C"  void U3CIHidePanelU3Ec__Iterator0_Dispose_m853227443 (U3CIHidePanelU3Ec__Iterator0_t1813140080 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_4((bool)1);
		__this->set_U24PC_5((-1));
		return;
	}
}
// System.Void PauseMenu/<IHidePanel>c__Iterator0::Reset()
extern "C"  void U3CIHidePanelU3Ec__Iterator0_Reset_m1288757492 (U3CIHidePanelU3Ec__Iterator0_t1813140080 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIHidePanelU3Ec__Iterator0_Reset_m1288757492_MetadataUsageId);
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
// System.Void PauseMenu/<IMoveButton>c__Iterator2::.ctor()
extern "C"  void U3CIMoveButtonU3Ec__Iterator2__ctor_m791223576 (U3CIMoveButtonU3Ec__Iterator2_t2280749436 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PauseMenu/<IMoveButton>c__Iterator2::MoveNext()
extern "C"  bool U3CIMoveButtonU3Ec__Iterator2_MoveNext_m1260386584 (U3CIMoveButtonU3Ec__Iterator2_t2280749436 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIMoveButtonU3Ec__Iterator2_MoveNext_m1260386584_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2156229523  G_B5_0;
	memset(&G_B5_0, 0, sizeof(G_B5_0));
	U3CIMoveButtonU3Ec__Iterator2_t2280749436 * G_B5_1 = NULL;
	Vector2_t2156229523  G_B4_0;
	memset(&G_B4_0, 0, sizeof(G_B4_0));
	U3CIMoveButtonU3Ec__Iterator2_t2280749436 * G_B4_1 = NULL;
	Vector2_t2156229523  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	Vector2_t2156229523  G_B6_1;
	memset(&G_B6_1, 0, sizeof(G_B6_1));
	U3CIMoveButtonU3Ec__Iterator2_t2280749436 * G_B6_2 = NULL;
	float G_B8_0 = 0.0f;
	U3CIMoveButtonU3Ec__Iterator2_t2280749436 * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	U3CIMoveButtonU3Ec__Iterator2_t2280749436 * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	U3CIMoveButtonU3Ec__Iterator2_t2280749436 * G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	Color_t2555686324 * G_B11_1 = NULL;
	float G_B10_0 = 0.0f;
	Color_t2555686324 * G_B10_1 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	Color_t2555686324 * G_B12_2 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_01b5;
			}
		}
	}
	{
		goto IL_01cc;
	}

IL_0021:
	{
		__this->set_U3ClerpU3E__0_0((0.0f));
		goto IL_01b5;
	}

IL_0031:
	{
		float L_2 = __this->get_U3ClerpU3E__0_0();
		float L_3 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_4 = __this->get_speed_1();
		__this->set_U3ClerpU3E__0_0(((float)il2cpp_codegen_add((float)L_2, (float)((float)il2cpp_codegen_multiply((float)L_3, (float)L_4)))));
		PauseMenuButton_t2049395553 * L_5 = __this->get_button_2();
		NullCheck(L_5);
		Image_t2670269651 * L_6 = L_5->get_image_0();
		NullCheck(L_6);
		RectTransform_t3704657025 * L_7 = Graphic_get_rectTransform_m1167152468(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector2_t2156229523  L_8 = RectTransform_get_anchoredPosition_m1813443094(L_7, /*hidden argument*/NULL);
		bool L_9 = __this->get_show_3();
		G_B4_0 = L_8;
		G_B4_1 = __this;
		if (!L_9)
		{
			G_B5_0 = L_8;
			G_B5_1 = __this;
			goto IL_007b;
		}
	}
	{
		PauseMenuButton_t2049395553 * L_10 = __this->get_button_2();
		NullCheck(L_10);
		Vector2_t2156229523  L_11 = L_10->get_shownPosition_1();
		G_B6_0 = L_11;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		goto IL_0086;
	}

IL_007b:
	{
		PauseMenuButton_t2049395553 * L_12 = __this->get_button_2();
		NullCheck(L_12);
		Vector2_t2156229523  L_13 = L_12->get_hiddenPosition_2();
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
	}

IL_0086:
	{
		float L_14 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_t2156229523_il2cpp_TypeInfo_var);
		Vector2_t2156229523  L_15 = Vector2_Lerp_m854472224(NULL /*static, unused*/, G_B6_1, G_B6_0, L_14, /*hidden argument*/NULL);
		NullCheck(G_B6_2);
		G_B6_2->set_U3CposU3E__1_4(L_15);
		PauseMenuButton_t2049395553 * L_16 = __this->get_button_2();
		NullCheck(L_16);
		Image_t2670269651 * L_17 = L_16->get_image_0();
		NullCheck(L_17);
		RectTransform_t3704657025 * L_18 = Graphic_get_rectTransform_m1167152468(L_17, /*hidden argument*/NULL);
		Vector2_t2156229523  L_19 = __this->get_U3CposU3E__1_4();
		NullCheck(L_18);
		RectTransform_set_anchoredPosition_m4126691837(L_18, L_19, /*hidden argument*/NULL);
		PauseMenuButton_t2049395553 * L_20 = __this->get_button_2();
		NullCheck(L_20);
		Image_t2670269651 * L_21 = L_20->get_image_0();
		NullCheck(L_21);
		RectTransform_t3704657025 * L_22 = Graphic_get_rectTransform_m1167152468(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t3722313464  L_23 = Transform_get_localScale_m129152068(L_22, /*hidden argument*/NULL);
		V_1 = L_23;
		float L_24 = (&V_1)->get_x_1();
		float L_25 = __this->get_U3ClerpU3E__0_0();
		G_B7_0 = L_24;
		G_B7_1 = __this;
		if ((!(((float)L_25) < ((float)(0.5f)))))
		{
			G_B8_0 = L_24;
			G_B8_1 = __this;
			goto IL_00ef;
		}
	}
	{
		PauseMenuButton_t2049395553 * L_26 = __this->get_button_2();
		NullCheck(L_26);
		float L_27 = L_26->get_poppedScale_4();
		G_B9_0 = L_27;
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_00fa;
	}

IL_00ef:
	{
		PauseMenuButton_t2049395553 * L_28 = __this->get_button_2();
		NullCheck(L_28);
		float L_29 = L_28->get_normalScale_3();
		G_B9_0 = L_29;
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_00fa:
	{
		float L_30 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_31 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, G_B9_1, G_B9_0, L_30, /*hidden argument*/NULL);
		NullCheck(G_B9_2);
		G_B9_2->set_U3CscaleU3E__1_5(L_31);
		PauseMenuButton_t2049395553 * L_32 = __this->get_button_2();
		NullCheck(L_32);
		Image_t2670269651 * L_33 = L_32->get_image_0();
		NullCheck(L_33);
		RectTransform_t3704657025 * L_34 = Graphic_get_rectTransform_m1167152468(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_35 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_36 = __this->get_U3CscaleU3E__1_5();
		Vector3_t3722313464  L_37 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_set_localScale_m3053443106(L_34, L_37, /*hidden argument*/NULL);
		PauseMenuButton_t2049395553 * L_38 = __this->get_button_2();
		NullCheck(L_38);
		Image_t2670269651 * L_39 = L_38->get_image_0();
		NullCheck(L_39);
		Color_t2555686324  L_40 = VirtFuncInvoker0< Color_t2555686324  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_39);
		__this->set_U3CcU3E__1_6(L_40);
		Color_t2555686324 * L_41 = __this->get_address_of_U3CcU3E__1_6();
		Color_t2555686324 * L_42 = __this->get_address_of_U3CcU3E__1_6();
		float L_43 = L_42->get_a_3();
		bool L_44 = __this->get_show_3();
		G_B10_0 = L_43;
		G_B10_1 = L_41;
		if (!L_44)
		{
			G_B11_0 = L_43;
			G_B11_1 = L_41;
			goto IL_016b;
		}
	}
	{
		G_B12_0 = (1.0f);
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		goto IL_0170;
	}

IL_016b:
	{
		G_B12_0 = (0.0f);
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
	}

IL_0170:
	{
		float L_45 = __this->get_U3ClerpU3E__0_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		float L_46 = Mathf_Lerp_m1004423579(NULL /*static, unused*/, G_B12_1, G_B12_0, L_45, /*hidden argument*/NULL);
		G_B12_2->set_a_3(L_46);
		PauseMenuButton_t2049395553 * L_47 = __this->get_button_2();
		NullCheck(L_47);
		Image_t2670269651 * L_48 = L_47->get_image_0();
		Color_t2555686324  L_49 = __this->get_U3CcU3E__1_6();
		NullCheck(L_48);
		VirtActionInvoker1< Color_t2555686324  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_48, L_49);
		WaitForEndOfFrame_t1314943911 * L_50 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_50, /*hidden argument*/NULL);
		__this->set_U24current_7(L_50);
		bool L_51 = __this->get_U24disposing_8();
		if (L_51)
		{
			goto IL_01b0;
		}
	}
	{
		__this->set_U24PC_9(1);
	}

IL_01b0:
	{
		goto IL_01ce;
	}

IL_01b5:
	{
		float L_52 = __this->get_U3ClerpU3E__0_0();
		if ((((float)L_52) < ((float)(1.0f))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_U24PC_9((-1));
	}

IL_01cc:
	{
		return (bool)0;
	}

IL_01ce:
	{
		return (bool)1;
	}
}
// System.Object PauseMenu/<IMoveButton>c__Iterator2::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIMoveButtonU3Ec__Iterator2_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2656856598 (U3CIMoveButtonU3Ec__Iterator2_t2280749436 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object PauseMenu/<IMoveButton>c__Iterator2::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIMoveButtonU3Ec__Iterator2_System_Collections_IEnumerator_get_Current_m2730069182 (U3CIMoveButtonU3Ec__Iterator2_t2280749436 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Void PauseMenu/<IMoveButton>c__Iterator2::Dispose()
extern "C"  void U3CIMoveButtonU3Ec__Iterator2_Dispose_m2579667270 (U3CIMoveButtonU3Ec__Iterator2_t2280749436 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_8((bool)1);
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void PauseMenu/<IMoveButton>c__Iterator2::Reset()
extern "C"  void U3CIMoveButtonU3Ec__Iterator2_Reset_m138322812 (U3CIMoveButtonU3Ec__Iterator2_t2280749436 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIMoveButtonU3Ec__Iterator2_Reset_m138322812_MetadataUsageId);
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
// System.Void PauseMenuButton::.ctor()
extern "C"  void PauseMenuButton__ctor_m1393749009 (PauseMenuButton_t2049395553 * __this, const RuntimeMethod* method)
{
	{
		__this->set_normalScale_3((1.0f));
		__this->set_poppedScale_4((1.1f));
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
// System.Void PF::.ctor()
extern "C"  void PF__ctor_m3030524320 (PF_t166272826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PF__ctor_m3030524320_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_color1_5(_stringLiteral3011714597);
		__this->set_color2_6(_stringLiteral2550604001);
		__this->set_color3_7(_stringLiteral3742049075);
		__this->set_color4_8(_stringLiteral3639419666);
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PF::Setup(System.Int32)
extern "C"  void PF_Setup_m159701545 (PF_t166272826 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		__this->set_id_4(L_0);
		PF_SetColor_m3601946841(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PF::SetColor()
extern "C"  void PF_SetColor_m3601946841 (PF_t166272826 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PF_SetColor_m3601946841_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Color_t2555686324  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color_t2555686324 ));
		int32_t L_0 = __this->get_id_4();
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_003f;
			}
			case 2:
			{
				goto IL_0052;
			}
			case 3:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_0078;
	}

IL_002c:
	{
		String_t* L_2 = __this->get_color1_5();
		ColorUtility_TryParseHtmlString_m1532239634(NULL /*static, unused*/, L_2, (&V_0), /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_003f:
	{
		String_t* L_3 = __this->get_color2_6();
		ColorUtility_TryParseHtmlString_m1532239634(NULL /*static, unused*/, L_3, (&V_0), /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0052:
	{
		String_t* L_4 = __this->get_color3_7();
		ColorUtility_TryParseHtmlString_m1532239634(NULL /*static, unused*/, L_4, (&V_0), /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0065:
	{
		String_t* L_5 = __this->get_color4_8();
		ColorUtility_TryParseHtmlString_m1532239634(NULL /*static, unused*/, L_5, (&V_0), /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t3317548046_il2cpp_TypeInfo_var);
		Debug_Log_m4051431634(NULL /*static, unused*/, _stringLiteral1554596395, /*hidden argument*/NULL);
		goto IL_0087;
	}

IL_0087:
	{
		Color_t2555686324  L_6 = V_0;
		PF_SetColorOnComponents_m2208196986(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PF::SetColorOnComponents(UnityEngine.Color)
extern "C"  void PF_SetColorOnComponents_m2208196986 (PF_t166272826 * __this, Color_t2555686324  ___color0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PF_SetColorOnComponents_m2208196986_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1113636619 * L_0 = __this->get_line1_2();
		NullCheck(L_0);
		SpriteRenderer_t3235626157 * L_1 = GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var);
		Color_t2555686324  L_2 = ___color0;
		NullCheck(L_1);
		SpriteRenderer_set_color_m3056777566(L_1, L_2, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_3 = __this->get_line2_3();
		NullCheck(L_3);
		SpriteRenderer_t3235626157 * L_4 = GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(L_3, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var);
		Color_t2555686324  L_5 = ___color0;
		NullCheck(L_4);
		SpriteRenderer_set_color_m3056777566(L_4, L_5, /*hidden argument*/NULL);
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
// System.Void Point::.ctor()
extern "C"  void Point__ctor_m1604855124 (Point_t1038053449 * __this, const RuntimeMethod* method)
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
// System.Void ScrollManager::.ctor()
extern "C"  void ScrollManager__ctor_m4158705930 (ScrollManager_t2903461311 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollManager::Start()
extern "C"  void ScrollManager_Start_m2013641616 (ScrollManager_t2903461311 * __this, const RuntimeMethod* method)
{
	{
		ScrollManager_loadPFs_m1716982294(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollManager::Update()
extern "C"  void ScrollManager_Update_m460380246 (ScrollManager_t2903461311 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void ScrollManager::loadPFs()
extern "C"  void ScrollManager_loadPFs_m1716982294 (ScrollManager_t2903461311 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollManager_loadPFs_m1716982294_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PF_t166272826 * V_1 = NULL;
	Enumerator_t3527591445  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Option_t3411289914 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 0;
		StageManager_t3296066545 * L_0 = __this->get_stageManager_7();
		NullCheck(L_0);
		List_1_t1638347568 * L_1 = L_0->get_PFs_27();
		NullCheck(L_1);
		Enumerator_t3527591445  L_2 = List_1_GetEnumerator_m3886182746(L_1, /*hidden argument*/List_1_GetEnumerator_m3886182746_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004b;
		}

IL_0018:
		{
			PF_t166272826 * L_3 = Enumerator_get_Current_m3702177537((&V_2), /*hidden argument*/Enumerator_get_Current_m3702177537_RuntimeMethod_var);
			V_1 = L_3;
			Option_t3411289914 * L_4 = __this->get_optionPF1_3();
			GameObject_t1113636619 * L_5 = __this->get_scrollContent_2();
			NullCheck(L_5);
			Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			Option_t3411289914 * L_7 = Object_Instantiate_TisOption_t3411289914_m3769806585(NULL /*static, unused*/, L_4, L_6, /*hidden argument*/Object_Instantiate_TisOption_t3411289914_m3769806585_RuntimeMethod_var);
			V_3 = L_7;
			Option_t3411289914 * L_8 = V_3;
			PF_t166272826 * L_9 = V_1;
			ScrollManager_setPF_m1785322983(__this, L_8, L_9, /*hidden argument*/NULL);
			Option_t3411289914 * L_10 = V_3;
			int32_t L_11 = V_0;
			ScrollManager_addEventTrigger_m2813815451(__this, L_10, L_11, /*hidden argument*/NULL);
			int32_t L_12 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		}

IL_004b:
		{
			bool L_13 = Enumerator_MoveNext_m2744082053((&V_2), /*hidden argument*/Enumerator_MoveNext_m2744082053_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0018;
			}
		}

IL_0057:
		{
			IL2CPP_LEAVE(0x6A, FINALLY_005c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005c;
	}

FINALLY_005c:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1048307249((&V_2), /*hidden argument*/Enumerator_Dispose_m1048307249_RuntimeMethod_var);
		IL2CPP_END_FINALLY(92)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(92)
	{
		IL2CPP_JUMP_TBL(0x6A, IL_006a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006a:
	{
		return;
	}
}
// System.Void ScrollManager::setPF(Option,PF)
extern "C"  void ScrollManager_setPF_m1785322983 (ScrollManager_t2903461311 * __this, Option_t3411289914 * ___newPF0, PF_t166272826 * ___scenePF1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t3722313464  V_3;
	memset(&V_3, 0, sizeof(V_3));
	float V_4 = 0.0f;
	Vector3_t3722313464  V_5;
	memset(&V_5, 0, sizeof(V_5));
	float V_6 = 0.0f;
	Vector3_t3722313464  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	{
		PF_t166272826 * L_0 = ___scenePF1;
		NullCheck(L_0);
		GameObject_t1113636619 * L_1 = L_0->get_line1_2();
		NullCheck(L_1);
		Transform_t3600365921 * L_2 = GameObject_get_transform_m1369836730(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = Transform_get_localPosition_m4234289348(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		float L_4 = (&V_1)->get_x_1();
		V_0 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_4, (float)(100.0f)))/(float)(7.0f)));
		PF_t166272826 * L_5 = ___scenePF1;
		NullCheck(L_5);
		GameObject_t1113636619 * L_6 = L_5->get_line1_2();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_localPosition_m4234289348(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		float L_9 = (&V_3)->get_y_2();
		V_2 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_9, (float)(100.0f)))/(float)(3.0f)));
		PF_t166272826 * L_10 = ___scenePF1;
		NullCheck(L_10);
		GameObject_t1113636619 * L_11 = L_10->get_line2_3();
		NullCheck(L_11);
		Transform_t3600365921 * L_12 = GameObject_get_transform_m1369836730(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t3722313464  L_13 = Transform_get_localPosition_m4234289348(L_12, /*hidden argument*/NULL);
		V_5 = L_13;
		float L_14 = (&V_5)->get_x_1();
		V_4 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_14, (float)(100.0f)))/(float)(7.0f)));
		PF_t166272826 * L_15 = ___scenePF1;
		NullCheck(L_15);
		GameObject_t1113636619 * L_16 = L_15->get_line2_3();
		NullCheck(L_16);
		Transform_t3600365921 * L_17 = GameObject_get_transform_m1369836730(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_t3722313464  L_18 = Transform_get_localPosition_m4234289348(L_17, /*hidden argument*/NULL);
		V_7 = L_18;
		float L_19 = (&V_7)->get_y_2();
		V_6 = ((float)((float)((float)il2cpp_codegen_multiply((float)L_19, (float)(100.0f)))/(float)(3.0f)));
		float L_20 = V_0;
		V_8 = ((float)il2cpp_codegen_multiply((float)(0.65f), (float)L_20));
		float L_21 = V_2;
		V_9 = ((float)il2cpp_codegen_multiply((float)(0.48f), (float)L_21));
		float L_22 = V_4;
		V_10 = ((float)il2cpp_codegen_multiply((float)(0.65f), (float)L_22));
		float L_23 = V_6;
		V_11 = ((float)il2cpp_codegen_multiply((float)(0.48f), (float)L_23));
		Option_t3411289914 * L_24 = ___newPF0;
		NullCheck(L_24);
		RectTransform_t3704657025 * L_25 = L_24->get_line1_2();
		NullCheck(L_25);
		Transform_t3600365921 * L_26 = Component_get_transform_m3162698980(L_25, /*hidden argument*/NULL);
		PF_t166272826 * L_27 = ___scenePF1;
		NullCheck(L_27);
		GameObject_t1113636619 * L_28 = L_27->get_line1_2();
		NullCheck(L_28);
		GameObject_t1113636619 * L_29 = GameObject_get_gameObject_m3693461266(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		Transform_t3600365921 * L_30 = GameObject_get_transform_m1369836730(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t3722313464  L_31 = Transform_get_localEulerAngles_m2136926248(L_30, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_localEulerAngles_m4202601546(L_26, L_31, /*hidden argument*/NULL);
		Option_t3411289914 * L_32 = ___newPF0;
		NullCheck(L_32);
		RectTransform_t3704657025 * L_33 = L_32->get_line1_2();
		float L_34 = V_8;
		float L_35 = V_9;
		Vector2_t2156229523  L_36;
		memset(&L_36, 0, sizeof(L_36));
		Vector2__ctor_m3970636864((&L_36), L_34, L_35, /*hidden argument*/NULL);
		NullCheck(L_33);
		RectTransform_set_anchoredPosition_m4126691837(L_33, L_36, /*hidden argument*/NULL);
		Option_t3411289914 * L_37 = ___newPF0;
		NullCheck(L_37);
		RectTransform_t3704657025 * L_38 = L_37->get_line2_3();
		NullCheck(L_38);
		Transform_t3600365921 * L_39 = Component_get_transform_m3162698980(L_38, /*hidden argument*/NULL);
		PF_t166272826 * L_40 = ___scenePF1;
		NullCheck(L_40);
		GameObject_t1113636619 * L_41 = L_40->get_line2_3();
		NullCheck(L_41);
		GameObject_t1113636619 * L_42 = GameObject_get_gameObject_m3693461266(L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		Transform_t3600365921 * L_43 = GameObject_get_transform_m1369836730(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		Vector3_t3722313464  L_44 = Transform_get_localEulerAngles_m2136926248(L_43, /*hidden argument*/NULL);
		NullCheck(L_39);
		Transform_set_localEulerAngles_m4202601546(L_39, L_44, /*hidden argument*/NULL);
		Option_t3411289914 * L_45 = ___newPF0;
		NullCheck(L_45);
		RectTransform_t3704657025 * L_46 = L_45->get_line2_3();
		float L_47 = V_10;
		float L_48 = V_11;
		Vector2_t2156229523  L_49;
		memset(&L_49, 0, sizeof(L_49));
		Vector2__ctor_m3970636864((&L_49), L_47, L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		RectTransform_set_anchoredPosition_m4126691837(L_46, L_49, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollManager::addEventTrigger(Option,System.Int32)
extern "C"  void ScrollManager_addEventTrigger_m2813815451 (ScrollManager_t2903461311 * __this, Option_t3411289914 * ___newPF0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollManager_addEventTrigger_m2813815451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 * V_0 = NULL;
	EventTrigger_t1076084509 * V_1 = NULL;
	Entry_t3344766165 * V_2 = NULL;
	{
		U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 * L_0 = (U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 *)il2cpp_codegen_object_new(U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795_il2cpp_TypeInfo_var);
		U3CaddEventTriggerU3Ec__AnonStorey0__ctor_m2167869819(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 * L_1 = V_0;
		int32_t L_2 = ___index1;
		NullCheck(L_1);
		L_1->set_index_0(L_2);
		U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_1(__this);
		Option_t3411289914 * L_4 = ___newPF0;
		NullCheck(L_4);
		EventTrigger_t1076084509 * L_5 = Component_GetComponentInChildren_TisEventTrigger_t1076084509_m1530465545(L_4, /*hidden argument*/Component_GetComponentInChildren_TisEventTrigger_t1076084509_m1530465545_RuntimeMethod_var);
		V_1 = L_5;
		Entry_t3344766165 * L_6 = (Entry_t3344766165 *)il2cpp_codegen_object_new(Entry_t3344766165_il2cpp_TypeInfo_var);
		Entry__ctor_m2653221409(L_6, /*hidden argument*/NULL);
		V_2 = L_6;
		Entry_t3344766165 * L_7 = V_2;
		NullCheck(L_7);
		L_7->set_eventID_0(2);
		Entry_t3344766165 * L_8 = V_2;
		NullCheck(L_8);
		TriggerEvent_t3867320123 * L_9 = L_8->get_callback_1();
		U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 * L_10 = V_0;
		intptr_t L_11 = (intptr_t)U3CaddEventTriggerU3Ec__AnonStorey0_U3CU3Em__0_m1040240063_RuntimeMethod_var;
		UnityAction_1_t192896378 * L_12 = (UnityAction_1_t192896378 *)il2cpp_codegen_object_new(UnityAction_1_t192896378_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m2138728059(L_12, L_10, L_11, /*hidden argument*/UnityAction_1__ctor_m2138728059_RuntimeMethod_var);
		NullCheck(L_9);
		UnityEvent_1_AddListener_m3152081749(L_9, L_12, /*hidden argument*/UnityEvent_1_AddListener_m3152081749_RuntimeMethod_var);
		EventTrigger_t1076084509 * L_13 = V_1;
		NullCheck(L_13);
		List_1_t521873611 * L_14 = EventTrigger_get_triggers_m968087715(L_13, /*hidden argument*/NULL);
		Entry_t3344766165 * L_15 = V_2;
		NullCheck(L_14);
		List_1_Add_m35675040(L_14, L_15, /*hidden argument*/List_1_Add_m35675040_RuntimeMethod_var);
		return;
	}
}
// System.Void ScrollManager::selectOption(System.Int32)
extern "C"  void ScrollManager_selectOption_m1988178586 (ScrollManager_t2903461311 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ScrollManager_selectOption_m1988178586_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StageManager_t3296066545 * V_0 = NULL;
	{
		GameObject_t1113636619 * L_0 = GameObject_Find_m2032535176(NULL /*static, unused*/, _stringLiteral1923419272, /*hidden argument*/NULL);
		NullCheck(L_0);
		StageManager_t3296066545 * L_1 = GameObject_GetComponent_TisStageManager_t3296066545_m305820070(L_0, /*hidden argument*/GameObject_GetComponent_TisStageManager_t3296066545_m305820070_RuntimeMethod_var);
		V_0 = L_1;
		StageManager_t3296066545 * L_2 = __this->get_stageManager_7();
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		StageManager_SelectPF_m2766879051(L_2, L_3, /*hidden argument*/NULL);
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
// System.Void ScrollManager/<addEventTrigger>c__AnonStorey0::.ctor()
extern "C"  void U3CaddEventTriggerU3Ec__AnonStorey0__ctor_m2167869819 (U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollManager/<addEventTrigger>c__AnonStorey0::<>m__0(UnityEngine.EventSystems.BaseEventData)
extern "C"  void U3CaddEventTriggerU3Ec__AnonStorey0_U3CU3Em__0_m1040240063 (U3CaddEventTriggerU3Ec__AnonStorey0_t3108922795 * __this, BaseEventData_t3903027533 * ___eventData0, const RuntimeMethod* method)
{
	{
		ScrollManager_t2903461311 * L_0 = __this->get_U24this_1();
		int32_t L_1 = __this->get_index_0();
		NullCheck(L_0);
		ScrollManager_selectOption_m1988178586(L_0, L_1, /*hidden argument*/NULL);
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
// System.Void Stage::.ctor()
extern "C"  void Stage__ctor_m4059895171 (Stage_t1845040247 * __this, const RuntimeMethod* method)
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
// System.Void StageData::.ctor()
extern "C"  void StageData__ctor_m3687527479 (StageData_t251497815 * __this, const RuntimeMethod* method)
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
	String_t* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B3_2 = NULL;
	{
		String_t* L_0 = Int32_ToString_m372259452((&___world0), _stringLiteral3451565968, /*hidden argument*/NULL);
		int32_t L_1 = ___stage1;
		G_B1_0 = L_0;
		G_B1_1 = _stringLiteral2278870150;
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			G_B2_0 = L_0;
			G_B2_1 = _stringLiteral2278870150;
			goto IL_0033;
		}
	}
	{
		String_t* L_2 = Int32_ToString_m372259452((&___stage1), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral382461207, L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0038:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_5 = String_Concat_m3755062657(NULL /*static, unused*/, G_B3_2, G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_6 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_5, (-1), /*hidden argument*/NULL);
		return L_6;
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
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
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
		V_0 = 0;
		V_1 = 0;
		goto IL_00a2;
	}

IL_005d:
	{
		int32_t* L_11 = __this->get_address_of_worldID_6();
		String_t* L_12 = Int32_ToString_m372259452(L_11, _stringLiteral3451565968, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
		String_t* L_14 = Int32_ToString_m372259452((&V_3), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_15 = String_Concat_m2163913788(NULL /*static, unused*/, _stringLiteral2278870150, L_12, _stringLiteral382461207, L_14, /*hidden argument*/NULL);
		int32_t L_16 = PlayerPrefs_GetInt_m1299643124(NULL /*static, unused*/, L_15, (-1), /*hidden argument*/NULL);
		V_2 = L_16;
		int32_t L_17 = V_2;
		if ((((int32_t)L_17) <= ((int32_t)0)))
		{
			goto IL_009e;
		}
	}
	{
		int32_t L_18 = V_0;
		int32_t L_19 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)L_19));
	}

IL_009e:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_00a2:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = __this->get_worldID_6();
		int32_t L_23 = StageInfo_GetLevelCount_m2994796715(__this, L_22, /*hidden argument*/NULL);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_005d;
		}
	}
	{
		int32_t L_24 = V_0;
		int32_t L_25 = __this->get_worldID_6();
		int32_t L_26 = StageInfo_GetLevelCount_m2994796715(__this, L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_27 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, ((float)((float)(((float)((float)L_24)))/(float)(((float)((float)L_26))))), /*hidden argument*/NULL);
		V_0 = L_27;
		int32_t L_28 = __this->get_worldID_6();
		int32_t L_29 = StageInfo_GetSavedStarAmount_m2316285987(__this, L_28, (-1), /*hidden argument*/NULL);
		int32_t L_30 = V_0;
		if ((((int32_t)L_29) >= ((int32_t)L_30)))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t* L_31 = __this->get_address_of_worldID_6();
		String_t* L_32 = Int32_ToString_m372259452(L_31, _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral2278870150, L_32, /*hidden argument*/NULL);
		int32_t L_34 = V_0;
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, L_33, L_34, /*hidden argument*/NULL);
	}

IL_00fd:
	{
		return;
	}
}
// System.Single StageInfo::GetStageTime()
extern "C"  float StageInfo_GetStageTime_m1754390661 (StageInfo_t2857013238 * __this, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_stageTime_3();
		return L_0;
	}
}
// System.Single StageInfo::GetTimeForStar(System.Int32)
extern "C"  float StageInfo_GetTimeForStar_m679637488 (StageInfo_t2857013238 * __this, int32_t ___star0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		SingleU5BU5D_t1444911251* L_0 = __this->get_starTimes_5();
		NullCheck(L_0);
		int32_t L_1 = ___star0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_0)->max_length)))), (int32_t)L_1));
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_3 = V_0;
		SingleU5BU5D_t1444911251* L_4 = __this->get_starTimes_5();
		NullCheck(L_4);
		if ((((int32_t)L_3) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_4)->max_length)))))))
		{
			goto IL_0026;
		}
	}

IL_0020:
	{
		return (-1.0f);
	}

IL_0026:
	{
		SingleU5BU5D_t1444911251* L_5 = __this->get_starTimes_5();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		float L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		float L_9 = __this->get_difficultyMultiplier_4();
		return ((float)il2cpp_codegen_multiply((float)L_8, (float)L_9));
	}
}
// System.String StageInfo::GetTimeString(System.String,System.String)
extern "C"  String_t* StageInfo_GetTimeString_m957071269 (StageInfo_t2857013238 * __this, String_t* ___minSufix0, String_t* ___secSufix1, const RuntimeMethod* method)
{
	{
		float L_0 = __this->get_stageTime_3();
		String_t* L_1 = ___minSufix0;
		String_t* L_2 = ___secSufix1;
		String_t* L_3 = StageInfo_GetTimeString_m3819379987(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.String StageInfo::GetTimeString(System.Single,System.String,System.String)
extern "C"  String_t* StageInfo_GetTimeString_m3819379987 (StageInfo_t2857013238 * __this, float ___time0, String_t* ___minSufix1, String_t* ___secSufix2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageInfo_GetTimeString_m3819379987_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		V_0 = L_0;
		float L_1 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, ((float)((float)L_1/(float)(60.0f))), /*hidden argument*/NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}
	{
		String_t* L_4 = V_0;
		String_t* L_5 = Int32_ToString_m141394615((&V_1), /*hidden argument*/NULL);
		String_t* L_6 = ___minSufix1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m2163913788(NULL /*static, unused*/, L_4, L_5, L_6, _stringLiteral3452614528, /*hidden argument*/NULL);
		V_0 = L_7;
	}

IL_0034:
	{
		float L_8 = ___time0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t3464937446_il2cpp_TypeInfo_var);
		int32_t L_9 = Mathf_FloorToInt_m1870542928(NULL /*static, unused*/, L_8, /*hidden argument*/NULL);
		int32_t L_10 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)((int32_t)60)))));
		String_t* L_11 = V_0;
		String_t* L_12 = Int32_ToString_m372259452((&V_2), _stringLiteral3451565968, /*hidden argument*/NULL);
		String_t* L_13 = ___secSufix2;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3755062657(NULL /*static, unused*/, L_11, L_12, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		String_t* L_15 = V_0;
		return L_15;
	}
}
// System.Boolean StageInfo::LevelExists(System.String)
extern "C"  bool StageInfo_LevelExists_m3960227236 (StageInfo_t2857013238 * __this, String_t* ___levelName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageInfo_LevelExists_m3960227236_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StageData_t251497815 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		StageData_t251497815 * L_0 = JSONParser_LoadResources_m3124311211(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_002f;
	}

IL_000d:
	{
		StageData_t251497815 * L_1 = V_0;
		NullCheck(L_1);
		List_1_t3317114989 * L_2 = L_1->get_stages_0();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		Stage_t1845040247 * L_4 = List_1_get_Item_m444493417(L_2, L_3, /*hidden argument*/List_1_get_Item_m444493417_RuntimeMethod_var);
		NullCheck(L_4);
		String_t* L_5 = L_4->get_name_0();
		String_t* L_6 = ___levelName0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_7 = String_Compare_m3735043349(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002b;
		}
	}
	{
		return (bool)1;
	}

IL_002b:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_9 = V_1;
		StageData_t251497815 * L_10 = V_0;
		NullCheck(L_10);
		List_1_t3317114989 * L_11 = L_10->get_stages_0();
		NullCheck(L_11);
		int32_t L_12 = List_1_get_Count_m2511544463(L_11, /*hidden argument*/List_1_get_Count_m2511544463_RuntimeMethod_var);
		if ((((int32_t)L_9) < ((int32_t)L_12)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}
}
// System.Int32 StageInfo::GetLevelCount(System.Int32)
extern "C"  int32_t StageInfo_GetLevelCount_m2994796715 (StageInfo_t2857013238 * __this, int32_t ___worldID0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageInfo_GetLevelCount_m2994796715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	StageData_t251497815 * V_2 = NULL;
	int32_t V_3 = 0;
	{
		String_t* L_0 = Int32_ToString_m372259452((&___worldID0), _stringLiteral3451565968, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		StageData_t251497815 * L_1 = JSONParser_LoadResources_m3124311211(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_2 = L_1;
		V_3 = 0;
		goto IL_006d;
	}

IL_001c:
	{
		StageData_t251497815 * L_2 = V_2;
		NullCheck(L_2);
		List_1_t3317114989 * L_3 = L_2->get_stages_0();
		int32_t L_4 = V_3;
		NullCheck(L_3);
		Stage_t1845040247 * L_5 = List_1_get_Item_m444493417(L_3, L_4, /*hidden argument*/List_1_get_Item_m444493417_RuntimeMethod_var);
		NullCheck(L_5);
		String_t* L_6 = L_5->get_name_0();
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m3847582255(L_6, /*hidden argument*/NULL);
		if ((((int32_t)L_7) >= ((int32_t)2)))
		{
			goto IL_003d;
		}
	}
	{
		goto IL_0069;
	}

IL_003d:
	{
		StageData_t251497815 * L_8 = V_2;
		NullCheck(L_8);
		List_1_t3317114989 * L_9 = L_8->get_stages_0();
		int32_t L_10 = V_3;
		NullCheck(L_9);
		Stage_t1845040247 * L_11 = List_1_get_Item_m444493417(L_9, L_10, /*hidden argument*/List_1_get_Item_m444493417_RuntimeMethod_var);
		NullCheck(L_11);
		String_t* L_12 = L_11->get_name_0();
		String_t* L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = String_get_Length_m3847582255(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		String_t* L_15 = String_Substring_m1610150815(L_12, 0, L_14, /*hidden argument*/NULL);
		String_t* L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_17 = String_Compare_m3735043349(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0069;
		}
	}
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0069:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006d:
	{
		int32_t L_20 = V_3;
		StageData_t251497815 * L_21 = V_2;
		NullCheck(L_21);
		List_1_t3317114989 * L_22 = L_21->get_stages_0();
		NullCheck(L_22);
		int32_t L_23 = List_1_get_Count_m2511544463(L_22, /*hidden argument*/List_1_get_Count_m2511544463_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_23)))
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_24 = V_1;
		return L_24;
	}
}
// System.Void StageInfo::UnlockNextLevel()
extern "C"  void StageInfo_UnlockNextLevel_m645837895 (StageInfo_t2857013238 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageInfo_UnlockNextLevel_m645837895_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = StageInfo_GetStartAmount_m2338924739(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000d;
		}
	}
	{
		return;
	}

IL_000d:
	{
		int32_t* L_1 = __this->get_address_of_worldID_6();
		String_t* L_2 = Int32_ToString_m372259452(L_1, _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3930751419, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t* L_4 = __this->get_address_of_worldID_6();
		String_t* L_5 = Int32_ToString_m372259452(L_4, _stringLiteral3451565968, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_stageID_7();
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
		String_t* L_7 = Int32_ToString_m372259452((&V_1), _stringLiteral3451565968, /*hidden argument*/NULL);
		String_t* L_8 = String_Concat_m3755062657(NULL /*static, unused*/, L_5, _stringLiteral3452614641, L_7, /*hidden argument*/NULL);
		bool L_9 = StageInfo_LevelExists_m3960227236(__this, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0088;
		}
	}
	{
		String_t* L_10 = V_0;
		int32_t L_11 = __this->get_stageID_7();
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		String_t* L_12 = Int32_ToString_m372259452((&V_2), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_13 = String_Concat_m3755062657(NULL /*static, unused*/, L_10, _stringLiteral382461207, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		goto IL_00ae;
	}

IL_0088:
	{
		int32_t L_14 = __this->get_worldID_6();
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		String_t* L_15 = Int32_ToString_m372259452((&V_3), _stringLiteral3451565968, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_16 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3930751419, L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		IL2CPP_RUNTIME_CLASS_INIT(MenuFlowManager_t1614880941_il2cpp_TypeInfo_var);
		MenuFlowManager_SetLastPanel_m2599473069(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
	}

IL_00ae:
	{
		String_t* L_17 = V_0;
		PlayerPrefs_SetInt_m2842000469(NULL /*static, unused*/, L_17, 1, /*hidden argument*/NULL);
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
// System.Void StageManager::Awake()
extern "C"  void StageManager_Awake_m533670761 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_Awake_m533670761_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StageData_t251497815 * V_0 = NULL;
	{
		StageData_t251497815 * L_0 = JSONParser_LoadResources_m3124311211(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		StageData_t251497815 * L_1 = V_0;
		Stage_t1845040247 * L_2 = StageManager_FindStage_m117108134(__this, L_1, /*hidden argument*/NULL);
		__this->set_stage_37(L_2);
		GameObject_t1113636619 * L_3 = __this->get_image_5();
		NullCheck(L_3);
		SpriteRenderer_t3235626157 * L_4 = GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593(L_3, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3235626157_m1701782593_RuntimeMethod_var);
		Stage_t1845040247 * L_5 = __this->get_stage_37();
		NullCheck(L_5);
		String_t* L_6 = L_5->get_name_0();
		RuntimeTypeHandle_t3027515415  L_7 = { reinterpret_cast<intptr_t> (Sprite_t280657092_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m1620074514(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		Object_t631007953 * L_9 = Resources_Load_m3480190876(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		NullCheck(L_4);
		SpriteRenderer_set_sprite_m1286893786(L_4, ((Sprite_t280657092 *)IsInstSealed((RuntimeObject*)L_9, Sprite_t280657092_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		StageManager_SetupHLFromJSON_m3096444899(__this, /*hidden argument*/NULL);
		StageManager_SetupPFsFromJSON_m1347357461(__this, /*hidden argument*/NULL);
		return;
	}
}
// Stage StageManager::FindStage(StageData)
extern "C"  Stage_t1845040247 * StageManager_FindStage_m117108134 (StageManager_t3296066545 * __this, StageData_t251497815 * ___stageData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_FindStage_m117108134_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	Stage_t1845040247 * V_5 = NULL;
	Enumerator_t911391570  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Stage_t1845040247 * V_7 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	String_t* G_B3_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_0 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_0);
		int32_t L_1 = StageInfo_GetWorldID_m2363233804(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)10))))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_3 = Int32_ToString_m141394615((&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614544, L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		goto IL_003c;
	}

IL_002f:
	{
		String_t* L_5 = Int32_ToString_m141394615((&V_0), /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_003c:
	{
		V_1 = G_B3_0;
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_6 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_6);
		int32_t L_7 = StageInfo_GetStageID_m210931970(L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)10))))
		{
			goto IL_006c;
		}
	}
	{
		String_t* L_9 = Int32_ToString_m141394615((&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_10 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614544, L_9, /*hidden argument*/NULL);
		G_B6_0 = L_10;
		goto IL_0079;
	}

IL_006c:
	{
		String_t* L_11 = Int32_ToString_m141394615((&V_2), /*hidden argument*/NULL);
		G_B6_0 = L_11;
	}

IL_0079:
	{
		V_3 = G_B6_0;
		String_t* L_12 = V_1;
		String_t* L_13 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_14 = String_Concat_m3755062657(NULL /*static, unused*/, L_12, _stringLiteral3452614641, L_13, /*hidden argument*/NULL);
		V_4 = L_14;
		StageData_t251497815 * L_15 = ___stageData0;
		NullCheck(L_15);
		List_1_t3317114989 * L_16 = L_15->get_stages_0();
		NullCheck(L_16);
		Enumerator_t911391570  L_17 = List_1_GetEnumerator_m1203868866(L_16, /*hidden argument*/List_1_GetEnumerator_m1203868866_RuntimeMethod_var);
		V_6 = L_17;
	}

IL_0095:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00bf;
		}

IL_009a:
		{
			Stage_t1845040247 * L_18 = Enumerator_get_Current_m3768177764((&V_6), /*hidden argument*/Enumerator_get_Current_m3768177764_RuntimeMethod_var);
			V_5 = L_18;
			Stage_t1845040247 * L_19 = V_5;
			NullCheck(L_19);
			String_t* L_20 = L_19->get_name_0();
			String_t* L_21 = V_4;
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_22 = String_op_Equality_m920492651(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_00bf;
			}
		}

IL_00b6:
		{
			Stage_t1845040247 * L_23 = V_5;
			V_7 = L_23;
			IL2CPP_LEAVE(0xE4, FINALLY_00d0);
		}

IL_00bf:
		{
			bool L_24 = Enumerator_MoveNext_m2400404883((&V_6), /*hidden argument*/Enumerator_MoveNext_m2400404883_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_009a;
			}
		}

IL_00cb:
		{
			IL2CPP_LEAVE(0xDE, FINALLY_00d0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d0;
	}

FINALLY_00d0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2106687285((&V_6), /*hidden argument*/Enumerator_Dispose_m2106687285_RuntimeMethod_var);
		IL2CPP_END_FINALLY(208)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(208)
	{
		IL2CPP_JUMP_TBL(0xE4, IL_00e4)
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00de:
	{
		Stage_t1845040247 * L_25 = (Stage_t1845040247 *)il2cpp_codegen_object_new(Stage_t1845040247_il2cpp_TypeInfo_var);
		Stage__ctor_m4059895171(L_25, /*hidden argument*/NULL);
		return L_25;
	}

IL_00e4:
	{
		Stage_t1845040247 * L_26 = V_7;
		return L_26;
	}
}
// System.Void StageManager::SetupHLFromJSON()
extern "C"  void StageManager_SetupHLFromJSON_m3096444899 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	{
		GameObject_t1113636619 * L_0 = __this->get_horizonLineHit_12();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = GameObject_get_transform_m1369836730(L_0, /*hidden argument*/NULL);
		Stage_t1845040247 * L_2 = __this->get_stage_37();
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = L_2->get_horizonLineHit_1();
		NullCheck(L_1);
		Transform_set_localPosition_m4128471975(L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StageManager::SetupPFsFromJSON()
extern "C"  void StageManager_SetupPFsFromJSON_m1347357461 (StageManager_t3296066545 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_SetupPFsFromJSON_m1347357461_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Point_t1038053449 * V_1 = NULL;
	Enumerator_t104404772  V_2;
	memset(&V_2, 0, sizeof(V_2));
	PF_t166272826 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = 1;
		Stage_t1845040247 * L_0 = __this->get_stage_37();
		NullCheck(L_0);
		List_1_t2510128191 * L_1 = L_0->get_pfs_2();
		NullCheck(L_1);
		Enumerator_t104404772  L_2 = List_1_GetEnumerator_m3673851913(L_1, /*hidden argument*/List_1_GetEnumerator_m3673851913_RuntimeMethod_var);
		V_2 = L_2;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d2;
		}

IL_0018:
		{
			Point_t1038053449 * L_3 = Enumerator_get_Current_m107143752((&V_2), /*hidden argument*/Enumerator_get_Current_m107143752_RuntimeMethod_var);
			V_1 = L_3;
			PF_t166272826 * L_4 = __this->get_PFPrefab_26();
			GameObject_t1113636619 * L_5 = __this->get_image_5();
			NullCheck(L_5);
			Transform_t3600365921 * L_6 = GameObject_get_transform_m1369836730(L_5, /*hidden argument*/NULL);
			NullCheck(L_6);
			Vector3_t3722313464  L_7 = Transform_get_position_m36019626(L_6, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t2301928331_il2cpp_TypeInfo_var);
			Quaternion_t2301928331  L_8 = Quaternion_get_identity_m3722672781(NULL /*static, unused*/, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Object_t631007953_il2cpp_TypeInfo_var);
			PF_t166272826 * L_9 = Object_Instantiate_TisPF_t166272826_m253699196(NULL /*static, unused*/, L_4, L_7, L_8, /*hidden argument*/Object_Instantiate_TisPF_t166272826_m253699196_RuntimeMethod_var);
			V_3 = L_9;
			PF_t166272826 * L_10 = V_3;
			int32_t L_11 = V_0;
			NullCheck(L_10);
			PF_Setup_m159701545(L_10, L_11, /*hidden argument*/NULL);
			PF_t166272826 * L_12 = V_3;
			NullCheck(L_12);
			Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
			Point_t1038053449 * L_14 = V_1;
			NullCheck(L_14);
			Element_t769398275 * L_15 = L_14->get_pf_0();
			NullCheck(L_15);
			Vector3_t3722313464 * L_16 = L_15->get_address_of_position_0();
			float L_17 = L_16->get_x_1();
			Point_t1038053449 * L_18 = V_1;
			NullCheck(L_18);
			Element_t769398275 * L_19 = L_18->get_pf_0();
			NullCheck(L_19);
			Vector3_t3722313464 * L_20 = L_19->get_address_of_position_0();
			float L_21 = L_20->get_y_2();
			Point_t1038053449 * L_22 = V_1;
			NullCheck(L_22);
			Element_t769398275 * L_23 = L_22->get_pf_0();
			NullCheck(L_23);
			Vector3_t3722313464 * L_24 = L_23->get_address_of_position_0();
			float L_25 = L_24->get_z_3();
			Vector3_t3722313464  L_26;
			memset(&L_26, 0, sizeof(L_26));
			Vector3__ctor_m3353183577((&L_26), L_17, L_21, L_25, /*hidden argument*/NULL);
			NullCheck(L_13);
			Transform_set_position_m3387557959(L_13, L_26, /*hidden argument*/NULL);
			PF_t166272826 * L_27 = V_3;
			NullCheck(L_27);
			GameObject_t1113636619 * L_28 = L_27->get_line1_2();
			Point_t1038053449 * L_29 = V_1;
			NullCheck(L_29);
			Element_t769398275 * L_30 = L_29->get_line1_1();
			StageManager_setLine_m202802628(__this, L_28, L_30, /*hidden argument*/NULL);
			PF_t166272826 * L_31 = V_3;
			NullCheck(L_31);
			GameObject_t1113636619 * L_32 = L_31->get_line2_3();
			Point_t1038053449 * L_33 = V_1;
			NullCheck(L_33);
			Element_t769398275 * L_34 = L_33->get_line2_2();
			StageManager_setLine_m202802628(__this, L_32, L_34, /*hidden argument*/NULL);
			List_1_t899420910 * L_35 = __this->get_initialPFsPosition_28();
			PF_t166272826 * L_36 = V_3;
			NullCheck(L_36);
			Transform_t3600365921 * L_37 = Component_get_transform_m3162698980(L_36, /*hidden argument*/NULL);
			NullCheck(L_37);
			Vector3_t3722313464  L_38 = Transform_get_position_m36019626(L_37, /*hidden argument*/NULL);
			NullCheck(L_35);
			List_1_Add_m1524640104(L_35, L_38, /*hidden argument*/List_1_Add_m1524640104_RuntimeMethod_var);
			List_1_t1638347568 * L_39 = __this->get_PFs_27();
			PF_t166272826 * L_40 = V_3;
			NullCheck(L_39);
			List_1_Add_m1377909232(L_39, L_40, /*hidden argument*/List_1_Add_m1377909232_RuntimeMethod_var);
			int32_t L_41 = V_0;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
		}

IL_00d2:
		{
			bool L_42 = Enumerator_MoveNext_m836587678((&V_2), /*hidden argument*/Enumerator_MoveNext_m836587678_RuntimeMethod_var);
			if (L_42)
			{
				goto IL_0018;
			}
		}

IL_00de:
		{
			IL2CPP_LEAVE(0xF1, FINALLY_00e3);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00e3;
	}

FINALLY_00e3:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m659273532((&V_2), /*hidden argument*/Enumerator_Dispose_m659273532_RuntimeMethod_var);
		IL2CPP_END_FINALLY(227)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(227)
	{
		IL2CPP_JUMP_TBL(0xF1, IL_00f1)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00f1:
	{
		Stage_t1845040247 * L_43 = __this->get_stage_37();
		NullCheck(L_43);
		List_1_t2510128191 * L_44 = L_43->get_pfs_2();
		NullCheck(L_44);
		int32_t L_45 = List_1_get_Count_m1440737880(L_44, /*hidden argument*/List_1_get_Count_m1440737880_RuntimeMethod_var);
		__this->set_PFCount_25(L_45);
		return;
	}
}
// System.Void StageManager::setLine(UnityEngine.GameObject,Element)
extern "C"  void StageManager_setLine_m202802628 (StageManager_t3296066545 * __this, GameObject_t1113636619 * ___line0, Element_t769398275 * ___jsonLine1, const RuntimeMethod* method)
{
	Vector3_t3722313464  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t3722313464  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t3722313464  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Element_t769398275 * L_0 = ___jsonLine1;
		NullCheck(L_0);
		Vector3_t3722313464  L_1 = L_0->get_position_0();
		V_0 = L_1;
		Element_t769398275 * L_2 = ___jsonLine1;
		NullCheck(L_2);
		Vector3_t3722313464  L_3 = L_2->get_rotation_1();
		V_1 = L_3;
		Element_t769398275 * L_4 = ___jsonLine1;
		NullCheck(L_4);
		Vector3_t3722313464  L_5 = L_4->get_scale_2();
		V_2 = L_5;
		GameObject_t1113636619 * L_6 = ___line0;
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = GameObject_get_transform_m1369836730(L_6, /*hidden argument*/NULL);
		float L_8 = (&V_0)->get_x_1();
		float L_9 = (&V_0)->get_y_2();
		float L_10 = (&V_0)->get_z_3();
		Vector3_t3722313464  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m3353183577((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_localPosition_m4128471975(L_7, L_11, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_12 = ___line0;
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = GameObject_get_transform_m1369836730(L_12, /*hidden argument*/NULL);
		float L_14 = (&V_1)->get_x_1();
		float L_15 = (&V_1)->get_y_2();
		float L_16 = (&V_1)->get_z_3();
		Vector3_t3722313464  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m3353183577((&L_17), L_14, L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Transform_set_localEulerAngles_m4202601546(L_13, L_17, /*hidden argument*/NULL);
		GameObject_t1113636619 * L_18 = ___line0;
		NullCheck(L_18);
		Transform_t3600365921 * L_19 = GameObject_get_transform_m1369836730(L_18, /*hidden argument*/NULL);
		float L_20 = (&V_2)->get_x_1();
		float L_21 = (&V_2)->get_y_2();
		float L_22 = (&V_2)->get_z_3();
		Vector3_t3722313464  L_23;
		memset(&L_23, 0, sizeof(L_23));
		Vector3__ctor_m3353183577((&L_23), L_20, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_localScale_m3053443106(L_19, L_23, /*hidden argument*/NULL);
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
		bool L_8 = __this->get_PFSelected_30();
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
		__this->set_PFSelected_30((bool)0);
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
	PF_t166272826 * V_0 = NULL;
	Enumerator_t3527591445  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		List_1_t1638347568 * L_0 = __this->get_PFs_27();
		NullCheck(L_0);
		Enumerator_t3527591445  L_1 = List_1_GetEnumerator_m3886182746(L_0, /*hidden argument*/List_1_GetEnumerator_m3886182746_RuntimeMethod_var);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0025;
		}

IL_0011:
		{
			PF_t166272826 * L_2 = Enumerator_get_Current_m3702177537((&V_1), /*hidden argument*/Enumerator_get_Current_m3702177537_RuntimeMethod_var);
			V_0 = L_2;
			PF_t166272826 * L_3 = V_0;
			NullCheck(L_3);
			GameObject_t1113636619 * L_4 = Component_get_gameObject_m442555142(L_3, /*hidden argument*/NULL);
			NullCheck(L_4);
			GameObject_SetActive_m796801857(L_4, (bool)0, /*hidden argument*/NULL);
		}

IL_0025:
		{
			bool L_5 = Enumerator_MoveNext_m2744082053((&V_1), /*hidden argument*/Enumerator_MoveNext_m2744082053_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_0011;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x44, FINALLY_0036);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0036;
	}

FINALLY_0036:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m1048307249((&V_1), /*hidden argument*/Enumerator_Dispose_m1048307249_RuntimeMethod_var);
		IL2CPP_END_FINALLY(54)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(54)
	{
		IL2CPP_JUMP_TBL(0x44, IL_0044)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0044:
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
		PF_t166272826 * L_6 = __this->get_PF_29();
		NullCheck(L_6);
		Transform_t3600365921 * L_7 = Component_get_transform_m3162698980(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t3722313464  L_8 = Transform_get_position_m36019626(L_7, /*hidden argument*/NULL);
		V_2 = L_8;
		float L_9 = (&V_2)->get_z_3();
		Vector3__ctor_m3353183577((&V_1), L_4, L_5, L_9, /*hidden argument*/NULL);
		PF_t166272826 * L_10 = __this->get_PF_29();
		NullCheck(L_10);
		Transform_t3600365921 * L_11 = Component_get_transform_m3162698980(L_10, /*hidden argument*/NULL);
		PF_t166272826 * L_12 = __this->get_PF_29();
		NullCheck(L_12);
		Transform_t3600365921 * L_13 = Component_get_transform_m3162698980(L_12, /*hidden argument*/NULL);
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
		PF_t166272826 * L_0 = __this->get_PF_29();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t3722313464  L_2 = Transform_get_position_m36019626(L_1, /*hidden argument*/NULL);
		V_1 = L_2;
		float L_3 = (&V_1)->get_y_2();
		Vector3_t3722313464 * L_4 = __this->get_address_of_InitialPF_31();
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
		PF_t166272826 * L_0 = __this->get_PF_29();
		NullCheck(L_0);
		Transform_t3600365921 * L_1 = Component_get_transform_m3162698980(L_0, /*hidden argument*/NULL);
		Vector3_t3722313464  L_2 = __this->get_InitialPF_31();
		NullCheck(L_1);
		Transform_set_position_m3387557959(L_1, L_2, /*hidden argument*/NULL);
		__this->set_PFSelected_30((bool)0);
		bool L_3 = ___hit0;
		if (!L_3)
		{
			goto IL_0052;
		}
	}
	{
		PF_t166272826 * L_4 = __this->get_PF_29();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_id_4();
		StepChecker_CheckMarkAtIndex_m3141407165(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		int32_t L_6 = __this->get_PFCount_25();
		__this->set_PFCount_25(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		int32_t L_7 = __this->get_PFCount_25();
		if (L_7)
		{
			goto IL_0052;
		}
	}
	{
		StageManager_CompleteStage_m2785006177(__this, /*hidden argument*/NULL);
	}

IL_0052:
	{
		bool L_8 = ___hit0;
		if (L_8)
		{
			goto IL_0069;
		}
	}
	{
		PF_t166272826 * L_9 = __this->get_PF_29();
		NullCheck(L_9);
		GameObject_t1113636619 * L_10 = Component_get_gameObject_m442555142(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_m796801857(L_10, (bool)0, /*hidden argument*/NULL);
	}

IL_0069:
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
			goto IL_0058;
		}
	}
	{
		StepChecker_CheckMarkAtIndex_m3141407165(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		StageManager_LockHorizonLine_m3269516584(__this, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_0058:
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
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StageManager_CompleteStage_m2785006177_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_stageCompleted_16((bool)1);
		IL2CPP_RUNTIME_CLASS_INIT(StageInfo_t2857013238_il2cpp_TypeInfo_var);
		StageInfo_t2857013238 * L_0 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		int32_t L_1 = __this->get_minuteCount_22();
		float L_2 = __this->get_secondsCount_21();
		NullCheck(L_0);
		StageInfo_SetStageInfo_m1652981700(L_0, ((float)il2cpp_codegen_add((float)(((float)((float)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)((int32_t)60)))))), (float)L_2)), /*hidden argument*/NULL);
		StageInfo_t2857013238 * L_3 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_3);
		StageInfo_SaveLevelStarAmount_m3256426961(L_3, /*hidden argument*/NULL);
		StageInfo_t2857013238 * L_4 = ((StageInfo_t2857013238_StaticFields*)il2cpp_codegen_static_fields_for(StageInfo_t2857013238_il2cpp_TypeInfo_var))->get_instance_2();
		NullCheck(L_4);
		StageInfo_UnlockNextLevel_m645837895(L_4, /*hidden argument*/NULL);
		EndPanel_PlayEndAnimation_m1188432607(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
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
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* G_B5_0 = NULL;
	String_t* G_B8_0 = NULL;
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
		int32_t L_3 = __this->get_minuteCount_22();
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_2();
		G_B5_0 = L_4;
		goto IL_004e;
	}

IL_0033:
	{
		int32_t* L_5 = __this->get_address_of_minuteCount_22();
		String_t* L_6 = Int32_ToString_m141394615(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Concat_m3937257545(NULL /*static, unused*/, L_6, _stringLiteral3450517443, /*hidden argument*/NULL);
		G_B5_0 = L_7;
	}

IL_004e:
	{
		V_0 = G_B5_0;
		float L_8 = __this->get_secondsCount_21();
		if ((!(((float)L_8) < ((float)(10.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		float L_9 = __this->get_secondsCount_21();
		V_2 = (((int32_t)((int32_t)L_9)));
		String_t* L_10 = Int32_ToString_m141394615((&V_2), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3937257545(NULL /*static, unused*/, _stringLiteral3452614544, L_10, /*hidden argument*/NULL);
		G_B8_0 = L_11;
		goto IL_0098;
	}

IL_0083:
	{
		float L_12 = __this->get_secondsCount_21();
		V_3 = (((int32_t)((int32_t)L_12)));
		String_t* L_13 = Int32_ToString_m141394615((&V_3), /*hidden argument*/NULL);
		G_B8_0 = L_13;
	}

IL_0098:
	{
		V_1 = G_B8_0;
		Text_t1901882714 * L_14 = __this->get_timeText_19();
		String_t* L_15 = V_0;
		String_t* L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_17 = String_Concat_m3755062657(NULL /*static, unused*/, L_15, L_16, _stringLiteral3452614605, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		float L_18 = __this->get_secondsCount_21();
		if ((!(((float)L_18) >= ((float)(60.0f)))))
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_19 = __this->get_minuteCount_22();
		__this->set_minuteCount_22(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
		__this->set_secondsCount_21((0.0f));
		goto IL_0100;
	}

IL_00de:
	{
		int32_t L_20 = __this->get_minuteCount_22();
		if ((((int32_t)L_20) < ((int32_t)((int32_t)60))))
		{
			goto IL_0100;
		}
	}
	{
		int32_t L_21 = __this->get_hourCount_23();
		__this->set_hourCount_23(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
		__this->set_minuteCount_22(0);
	}

IL_0100:
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
		List_1_t1638347568 * L_0 = __this->get_PFs_27();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		PF_t166272826 * L_2 = List_1_get_Item_m3513474579(L_0, L_1, /*hidden argument*/List_1_get_Item_m3513474579_RuntimeMethod_var);
		__this->set_PF_29(L_2);
		List_1_t899420910 * L_3 = __this->get_initialPFsPosition_28();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		Vector3_t3722313464  L_5 = List_1_get_Item_m200663048(L_3, L_4, /*hidden argument*/List_1_get_Item_m200663048_RuntimeMethod_var);
		__this->set_InitialPF_31(L_5);
		PF_t166272826 * L_6 = __this->get_PF_29();
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		StageManager_SetActive_m3658661723(__this, L_7, (bool)1, /*hidden argument*/NULL);
		__this->set_PFSelected_30((bool)1);
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void StepChecker::.ctor()
extern "C"  void StepChecker__ctor_m1656713850 (StepChecker_t1301311235 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_m1579109191(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StepChecker::Awake()
extern "C"  void StepChecker_Awake_m3858692506 (StepChecker_t1301311235 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StepChecker_Awake_m3858692506_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((StepChecker_t1301311235_StaticFields*)il2cpp_codegen_static_fields_for(StepChecker_t1301311235_il2cpp_TypeInfo_var))->set_manager_2(__this);
		return;
	}
}
// System.Void StepChecker::CheckMarkAtIndex(System.Int32)
extern "C"  void StepChecker_CheckMarkAtIndex_m3141407165 (RuntimeObject * __this /* static, unused */, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StepChecker_CheckMarkAtIndex_m3141407165_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StepChecker_t1301311235 * L_0 = ((StepChecker_t1301311235_StaticFields*)il2cpp_codegen_static_fields_for(StepChecker_t1301311235_il2cpp_TypeInfo_var))->get_manager_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		StepChecker_CheckMark_m2313278227(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void StepChecker::CheckMark(System.Int32)
extern "C"  void StepChecker_CheckMark_m2313278227 (StepChecker_t1301311235 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___index0;
		RectTransformU5BU5D_t107129948* L_2 = __this->get_checkRects_3();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_2)->max_length)))))))
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		return;
	}

IL_0016:
	{
		RectTransformU5BU5D_t107129948* L_3 = __this->get_checkRects_3();
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RectTransform_t3704657025 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_t1113636619 * L_7 = Component_get_gameObject_m442555142(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_m796801857(L_7, (bool)1, /*hidden argument*/NULL);
		int32_t L_8 = ___index0;
		RuntimeObject* L_9 = StepChecker_IPopMark_m3907283909(__this, L_8, (1.0f), (2.0f), (2.5f), /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m3411253000(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator StepChecker::IPopMark(System.Int32,System.Single,System.Single,System.Single)
extern "C"  RuntimeObject* StepChecker_IPopMark_m3907283909 (StepChecker_t1301311235 * __this, int32_t ___index0, float ___normal1, float ___pop2, float ___speed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StepChecker_IPopMark_m3907283909_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CIPopMarkU3Ec__Iterator0_t3268555169 * V_0 = NULL;
	{
		U3CIPopMarkU3Ec__Iterator0_t3268555169 * L_0 = (U3CIPopMarkU3Ec__Iterator0_t3268555169 *)il2cpp_codegen_object_new(U3CIPopMarkU3Ec__Iterator0_t3268555169_il2cpp_TypeInfo_var);
		U3CIPopMarkU3Ec__Iterator0__ctor_m955372422(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CIPopMarkU3Ec__Iterator0_t3268555169 * L_1 = V_0;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		L_1->set_index_0(L_2);
		U3CIPopMarkU3Ec__Iterator0_t3268555169 * L_3 = V_0;
		float L_4 = ___speed3;
		NullCheck(L_3);
		L_3->set_speed_3(L_4);
		U3CIPopMarkU3Ec__Iterator0_t3268555169 * L_5 = V_0;
		float L_6 = ___pop2;
		NullCheck(L_5);
		L_5->set_pop_4(L_6);
		U3CIPopMarkU3Ec__Iterator0_t3268555169 * L_7 = V_0;
		float L_8 = ___normal1;
		NullCheck(L_7);
		L_7->set_normal_5(L_8);
		U3CIPopMarkU3Ec__Iterator0_t3268555169 * L_9 = V_0;
		NullCheck(L_9);
		L_9->set_U24this_6(__this);
		U3CIPopMarkU3Ec__Iterator0_t3268555169 * L_10 = V_0;
		return L_10;
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
// System.Void StepChecker/<IPopMark>c__Iterator0::.ctor()
extern "C"  void U3CIPopMarkU3Ec__Iterator0__ctor_m955372422 (U3CIPopMarkU3Ec__Iterator0_t3268555169 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m297566312(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean StepChecker/<IPopMark>c__Iterator0::MoveNext()
extern "C"  bool U3CIPopMarkU3Ec__Iterator0_MoveNext_m1875670788 (U3CIPopMarkU3Ec__Iterator0_t3268555169 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPopMarkU3Ec__Iterator0_MoveNext_m1875670788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Vector3_t3722313464  G_B7_0;
	memset(&G_B7_0, 0, sizeof(G_B7_0));
	Vector3_t3722313464  G_B7_1;
	memset(&G_B7_1, 0, sizeof(G_B7_1));
	RectTransform_t3704657025 * G_B7_2 = NULL;
	Vector3_t3722313464  G_B6_0;
	memset(&G_B6_0, 0, sizeof(G_B6_0));
	Vector3_t3722313464  G_B6_1;
	memset(&G_B6_1, 0, sizeof(G_B6_1));
	RectTransform_t3704657025 * G_B6_2 = NULL;
	float G_B8_0 = 0.0f;
	Vector3_t3722313464  G_B8_1;
	memset(&G_B8_1, 0, sizeof(G_B8_1));
	Vector3_t3722313464  G_B8_2;
	memset(&G_B8_2, 0, sizeof(G_B8_2));
	RectTransform_t3704657025 * G_B8_3 = NULL;
	{
		int32_t L_0 = __this->get_U24PC_9();
		V_0 = L_0;
		__this->set_U24PC_9((-1));
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00f1;
			}
		}
	}
	{
		goto IL_0108;
	}

IL_0021:
	{
		int32_t L_2 = __this->get_index_0();
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_3 = __this->get_index_0();
		StepChecker_t1301311235 * L_4 = __this->get_U24this_6();
		NullCheck(L_4);
		RectTransformU5BU5D_t107129948* L_5 = L_4->get_checkRects_3();
		NullCheck(L_5);
		if ((((int32_t)L_3) >= ((int32_t)(((int32_t)((int32_t)(((RuntimeArray *)L_5)->max_length)))))))
		{
			goto IL_0101;
		}
	}
	{
		StepChecker_t1301311235 * L_6 = __this->get_U24this_6();
		NullCheck(L_6);
		RectTransformU5BU5D_t107129948* L_7 = L_6->get_checkRects_3();
		int32_t L_8 = __this->get_index_0();
		NullCheck(L_7);
		int32_t L_9 = L_8;
		RectTransform_t3704657025 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		__this->set_U3CrectU3E__1_1(L_10);
		__this->set_U3ClerpU3E__1_2((0.0f));
		goto IL_00f1;
	}

IL_006d:
	{
		float L_11 = __this->get_U3ClerpU3E__1_2();
		float L_12 = Time_get_deltaTime_m372706562(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = __this->get_speed_3();
		__this->set_U3ClerpU3E__1_2(((float)il2cpp_codegen_add((float)L_11, (float)((float)il2cpp_codegen_multiply((float)L_12, (float)L_13)))));
		RectTransform_t3704657025 * L_14 = __this->get_U3CrectU3E__1_1();
		RectTransform_t3704657025 * L_15 = __this->get_U3CrectU3E__1_1();
		NullCheck(L_15);
		Vector3_t3722313464  L_16 = Transform_get_localScale_m129152068(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_17 = Vector3_get_one_m1629952498(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_18 = __this->get_U3ClerpU3E__1_2();
		G_B6_0 = L_17;
		G_B6_1 = L_16;
		G_B6_2 = L_14;
		if ((!(((float)L_18) < ((float)(0.5f)))))
		{
			G_B7_0 = L_17;
			G_B7_1 = L_16;
			G_B7_2 = L_14;
			goto IL_00b7;
		}
	}
	{
		float L_19 = __this->get_pop_4();
		G_B8_0 = L_19;
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_00bd;
	}

IL_00b7:
	{
		float L_20 = __this->get_normal_5();
		G_B8_0 = L_20;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_00bd:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_t3722313464_il2cpp_TypeInfo_var);
		Vector3_t3722313464  L_21 = Vector3_op_Multiply_m3376773913(NULL /*static, unused*/, G_B8_1, G_B8_0, /*hidden argument*/NULL);
		float L_22 = __this->get_U3ClerpU3E__1_2();
		Vector3_t3722313464  L_23 = Vector3_Lerp_m407887542(NULL /*static, unused*/, G_B8_2, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(G_B8_3);
		Transform_set_localScale_m3053443106(G_B8_3, L_23, /*hidden argument*/NULL);
		WaitForEndOfFrame_t1314943911 * L_24 = (WaitForEndOfFrame_t1314943911 *)il2cpp_codegen_object_new(WaitForEndOfFrame_t1314943911_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m1381314187(L_24, /*hidden argument*/NULL);
		__this->set_U24current_7(L_24);
		bool L_25 = __this->get_U24disposing_8();
		if (L_25)
		{
			goto IL_00ec;
		}
	}
	{
		__this->set_U24PC_9(1);
	}

IL_00ec:
	{
		goto IL_010a;
	}

IL_00f1:
	{
		float L_26 = __this->get_U3ClerpU3E__1_2();
		if ((((float)L_26) < ((float)(1.0f))))
		{
			goto IL_006d;
		}
	}

IL_0101:
	{
		__this->set_U24PC_9((-1));
	}

IL_0108:
	{
		return (bool)0;
	}

IL_010a:
	{
		return (bool)1;
	}
}
// System.Object StepChecker/<IPopMark>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  RuntimeObject * U3CIPopMarkU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1240487130 (U3CIPopMarkU3Ec__Iterator0_t3268555169 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Object StepChecker/<IPopMark>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  RuntimeObject * U3CIPopMarkU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m2860697028 (U3CIPopMarkU3Ec__Iterator0_t3268555169 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U24current_7();
		return L_0;
	}
}
// System.Void StepChecker/<IPopMark>c__Iterator0::Dispose()
extern "C"  void U3CIPopMarkU3Ec__Iterator0_Dispose_m2875260378 (U3CIPopMarkU3Ec__Iterator0_t3268555169 * __this, const RuntimeMethod* method)
{
	{
		__this->set_U24disposing_8((bool)1);
		__this->set_U24PC_9((-1));
		return;
	}
}
// System.Void StepChecker/<IPopMark>c__Iterator0::Reset()
extern "C"  void U3CIPopMarkU3Ec__Iterator0_Reset_m2421409105 (U3CIPopMarkU3Ec__Iterator0_t3268555169 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CIPopMarkU3Ec__Iterator0_Reset_m2421409105_MetadataUsageId);
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
