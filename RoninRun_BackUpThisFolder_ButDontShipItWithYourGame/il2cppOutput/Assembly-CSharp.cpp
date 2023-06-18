#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtualActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>
struct UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD;
// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// EasyTransition.TransitionManager[]
struct TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// ReadmeBE2/Section[]
struct SectionU5BU5D_tC76C0923E9E5ABD64A43BA6FEA1E19B79B75BC34;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// BackgroundLoop
struct BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B;
// UnityEngine.CapsuleCollider2D
struct CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE;
// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52;
// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// EasyTransition.CutoutMaskUI
struct CutoutMaskUI_t8E318AC6B7D2737A609EF1827E5C695F5B701611;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EasyTransition.DemoLoadScene
struct DemoLoadScene_tB3114DE2C79CB76E54E056A8BD1A93F3622642B7;
// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10;
// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177;
// EnermyA
struct EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F;
// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A;
// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B;
// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E;
// JumpEffect
struct JumpEffect_t3571579D8A6D1674E4D46EB4531E5FA5DBA96B31;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// MeleeEffect
struct MeleeEffect_tEF77FD5A39413BA43D9EC41573684D46560C7013;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// ObjectPooler
struct ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0;
// Platform
struct Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7;
// PlatformSpawner
struct PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08;
// Platformloop
struct Platformloop_t65BFA9ADA65CFD7120FA81D40CD956401C2AF4C4;
// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// ReadmeBE2
struct ReadmeBE2_t967C9CE574867CE4719BD2796228BDF0FC93398F;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// EasyTransition.SceneMove
struct SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// ScrollingObject
struct ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// EasyTransition.Transition
struct Transition_t39D9D02D5CD62874417708B94489C9786D4E582B;
// EasyTransition.TransitionManager
struct TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C;
// EasyTransition.TransitionSettings
struct TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// EnermyA/<DeactivateAfterDelay>d__11
struct U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Player/<ActivateMeleeRange>d__28
struct U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405;
// Player/<skillTimeChk>d__31
struct U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688;
// ReadmeBE2/Section
struct Section_tFC1771A668BE21A76B1D60397E2B2C3AFD577687;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// EasyTransition.SceneMove/<GameSceneLoad>d__9
struct U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8;
// EasyTransition.SceneMove/<IntroSceneLoad>d__11
struct U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04;
// EasyTransition.TransitionManager/<Start>d__15
struct U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43;
// EasyTransition.TransitionManager/<Timer>d__12
struct U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA;
// EasyTransition.TransitionManager/<Timer>d__13
struct U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327;
// EasyTransition.TransitionManager/<Timer>d__14
struct U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24;

IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18;
IL2CPP_EXTERN_C String_t* _stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26;
IL2CPP_EXTERN_C String_t* _stringLiteral078E14735EE684F69282FFE94BDE152096DD68F7;
IL2CPP_EXTERN_C String_t* _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7;
IL2CPP_EXTERN_C String_t* _stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E;
IL2CPP_EXTERN_C String_t* _stringLiteral2C91CDDCE5498D2D95273E9C4922AD529E3C45C7;
IL2CPP_EXTERN_C String_t* _stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6;
IL2CPP_EXTERN_C String_t* _stringLiteral43AADFC6B8B78173F24AC8C280787C029C1718D7;
IL2CPP_EXTERN_C String_t* _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE;
IL2CPP_EXTERN_C String_t* _stringLiteral4FEAD6B2BFD82FD8CA47BF3CF8F052CED9EA79AA;
IL2CPP_EXTERN_C String_t* _stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5;
IL2CPP_EXTERN_C String_t* _stringLiteral64ACBA24F964302D056F107F29F94AB9BB9DB18E;
IL2CPP_EXTERN_C String_t* _stringLiteral734E55240A32A04AAA065CE358EEC5346F8C0102;
IL2CPP_EXTERN_C String_t* _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral9A53A143D2CF5C0E23D0D325ED922EFD8F9213E4;
IL2CPP_EXTERN_C String_t* _stringLiteral9F0204FD532E1D09FBBED092FA40C9BD9FA43AC4;
IL2CPP_EXTERN_C String_t* _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40;
IL2CPP_EXTERN_C String_t* _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994;
IL2CPP_EXTERN_C String_t* _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4;
IL2CPP_EXTERN_C String_t* _stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9;
IL2CPP_EXTERN_C String_t* _stringLiteralF01260DA84FFC3896C078DB954AAA1A1FF0A3A0D;
IL2CPP_EXTERN_C String_t* _stringLiteralF652217ACD73992E1FF2493C57ED10BC76A8943F;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D68D42D01BE44A952EF4BA2DB5FDCF516A5E76;
IL2CPP_EXTERN_C String_t* _stringLiteralF83BF732D98F43DB347FFEFD151E40874C0A53A8;
IL2CPP_EXTERN_C String_t* _stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mDA870802AF7030C19E9526C82FD38F7BC8021BEC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mF09BF329E3264923FB258E7A1492AC428C432C27_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActivateMeleeRangeU3Ed__28_System_Collections_IEnumerator_Reset_m284C00320DAD519EDCFDE577F64ADB36C6976775_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDeactivateAfterDelayU3Ed__11_System_Collections_IEnumerator_Reset_m8C97568157CF865AB84AA052948D18EC45DF2FF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGameSceneLoadU3Ed__9_System_Collections_IEnumerator_Reset_mA2CA858FFE1CF114D3F4973FA3E8E4D46F49BDC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CIntroSceneLoadU3Ed__11_System_Collections_IEnumerator_Reset_mA0502D85724383FC6F556DE70462A5BBCA198DB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_m543FFCF10310A057B0649F6DBDE9973AAE866FED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerU3Ed__12_System_Collections_IEnumerator_Reset_mC8685C0C1008A7F349736CCBEF5DFC8D20A51D7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerU3Ed__13_System_Collections_IEnumerator_Reset_m7DB493B01CB2F8558E5F3B7043C8AFA98D1BF13B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerU3Ed__14_System_Collections_IEnumerator_Reset_m73D9974A940C1435742E8CECBF31ED793EACA33B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CskillTimeChkU3Ed__31_System_Collections_IEnumerator_Reset_m30A9454F1D6B4EF0518827D0B6F7DF89FEDFCDCD_RuntimeMethod_var;
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2;
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
struct TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// EnermyA/<DeactivateAfterDelay>d__11
struct U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68  : public RuntimeObject
{
	// System.Int32 EnermyA/<DeactivateAfterDelay>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EnermyA/<DeactivateAfterDelay>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single EnermyA/<DeactivateAfterDelay>d__11::delay
	float ___delay_2;
	// EnermyA EnermyA/<DeactivateAfterDelay>d__11::<>4__this
	EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* ___U3CU3E4__this_3;
};

// Player/<ActivateMeleeRange>d__28
struct U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405  : public RuntimeObject
{
	// System.Int32 Player/<ActivateMeleeRange>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<ActivateMeleeRange>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Player Player/<ActivateMeleeRange>d__28::<>4__this
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___U3CU3E4__this_2;
};

// Player/<skillTimeChk>d__31
struct U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688  : public RuntimeObject
{
	// System.Int32 Player/<skillTimeChk>d__31::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Player/<skillTimeChk>d__31::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Player Player/<skillTimeChk>d__31::<>4__this
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___U3CU3E4__this_2;
};

// ReadmeBE2/Section
struct Section_tFC1771A668BE21A76B1D60397E2B2C3AFD577687  : public RuntimeObject
{
	// System.String ReadmeBE2/Section::heading
	String_t* ___heading_0;
	// System.String ReadmeBE2/Section::text
	String_t* ___text_1;
	// System.String ReadmeBE2/Section::linkText
	String_t* ___linkText_2;
	// System.String ReadmeBE2/Section::url
	String_t* ___url_3;
};

// EasyTransition.SceneMove/<GameSceneLoad>d__9
struct U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8  : public RuntimeObject
{
	// System.Int32 EasyTransition.SceneMove/<GameSceneLoad>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.SceneMove/<GameSceneLoad>d__9::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EasyTransition.SceneMove EasyTransition.SceneMove/<GameSceneLoad>d__9::<>4__this
	SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* ___U3CU3E4__this_2;
};

// EasyTransition.SceneMove/<IntroSceneLoad>d__11
struct U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04  : public RuntimeObject
{
	// System.Int32 EasyTransition.SceneMove/<IntroSceneLoad>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.SceneMove/<IntroSceneLoad>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EasyTransition.SceneMove EasyTransition.SceneMove/<IntroSceneLoad>d__11::<>4__this
	SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* ___U3CU3E4__this_2;
};

// EasyTransition.TransitionManager/<Start>d__15
struct U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43  : public RuntimeObject
{
	// System.Int32 EasyTransition.TransitionManager/<Start>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.TransitionManager/<Start>d__15::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EasyTransition.TransitionManager EasyTransition.TransitionManager/<Start>d__15::<>4__this
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___U3CU3E4__this_2;
};

// EasyTransition.TransitionManager/<Timer>d__12
struct U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA  : public RuntimeObject
{
	// System.Int32 EasyTransition.TransitionManager/<Timer>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.TransitionManager/<Timer>d__12::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single EasyTransition.TransitionManager/<Timer>d__12::startDelay
	float ___startDelay_2;
	// EasyTransition.TransitionManager EasyTransition.TransitionManager/<Timer>d__12::<>4__this
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___U3CU3E4__this_3;
	// EasyTransition.TransitionSettings EasyTransition.TransitionManager/<Timer>d__12::transitionSettings
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transitionSettings_4;
	// System.String EasyTransition.TransitionManager/<Timer>d__12::sceneName
	String_t* ___sceneName_5;
};

// EasyTransition.TransitionManager/<Timer>d__13
struct U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327  : public RuntimeObject
{
	// System.Int32 EasyTransition.TransitionManager/<Timer>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.TransitionManager/<Timer>d__13::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single EasyTransition.TransitionManager/<Timer>d__13::startDelay
	float ___startDelay_2;
	// EasyTransition.TransitionManager EasyTransition.TransitionManager/<Timer>d__13::<>4__this
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___U3CU3E4__this_3;
	// EasyTransition.TransitionSettings EasyTransition.TransitionManager/<Timer>d__13::transitionSettings
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transitionSettings_4;
	// System.Int32 EasyTransition.TransitionManager/<Timer>d__13::sceneIndex
	int32_t ___sceneIndex_5;
};

// EasyTransition.TransitionManager/<Timer>d__14
struct U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24  : public RuntimeObject
{
	// System.Int32 EasyTransition.TransitionManager/<Timer>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EasyTransition.TransitionManager/<Timer>d__14::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single EasyTransition.TransitionManager/<Timer>d__14::delay
	float ___delay_2;
	// EasyTransition.TransitionManager EasyTransition.TransitionManager/<Timer>d__14::<>4__this
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___U3CU3E4__this_3;
	// EasyTransition.TransitionSettings EasyTransition.TransitionManager/<Timer>d__14::transitionSettings
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transitionSettings_4;
	// UnityEngine.GameObject EasyTransition.TransitionManager/<Timer>d__14::<template>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CtemplateU3E5__2_5;
};

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>
struct Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Single UnityEngine.WaitForSecondsRealtime::<waitTime>k__BackingField
	float ___U3CwaitTimeU3Ek__BackingField_0;
	// System.Single UnityEngine.WaitForSecondsRealtime::m_WaitUntilTime
	float ___m_WaitUntilTime_1;
};

// UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B  : public RuntimeObject
{
	// System.Int32 UnityEngine.Collision2D::m_Collider
	int32_t ___m_Collider_0;
	// System.Int32 UnityEngine.Collision2D::m_OtherCollider
	int32_t ___m_OtherCollider_1;
	// System.Int32 UnityEngine.Collision2D::m_Rigidbody
	int32_t ___m_Rigidbody_2;
	// System.Int32 UnityEngine.Collision2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_3;
	// UnityEngine.Vector2 UnityEngine.Collision2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	// System.Int32 UnityEngine.Collision2D::m_Enabled
	int32_t ___m_Enabled_5;
	// System.Int32 UnityEngine.Collision2D::m_ContactCount
	int32_t ___m_ContactCount_6;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_ReusedContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_ReusedContacts_7;
	// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::m_LegacyContacts
	ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* ___m_LegacyContacts_8;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_pinvoke
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};
// Native definition for COM marshalling of UnityEngine.Collision2D
struct Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B_marshaled_com
{
	int32_t ___m_Collider_0;
	int32_t ___m_OtherCollider_1;
	int32_t ___m_Rigidbody_2;
	int32_t ___m_OtherRigidbody_3;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_4;
	int32_t ___m_Enabled_5;
	int32_t ___m_ContactCount_6;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_ReusedContacts_7;
	ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* ___m_LegacyContacts_8;
};

// UnityEngine.ContactPoint2D
struct ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 
{
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Point
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Point_0;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_Normal
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Normal_1;
	// UnityEngine.Vector2 UnityEngine.ContactPoint2D::m_RelativeVelocity
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_RelativeVelocity_2;
	// System.Single UnityEngine.ContactPoint2D::m_Separation
	float ___m_Separation_3;
	// System.Single UnityEngine.ContactPoint2D::m_NormalImpulse
	float ___m_NormalImpulse_4;
	// System.Single UnityEngine.ContactPoint2D::m_TangentImpulse
	float ___m_TangentImpulse_5;
	// System.Int32 UnityEngine.ContactPoint2D::m_Collider
	int32_t ___m_Collider_6;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherCollider
	int32_t ___m_OtherCollider_7;
	// System.Int32 UnityEngine.ContactPoint2D::m_Rigidbody
	int32_t ___m_Rigidbody_8;
	// System.Int32 UnityEngine.ContactPoint2D::m_OtherRigidbody
	int32_t ___m_OtherRigidbody_9;
	// System.Int32 UnityEngine.ContactPoint2D::m_Enabled
	int32_t ___m_Enabled_10;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupID
	int32_t ___sortingGroupID_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingGroupOrder
	int32_t ___sortingGroupOrder_6;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_7;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_8;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_12;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingGroupID_5;
	int32_t ___sortingGroupOrder_6;
	int32_t ___sortingLayer_7;
	int32_t ___sortingOrder_8;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_9;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_10;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_11;
	int32_t ___displayIndex_12;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>
struct UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// ReadmeBE2
struct ReadmeBE2_t967C9CE574867CE4719BD2796228BDF0FC93398F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Texture2D ReadmeBE2::icon
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon_4;
	// System.String ReadmeBE2::title
	String_t* ___title_5;
	// ReadmeBE2/Section[] ReadmeBE2::sections
	SectionU5BU5D_tC76C0923E9E5ABD64A43BA6FEA1E19B79B75BC34* ___sections_6;
	// System.Boolean ReadmeBE2::loadedLayout
	bool ___loadedLayout_7;
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// EasyTransition.TransitionSettings
struct TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Material EasyTransition.TransitionSettings::multiplyColorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___multiplyColorMaterial_4;
	// UnityEngine.Material EasyTransition.TransitionSettings::addColorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___addColorMaterial_5;
	// UnityEngine.Vector2 EasyTransition.TransitionSettings::refrenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___refrenceResolution_6;
	// System.Boolean EasyTransition.TransitionSettings::blockRaycasts
	bool ___blockRaycasts_7;
	// EasyTransition.ColorTintMode EasyTransition.TransitionSettings::colorTintMode
	int32_t ___colorTintMode_8;
	// UnityEngine.Color EasyTransition.TransitionSettings::colorTint
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___colorTint_9;
	// System.Boolean EasyTransition.TransitionSettings::isCutoutTransition
	bool ___isCutoutTransition_10;
	// System.Single EasyTransition.TransitionSettings::transitionSpeed
	float ___transitionSpeed_11;
	// System.Boolean EasyTransition.TransitionSettings::autoAdjustTransitionTime
	bool ___autoAdjustTransitionTime_12;
	// System.Boolean EasyTransition.TransitionSettings::flipX
	bool ___flipX_13;
	// System.Boolean EasyTransition.TransitionSettings::flipY
	bool ___flipY_14;
	// System.Single EasyTransition.TransitionSettings::transitionTime
	float ___transitionTime_15;
	// System.Single EasyTransition.TransitionSettings::destroyTime
	float ___destroyTime_16;
	// UnityEngine.GameObject EasyTransition.TransitionSettings::transitionIn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___transitionIn_17;
	// UnityEngine.GameObject EasyTransition.TransitionSettings::transitionOut
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___transitionOut_18;
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Collider2D
struct Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.GridLayout
struct GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// BackgroundLoop
struct BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single BackgroundLoop::width
	float ___width_4;
	// Player BackgroundLoop::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_5;
};

// UnityEngine.BoxCollider2D
struct BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA  : public Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52
{
};

// EasyTransition.DemoLoadScene
struct DemoLoadScene_tB3114DE2C79CB76E54E056A8BD1A93F3622642B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EasyTransition.TransitionSettings EasyTransition.DemoLoadScene::transition
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transition_4;
	// System.Single EasyTransition.DemoLoadScene::startDelay
	float ___startDelay_5;
};

// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EnemySpawner::enemyPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___enemyPrefabs_5;
	// UnityEngine.Transform EnemySpawner::spawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPosition_6;
	// System.Int32 EnemySpawner::poolSize
	int32_t ___poolSize_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> EnemySpawner::enemyPool
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___enemyPool_8;
	// System.Single EnemySpawner::spawnInterval
	float ___spawnInterval_9;
	// System.Single EnemySpawner::timer
	float ___timer_10;
	// UnityEngine.LayerMask EnemySpawner::deadLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___deadLayer_11;
};

// EnermyA
struct EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EnermyA::moveSpeed
	float ___moveSpeed_4;
	// System.Single EnermyA::attackRange
	float ___attackRange_5;
	// UnityEngine.Animator EnermyA::animator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___animator_6;
	// UnityEngine.Transform EnermyA::player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___player_7;
	// UnityEngine.Rigidbody2D EnermyA::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_8;
	// UnityEngine.LayerMask EnermyA::deadLayer
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___deadLayer_9;
	// System.Boolean EnermyA::isDead
	bool ___isDead_10;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single GameManager::scoreIncreaseInterval
	float ___scoreIncreaseInterval_5;
	// System.Boolean GameManager::isGameover
	bool ___isGameover_6;
	// UnityEngine.UI.Text GameManager::scoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___scoreText_7;
	// UnityEngine.GameObject GameManager::gameoverUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameoverUI_8;
	// UnityEngine.UI.Text GameManager::recordText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___recordText_9;
	// UnityEngine.UI.Text GameManager::gameoverScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gameoverScoreText_10;
	// System.Single GameManager::score
	float ___score_11;
	// Player GameManager::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_12;
	// System.Boolean GameManager::isGameOver
	bool ___isGameOver_13;
	// UnityEngine.AudioSource GameManager::endSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___endSound_14;
	// UnityEngine.AudioSource GameManager::gameSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___gameSound_15;
	// UnityEngine.AudioSource GameManager::winSound
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___winSound_16;
};

// Joystick
struct Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Joystick::handleRange
	float ___handleRange_4;
	// System.Single Joystick::deadZone
	float ___deadZone_5;
	// AxisOptions Joystick::axisOptions
	int32_t ___axisOptions_6;
	// System.Boolean Joystick::snapX
	bool ___snapX_7;
	// System.Boolean Joystick::snapY
	bool ___snapY_8;
	// UnityEngine.RectTransform Joystick::background
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___background_9;
	// UnityEngine.RectTransform Joystick::handle
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___handle_10;
	// UnityEngine.RectTransform Joystick::baseRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___baseRect_11;
	// UnityEngine.Canvas Joystick::canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___canvas_12;
	// UnityEngine.Camera Joystick::cam
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam_13;
	// UnityEngine.Vector2 Joystick::input
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___input_14;
};

// JoystickPlayerExample
struct JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single JoystickPlayerExample::speed
	float ___speed_4;
	// VariableJoystick JoystickPlayerExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_5;
	// UnityEngine.Rigidbody JoystickPlayerExample::rb
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___rb_6;
};

// JoystickSetterExample
struct JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// VariableJoystick JoystickSetterExample::variableJoystick
	VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* ___variableJoystick_4;
	// UnityEngine.UI.Text JoystickSetterExample::valueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___valueText_5;
	// UnityEngine.UI.Image JoystickSetterExample::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.Sprite[] JoystickSetterExample::axisSprites
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___axisSprites_7;
};

// JumpEffect
struct JumpEffect_t3571579D8A6D1674E4D46EB4531E5FA5DBA96B31  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject JumpEffect::jumpEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jumpEffect_4;
};

// MeleeEffect
struct MeleeEffect_tEF77FD5A39413BA43D9EC41573684D46560C7013  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Player MeleeEffect::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_4;
};

// ObjectPooler
struct ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ObjectPooler::jumpEffectPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jumpEffectPrefab_5;
	// System.Int32 ObjectPooler::poolSize
	int32_t ___poolSize_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> ObjectPooler::jumpEffectPool
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___jumpEffectPool_7;
};

// Platform
struct Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] Platform::obstacles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___obstacles_4;
};

// PlatformSpawner
struct PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject PlatformSpawner::platformPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___platformPrefab_4;
	// System.Int32 PlatformSpawner::count
	int32_t ___count_5;
	// System.Single PlatformSpawner::timeBetSpawnMin
	float ___timeBetSpawnMin_6;
	// System.Single PlatformSpawner::timeBetSpawnMax
	float ___timeBetSpawnMax_7;
	// System.Single PlatformSpawner::timeBetSpawn
	float ___timeBetSpawn_8;
	// System.Single PlatformSpawner::yMin
	float ___yMin_9;
	// System.Single PlatformSpawner::yMax
	float ___yMax_10;
	// UnityEngine.GameObject[] PlatformSpawner::platforms
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___platforms_11;
	// System.Int32 PlatformSpawner::currentIndex
	int32_t ___currentIndex_12;
	// UnityEngine.Vector2 PlatformSpawner::poolPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___poolPosition_13;
	// System.Single PlatformSpawner::lastSpawnTime
	float ___lastSpawnTime_14;
};

// Platformloop
struct Platformloop_t65BFA9ADA65CFD7120FA81D40CD956401C2AF4C4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Platformloop::width
	float ___width_4;
};

// Player
struct Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single Player::speed
	float ___speed_4;
	// System.Single Player::jumpForce
	float ___jumpForce_5;
	// UnityEngine.CapsuleCollider2D Player::capsuleCollider
	CapsuleCollider2D_tBC93B7F1D1569FF805567D2D4C17438E95F927EE* ___capsuleCollider_6;
	// UnityEngine.GameObject Player::jumpEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___jumpEffect_7;
	// UnityEngine.GameObject Player::meleeRange
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___meleeRange_8;
	// UnityEngine.Rigidbody2D Player::rb
	Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___rb_9;
	// UnityEngine.Animator Player::anim
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___anim_10;
	// UnityEngine.SpriteRenderer Player::spriteRenderer
	SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___spriteRenderer_11;
	// System.Single Player::moveKey
	float ___moveKey_12;
	// System.Boolean Player::isPlayerMoving
	bool ___isPlayerMoving_13;
	// System.Boolean Player::jumpKey
	bool ___jumpKey_14;
	// System.Boolean Player::isGrounded
	bool ___isGrounded_15;
	// System.Single Player::jumpCount
	float ___jumpCount_16;
	// System.Boolean Player::attKey
	bool ___attKey_17;
	// UnityEngine.GameObject Player::hideSkillButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hideSkillButton_18;
	// UnityEngine.UI.Image Player::hideskillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___hideskillImage_19;
	// System.Boolean Player::isHideSkill
	bool ___isHideSkill_20;
	// System.Single Player::attackCooldown
	float ___attackCooldown_21;
	// System.Single Player::attackTimer
	float ___attackTimer_22;
	// System.Boolean Player::isDead
	bool ___isDead_23;
};

// EasyTransition.SceneMove
struct SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String EasyTransition.SceneMove::introScene
	String_t* ___introScene_4;
	// System.String EasyTransition.SceneMove::gameScene
	String_t* ___gameScene_5;
	// UnityEngine.GameObject EasyTransition.SceneMove::tutorial
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tutorial_6;
	// UnityEngine.AudioSource[] EasyTransition.SceneMove::playSounds
	AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* ___playSounds_7;
	// EasyTransition.TransitionSettings EasyTransition.SceneMove::transition
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transition_8;
	// System.Single EasyTransition.SceneMove::startDelay
	float ___startDelay_9;
	// UnityEngine.GameObject EasyTransition.SceneMove::stopPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___stopPanel_10;
};

// ScrollingObject
struct ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single ScrollingObject::speed
	float ___speed_4;
	// Player ScrollingObject::player
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* ___player_5;
};

// UnityEngine.Tilemaps.Tilemap
struct Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751  : public GridLayout_tAD661B1E1E57C16BE21C8C13432EA04FE1F0418B
{
};

// EasyTransition.Transition
struct Transition_t39D9D02D5CD62874417708B94489C9786D4E582B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// EasyTransition.TransitionSettings EasyTransition.Transition::transitionSettings
	TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___transitionSettings_4;
	// UnityEngine.Transform EasyTransition.Transition::transitionPanelIN
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transitionPanelIN_5;
	// UnityEngine.Transform EasyTransition.Transition::transitionPanelOUT
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transitionPanelOUT_6;
	// UnityEngine.UI.CanvasScaler EasyTransition.Transition::transitionCanvas
	CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* ___transitionCanvas_7;
	// UnityEngine.Material EasyTransition.Transition::multiplyColorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___multiplyColorMaterial_8;
	// UnityEngine.Material EasyTransition.Transition::additiveColorMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___additiveColorMaterial_9;
	// System.Boolean EasyTransition.Transition::hasTransitionTriggeredOnce
	bool ___hasTransitionTriggeredOnce_10;
};

// EasyTransition.TransitionManager
struct TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EasyTransition.TransitionManager::transitionTemplate
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___transitionTemplate_4;
	// System.Boolean EasyTransition.TransitionManager::runningTransition
	bool ___runningTransition_5;
	// UnityEngine.Events.UnityAction EasyTransition.TransitionManager::onTransitionBegin
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onTransitionBegin_6;
	// UnityEngine.Events.UnityAction EasyTransition.TransitionManager::onTransitionCutPointReached
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onTransitionCutPointReached_7;
	// UnityEngine.Events.UnityAction EasyTransition.TransitionManager::onTransitionEnd
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___onTransitionEnd_8;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.CanvasScaler
struct CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.CanvasScaler/ScaleMode UnityEngine.UI.CanvasScaler::m_UiScaleMode
	int32_t ___m_UiScaleMode_4;
	// System.Single UnityEngine.UI.CanvasScaler::m_ReferencePixelsPerUnit
	float ___m_ReferencePixelsPerUnit_5;
	// System.Single UnityEngine.UI.CanvasScaler::m_ScaleFactor
	float ___m_ScaleFactor_6;
	// UnityEngine.Vector2 UnityEngine.UI.CanvasScaler::m_ReferenceResolution
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_ReferenceResolution_7;
	// UnityEngine.UI.CanvasScaler/ScreenMatchMode UnityEngine.UI.CanvasScaler::m_ScreenMatchMode
	int32_t ___m_ScreenMatchMode_8;
	// System.Single UnityEngine.UI.CanvasScaler::m_MatchWidthOrHeight
	float ___m_MatchWidthOrHeight_9;
	// UnityEngine.UI.CanvasScaler/Unit UnityEngine.UI.CanvasScaler::m_PhysicalUnit
	int32_t ___m_PhysicalUnit_11;
	// System.Single UnityEngine.UI.CanvasScaler::m_FallbackScreenDPI
	float ___m_FallbackScreenDPI_12;
	// System.Single UnityEngine.UI.CanvasScaler::m_DefaultSpriteDPI
	float ___m_DefaultSpriteDPI_13;
	// System.Single UnityEngine.UI.CanvasScaler::m_DynamicPixelsPerUnit
	float ___m_DynamicPixelsPerUnit_14;
	// UnityEngine.Canvas UnityEngine.UI.CanvasScaler::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevScaleFactor
	float ___m_PrevScaleFactor_16;
	// System.Single UnityEngine.UI.CanvasScaler::m_PrevReferencePixelsPerUnit
	float ___m_PrevReferencePixelsPerUnit_17;
	// System.Boolean UnityEngine.UI.CanvasScaler::m_PresetInfoIsWorld
	bool ___m_PresetInfoIsWorld_18;
};

// DynamicJoystick
struct DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single DynamicJoystick::moveThreshold
	float ___moveThreshold_15;
};

// FixedJoystick
struct FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// FloatingJoystick
struct FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

// VariableJoystick
struct VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6  : public Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A
{
	// System.Single VariableJoystick::moveThreshold
	float ___moveThreshold_15;
	// JoystickType VariableJoystick::joystickType
	int32_t ___joystickType_16;
	// UnityEngine.Vector2 VariableJoystick::fixedPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___fixedPosition_17;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_38;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_39;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_40;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_41;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_42;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_43;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_44;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_45;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_46;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_47;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_48;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_49;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_50;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_51;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

// EasyTransition.CutoutMaskUI
struct CutoutMaskUI_t8E318AC6B7D2737A609EF1827E5C695F5B701611  : public Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.GameObject>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// EnermyA/<DeactivateAfterDelay>d__11

// EnermyA/<DeactivateAfterDelay>d__11

// Player/<ActivateMeleeRange>d__28

// Player/<ActivateMeleeRange>d__28

// Player/<skillTimeChk>d__31

// Player/<skillTimeChk>d__31

// ReadmeBE2/Section

// ReadmeBE2/Section

// EasyTransition.SceneMove/<GameSceneLoad>d__9

// EasyTransition.SceneMove/<GameSceneLoad>d__9

// EasyTransition.SceneMove/<IntroSceneLoad>d__11

// EasyTransition.SceneMove/<IntroSceneLoad>d__11

// EasyTransition.TransitionManager/<Start>d__15

// EasyTransition.TransitionManager/<Start>d__15

// EasyTransition.TransitionManager/<Timer>d__12

// EasyTransition.TransitionManager/<Timer>d__12

// EasyTransition.TransitionManager/<Timer>d__13

// EasyTransition.TransitionManager/<Timer>d__13

// EasyTransition.TransitionManager/<Timer>d__14

// EasyTransition.TransitionManager/<Timer>d__14

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// System.Void

// System.Void

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSeconds

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.WaitForSecondsRealtime

// UnityEngine.Collision2D

// UnityEngine.Collision2D

// UnityEngine.ContactPoint2D

// UnityEngine.ContactPoint2D

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.AudioClip

// UnityEngine.AudioClip

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.EventSystems.PointerEventData

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

// UnityEngine.Sprite

// UnityEngine.Sprite

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>

// System.NotSupportedException

// System.NotSupportedException

// ReadmeBE2

// ReadmeBE2

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody

// UnityEngine.Rigidbody2D

// UnityEngine.Rigidbody2D

// UnityEngine.Transform

// UnityEngine.Transform

// EasyTransition.TransitionSettings

// EasyTransition.TransitionSettings

// UnityEngine.Events.UnityAction

// UnityEngine.Events.UnityAction

// UnityEngine.Animator

// UnityEngine.Animator

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Camera

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Canvas

// UnityEngine.CanvasGroup

// UnityEngine.CanvasGroup

// UnityEngine.Collider2D

// UnityEngine.Collider2D

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.RectTransform

// UnityEngine.SpriteRenderer

// UnityEngine.SpriteRenderer

// UnityEngine.AudioSource

// UnityEngine.AudioSource

// BackgroundLoop

// BackgroundLoop

// UnityEngine.BoxCollider2D

// UnityEngine.BoxCollider2D

// EasyTransition.DemoLoadScene

// EasyTransition.DemoLoadScene

// EnemySpawner
struct EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_StaticFields
{
	// EnemySpawner EnemySpawner::instance
	EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* ___instance_4;
};

// EnemySpawner

// EnermyA

// EnermyA

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields
{
	// GameManager GameManager::instance
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___instance_4;
};

// GameManager

// Joystick

// Joystick

// JoystickPlayerExample

// JoystickPlayerExample

// JoystickSetterExample

// JoystickSetterExample

// JumpEffect

// JumpEffect

// MeleeEffect

// MeleeEffect

// ObjectPooler
struct ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields
{
	// ObjectPooler ObjectPooler::instance
	ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* ___instance_4;
};

// ObjectPooler

// Platform

// Platform

// PlatformSpawner

// PlatformSpawner

// Platformloop

// Platformloop

// Player

// Player

// EasyTransition.SceneMove

// EasyTransition.SceneMove

// ScrollingObject

// ScrollingObject

// UnityEngine.Tilemaps.Tilemap

// UnityEngine.Tilemaps.Tilemap

// EasyTransition.Transition

// EasyTransition.Transition

// EasyTransition.TransitionManager
struct TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields
{
	// EasyTransition.TransitionManager EasyTransition.TransitionManager::instance
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* ___instance_9;
};

// EasyTransition.TransitionManager

// UnityEngine.UI.CanvasScaler

// UnityEngine.UI.CanvasScaler

// DynamicJoystick

// DynamicJoystick

// FixedJoystick

// FixedJoystick

// FloatingJoystick

// FloatingJoystick

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.Graphic

// VariableJoystick

// VariableJoystick

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_37;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_52;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_54;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_55;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_56;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_57;
};

// UnityEngine.UI.Image

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// UnityEngine.UI.Text

// EasyTransition.CutoutMaskUI

// EasyTransition.CutoutMaskUI
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ContactPoint2D[]
struct ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949  : public RuntimeArray
{
	ALIGN_FIELD (8) ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 m_Items[1];

	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B  : public RuntimeArray
{
	ALIGN_FIELD (8) Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* m_Items[1];

	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2  : public RuntimeArray
{
	ALIGN_FIELD (8) AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* m_Items[1];

	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// EasyTransition.TransitionManager[]
struct TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8  : public RuntimeArray
{
	ALIGN_FIELD (8) TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* m_Items[1];

	inline TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___0_original, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, RuntimeObject** ___0_component, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,System.Int32Enum>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared (UnityAction_2_tF47D82C7E3C3B118B409866D926435B55A0675BD* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m080DDCB03E6111A6FB7C8A5BC2CD1CCBFBE3BECC_gshared (bool ___0_includeInactive, const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider2D>()
inline BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.BoxCollider2D::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1 (BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void BackgroundLoop::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop_Reposition_mC430454492B2C4FBD0F71148118C3573C59F42CA (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_position, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_rotation, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___0_original, ___1_position, ___2_rotation, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(T)
inline void List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void EnemySpawner::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemy_m3ECE5A636D85AD547F695DFCCA87F3C021BB6599 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27 (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// UnityEngine.GameObject EnemySpawner::GetPooledEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemySpawner_GetPooledEnemy_mFD494DBF8B5AF66B3DFEDBE7B67BCD795E967E4E (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE (String_t* ___0_tag, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void EnermyA::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA_Attack_m05ABA4A640D68AAD620ED849209C4C37BC3363C4 (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator EnermyA::DeactivateAfterDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnermyA_DeactivateAfterDelay_m61A6C937565C627C3CD4F94233E048D1A2B4197D (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, float ___0_delay, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
// System.Void EnermyA/<DeactivateAfterDelay>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateAfterDelayU3Ed__11__ctor_m2DBA1D4F58C635C530F0ABF6A1992B8651B35B21 (U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void EnermyA::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA_Die_m0C3BB322F8553B0561402D12FAA15696ABCFF48C (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<Player>()
inline Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* Object_FindObjectOfType_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mF09BF329E3264923FB258E7A1492AC428C432C27 (const RuntimeMethod* method)
{
	return ((  Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m02DFBF011F3B59F777A5E521DB2A116DD496E968_gshared)(method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___0_button, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8 (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
// System.Void GameManager::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_mE906C522AAECEC56C7FEC7DD92A0D6C85CB9EFF0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB (String_t* ___0_key, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285 (String_t* ___0_key, float ___1_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___0_name, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___0_original, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
// System.Void Platformloop::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platformloop_Reposition_mFD9615B8EEA176169CE4A7A9B7249955BEFDD3E0 (Platformloop_t65BFA9ADA65CFD7120FA81D40CD956401C2AF4C4* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInChildren<UnityEngine.Tilemaps.Tilemap>()
inline Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* GameObject_GetComponentInChildren_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mDA870802AF7030C19E9526C82FD38F7BC8021BEC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mED181B37054A10395CA356010754C7DFC685893C_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___0_minInclusive, float ___1_maxInclusive, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4 (String_t* ___0_axisName, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
// System.Void Player::input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_input_m965A40EB17423FFC46FBE8CB267A4CCABC820AF6 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Jump_m287220C0DC6F59C4505A29DEE6514BD50B031374 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player::Atack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Atack_m8C26F84C486C0F4EE3D8530615928EBAFAD22F20 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_translation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_force, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// UnityEngine.GameObject ObjectPooler::GetPooledJumpEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPooler_GetPooledJumpEffect_m228A6A350E06FCC77CF9C4D52AC65D6391D781BB (ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Player::ActivateMeleeRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_ActivateMeleeRange_m6047AEA09B19BA6C8CA86AB58985378BDAA7E071 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Player::skillTimeChk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_skillTimeChk_mF7AE5ECE644E69444CEB52BB09B263D6F1A89FA7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void Player/<ActivateMeleeRange>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateMeleeRangeU3Ed__28__ctor_mB35A05E3F5EB0D3D4649D7DCC3E03DEEBD684075 (U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Player/<skillTimeChk>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CskillTimeChkU3Ed__31__ctor_mE986AAE45C4CB2464E8DEDDDD3B1C66DF66680BD (U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// UnityEngine.ContactPoint2D[] UnityEngine.Collision2D::get_contacts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.ContactPoint2D::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21 (ContactPoint2D_t16A7EE2DDFB4FA3A09C6554E11F30CEDAEBFA801* __this, const RuntimeMethod* method) ;
// System.Void GameManager::OnPlayerDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerDead_mE274881CC06883C79CD6813804EEE5C3FBAAAFC1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void Player::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Die_mC24698ED84E130E43101B213727A48AA59BB1971 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7 (Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_p, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3,UnityEngine.ForceMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_force, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___0_joystickType, const RuntimeMethod* method) ;
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Vector2::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27 (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, int32_t ___1_snapAxis, const RuntimeMethod* method) ;
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMin(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchorMax(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::WorldToScreenPoint(UnityEngine.Camera,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___0_cam, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_worldPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_sizeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Angle(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_screenPoint, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___2_cam, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___3_localPoint, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchorMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPosition, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_magnitude, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_normalised, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_radius, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___3_cam, const RuntimeMethod* method) ;
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void EasyTransition.SceneMove::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_ResumeGame_m76A1AE64554F47BD5971613861AB703AE1C0AE63 (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) ;
// System.Void EasyTransition.SceneMove::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_PauseGame_m01EDF301EACCD04E4A1CD71CD78739C8A5422182 (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EasyTransition.SceneMove::GameSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneMove_GameSceneLoad_m95E811056074B4064ACE5C62553DD05A3C8FEC4D (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) ;
// System.Void EasyTransition.SceneMove/<GameSceneLoad>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameSceneLoadU3Ed__9__ctor_m0CFB3CB7707AD9880935AE60D4751764643006D5 (U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EasyTransition.SceneMove::IntroSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneMove_IntroSceneLoad_m090E2792426FB39D64C5A294E1EBD0BB184EE4DF (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) ;
// System.Void EasyTransition.SceneMove/<IntroSceneLoad>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntroSceneLoadU3Ed__11__ctor_mB4558A91389BEF9A34C9A909F4181DE40F1CC430 (U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281 (const RuntimeMethod* method) ;
// EasyTransition.TransitionManager EasyTransition.TransitionManager::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* TransitionManager_Instance_mD0F560575D5BE4BAF16DCF20A07C8736AAB60935 (const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager::Transition(System.String,EasyTransition.TransitionSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Transition_m0E2E7E40B9DE68EEFE2345D0D01DE21C6191F32E (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transition, float ___2_startDelay, const RuntimeMethod* method) ;
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AudioClip::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D (AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* __this, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.UI.Graphic::get_materialForRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Graphic_get_materialForRendering_m4B0017B2B59D2EF578D32ABFCF84A97A835B6B22 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_source, const RuntimeMethod* method) ;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image__ctor_m8F922348981CDB74700D89D833FE39611FA4BC37 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.CanvasScaler::set_referenceResolution(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D (CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_original, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_parent, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___0_original, ___1_parent, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.CanvasGroup>()
inline CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.CanvasGroup::set_blocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0 (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.UI.Image>(T&)
inline bool GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* __this, String_t* ___0_name, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_value, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.UI.Image>(T&)
inline bool Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::TryGetComponent<UnityEngine.Animator>(T&)
inline bool GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883**, const RuntimeMethod*))GameObject_TryGetComponent_TisRuntimeObject_m4D430300D2DFB9276DE980D78F60A05D271D3630_gshared)(__this, ___0_component, method);
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Component::TryGetComponent<UnityEngine.Animator>(T&)
inline bool Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883** ___0_component, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883**, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m69D4ED21F14D49D805A2337F4332934CDA07DEDB_gshared)(__this, ___0_component, method);
}
// System.Void UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m7445B0F04ECB8542147C3C9B963A792140CFAD0A_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::add_sceneLoaded(UnityEngine.Events.UnityAction`2<UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6 (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_obj, float ___1_t, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m9D05665D4AEBDA7610D4873EDC74B344F2E5FED1 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, float ___0_delay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transitionSettings, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.String,System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m31A6543331F8AD06860FAE6B3E7CBED844E5F658 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, float ___1_startDelay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___2_transitionSettings, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.Int32,System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m27EDDC77C310937C1E4D5C59967A8E344911DAEE (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, int32_t ___0_sceneIndex, float ___1_startDelay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___2_transitionSettings, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetSceneByName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9 (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager/<Timer>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__12__ctor_mE910E7E4470172567346B7B3E21B3A7A8A3A5E26 (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager/<Timer>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__13__ctor_m6B396D2730423917A93230EA7ABEC2F22C9B47EC (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager/<Timer>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__14__ctor_mC6A7764E3CB1A7E820F6BC2B4C0E4B837CABC0AC (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void EasyTransition.TransitionManager/<Start>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15__ctor_mEDA09644404BB45ACE41F0CB519EDA5AF0DFF67A (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSecondsRealtime::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EasyTransition.Transition>()
inline Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___0_sceneBuildIndex, const RuntimeMethod* method) ;
// System.Void EasyTransition.Transition::OnSceneLoad(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C (Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<EasyTransition.TransitionManager>(System.Boolean)
inline TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8* Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4 (bool ___0_includeInactive, const RuntimeMethod* method)
{
	return ((  TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8* (*) (bool, const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m080DDCB03E6111A6FB7C8A5BC2CD1CCBFBE3BECC_gshared)(___0_includeInactive, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector2::Dot(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
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
// System.Void BackgroundLoop::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop_Awake_m655D177F1A4D63D62CFBFEC88802664EEDFA16F4 (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* V_0 = NULL;
	{
		// BoxCollider2D backgroundboxCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		V_0 = L_0;
		// width = backgroundboxCollider.size.x;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = V_0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_1, NULL);
		float L_3 = L_2.___x_0;
		__this->___width_4 = L_3;
		// }
		return;
	}
}
// System.Void BackgroundLoop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop_Update_m32927DA0A3295DC46D19EDD36D40AEBE193F5C5C (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) 
{
	{
		// if (transform.position.x <= -width)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3 = __this->___width_4;
		if ((!(((float)L_2) <= ((float)((-L_3))))))
		{
			goto IL_001f;
		}
	}
	{
		// Reposition();
		BackgroundLoop_Reposition_mC430454492B2C4FBD0F71148118C3573C59F42CA(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void BackgroundLoop::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop_Reposition_mC430454492B2C4FBD0F71148118C3573C59F42CA (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 offset = new Vector2(width * 2f, 0);
		float L_0 = __this->___width_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(L_0, (2.0f))), (0.0f), NULL);
		// transform.position = (Vector2)transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Void BackgroundLoop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BackgroundLoop__ctor_m567F0EAF3454EE50F5344E6C0541554BC9C845A6 (BackgroundLoop_t135113C1A8C0386C5392C4F052F0E28557761F7A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnemySpawner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Awake_m203DEC4DF92AA14A3CB0377AD355871C394DFCB5 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance != null)
		EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* L_0 = ((EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_StaticFields*)il2cpp_codegen_static_fields_for(EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// instance = this;
		((EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_StaticFields*)il2cpp_codegen_static_fields_for(EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_StaticFields*)il2cpp_codegen_static_fields_for(EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		// }
		return;
	}
}
// System.Void EnemySpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Start_m5302D69E915FF1027CFB0C1198CBCAA9430819A4 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* V_1 = NULL;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// enemyPool = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___enemyPool_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enemyPool_8), (void*)L_0);
		// for (int i = 0; i < poolSize; i++)
		V_0 = 0;
		goto IL_0054;
	}

IL_000f:
	{
		// foreach (var enemy in enemyPrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___enemyPrefabs_5;
		V_1 = L_1;
		V_2 = 0;
		goto IL_004a;
	}

IL_001a:
	{
		// foreach (var enemy in enemyPrefabs)
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// GameObject instance = Instantiate(enemy, spawnPosition.position, Quaternion.identity);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___spawnPosition_6;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8;
		L_8 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_5, L_7, L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_3 = L_9;
		// instance.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = V_3;
		NullCheck(L_10);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_10, (bool)0, NULL);
		// enemyPool.Add(instance);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11 = __this->___enemyPool_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_11, L_12, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004a:
	{
		// foreach (var enemy in enemyPrefabs)
		int32_t L_14 = V_2;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_001a;
		}
	}
	{
		// for (int i = 0; i < poolSize; i++)
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < poolSize; i++)
		int32_t L_17 = V_0;
		int32_t L_18 = __this->___poolSize_7;
		if ((((int32_t)L_17) < ((int32_t)L_18)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void EnemySpawner::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_Update_m85D72B9CF6D0D9D7BE8A6816CE556BF5E9D7FFC5 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// timer += Time.deltaTime; // ???? ??????? ???? ?????? ?????? ????? ??????
		float L_0 = __this->___timer_10;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer_10 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (timer >= spawnInterval) // ????? ?????? ?????? ?????? ??????
		float L_2 = __this->___timer_10;
		float L_3 = __this->___spawnInterval_9;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0031;
		}
	}
	{
		// SpawnEnemy(); // ???? ??????????
		EnemySpawner_SpawnEnemy_m3ECE5A636D85AD547F695DFCCA87F3C021BB6599(__this, NULL);
		// timer = 0f; // ????? ??? 0???? ????????
		__this->___timer_10 = (0.0f);
	}

IL_0031:
	{
		// }
		return;
	}
}
// UnityEngine.GameObject EnemySpawner::GetPooledEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* EnemySpawner_GetPooledEnemy_mFD494DBF8B5AF66B3DFEDBE7B67BCD795E967E4E (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	{
		// foreach (var enemy in enemyPool)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___enemyPool_8;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0022_1;
			}

IL_000e_1:
			{
				// foreach (var enemy in enemyPool)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_2;
				// if (!enemy.activeInHierarchy)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_1;
				NullCheck(L_3);
				bool L_4;
				L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
				if (L_4)
				{
					goto IL_0022_1;
				}
			}
			{
				// return enemy;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_1;
				V_2 = L_5;
				goto IL_003d;
			}

IL_0022_1:
			{
				// foreach (var enemy in enemyPool)
				bool L_6;
				L_6 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// return null;
		return (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)NULL;
	}

IL_003d:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_2;
		return L_7;
	}
}
// System.Void EnemySpawner::SpawnEnemy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner_SpawnEnemy_m3ECE5A636D85AD547F695DFCCA87F3C021BB6599 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// var enemy = GetPooledEnemy();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = EnemySpawner_GetPooledEnemy_mFD494DBF8B5AF66B3DFEDBE7B67BCD795E967E4E(__this, NULL);
		V_0 = L_0;
		// if (enemy == null) return;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0011;
		}
	}
	{
		// if (enemy == null) return;
		return;
	}

IL_0011:
	{
		// enemy.transform.position = spawnPosition.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___spawnPosition_6;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_6, NULL);
		// enemy.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)1, NULL);
		// enemy.gameObject.layer = 7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_0;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_8, NULL);
		NullCheck(L_9);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_9, 7, NULL);
		// }
		return;
	}
}
// System.Void EnemySpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemySpawner__ctor_m619CE38261A8A67AB91D66ED5BE44E56C1897E74 (EnemySpawner_tBA941A38B8AC67CF1D99E92E3BB0CC9C7A14A177* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private int poolSize = 40;
		__this->___poolSize_7 = ((int32_t)40);
		// private float spawnInterval = 1.5f;
		__this->___spawnInterval_9 = (1.5f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnermyA::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA_Start_m5231A1F7BEC2E5057963CCE6E103C520507EA360 (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0;
		L_0 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___animator_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___animator_6), (void*)L_0);
		// player = GameObject.FindGameObjectWithTag("Player").transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = GameObject_FindGameObjectWithTag_mF0229BC2074CE9EEA72FAB1E5A4BC2AEC3D2CDBE(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		__this->___player_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_7), (void*)L_2);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_3;
		L_3 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_8), (void*)L_3);
		// }
		return;
	}
}
// System.Void EnermyA::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA_Update_m98BC024CFF60FBAE0E0B30AC18CDDFAE043438F8 (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, const RuntimeMethod* method) 
{
	{
		// Attack();
		EnermyA_Attack_m05ABA4A640D68AAD620ED849209C4C37BC3363C4(__this, NULL);
		// }
		return;
	}
}
// System.Void EnermyA::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA_Attack_m05ABA4A640D68AAD620ED849209C4C37BC3363C4 (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF01260DA84FFC3896C078DB954AAA1A1FF0A3A0D);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float distanceToPlayer = Vector2.Distance(transform.position, player.position);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___player_7;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_4, NULL);
		float L_6;
		L_6 = Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline(L_2, L_5, NULL);
		V_0 = L_6;
		// if (!isDead && distanceToPlayer < attackRange)
		bool L_7 = __this->___isDead_10;
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		float L_8 = V_0;
		float L_9 = __this->___attackRange_5;
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0048;
		}
	}
	{
		// animator.SetTrigger("doAtt");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___animator_6;
		NullCheck(L_10);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_10, _stringLiteralF01260DA84FFC3896C078DB954AAA1A1FF0A3A0D, NULL);
		return;
	}

IL_0048:
	{
		// if (!isDead)
		bool L_11 = __this->___isDead_10;
		if (L_11)
		{
			goto IL_006c;
		}
	}
	{
		// rb.velocity = new Vector2(-moveSpeed, -2);
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_12 = __this->___rb_8;
		float L_13 = __this->___moveSpeed_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), ((-L_13)), (-2.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_12, L_14, NULL);
	}

IL_006c:
	{
		// }
		return;
	}
}
// System.Void EnermyA::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA_Die_m0C3BB322F8553B0561402D12FAA15696ABCFF48C (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// isDead = true;
		__this->___isDead_10 = (bool)1;
		// animator.SetTrigger("doDie");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___animator_6;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5, NULL);
		// gameObject.layer = 6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_1, 6, NULL);
		// rb.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_2 = __this->___rb_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_2);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_2, L_3, NULL);
		// StartCoroutine(DeactivateAfterDelay(3f));
		RuntimeObject* L_4;
		L_4 = EnermyA_DeactivateAfterDelay_m61A6C937565C627C3CD4F94233E048D1A2B4197D(__this, (3.0f), NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EnermyA::DeactivateAfterDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EnermyA_DeactivateAfterDelay_m61A6C937565C627C3CD4F94233E048D1A2B4197D (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, float ___0_delay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* L_0 = (U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68*)il2cpp_codegen_object_new(U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDeactivateAfterDelayU3Ed__11__ctor_m2DBA1D4F58C635C530F0ABF6A1992B8651B35B21(L_0, 0, NULL);
		U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* L_2 = L_1;
		float L_3 = ___0_delay;
		NullCheck(L_2);
		L_2->___delay_2 = L_3;
		return L_2;
	}
}
// System.Void EnermyA::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA_OnCollisionEnter2D_m7C8C356799FBF441E843501906DF88E100057882 (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EnermyA::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA_OnTriggerEnter2D_mA67EEC58E0CCEC180DCEA41EA1943B43C070AC6B (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((other.tag == "Wall" || other.tag == "Melee") && !isDead)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_other;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteralD89922FC94FB532658E661A03A79FD412310E5F4, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}

IL_0024:
	{
		bool L_6 = __this->___isDead_10;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		// Die();
		EnermyA_Die_m0C3BB322F8553B0561402D12FAA15696ABCFF48C(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void EnermyA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnermyA__ctor_m45B9B053AC0F1B4D2055E7812C0F4B979178B2D2 (EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveSpeed = 10f;
		__this->___moveSpeed_4 = (10.0f);
		// [SerializeField] private float attackRange = 15f;
		__this->___attackRange_5 = (15.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EnermyA/<DeactivateAfterDelay>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateAfterDelayU3Ed__11__ctor_m2DBA1D4F58C635C530F0ABF6A1992B8651B35B21 (U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EnermyA/<DeactivateAfterDelay>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateAfterDelayU3Ed__11_System_IDisposable_Dispose_m10EB1D2376FFB5A3C3979F33C5F7E77B75987ED2 (U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EnermyA/<DeactivateAfterDelay>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDeactivateAfterDelayU3Ed__11_MoveNext_m934F4E7F08B2BD6595BFC731F3BE10BEA5F93E33 (U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(delay);
		float L_4 = __this->___delay_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_5 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_5, L_4, NULL);
		__this->___U3CU3E2__current_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_5);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gameObject.SetActive(false);
		EnermyA_tCBB5A9A63AF8DD293832126D29964EB1F0162394* L_6 = V_1;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EnermyA/<DeactivateAfterDelay>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeactivateAfterDelayU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7F5834ADBA0447AB90710B562F7F58971F1000B9 (U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EnermyA/<DeactivateAfterDelay>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDeactivateAfterDelayU3Ed__11_System_Collections_IEnumerator_Reset_m8C97568157CF865AB84AA052948D18EC45DF2FF2 (U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDeactivateAfterDelayU3Ed__11_System_Collections_IEnumerator_Reset_m8C97568157CF865AB84AA052948D18EC45DF2FF2_RuntimeMethod_var)));
	}
}
// System.Object EnermyA/<DeactivateAfterDelay>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDeactivateAfterDelayU3Ed__11_System_Collections_IEnumerator_get_Current_m23CD74D18276C01C0E4FB5642371997F53387B3B (U3CDeactivateAfterDelayU3Ed__11_t8FC69BACA1E721570D937F3A9B4C2D1E0E8C0D68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m4B6E8E2AF58C95C9A2A0C4637A34AE0892CB637F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mF09BF329E3264923FB258E7A1492AC428C432C27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral64ACBA24F964302D056F107F29F94AB9BB9DB18E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// instance = this;
		((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		goto IL_002a;
	}

IL_0015:
	{
		// Debug.LogWarning("?? ?? ??? ?? ???? ?????!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral64ACBA24F964302D056F107F29F94AB9BB9DB18E, NULL);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_002a:
	{
		// player = FindObjectOfType<Player>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_3;
		L_3 = Object_FindObjectOfType_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mF09BF329E3264923FB258E7A1492AC428C432C27(Object_FindObjectOfType_TisPlayer_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74_mF09BF329E3264923FB258E7A1492AC428C432C27_RuntimeMethod_var);
		__this->___player_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___player_12), (void*)L_3);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_m7F29D8E933B8D21D2E67507979C0F12ACF87BB41 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(isGameover && Input.GetMouseButtonDown(0))
		bool L_0 = __this->___isGameover_6;
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_3, NULL);
	}

IL_0022:
	{
		// AddScore();
		GameManager_AddScore_mE906C522AAECEC56C7FEC7DD92A0D6C85CB9EFF0(__this, NULL);
		// }
		return;
	}
}
// System.Void GameManager::AddScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_AddScore_mE906C522AAECEC56C7FEC7DD92A0D6C85CB9EFF0 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!isGameover)
		bool L_0 = __this->___isGameover_6;
		if (L_0)
		{
			goto IL_004c;
		}
	}
	{
		// score += 100 * Time.deltaTime; // Increase by 100 per second
		float L_1 = __this->___score_11;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___score_11 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply((100.0f), L_2))));
		// int roundedScore = Mathf.RoundToInt(score / 10) * 10;  // Round to nearest 10
		float L_3 = __this->___score_11;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_3/(10.0f))), NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)10)));
		// scoreText.text = roundedScore.ToString("N0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___scoreText_7;
		String_t* L_6;
		L_6 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_0), _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_6);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void GameManager::OnPlayerDead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnPlayerDead_mE274881CC06883C79CD6813804EEE5C3FBAAAFC1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C91CDDCE5498D2D95273E9C4922AD529E3C45C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43AADFC6B8B78173F24AC8C280787C029C1718D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral734E55240A32A04AAA065CE358EEC5346F8C0102);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F0204FD532E1D09FBBED092FA40C9BD9FA43AC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF83BF732D98F43DB347FFEFD151E40874C0A53A8);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_4 = NULL;
	{
		// isGameover = true;
		__this->___isGameover_6 = (bool)1;
		// gameoverUI.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___gameoverUI_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// scoreText.gameObject.SetActive(false);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___scoreText_7;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// gameSound.Stop();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___gameSound_15;
		NullCheck(L_3);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_3, NULL);
		// endSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_4 = __this->___endSound_14;
		NullCheck(L_4);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_4, NULL);
		// float bestScore = PlayerPrefs.GetFloat("Best Time");
		float L_5;
		L_5 = PlayerPrefs_GetFloat_m81F89D571E11218ED76DC9234CF8FAC2515FA7CB(_stringLiteral734E55240A32A04AAA065CE358EEC5346F8C0102, NULL);
		V_0 = L_5;
		// if (score > bestScore)
		float L_6 = __this->___score_11;
		float L_7 = V_0;
		if ((!(((float)L_6) > ((float)L_7))))
		{
			goto IL_0060;
		}
	}
	{
		// bestScore = score;
		float L_8 = __this->___score_11;
		V_0 = L_8;
		// PlayerPrefs.SetFloat("Best Time", bestScore);
		float L_9 = V_0;
		PlayerPrefs_SetFloat_m1E8EA662BB9D8CF339D7DA2C452FCDFED88C5285(_stringLiteral734E55240A32A04AAA065CE358EEC5346F8C0102, L_9, NULL);
	}

IL_0060:
	{
		// int roundedScore = Mathf.RoundToInt(score / 10) * 10;  // Round to nearest 10
		float L_10 = __this->___score_11;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_10/(10.0f))), NULL);
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_11, ((int32_t)10)));
		// int roundedBestScore = Mathf.RoundToInt(bestScore / 10) * 10;  // Round to nearest 10
		float L_12 = V_0;
		int32_t L_13;
		L_13 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)(L_12/(10.0f))), NULL);
		V_2 = ((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)10)));
		// recordText.text = "?? ??: " + roundedBestScore.ToString("N0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___recordText_9;
		String_t* L_15;
		L_15 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_2), _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral2C91CDDCE5498D2D95273E9C4922AD529E3C45C7, L_15, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_16);
		// gameoverScoreText.text = "?? ??: " + roundedScore.ToString("N0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = __this->___gameoverScoreText_10;
		String_t* L_18;
		L_18 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_1), _stringLiteralA16A5A766620C92E70C8F0C13BC707B1DD24BB40, NULL);
		String_t* L_19;
		L_19 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral43AADFC6B8B78173F24AC8C280787C029C1718D7, L_18, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_19);
		// GameObject joypad = GameObject.Find("JumpButton (1)"); // ???? ?? ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20;
		L_20 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteralF83BF732D98F43DB347FFEFD151E40874C0A53A8, NULL);
		V_3 = L_20;
		// if (joypad != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_21, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_22)
		{
			goto IL_00e2;
		}
	}
	{
		// joypad.SetActive(false); // DodgeButton? ????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_3;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
	}

IL_00e2:
	{
		// GameObject DodgeButton = GameObject.Find("AttButton"); // ???? ?? ???? ??
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral9F0204FD532E1D09FBBED092FA40C9BD9FA43AC4, NULL);
		V_4 = L_24;
		// if (DodgeButton != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_0100;
		}
	}
	{
		// DodgeButton.SetActive(false); // DodgeButton? ????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_4;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
	}

IL_0100:
	{
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public float scoreIncreaseInterval = 0.1f;
		__this->___scoreIncreaseInterval_5 = (0.100000001f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JumpEffect::DeactivateAllActiveEffects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpEffect_DeactivateAllActiveEffects_m2D83F2B8367E71DFD643A66543E3BB8BDBC4E60F (JumpEffect_t3571579D8A6D1674E4D46EB4531E5FA5DBA96B31* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// foreach (GameObject obj in ObjectPooler.instance.jumpEffectPool)
		ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* L_0 = ((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = L_0->___jumpEffectPool_7;
		NullCheck(L_1);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_2;
		L_2 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_1, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_0), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0012_1:
			{
				// foreach (GameObject obj in ObjectPooler.instance.jumpEffectPool)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
				L_3 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_0), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_1 = L_3;
				// if (obj.activeInHierarchy)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_1;
				NullCheck(L_4);
				bool L_5;
				L_5 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_4, NULL);
				if (!L_5)
				{
					goto IL_0029_1;
				}
			}
			{
				// obj.SetActive(false);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
				NullCheck(L_6);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
			}

IL_0029_1:
			{
				// foreach (GameObject obj in ObjectPooler.instance.jumpEffectPool)
				bool L_7;
				L_7 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_0), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0012_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void JumpEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JumpEffect__ctor_m361DA11A48E1E8239E6A596A917577CAB460B7BB (JumpEffect_t3571579D8A6D1674E4D46EB4531E5FA5DBA96B31* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void MeleeEffect::OnE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeleeEffect_OnE_mD93D58272CB2657590DEB3373A3691C5F7D8424E (MeleeEffect_tEF77FD5A39413BA43D9EC41573684D46560C7013* __this, const RuntimeMethod* method) 
{
	{
		// transform.position = new Vector2(player.transform.position.x, player.transform.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___player_4;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_1, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		float L_4 = L_3.___x_2;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_5 = __this->___player_4;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		float L_8 = L_7.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_9), L_4, L_8, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_9, NULL);
		NullCheck(L_0);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_0, L_10, NULL);
		// }
		return;
	}
}
// System.Void MeleeEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeleeEffect__ctor_mDEFC55BEA69536013BDA948649CE7B358057C3B6 (MeleeEffect_tEF77FD5A39413BA43D9EC41573684D46560C7013* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ObjectPooler::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler_Awake_m393E0DFD5E306CDA8626947BDB21BA1137F728E4 (ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// if (instance == null)
		ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* L_0 = ((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___instance_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// instance = this;
		((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___instance_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___instance_4), (void*)__this);
		goto IL_0021;
	}

IL_0015:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// jumpEffectPool = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_3 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_3, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___jumpEffectPool_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___jumpEffectPool_7), (void*)L_3);
		// for (int i = 0; i < poolSize; i++)
		V_0 = 0;
		goto IL_0053;
	}

IL_0030:
	{
		// GameObject obj = Instantiate(jumpEffectPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___jumpEffectPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_1 = L_5;
		// obj.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_1;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// jumpEffectPool.Add(obj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = __this->___jumpEffectPool_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = V_1;
		NullCheck(L_7);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_7, L_8, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// for (int i = 0; i < poolSize; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0053:
	{
		// for (int i = 0; i < poolSize; i++)
		int32_t L_10 = V_0;
		int32_t L_11 = __this->___poolSize_6;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0030;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject ObjectPooler::GetPooledJumpEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ObjectPooler_GetPooledJumpEffect_m228A6A350E06FCC77CF9C4D52AC65D6391D781BB (ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 V_1;
	memset((&V_1), 0, sizeof(V_1));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// foreach (GameObject obj in jumpEffectPool)
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___jumpEffectPool_7;
		NullCheck(L_0);
		Enumerator_t88BD1282EF117E59AACFC9EC55B89F0B9EDACE60 L_1;
		L_1 = List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8(L_0, List_1_GetEnumerator_mA843D26C63E5963415DFCA6E49DFA27AFD9C75E8_RuntimeMethod_var);
		V_1 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D((&V_1), Enumerator_Dispose_m07D362A07C19B36C2FD1B4DC79DD99903D4DA95D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_000e_1:
			{
				// foreach (GameObject obj in jumpEffectPool)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
				L_2 = Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_inline((&V_1), Enumerator_get_Current_m7236EBE1CFCB6533F96E030500D322B13D0CA5A4_RuntimeMethod_var);
				V_2 = L_2;
				// if (!obj.activeInHierarchy)
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_2;
				NullCheck(L_3);
				bool L_4;
				L_4 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_3, NULL);
				if (L_4)
				{
					goto IL_0029_1;
				}
			}
			{
				// obj.SetActive(true);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_2;
				NullCheck(L_5);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
				// return obj;
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = V_2;
				V_3 = L_6;
				goto IL_005c;
			}

IL_0029_1:
			{
				// foreach (GameObject obj in jumpEffectPool)
				bool L_7;
				L_7 = Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27((&V_1), Enumerator_MoveNext_m96F4B0BD0A5485C8E8CC57D961DF6F1FA256AF27_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		// GameObject newObj = Instantiate(jumpEffectPrefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___jumpEffectPrefab_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_8, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		V_0 = L_9;
		// jumpEffectPool.Add(newObj);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___jumpEffectPool_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = V_0;
		NullCheck(L_10);
		List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_inline(L_10, L_11, List_1_Add_m43FBF207375C6E06B8C45ECE614F9B8008FB686E_RuntimeMethod_var);
		// return newObj;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		return L_12;
	}

IL_005c:
	{
		// }
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = V_3;
		return L_13;
	}
}
// System.Void ObjectPooler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPooler__ctor_m77595BC1D35A9F46ABADC80B791CBF16AE17D708 (ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* __this, const RuntimeMethod* method) 
{
	{
		// public int poolSize = 10;
		__this->___poolSize_6 = ((int32_t)10);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Platform::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform_OnEnable_mBA7B999AD0EE440E1EB3CD213B2479D52684150A (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < obstacles.Length; i++)
		V_0 = 0;
		goto IL_002f;
	}

IL_0004:
	{
		// if (Random.Range(0, 5) == 0) {
		int32_t L_0;
		L_0 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, 5, NULL);
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		// obstacles[i].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___obstacles_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		goto IL_002b;
	}

IL_001d:
	{
		// obstacles[i].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_5 = __this->___obstacles_4;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_002b:
	{
		// for(int i = 0; i < obstacles.Length; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002f:
	{
		// for(int i = 0; i < obstacles.Length; i++)
		int32_t L_10 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___obstacles_4;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Platform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platform__ctor_m7B49FC4AD80BC236383C1A82204EC91E11369498 (Platform_tB273231B032B66E0A0CA476D2B180D1705DC80D7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Platformloop::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platformloop_Awake_mB612E6A341C595668CF0939A9FC212CA61F3E14A (Platformloop_t65BFA9ADA65CFD7120FA81D40CD956401C2AF4C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* V_0 = NULL;
	{
		// BoxCollider2D backgroundboxCollider = GetComponent<BoxCollider2D>();
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_0;
		L_0 = Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813(__this, Component_GetComponent_TisBoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA_m8E881B105EA2AA2D9E3CFB68EE0924719FA96813_RuntimeMethod_var);
		V_0 = L_0;
		// width = backgroundboxCollider.size.x;
		BoxCollider2D_tF860C7737FFB062CEC06577E0CD8364EEC1D4EDA* L_1 = V_0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = BoxCollider2D_get_size_mBB657ADFC58A79CDFDB7478956BBD9032E41D3D1(L_1, NULL);
		float L_3 = L_2.___x_0;
		__this->___width_4 = L_3;
		// }
		return;
	}
}
// System.Void Platformloop::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platformloop_Update_m35010D39DD5BC5C80A9E66B9770FCBF42CCD7034 (Platformloop_t65BFA9ADA65CFD7120FA81D40CD956401C2AF4C4* __this, const RuntimeMethod* method) 
{
	{
		// if(transform.position.x <= -width)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___x_2;
		float L_3 = __this->___width_4;
		if ((!(((float)L_2) <= ((float)((-L_3))))))
		{
			goto IL_001f;
		}
	}
	{
		// Reposition();
		Platformloop_Reposition_mFD9615B8EEA176169CE4A7A9B7249955BEFDD3E0(__this, NULL);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Platformloop::Reposition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platformloop_Reposition_mFD9615B8EEA176169CE4A7A9B7249955BEFDD3E0 (Platformloop_t65BFA9ADA65CFD7120FA81D40CD956401C2AF4C4* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector2 offset = new Vector2(width *2, 0);
		float L_0 = __this->___width_4;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), ((float)il2cpp_codegen_multiply(L_0, (2.0f))), (0.0f), NULL);
		// transform.position = (Vector2)transform.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_4, L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_6, NULL);
		NullCheck(L_1);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_1, L_7, NULL);
		// }
		return;
	}
}
// System.Void Platformloop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Platformloop__ctor_mBD3E2C6CC19FC0DE2AE1AF87722FB3D98A51F43D (Platformloop_t65BFA9ADA65CFD7120FA81D40CD956401C2AF4C4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlatformSpawner::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSpawner_Start_m63A5983FA20B863B6B416DCEB803EFE4E3445EA0 (PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mDA870802AF7030C19E9526C82FD38F7BC8021BEC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	{
		// platforms = new GameObject[count];
		int32_t L_0 = __this->___count_5;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___platforms_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___platforms_11), (void*)L_1);
		// for(int i = 0; i < count; i++)
		V_0 = 0;
		goto IL_0048;
	}

IL_0015:
	{
		// GameObject grid = Instantiate(platformPrefab, poolPosition, Quaternion.identity);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___platformPrefab_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___poolPosition_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_3, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_4, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_1 = L_6;
		// platforms[i] = grid.GetComponentInChildren<Tilemap>().gameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_7 = __this->___platforms_11;
		int32_t L_8 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_1;
		NullCheck(L_9);
		Tilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751* L_10;
		L_10 = GameObject_GetComponentInChildren_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mDA870802AF7030C19E9526C82FD38F7BC8021BEC(L_9, GameObject_GetComponentInChildren_TisTilemap_t18C4166D0AC702D5BFC0C411FA73C4B61D9D1751_mDA870802AF7030C19E9526C82FD38F7BC8021BEC_RuntimeMethod_var);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_10, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_11);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_11);
		// for(int i = 0; i < count; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_0048:
	{
		// for(int i = 0; i < count; i++)
		int32_t L_13 = V_0;
		int32_t L_14 = __this->___count_5;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0015;
		}
	}
	{
		// lastSpawnTime = 0f;
		__this->___lastSpawnTime_14 = (0.0f);
		// timeBetSpawn = 0f;
		__this->___timeBetSpawn_8 = (0.0f);
		// }
		return;
	}
}
// System.Void PlatformSpawner::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSpawner_FixedUpdate_m9E4968E8D22C9C2CAA043DB1C58948A3320B0EFD (PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (GameManager.instance.isGameover)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		bool L_1 = L_0->___isGameover_6;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// if(Time.time >= lastSpawnTime+ timeBetSpawn)
		float L_2;
		L_2 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_3 = __this->___lastSpawnTime_14;
		float L_4 = __this->___timeBetSpawn_8;
		if ((!(((float)L_2) >= ((float)((float)il2cpp_codegen_add(L_3, L_4))))))
		{
			goto IL_00ca;
		}
	}
	{
		// lastSpawnTime = Time.time;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___lastSpawnTime_14 = L_5;
		// timeBetSpawn = Random.Range(timeBetSpawnMin,timeBetSpawnMax);
		float L_6 = __this->___timeBetSpawnMin_6;
		float L_7 = __this->___timeBetSpawnMax_7;
		float L_8;
		L_8 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_6, L_7, NULL);
		__this->___timeBetSpawn_8 = L_8;
		// float yPos = Random.Range(yMin,yMax);
		float L_9 = __this->___yMin_9;
		float L_10 = __this->___yMax_10;
		float L_11;
		L_11 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_9, L_10, NULL);
		V_0 = L_11;
		// float xPos = 50;
		V_1 = (50.0f);
		// platforms[currentIndex].SetActive(false);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___platforms_11;
		int32_t L_13 = __this->___currentIndex_12;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// platforms[currentIndex].SetActive(true);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_16 = __this->___platforms_11;
		int32_t L_17 = __this->___currentIndex_12;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)1, NULL);
		// platforms[currentIndex].transform.position = new Vector2(xPos, yPos);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___platforms_11;
		int32_t L_21 = __this->___currentIndex_12;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		float L_25 = V_1;
		float L_26 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_27), L_25, L_26, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_27, NULL);
		NullCheck(L_24);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_24, L_28, NULL);
		// currentIndex++;
		int32_t L_29 = __this->___currentIndex_12;
		__this->___currentIndex_12 = ((int32_t)il2cpp_codegen_add(L_29, 1));
		// if(currentIndex >= count)
		int32_t L_30 = __this->___currentIndex_12;
		int32_t L_31 = __this->___count_5;
		if ((((int32_t)L_30) < ((int32_t)L_31)))
		{
			goto IL_00ca;
		}
	}
	{
		// currentIndex = 0;
		__this->___currentIndex_12 = 0;
	}

IL_00ca:
	{
		// }
		return;
	}
}
// System.Void PlatformSpawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformSpawner__ctor_m0A48A7C9FA24A5BCD033D09E70CF713DA275A985 (PlatformSpawner_t10BACB4C0E26A26E73DDFB07402CA2D4CC92FF08* __this, const RuntimeMethod* method) 
{
	{
		// public int count = 3; // ??? ??? ??
		__this->___count_5 = 3;
		// public float timeBetSpawnMin = 4f; // ?? ????? ?? ?? ???
		__this->___timeBetSpawnMin_6 = (4.0f);
		// public float timeBetSpawnMax = 5f; // ?? ????? ?? ?? ???
		__this->___timeBetSpawnMax_7 = (5.0f);
		// public float yMin = 3.8f; // ??? ??? ?? y?
		__this->___yMin_9 = (3.79999995f);
		// public float yMax = 4.5f; // ??? ??? ?? y?
		__this->___yMax_10 = (4.5f);
		// private Vector2 poolPosition = new Vector2(0, -25); // ??? ??? ???? ?? ?? ??? ??
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (0.0f), (-25.0f), /*hidden argument*/NULL);
		__this->___poolPosition_13 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Player::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Awake_m512A28E1559EB8AEEB2E1DB873F9F99FCC96BA67 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2(__this, Component_GetComponent_TisRigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_m0712B7A9DBBAE2C319B4B03394E7731B86FACBF2_RuntimeMethod_var);
		__this->___rb_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rb_9), (void*)L_0);
		// anim = GetComponent<Animator>();
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1;
		L_1 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(__this, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___anim_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___anim_10), (void*)L_1);
		// spriteRenderer = GetComponent<SpriteRenderer>();
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_2;
		L_2 = Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45(__this, Component_GetComponent_TisSpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_m6181F10C09FC1650DAE0EF2308D344A2F170AA45_RuntimeMethod_var);
		__this->___spriteRenderer_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___spriteRenderer_11), (void*)L_2);
		// }
		return;
	}
}
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mC31CF4F40DDEA35C5E39E8C43EC37284AE7C453D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// hideSkillButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___hideSkillButton_18;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Player::input()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_input_m965A40EB17423FFC46FBE8CB267A4CCABC820AF6 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// moveKey = Input.GetAxisRaw("Horizontal");
		float L_0;
		L_0 = Input_GetAxisRaw_m47C0CF8E090561A2F407A4E11D5F2A45044EB8E4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		__this->___moveKey_12 = L_0;
		// jumpKey = Input.GetKeyDown(KeyCode.Space);
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)32), NULL);
		__this->___jumpKey_14 = L_1;
		// attKey = Input.GetKeyDown(KeyCode.J);
		bool L_2;
		L_2 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)106), NULL);
		__this->___attKey_17 = L_2;
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m95E134A5EF1B5164EA281F61D7FA436F59BE3C9F (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// input();
		Player_input_m965A40EB17423FFC46FBE8CB267A4CCABC820AF6(__this, NULL);
		// Jump();
		Player_Jump_m287220C0DC6F59C4505A29DEE6514BD50B031374(__this, NULL);
		// Atack();
		Player_Atack_m8C26F84C486C0F4EE3D8530615928EBAFAD22F20(__this, NULL);
		// }
		return;
	}
}
// System.Void Player::Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_m82839AA92067405A9D52FEFE7C07D8420F011E17 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (moveKey == 0)
		float L_0 = __this->___moveKey_12;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0027;
		}
	}
	{
		// anim.SetBool("isRun", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___anim_10;
		NullCheck(L_1);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_1, _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7, (bool)0, NULL);
		// isPlayerMoving = false;
		__this->___isPlayerMoving_13 = (bool)0;
		goto IL_005f;
	}

IL_0027:
	{
		// if (!isDead)
		bool L_2 = __this->___isDead_23;
		if (L_2)
		{
			goto IL_005f;
		}
	}
	{
		// isPlayerMoving = true;
		__this->___isPlayerMoving_13 = (bool)1;
		// spriteRenderer.flipX = moveKey == -1f; //??????? -1 ????? ??? ?????? ????????? ???????? false???
		SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* L_3 = __this->___spriteRenderer_11;
		float L_4 = __this->___moveKey_12;
		NullCheck(L_3);
		SpriteRenderer_set_flipX_m83BEEE8D1241ED712298B171E2AA972875E30A0B(L_3, (bool)((((float)L_4) == ((float)(-1.0f)))? 1 : 0), NULL);
		// anim.SetBool("isRun", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_10;
		NullCheck(L_5);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_5, _stringLiteral0B27256C07F6F9A3D209A8EF4E771A19A90D90F7, (bool)1, NULL);
	}

IL_005f:
	{
		// if (moveKey > 0 && isGrounded)
		float L_6 = __this->___moveKey_12;
		if ((!(((float)L_6) > ((float)(0.0f)))))
		{
			goto IL_00b1;
		}
	}
	{
		bool L_7 = __this->___isGrounded_15;
		if (!L_7)
		{
			goto IL_00b1;
		}
	}
	{
		// speed = 13;
		__this->___speed_4 = (13.0f);
		// transform.Translate(Vector3.right * moveKey * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_10 = __this->___moveKey_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_9, L_10, NULL);
		float L_12 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_11, L_12, NULL);
		float L_14;
		L_14 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_13, L_14, NULL);
		NullCheck(L_8);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_8, L_15, NULL);
		goto IL_00ec;
	}

IL_00b1:
	{
		// speed = 5;
		__this->___speed_4 = (5.0f);
		// transform.Translate(Vector3.right * moveKey * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_18 = __this->___moveKey_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_17, L_18, NULL);
		float L_20 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_19, L_20, NULL);
		float L_22;
		L_22 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_21, L_22, NULL);
		NullCheck(L_16);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_16, L_23, NULL);
	}

IL_00ec:
	{
		// transform.Translate(Vector3.right * moveKey * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_26 = __this->___moveKey_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, L_26, NULL);
		float L_28 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_27, L_28, NULL);
		float L_30;
		L_30 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_29, L_30, NULL);
		NullCheck(L_24);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_24, L_31, NULL);
		// }
		return;
	}
}
// System.Void Player::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Jump_m287220C0DC6F59C4505A29DEE6514BD50B031374 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (jumpKey && jumpCount < 2 && !isDead)
		bool L_0 = __this->___jumpKey_14;
		if (!L_0)
		{
			goto IL_00ad;
		}
	}
	{
		float L_1 = __this->___jumpCount_16;
		if ((!(((float)L_1) < ((float)(2.0f)))))
		{
			goto IL_00ad;
		}
	}
	{
		bool L_2 = __this->___isDead_23;
		if (L_2)
		{
			goto IL_00ad;
		}
	}
	{
		// jumpCount++;
		float L_3 = __this->___jumpCount_16;
		__this->___jumpCount_16 = ((float)il2cpp_codegen_add(L_3, (1.0f)));
		// rb.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_4 = __this->___rb_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_4);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_4, L_5, NULL);
		// rb.AddForce(new Vector2(0f, jumpForce));
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_6 = __this->___rb_9;
		float L_7 = __this->___jumpForce_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), (0.0f), L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Rigidbody2D_AddForce_mC635C76F94D56891007700CA0E653EB269E955CB(L_6, L_8, NULL);
		// if (jumpCount == 2)
		float L_9 = __this->___jumpCount_16;
		if ((!(((float)L_9) == ((float)(2.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		// Vector3 offset = new Vector3(-0.2f, -0.3f, 0);
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), (-0.200000003f), (-0.300000012f), (0.0f), NULL);
		// GameObject jumpEffect = ObjectPooler.instance.GetPooledJumpEffect();
		ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0* L_10 = ((ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_StaticFields*)il2cpp_codegen_static_fields_for(ObjectPooler_t1A35D20DD7F7B861537E5EC6FE6071013B2F62D0_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = ObjectPooler_GetPooledJumpEffect_m228A6A350E06FCC77CF9C4D52AC65D6391D781BB(L_10, NULL);
		// jumpEffect.transform.position = transform.position + offset;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_11, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_13, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_14, L_15, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_16, NULL);
		goto IL_00ec;
	}

IL_00ad:
	{
		// else if (jumpKey && rb.velocity.y > 0)
		bool L_17 = __this->___jumpKey_14;
		if (!L_17)
		{
			goto IL_00ec;
		}
	}
	{
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_18 = __this->___rb_9;
		NullCheck(L_18);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_18, NULL);
		float L_20 = L_19.___y_1;
		if ((!(((float)L_20) > ((float)(0.0f)))))
		{
			goto IL_00ec;
		}
	}
	{
		// rb.velocity = rb.velocity * 0.5f;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_21 = __this->___rb_9;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_22 = __this->___rb_9;
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24;
		L_24 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_23, (0.5f), NULL);
		NullCheck(L_21);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_21, L_24, NULL);
	}

IL_00ec:
	{
		// if (rb.velocity.y < 0f)
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_25 = __this->___rb_9;
		NullCheck(L_25);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_26;
		L_26 = Rigidbody2D_get_velocity_mBD8AC6F93F0E24CC41D2361BCEF74F81303720EF(L_25, NULL);
		float L_27 = L_26.___y_1;
		if ((!(((float)L_27) < ((float)(0.0f)))))
		{
			goto IL_0115;
		}
	}
	{
		// anim.SetBool("isFall", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28 = __this->___anim_10;
		NullCheck(L_28);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_28, _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8, (bool)1, NULL);
		return;
	}

IL_0115:
	{
		// anim.SetBool("isFall", false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___anim_10;
		NullCheck(L_29);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_29, _stringLiteralC34F6F3712B92B83921DDC7AB67EBCAF47FCADA8, (bool)0, NULL);
		// anim.SetBool("isJump", !isGrounded);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___anim_10;
		bool L_31 = __this->___isGrounded_15;
		NullCheck(L_30);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_30, _stringLiteralB3760DFC6642D33FE2D377DF0CDB542CEACF5994, (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void Player::JumpButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_JumpButton_m8C31285C1793607E9930B6C2574E792626F5A00A (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// jumpKey = true;
		__this->___jumpKey_14 = (bool)1;
		// Jump();
		Player_Jump_m287220C0DC6F59C4505A29DEE6514BD50B031374(__this, NULL);
		// jumpKey = false;
		__this->___jumpKey_14 = (bool)0;
		// }
		return;
	}
}
// System.Void Player::Atack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Atack_m8C26F84C486C0F4EE3D8530615928EBAFAD22F20 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A53A143D2CF5C0E23D0D325ED922EFD8F9213E4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// attackTimer += Time.deltaTime;
		float L_0 = __this->___attackTimer_22;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___attackTimer_22 = ((float)il2cpp_codegen_add(L_0, L_1));
		// if (attKey && attackTimer >= attackCooldown)
		bool L_2 = __this->___attKey_17;
		if (!L_2)
		{
			goto IL_0070;
		}
	}
	{
		float L_3 = __this->___attackTimer_22;
		float L_4 = __this->___attackCooldown_21;
		if ((!(((float)L_3) >= ((float)L_4))))
		{
			goto IL_0070;
		}
	}
	{
		// anim.SetTrigger("Att1");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___anim_10;
		NullCheck(L_5);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_5, _stringLiteral9A53A143D2CF5C0E23D0D325ED922EFD8F9213E4, NULL);
		// attackTimer = 0; // Reset attackTimer
		__this->___attackTimer_22 = (0.0f);
		// StartCoroutine(ActivateMeleeRange());
		RuntimeObject* L_6;
		L_6 = Player_ActivateMeleeRange_m6047AEA09B19BA6C8CA86AB58985378BDAA7E071(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// hideSkillButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___hideSkillButton_18;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// isHideSkill = true;
		__this->___isHideSkill_20 = (bool)1;
		// StartCoroutine(skillTimeChk());
		RuntimeObject* L_9;
		L_9 = Player_skillTimeChk_mF7AE5ECE644E69444CEB52BB09B263D6F1A89FA7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_10;
		L_10 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_9, NULL);
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::ActivateMeleeRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_ActivateMeleeRange_m6047AEA09B19BA6C8CA86AB58985378BDAA7E071 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* L_0 = (U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405*)il2cpp_codegen_object_new(U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CActivateMeleeRangeU3Ed__28__ctor_mB35A05E3F5EB0D3D4649D7DCC3E03DEEBD684075(L_0, 0, NULL);
		U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Player::AttackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_AttackButton_m55B169789B558EB124A8B068C1A55EE962D226E7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// attKey = true;
		__this->___attKey_17 = (bool)1;
		// Atack();
		Player_Atack_m8C26F84C486C0F4EE3D8530615928EBAFAD22F20(__this, NULL);
		// attKey = false;
		__this->___attKey_17 = (bool)0;
		// }
		return;
	}
}
// System.Void Player::HideSkillChk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_HideSkillChk_m5E003C86E8A5F7A6979C3E879BABCBD948679D73 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// if (isHideSkill)
		bool L_0 = __this->___isHideSkill_20;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		// StartCoroutine(skillTimeChk());
		RuntimeObject* L_1;
		L_1 = Player_skillTimeChk_mF7AE5ECE644E69444CEB52BB09B263D6F1A89FA7(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Player::skillTimeChk()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Player_skillTimeChk_mF7AE5ECE644E69444CEB52BB09B263D6F1A89FA7 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* L_0 = (U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688*)il2cpp_codegen_object_new(U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CskillTimeChkU3Ed__31__ctor_mE986AAE45C4CB2464E8DEDDDD3B1C66DF66680BD(L_0, 0, NULL);
		U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Player::DeactivateAllActiveEffects2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_DeactivateAllActiveEffects2_m6A67FD4E00E36342DAC61EB8767358C3676988F0 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// meleeRange.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___meleeRange_8;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Player::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnCollisionEnter2D_mFF1FC01C5038DA5AE81233398DEBEFFB5FA8AC41 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	{
		// if (collision.contacts[0].normal.y > 0.7f)
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		ContactPoint2DU5BU5D_t427621BF8902AE33C86E7BF384D9B2B5B781F949* L_1;
		L_1 = Collision2D_get_contacts_mA4A1EDCC2D82407E30EC63689C7858C684462E68(L_0, NULL);
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = ContactPoint2D_get_normal_m421147AFFC1A029B4DEC775C6B9197919ED93D21(((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		float L_3 = L_2.___y_1;
		if ((!(((float)L_3) > ((float)(0.699999988f)))))
		{
			goto IL_0036;
		}
	}
	{
		// isGrounded = true;
		__this->___isGrounded_15 = (bool)1;
		// jumpCount = 0;
		__this->___jumpCount_16 = (0.0f);
		// jumpKey = false;
		__this->___jumpKey_14 = (bool)0;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Player::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnCollisionExit2D_m20B048BDDCBAF90F68EBEE17EE3CDC32329BDB0B (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	{
		// isGrounded = false;
		__this->___isGrounded_15 = (bool)0;
		// }
		return;
	}
}
// System.Void Player::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Die_mC24698ED84E130E43101B213727A48AA59BB1971 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// anim.SetTrigger("doDie");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___anim_10;
		NullCheck(L_0);
		Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30(L_0, _stringLiteral5FA36DCF6408833BF396243B0895CD674E5788C5, NULL);
		// rb.velocity = Vector2.zero;
		Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* L_1 = __this->___rb_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_1);
		Rigidbody2D_set_velocity_m9335C5883B218F6FCDF7E229AC96232FCBAC4CE6(L_1, L_2, NULL);
		// isDead = true;
		__this->___isDead_23 = (bool)1;
		// GameManager.instance.OnPlayerDead();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_3 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_3);
		GameManager_OnPlayerDead_mE274881CC06883C79CD6813804EEE5C3FBAAAFC1(L_3, NULL);
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_m6E01BC069CDBBED27A57ABF1E3A77B49504CD433 (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if ((other.tag == "Dead" || other.tag == "Wall") && !isDead)
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_0 = ___0_other;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteral06CF41BA66D0BBD786673B743CD4840A4EE6CA18, NULL);
		if (L_2)
		{
			goto IL_0024;
		}
	}
	{
		Collider2D_t6A17BA7734600EF3F26588E9ED903617D5B8EB52* L_3 = ___0_other;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_3, NULL);
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, _stringLiteral7649AEE062EE200D5810926162F39A75BCEE5287, NULL);
		if (!L_5)
		{
			goto IL_0032;
		}
	}

IL_0024:
	{
		bool L_6 = __this->___isDead_23;
		if (L_6)
		{
			goto IL_0032;
		}
	}
	{
		// Die();
		Player_Die_mC24698ED84E130E43101B213727A48AA59BB1971(__this, NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m0A83E0706592FC871B0CF188B37AFC6649F3D85D (Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5f;
		__this->___speed_4 = (5.0f);
		// public float jumpForce = 5f;
		__this->___jumpForce_5 = (5.0f);
		// private float attackCooldown = 1f;
		__this->___attackCooldown_21 = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Player/<ActivateMeleeRange>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateMeleeRangeU3Ed__28__ctor_mB35A05E3F5EB0D3D4649D7DCC3E03DEEBD684075 (U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Player/<ActivateMeleeRange>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateMeleeRangeU3Ed__28_System_IDisposable_Dispose_m335569C6F6562684B9B485A021CE52769ADCAB78 (U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Player/<ActivateMeleeRange>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActivateMeleeRangeU3Ed__28_MoveNext_mE6CFECE998746175AF9C243CE463A74F966DD83C (U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meleeRange.SetActive(true);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___meleeRange_8;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// yield return new WaitForSeconds(0.5f); // Wait for 0.5 seconds
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (0.5f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0043:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// meleeRange.SetActive(false);
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___meleeRange_8;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Player/<ActivateMeleeRange>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActivateMeleeRangeU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m066E899108F1A709677850839779A28972C2F6F0 (U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Player/<ActivateMeleeRange>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActivateMeleeRangeU3Ed__28_System_Collections_IEnumerator_Reset_m284C00320DAD519EDCFDE577F64ADB36C6976775 (U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActivateMeleeRangeU3Ed__28_System_Collections_IEnumerator_Reset_m284C00320DAD519EDCFDE577F64ADB36C6976775_RuntimeMethod_var)));
	}
}
// System.Object Player/<ActivateMeleeRange>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CActivateMeleeRangeU3Ed__28_System_Collections_IEnumerator_get_Current_mA87A4DC6D0E602DA747D6292B8FF6B7E5E1C583E (U3CActivateMeleeRangeU3Ed__28_t7BD5F940CAE3DE49DA840DC1270EBECF4846D405* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void Player/<skillTimeChk>d__31::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CskillTimeChkU3Ed__31__ctor_mE986AAE45C4CB2464E8DEDDDD3B1C66DF66680BD (U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Player/<skillTimeChk>d__31::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CskillTimeChkU3Ed__31_System_IDisposable_Dispose_mEEF278A2D442EA3C4B66527228656CF2480FBB26 (U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Player/<skillTimeChk>d__31::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CskillTimeChkU3Ed__31_MoveNext_m64FA66AAE74F03EFEF7C5FFB59C3633FE7794249 (U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return null;  // ???? ???????? ???????.
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_002e:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if (attackTimer > 0.0f) // dodgeTime?? 2.0f ????? ???? ????
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___attackTimer_22;
		if ((!(((float)L_5) > ((float)(0.0f)))))
		{
			goto IL_0099;
		}
	}
	{
		// attackTimer -= Time.deltaTime;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_6 = V_1;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->___attackTimer_22;
		float L_9;
		L_9 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		NullCheck(L_6);
		L_6->___attackTimer_22 = ((float)il2cpp_codegen_subtract(L_8, L_9));
		// if (attackTimer < 0.0f) // ???? dodgeTime?? 2.0f ???????
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_10 = V_1;
		NullCheck(L_10);
		float L_11 = L_10->___attackTimer_22;
		if ((!(((float)L_11) < ((float)(0.0f)))))
		{
			goto IL_007f;
		}
	}
	{
		// attackTimer = 0.0f; // dodgeTime?? 2.0f?? ???????
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_12 = V_1;
		NullCheck(L_12);
		L_12->___attackTimer_22 = (0.0f);
		// hideSkillButton.SetActive(false); // ????? ??????????.
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_13 = V_1;
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___hideSkillButton_18;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
		// isHideSkill = false;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_15 = V_1;
		NullCheck(L_15);
		L_15->___isHideSkill_20 = (bool)0;
	}

IL_007f:
	{
		// float time = attackTimer / attackCooldown;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_16 = V_1;
		NullCheck(L_16);
		float L_17 = L_16->___attackTimer_22;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_18 = V_1;
		NullCheck(L_18);
		float L_19 = L_18->___attackCooldown_21;
		V_2 = ((float)(L_17/L_19));
		// hideskillImage.fillAmount = time;
		Player_tF98BD09D3495D2FF1922E5D34866AEAC6AE2DF74* L_20 = V_1;
		NullCheck(L_20);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = L_20->___hideskillImage_19;
		float L_22 = V_2;
		NullCheck(L_21);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_21, L_22, NULL);
	}

IL_0099:
	{
		// }
		return (bool)0;
	}
}
// System.Object Player/<skillTimeChk>d__31::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CskillTimeChkU3Ed__31_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE8BCABBAAED35505D8F6321FD723EE1152BB3B92 (U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Player/<skillTimeChk>d__31::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CskillTimeChkU3Ed__31_System_Collections_IEnumerator_Reset_m30A9454F1D6B4EF0518827D0B6F7DF89FEDFCDCD (U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CskillTimeChkU3Ed__31_System_Collections_IEnumerator_Reset_m30A9454F1D6B4EF0518827D0B6F7DF89FEDFCDCD_RuntimeMethod_var)));
	}
}
// System.Object Player/<skillTimeChk>d__31::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CskillTimeChkU3Ed__31_System_Collections_IEnumerator_get_Current_m330E82D29F0D951C28EEC47A52E2817EF1CC919A (U3CskillTimeChkU3Ed__31_tB5393E788D2366081CB3D731EB3BAB0FC92D0688* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void ScrollingObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObject_Awake_m0573F57B090C2AA7A933E87276293187D6939423 (ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void ScrollingObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObject_Update_m8B3A5C50D8EE990922F425DE1B663E730835B1A9 (ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!GameManager.instance.isGameover)
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_0 = ((GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6_il2cpp_TypeInfo_var))->___instance_4;
		NullCheck(L_0);
		bool L_1 = L_0->___isGameover_6;
		if (L_1)
		{
			goto IL_0031;
		}
	}
	{
		// transform.Translate(Vector3.left * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline(NULL);
		float L_4 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_5, L_6, NULL);
		NullCheck(L_2);
		Transform_Translate_m018D015E89C8CB743C54A21B4A1C5202EBF6297A(L_2, L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void ScrollingObject::OnCollisionEnter2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObject_OnCollisionEnter2D_m056BB84C2CF8414C4FA29379B4D63560BB05C4F1 (ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF652217ACD73992E1FF2493C57ED10BC76A8943F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.CompareTag("Enermy"))
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteralF652217ACD73992E1FF2493C57ED10BC76A8943F, NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// collision.transform.SetParent(transform);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_3 = ___0_collision;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_4);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_4, L_5, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void ScrollingObject::OnCollisionExit2D(UnityEngine.Collision2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObject_OnCollisionExit2D_mA0DF170C98590D4C6C4FB2BD02306F7530B1555C (ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0* __this, Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* ___0_collision, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF652217ACD73992E1FF2493C57ED10BC76A8943F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.transform.CompareTag("Enermy"))
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_0 = ___0_collision;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_0, NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_1, _stringLiteralF652217ACD73992E1FF2493C57ED10BC76A8943F, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// collision.transform.SetParent(null);
		Collision2D_t81E83212C969FDDE2AB84EBCA31502818EEAB85B* L_3 = ___0_collision;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Collision2D_get_transform_mC59737F246B2DAFF2AB4F6322664C87B28605CC7(L_3, NULL);
		NullCheck(L_4);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_4, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void ScrollingObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollingObject__ctor_m31AF77F42F4734ECB23AD9DF9C68925E81880365 (ScrollingObject_t03C1617AAB3E788BE129E2DFA89EB223C47540D0* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 5f; // ?? ??
		__this->___speed_4 = (5.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JoystickPlayerExample::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample_FixedUpdate_m9AEDBA111F95D67A006A5D3821956048224541B7 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_5;
		NullCheck(L_1);
		float L_2;
		L_2 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(L_1, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_5 = __this->___variableJoystick_5;
		NullCheck(L_5);
		float L_6;
		L_6 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(L_5, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_9 = __this->___rb_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		float L_11 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_10, L_11, NULL);
		float L_13;
		L_13 = Time_get_fixedDeltaTime_m43136893D00AF5D5FE80AD05609558F6E2381381(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_12, L_13, NULL);
		NullCheck(L_9);
		Rigidbody_AddForce_mBDBC288D0E266BC1B62E3649B4FCE46E7EA9CCBC(L_9, L_14, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickPlayerExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickPlayerExample__ctor_m702422E0AE29402330CF41FDDBEE76F0506342E2 (JoystickPlayerExample_tD6DD431AB5B17F44428C240223A7B161AECC474B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void JoystickSetterExample::ModeChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_ModeChanged_m35AF30EE3E6C8CEBF064A7AB80F5795E9AF06D23 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_002d;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.SetMode(JoystickType.Fixed);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_1, 0, NULL);
		// break;
		return;
	}

IL_0020:
	{
		// variableJoystick.SetMode(JoystickType.Floating);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_2 = __this->___variableJoystick_4;
		NullCheck(L_2);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_2, 1, NULL);
		// break;
		return;
	}

IL_002d:
	{
		// variableJoystick.SetMode(JoystickType.Dynamic);
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_3 = __this->___variableJoystick_4;
		NullCheck(L_3);
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(L_3, 2, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::AxisChanged(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_AxisChanged_m5CA220FEA14E06BD8A445E31C5B66E4601C5E404 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		switch (L_0)
		{
			case 0:
			{
				goto IL_0013;
			}
			case 1:
			{
				goto IL_0033;
			}
			case 2:
			{
				goto IL_0053;
			}
		}
	}
	{
		return;
	}

IL_0013:
	{
		// variableJoystick.AxisOptions = AxisOptions.Both;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_1, 0, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_3 = __this->___axisSprites_7;
		int32_t L_4 = ___0_index;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_6, NULL);
		// break;
		return;
	}

IL_0033:
	{
		// variableJoystick.AxisOptions = AxisOptions.Horizontal;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_7 = __this->___variableJoystick_4;
		NullCheck(L_7);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_7, 1, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_9 = __this->___axisSprites_7;
		int32_t L_10 = ___0_index;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_8, L_12, NULL);
		// break;
		return;
	}

IL_0053:
	{
		// variableJoystick.AxisOptions = AxisOptions.Vertical;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_13 = __this->___variableJoystick_4;
		NullCheck(L_13);
		Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline(L_13, 2, NULL);
		// background.sprite = axisSprites[index];
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = __this->___background_6;
		SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* L_15 = __this->___axisSprites_7;
		int32_t L_16 = ___0_index;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_14);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_14, L_18, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapX_m25A77C3DE4C6DBBE3B4A58E2DE8CD44B1773D6A1 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapX = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_SnapY_m54FE8DCB2CE8D2BF5D2CDF84C68DE263F0E25B1B (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// variableJoystick.SnapY = value;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_0 = __this->___variableJoystick_4;
		bool L_1 = ___0_value;
		NullCheck(L_0);
		Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample_Update_m99B2432D22FE669B4DC3209696AD4A62096C7D41 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// valueText.text = "Current Value: " + variableJoystick.Direction;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___valueText_5;
		VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* L_1 = __this->___variableJoystick_4;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC(L_1, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Vector2_ToString_mB47B29ECB21FA3A4ACEABEFA18077A5A6BBCCB27((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralFDA32DC2E96C00474CE484C62A98501A5FB8786E, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void JoystickSetterExample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JoystickSetterExample__ctor_m2A3D66E05BCDF78D0F116348094717BEBA73EC91 (JoystickSetterExample_t496DF774BC6E49244893C8EBE104A7972836817E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single Joystick::get_Horizontal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Horizontal { get { return (snapX) ? SnapFloat(input.x, AxisOptions.Horizontal) : input.x; } }
		bool L_0 = __this->___snapX_7;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___x_0;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 1, NULL);
		return L_5;
	}
}
// System.Single Joystick::get_Vertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public float Vertical { get { return (snapY) ? SnapFloat(input.y, AxisOptions.Vertical) : input.y; } }
		bool L_0 = __this->___snapY_8;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___y_1;
		return L_2;
	}

IL_0014:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_3 = (&__this->___input_14);
		float L_4 = L_3->___y_1;
		float L_5;
		L_5 = Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987(__this, L_4, 2, NULL);
		return L_5;
	}
}
// UnityEngine.Vector2 Joystick::get_Direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_get_Direction_m52502695D42BDAB6075089BDE442ABE72EAC81EC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 Direction { get { return new Vector2(Horizontal, Vertical); } }
		float L_0;
		L_0 = Joystick_get_Horizontal_m78CF4472B86063E54254AC8AE0A52126E4008AFA(__this, NULL);
		float L_1;
		L_1 = Joystick_get_Vertical_mA2B0917896CF9CE47A6D342D1734E43441C3D4BE(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Single Joystick::get_HandleRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_HandleRange_mB38F0D3B6ADE2D1557D7A3D6759C469F17509D77 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return handleRange; }
		float L_0 = __this->___handleRange_4;
		return L_0;
	}
}
// System.Void Joystick::set_HandleRange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { handleRange = Mathf.Abs(value); }
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___handleRange_4 = L_1;
		// set { handleRange = Mathf.Abs(value); }
		return;
	}
}
// System.Single Joystick::get_DeadZone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_get_DeadZone_mCE52B635A8CF24F6DD867C14E34094515DE6AEFC (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// get { return deadZone; }
		float L_0 = __this->___deadZone_5;
		return L_0;
	}
}
// System.Void Joystick::set_DeadZone(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// set { deadZone = Mathf.Abs(value); }
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___deadZone_5 = L_1;
		// set { deadZone = Mathf.Abs(value); }
		return;
	}
}
// AxisOptions Joystick::get_AxisOptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0;
		L_0 = Joystick_get_AxisOptions_mA74F5FEE31C158E5179F0B108272ED28A661E388(__this, NULL);
		return L_0;
	}
}
// System.Void Joystick::set_AxisOptions(AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___0_value;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapX_m51CAFDCC399606BA82986908700AAA45668A0F40 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = __this->___snapX_7;
		return L_0;
	}
}
// System.Void Joystick::set_SnapX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___0_value;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
// System.Boolean Joystick::get_SnapY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Joystick_get_SnapY_m35AFC1AD1DF5EDE5FCE8BAFEBE91AD51D7451613 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = __this->___snapY_8;
		return L_0;
	}
}
// System.Void Joystick::set_SnapY(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___0_value;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
// System.Void Joystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// HandleRange = handleRange;
		float L_0 = __this->___handleRange_4;
		Joystick_set_HandleRange_m686B579A1F02EFCD4878BEA27EA606FC23CD2505(__this, L_0, NULL);
		// DeadZone = deadZone;
		float L_1 = __this->___deadZone_5;
		Joystick_set_DeadZone_mD5699A14E5284026F303C8AF8D3457DFA9920F19(__this, L_1, NULL);
		// baseRect = GetComponent<RectTransform>();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(__this, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___baseRect_11 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___baseRect_11), (void*)L_2);
		// canvas = GetComponentInParent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3(__this, Component_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m5FB554DD7C0F662DAB84C0F292B221CAE3F0A5B3_RuntimeMethod_var);
		__this->___canvas_12 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___canvas_12), (void*)L_3);
		// if (canvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___canvas_12;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError("The Joystick is not placed inside a canvas");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral3C95DC36BC35028D124872E120F7701E290A66F6, NULL);
	}

IL_0048:
	{
		// Vector2 center = new Vector2(0.5f, 0.5f);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), (0.5f), (0.5f), NULL);
		// background.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		NullCheck(L_6);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_6, L_7, NULL);
		// handle.anchorMin = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		NullCheck(L_8);
		RectTransform_set_anchorMin_m931442ABE3368D6D4309F43DF1D64AB64B0F52E3(L_8, L_9, NULL);
		// handle.anchorMax = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		NullCheck(L_10);
		RectTransform_set_anchorMax_m52829ABEDD229ABD3DA20BCA676FA1DCA4A39B7D(L_10, L_11, NULL);
		// handle.pivot = center;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		NullCheck(L_12);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_12, L_13, NULL);
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_14);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_14, L_15, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// OnDrag(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_0 = ___0_eventData;
		Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Joystick::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnDrag_m39E69636AEDC0E471EAD1371A99F4694ECDBA1E9 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// cam = null;
		__this->___cam_13 = (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)(Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)NULL);
		// if (canvas.renderMode == RenderMode.ScreenSpaceCamera)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___canvas_12;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_0, NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0026;
		}
	}
	{
		// cam = canvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_2 = __this->___canvas_12;
		NullCheck(L_2);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3;
		L_3 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_2, NULL);
		__this->___cam_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cam_13), (void*)L_3);
	}

IL_0026:
	{
		// Vector2 position = RectTransformUtility.WorldToScreenPoint(cam, background.position);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___cam_13;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___background_9;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransformUtility_WorldToScreenPoint_mC8701032E223BA296C43799F4AEE98626686238F(L_4, L_6, NULL);
		V_0 = L_7;
		// Vector2 radius = background.sizeDelta / 2;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = __this->___background_9;
		NullCheck(L_8);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_8, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_9, (2.0f), NULL);
		V_1 = L_10;
		// input = (eventData.position - position) / (radius * canvas.scaleFactor);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_11 = ___0_eventData;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_12, L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = V_1;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_16 = __this->___canvas_12;
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m6B8D694A68376EE5E13D9B0B0F037E2E90C99921(L_16, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_15, L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline(L_14, L_18, NULL);
		__this->___input_14 = L_19;
		// FormatInput();
		Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342(__this, NULL);
		// HandleInput(input.magnitude, input.normalized, radius, cam);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = (&__this->___input_14);
		float L_21;
		L_21 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(L_20, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_22 = (&__this->___input_14);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline(L_22, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_1;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_25 = __this->___cam_13;
		VirtualActionInvoker4< float, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(9 /* System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera) */, __this, L_21, L_23, L_24, L_25);
		// handle.anchoredPosition = input * radius * handleRange;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_27, L_28, NULL);
		float L_30 = __this->___handleRange_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_29, L_30, NULL);
		NullCheck(L_26);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_26, L_31, NULL);
		// }
		return;
	}
}
// System.Void Joystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_magnitude, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_normalised, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_radius, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___3_cam, const RuntimeMethod* method) 
{
	{
		// if (magnitude > deadZone)
		float L_0 = ___0_magnitude;
		float L_1 = __this->___deadZone_5;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0019;
		}
	}
	{
		// if (magnitude > 1)
		float L_2 = ___0_magnitude;
		if ((!(((float)L_2) > ((float)(1.0f)))))
		{
			goto IL_0024;
		}
	}
	{
		// input = normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_normalised;
		__this->___input_14 = L_3;
		return;
	}

IL_0019:
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_4;
	}

IL_0024:
	{
		// }
		return;
	}
}
// System.Void Joystick::FormatInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_FormatInput_mDDF7AF40138CF227F0106811C8749180FBF45342 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// if (axisOptions == AxisOptions.Horizontal)
		int32_t L_0 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0025;
		}
	}
	{
		// input = new Vector2(input.x, 0f);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = (&__this->___input_14);
		float L_2 = L_1->___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		__this->___input_14 = L_3;
		return;
	}

IL_0025:
	{
		// else if (axisOptions == AxisOptions.Vertical)
		int32_t L_4 = __this->___axisOptions_6;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0049;
		}
	}
	{
		// input = new Vector2(0f, input.y);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___input_14);
		float L_6 = L_5->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_7), (0.0f), L_6, /*hidden argument*/NULL);
		__this->___input_14 = L_7;
	}

IL_0049:
	{
		// }
		return;
	}
}
// System.Single Joystick::SnapFloat(System.Single,AxisOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Joystick_SnapFloat_mADE5AF21C67A2298A08CD12F9A8ED73AFA866987 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, float ___0_value, int32_t ___1_snapAxis, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t G_B10_0 = 0;
	int32_t G_B18_0 = 0;
	{
		// if (value == 0)
		float L_0 = ___0_value;
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_000a;
		}
	}
	{
		// return value;
		float L_1 = ___0_value;
		return L_1;
	}

IL_000a:
	{
		// if (axisOptions == AxisOptions.Both)
		int32_t L_2 = __this->___axisOptions_6;
		if (L_2)
		{
			goto IL_0075;
		}
	}
	{
		// float angle = Vector2.Angle(input, Vector2.up);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___input_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline(NULL);
		float L_5;
		L_5 = Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline(L_3, L_4, NULL);
		V_0 = L_5;
		// if (snapAxis == AxisOptions.Horizontal)
		int32_t L_6 = ___1_snapAxis;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_004b;
		}
	}
	{
		// if (angle < 22.5f || angle > 157.5f)
		float L_7 = V_0;
		if ((((float)L_7) < ((float)(22.5f))))
		{
			goto IL_0037;
		}
	}
	{
		float L_8 = V_0;
		if ((!(((float)L_8) > ((float)(157.5f)))))
		{
			goto IL_003d;
		}
	}

IL_0037:
	{
		// return 0;
		return (0.0f);
	}

IL_003d:
	{
		// return (value > 0) ? 1 : -1;
		float L_9 = ___0_value;
		if ((((float)L_9) > ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		G_B10_0 = (-1);
		goto IL_0049;
	}

IL_0048:
	{
		G_B10_0 = 1;
	}

IL_0049:
	{
		return ((float)G_B10_0);
	}

IL_004b:
	{
		// else if (snapAxis == AxisOptions.Vertical)
		int32_t L_10 = ___1_snapAxis;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_0073;
		}
	}
	{
		// if (angle > 67.5f && angle < 112.5f)
		float L_11 = V_0;
		if ((!(((float)L_11) > ((float)(67.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		float L_12 = V_0;
		if ((!(((float)L_12) < ((float)(112.5f)))))
		{
			goto IL_0065;
		}
	}
	{
		// return 0;
		return (0.0f);
	}

IL_0065:
	{
		// return (value > 0) ? 1 : -1;
		float L_13 = ___0_value;
		if ((((float)L_13) > ((float)(0.0f))))
		{
			goto IL_0070;
		}
	}
	{
		G_B18_0 = (-1);
		goto IL_0071;
	}

IL_0070:
	{
		G_B18_0 = 1;
	}

IL_0071:
	{
		return ((float)G_B18_0);
	}

IL_0073:
	{
		// return value;
		float L_14 = ___0_value;
		return L_14;
	}

IL_0075:
	{
		// if (value > 0)
		float L_15 = ___0_value;
		if ((!(((float)L_15) > ((float)(0.0f)))))
		{
			goto IL_0083;
		}
	}
	{
		// return 1;
		return (1.0f);
	}

IL_0083:
	{
		// if (value < 0)
		float L_16 = ___0_value;
		if ((!(((float)L_16) < ((float)(0.0f)))))
		{
			goto IL_0091;
		}
	}
	{
		// return -1;
		return (-1.0f);
	}

IL_0091:
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void Joystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_0;
		// handle.anchoredPosition = Vector2.zero;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___handle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Vector2 Joystick::ScreenPointToAnchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024 (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_screenPosition, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector2 localPoint = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		V_0 = L_0;
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(baseRect, screenPosition, cam, out localPoint))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = __this->___baseRect_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_screenPosition;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_3 = __this->___cam_13;
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_1, L_2, L_3, (&V_0), NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// Vector2 pivotOffset = baseRect.pivot * baseRect.sizeDelta;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = __this->___baseRect_11;
		NullCheck(L_5);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_5, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7 = __this->___baseRect_11;
		NullCheck(L_7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_7, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_6, L_8, NULL);
		V_1 = L_9;
		// return localPoint - (background.anchorMax * baseRect.sizeDelta) + pivotOffset;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___background_9;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = RectTransform_get_anchorMax_mEF870BE2A134CEB9C2326930A71D3961271297DB(L_11, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13 = __this->___baseRect_11;
		NullCheck(L_13);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = RectTransform_get_sizeDelta_m822A8493F2035677384F1540A2E9E5ACE63010BB(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_12, L_14, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_10, L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_18;
		L_18 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_16, L_17, NULL);
		return L_18;
	}

IL_0060:
	{
		// return Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19;
		L_19 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		return L_19;
	}
}
// System.Void Joystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float handleRange = 1;
		__this->___handleRange_4 = (1.0f);
		// private Vector2 input = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___input_14 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Single DynamicJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float DynamicJoystick_get_MoveThreshold_m16C670C1DA0A45E83F6F87C4304F459EDDEEDD5A (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void DynamicJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void DynamicJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_Start_mFE16C6CE0B753F08E79A2AEC75782DEEF3B96F72 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// MoveThreshold = moveThreshold;
		float L_0 = __this->___moveThreshold_15;
		DynamicJoystick_set_MoveThreshold_m000C1AE325C0B9C33172E4202F2AFB59820517F9(__this, L_0, NULL);
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerDown_mBFA3026A0DA4A6B53C0E747A1E892CBC7F43E136 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_eventData;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_OnPointerUp_m10389907A9D3362F6B75FDC5F35AF37A5DD5AE7C (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick_HandleInput_m3F157F4825BE6682228C8E135581C6404D268506 (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, float ___0_magnitude, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_normalised, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_radius, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___3_cam, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (magnitude > moveThreshold)
		float L_0 = ___0_magnitude;
		float L_1 = __this->___moveThreshold_15;
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0035;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_normalised;
		float L_3 = ___0_magnitude;
		float L_4 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_2, ((float)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___2_radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_5, L_6, NULL);
		V_0 = L_7;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8;
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_10, L_11, NULL);
		NullCheck(L_9);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_9, L_12, NULL);
	}

IL_0035:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_13 = ___0_magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___1_normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___2_radius;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_16 = ___3_cam;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_13, L_14, L_15, L_16, NULL);
		// }
		return;
	}
}
// System.Void DynamicJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicJoystick__ctor_m9DDA6263314BD7B97679DF14A4664358BD3E58CB (DynamicJoystick_t98EE04BCEB0A14E5B15863006BAA5361C2D59E10* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FixedJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FixedJoystick__ctor_m8C8BB74E5EA8CA2C3DD2AE084301EC91F519AD24 (FixedJoystick_t7AA7F128A16A375A847AD0C7067993A6CC95DD7F* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void FloatingJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_Start_mB22059CD82AF77A8F94AC72E81A8BAE969399E81 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerDown_mFE5B4F54D5BBCA72F9729AB64765F558FA5C7A54 (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___0_eventData;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_2, NULL);
		NullCheck(L_0);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_0, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_6 = ___0_eventData;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick_OnPointerUp_m80ABA9C914E1953F91DBF74853CE84879352280D (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void FloatingJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FloatingJoystick__ctor_m6B72425996D46B025F9E9D22121E9D01BEC6BD3C (FloatingJoystick_t78A6A544FB6B2F38883EEC66D9FABF6E481E1A81* __this, const RuntimeMethod* method) 
{
	{
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Single VariableJoystick::get_MoveThreshold()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float VariableJoystick_get_MoveThreshold_m8C9D3A63DB3B6CF1F0139C3504EC2E7AC4E7CF99 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = __this->___moveThreshold_15;
		return L_0;
	}
}
// System.Void VariableJoystick::set_MoveThreshold(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_set_MoveThreshold_m23DC4187B405EB690D297379E2113568B40C705A (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		float L_0 = ___0_value;
		float L_1;
		L_1 = fabsf(L_0);
		__this->___moveThreshold_15 = L_1;
		// public float MoveThreshold { get { return moveThreshold; } set { moveThreshold = Mathf.Abs(value); } }
		return;
	}
}
// System.Void VariableJoystick::SetMode(JoystickType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, int32_t ___0_joystickType, const RuntimeMethod* method) 
{
	{
		// this.joystickType = joystickType;
		int32_t L_0 = ___0_joystickType;
		__this->___joystickType_16 = L_0;
		// if(joystickType == JoystickType.Fixed)
		int32_t L_1 = ___0_joystickType;
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		// background.anchoredPosition = fixedPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___fixedPosition_17;
		NullCheck(L_2);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_2, L_3, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		return;
	}

IL_002d:
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_Start_m21743760641EA0317ACCD95949B99825446FE74D (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// base.Start();
		Joystick_Start_m5E46F090910AB69BE9838BFDB91A4F6E6934480C(__this, NULL);
		// fixedPosition = background.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_0, NULL);
		__this->___fixedPosition_17 = L_1;
		// SetMode(joystickType);
		int32_t L_2 = __this->___joystickType_16;
		VariableJoystick_SetMode_mB9D0B9B6E2E4F431E36AED6F5AC989305ADDB1EE(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerDown_m8ABE5C8EFBC8DB3A2EE135FFF3C0F67C533AF4B5 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		// background.anchoredPosition = ScreenPointToAnchoredPosition(eventData.position);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_2 = ___0_eventData;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_2, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Joystick_ScreenPointToAnchoredPosition_mC1EB7560E844BF682674E4E7BD640604BC12B024(__this, L_3, NULL);
		NullCheck(L_1);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_1, L_4, NULL);
		// background.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0030:
	{
		// base.OnPointerDown(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_7 = ___0_eventData;
		Joystick_OnPointerDown_mF176903D532D9129C90BBBD00FD7714BA3A0D8E6(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_OnPointerUp_m65296D82A6C2E1BDC2D622B9C922FAE8E4544526 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___0_eventData, const RuntimeMethod* method) 
{
	{
		// if(joystickType != JoystickType.Fixed)
		int32_t L_0 = __this->___joystickType_16;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// background.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_0019:
	{
		// base.OnPointerUp(eventData);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___0_eventData;
		Joystick_OnPointerUp_mEDED4DA77D954CBAC11CF82B57AB7A4DBFCDE22C(__this, L_3, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::HandleInput(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick_HandleInput_mD1BCF9A068737A9C057EE8CEB7E6DEB682CC03AB (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, float ___0_magnitude, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_normalised, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_radius, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___3_cam, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (joystickType == JoystickType.Dynamic && magnitude > moveThreshold)
		int32_t L_0 = __this->___joystickType_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_003e;
		}
	}
	{
		float L_1 = ___0_magnitude;
		float L_2 = __this->___moveThreshold_15;
		if ((!(((float)L_1) > ((float)L_2))))
		{
			goto IL_003e;
		}
	}
	{
		// Vector2 difference = normalised * (magnitude - moveThreshold) * radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_normalised;
		float L_4 = ___0_magnitude;
		float L_5 = __this->___moveThreshold_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_3, ((float)il2cpp_codegen_subtract(L_4, L_5)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___2_radius;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline(L_6, L_7, NULL);
		V_0 = L_8;
		// background.anchoredPosition += difference;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = ((Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A*)__this)->___background_9;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = L_9;
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_10, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_10, L_13, NULL);
	}

IL_003e:
	{
		// base.HandleInput(magnitude, normalised, radius, cam);
		float L_14 = ___0_magnitude;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___1_normalised;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16 = ___2_radius;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_17 = ___3_cam;
		Joystick_HandleInput_m15A4E86369A1AF0A4A5727DEC0FD93212A99901C(__this, L_14, L_15, L_16, L_17, NULL);
		// }
		return;
	}
}
// System.Void VariableJoystick::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableJoystick__ctor_m6C7B41973BE20A94F16DB5DCC9AA805C5D8DF852 (VariableJoystick_t95B6EAEAADB3D548017BF6A0EB1C6456C9FD30A6* __this, const RuntimeMethod* method) 
{
	{
		// [SerializeField] private float moveThreshold = 1;
		__this->___moveThreshold_15 = (1.0f);
		// private Vector2 fixedPosition = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		L_0 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		__this->___fixedPosition_17 = L_0;
		Joystick__ctor_m9BBE494CA4714F24227F33CB54C10B4DA78BF06B(__this, NULL);
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
// System.Void ReadmeBE2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadmeBE2__ctor_mC6B40A76E93B8CA93548A0A77A71D6C085718C9A (ReadmeBE2_t967C9CE574867CE4719BD2796228BDF0FC93398F* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void ReadmeBE2/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m7AAFA6D455A70F2D68F2C75E7F4AC91BFA2453D5 (Section_tFC1771A668BE21A76B1D60397E2B2C3AFD577687* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void EasyTransition.SceneMove::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_Update_m078E6CA05AF3F39DBBAAEC3126D16740E62B0486 (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(((int32_t)27), NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		// if (stopPanel.activeInHierarchy) // ???? stopPanel?? ??? ??????? ????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___stopPanel_10;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_1, NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// ResumeGame();  // ?????? ??? ????????.
		SceneMove_ResumeGame_m76A1AE64554F47BD5971613861AB703AE1C0AE63(__this, NULL);
		goto IL_0024;
	}

IL_001e:
	{
		// PauseGame();  // ?????? ???????????.
		SceneMove_PauseGame_m01EDF301EACCD04E4A1CD71CD78739C8A5422182(__this, NULL);
	}

IL_0024:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_3;
		L_3 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_3)
		{
			goto IL_0037;
		}
	}
	{
		// SceneManager.LoadScene(gameScene);
		String_t* L_4 = __this->___gameScene_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_4, NULL);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void EasyTransition.SceneMove::GameStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_GameStart_m346B9E71523235FE3FFC16F66A6F36F1454C24A2 (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(GameSceneLoad());
		RuntimeObject* L_0;
		L_0 = SceneMove_GameSceneLoad_m95E811056074B4064ACE5C62553DD05A3C8FEC4D(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyTransition.SceneMove::GameSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneMove_GameSceneLoad_m95E811056074B4064ACE5C62553DD05A3C8FEC4D (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* L_0 = (U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8*)il2cpp_codegen_object_new(U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGameSceneLoadU3Ed__9__ctor_m0CFB3CB7707AD9880935AE60D4751764643006D5(L_0, 0, NULL);
		U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EasyTransition.SceneMove::MainMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_MainMenu_m6A08809F8F05FEF58E89089D18483957609616DA (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(IntroSceneLoad());
		RuntimeObject* L_0;
		L_0 = SceneMove_IntroSceneLoad_m090E2792426FB39D64C5A294E1EBD0BB184EE4DF(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EasyTransition.SceneMove::IntroSceneLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SceneMove_IntroSceneLoad_m090E2792426FB39D64C5A294E1EBD0BB184EE4DF (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* L_0 = (U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04*)il2cpp_codegen_object_new(U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CIntroSceneLoadU3Ed__11__ctor_mB4558A91389BEF9A34C9A909F4181DE40F1CC430(L_0, 0, NULL);
		U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EasyTransition.SceneMove::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_PauseGame_m01EDF301EACCD04E4A1CD71CD78739C8A5422182 (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 0f;  // ?????? ???????
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// stopPanel.SetActive(true);  // stopPanel?? ????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___stopPanel_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.SceneMove::ResumeGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_ResumeGame_m76A1AE64554F47BD5971613861AB703AE1C0AE63 (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	{
		// Time.timeScale = 1f;  // ?????? ??
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// stopPanel.SetActive(false);  // stopPanel?? ??????
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___stopPanel_10;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.SceneMove::EndGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove_EndGame_mDFE7844CCD61CD68AD36D2D7D4D9B864BF51627C (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	{
		// Application.Quit();
		Application_Quit_mE304382DB9A6455C2A474C8F364C7387F37E9281(NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.SceneMove::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneMove__ctor_m5226E423983FC1DBC0F77EFCCEA32168BBAD3B89 (SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EasyTransition.SceneMove/<GameSceneLoad>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameSceneLoadU3Ed__9__ctor_m0CFB3CB7707AD9880935AE60D4751764643006D5 (U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.SceneMove/<GameSceneLoad>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameSceneLoadU3Ed__9_System_IDisposable_Dispose_m01799B6CC00D38E29770E158653EEC12E73A13D0 (U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.SceneMove/<GameSceneLoad>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGameSceneLoadU3Ed__9_MoveNext_mFE617BDA83C4B33CADDB765F0D4C41260E7D01BF (U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* V_1 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AudioSource selectedSound = playSounds[Random.Range(0, playSounds.Length)];
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_4 = V_1;
		NullCheck(L_4);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_5 = L_4->___playSounds_7;
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_6 = V_1;
		NullCheck(L_6);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_7 = L_6->___playSounds_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		NullCheck(L_5);
		int32_t L_9 = L_8;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// selectedSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = V_2;
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// TransitionManager.Instance().Transition(gameScene, transition, startDelay);
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_12;
		L_12 = TransitionManager_Instance_mD0F560575D5BE4BAF16DCF20A07C8736AAB60935(NULL);
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = L_13->___gameScene_5;
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_15 = V_1;
		NullCheck(L_15);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_16 = L_15->___transition_8;
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->___startDelay_9;
		NullCheck(L_12);
		TransitionManager_Transition_m0E2E7E40B9DE68EEFE2345D0D01DE21C6191F32E(L_12, L_14, L_16, L_18, NULL);
		// yield return new WaitForSeconds(selectedSound.clip.length);  // ?????? ????? ?????? ???
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = V_2;
		NullCheck(L_19);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_20;
		L_20 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_19, NULL);
		NullCheck(L_20);
		float L_21;
		L_21 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_20, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_22 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_22, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0075:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.SceneMove/<GameSceneLoad>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameSceneLoadU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2317E0DE645149B96F15F389EE386ACEC47385F9 (U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.SceneMove/<GameSceneLoad>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGameSceneLoadU3Ed__9_System_Collections_IEnumerator_Reset_mA2CA858FFE1CF114D3F4973FA3E8E4D46F49BDC7 (U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CGameSceneLoadU3Ed__9_System_Collections_IEnumerator_Reset_mA2CA858FFE1CF114D3F4973FA3E8E4D46F49BDC7_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.SceneMove/<GameSceneLoad>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CGameSceneLoadU3Ed__9_System_Collections_IEnumerator_get_Current_m3EFB9FD9C30555D2EBC65CABC6393B8283121149 (U3CGameSceneLoadU3Ed__9_t6A148E53CB5742848EA06C5D130726E38E778DA8* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EasyTransition.SceneMove/<IntroSceneLoad>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntroSceneLoadU3Ed__11__ctor_mB4558A91389BEF9A34C9A909F4181DE40F1CC430 (U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.SceneMove/<IntroSceneLoad>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntroSceneLoadU3Ed__11_System_IDisposable_Dispose_m545ED9D0B67E7272DF1D7030E0C0E1A857DC8C7C (U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.SceneMove/<IntroSceneLoad>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CIntroSceneLoadU3Ed__11_MoveNext_m445E5029A50FF6318E05DC818B33C6945E58334D (U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* V_1 = NULL;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// AudioSource selectedSound = playSounds[Random.Range(0, playSounds.Length)];
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_4 = V_1;
		NullCheck(L_4);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_5 = L_4->___playSounds_7;
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_6 = V_1;
		NullCheck(L_6);
		AudioSourceU5BU5D_tBBF6E920E0DC80D53D4BB2A8D4C80D244EF170B2* L_7 = L_6->___playSounds_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_7)->max_length)), NULL);
		NullCheck(L_5);
		int32_t L_9 = L_8;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_10 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_2 = L_10;
		// selectedSound.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11 = V_2;
		NullCheck(L_11);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_11, NULL);
		// TransitionManager.Instance().Transition(introScene, transition, startDelay);
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_12;
		L_12 = TransitionManager_Instance_mD0F560575D5BE4BAF16DCF20A07C8736AAB60935(NULL);
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14 = L_13->___introScene_4;
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_15 = V_1;
		NullCheck(L_15);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_16 = L_15->___transition_8;
		SceneMove_t1BA02A38AFCB5A28E0A4EAF6E5864DDD0847C685* L_17 = V_1;
		NullCheck(L_17);
		float L_18 = L_17->___startDelay_9;
		NullCheck(L_12);
		TransitionManager_Transition_m0E2E7E40B9DE68EEFE2345D0D01DE21C6191F32E(L_12, L_14, L_16, L_18, NULL);
		// yield return new WaitForSeconds(selectedSound.clip.length);  // ?????? ????? ?????? ???
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_19 = V_2;
		NullCheck(L_19);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_20;
		L_20 = AudioSource_get_clip_m4F5027066F9FC44B44192713142B0C277BB418FE(L_19, NULL);
		NullCheck(L_20);
		float L_21;
		L_21 = AudioClip_get_length_m6102CB29AF65988797452E4D6E43D4788303873D(L_20, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_22 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_22, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0075:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.SceneMove/<IntroSceneLoad>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntroSceneLoadU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m7C54E5140889C851399D897EC932CADFAAB4281C (U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.SceneMove/<IntroSceneLoad>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CIntroSceneLoadU3Ed__11_System_Collections_IEnumerator_Reset_mA0502D85724383FC6F556DE70462A5BBCA198DB8 (U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CIntroSceneLoadU3Ed__11_System_Collections_IEnumerator_Reset_mA0502D85724383FC6F556DE70462A5BBCA198DB8_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.SceneMove/<IntroSceneLoad>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CIntroSceneLoadU3Ed__11_System_Collections_IEnumerator_get_Current_m18D191E2AE8DACBAAE8878C04EB35ADCA5C300BC (U3CIntroSceneLoadU3Ed__11_t9C1CCDBD6A68623BE0240926EC4E045BD2C37E04* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EasyTransition.DemoLoadScene::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLoadScene_LoadScene_m839F73705892FA9293A65C3193255DF904FE9522 (DemoLoadScene_tB3114DE2C79CB76E54E056A8BD1A93F3622642B7* __this, String_t* ___0__sceneName, const RuntimeMethod* method) 
{
	{
		// TransitionManager.Instance().Transition(_sceneName, transition, startDelay);
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_0;
		L_0 = TransitionManager_Instance_mD0F560575D5BE4BAF16DCF20A07C8736AAB60935(NULL);
		String_t* L_1 = ___0__sceneName;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_2 = __this->___transition_4;
		float L_3 = __this->___startDelay_5;
		NullCheck(L_0);
		TransitionManager_Transition_m0E2E7E40B9DE68EEFE2345D0D01DE21C6191F32E(L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.DemoLoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DemoLoadScene__ctor_m34FFAE9FC73B5ABE41428862A760FD6EAB3E56FA (DemoLoadScene_tB3114DE2C79CB76E54E056A8BD1A93F3622642B7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// UnityEngine.Material EasyTransition.CutoutMaskUI::get_materialForRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* CutoutMaskUI_get_materialForRendering_mB9CC0DA0652224332EC8E938021A1A2365CA53D2 (CutoutMaskUI_t8E318AC6B7D2737A609EF1827E5C695F5B701611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Material material = new Material(base.materialForRendering);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0;
		L_0 = Graphic_get_materialForRendering_m4B0017B2B59D2EF578D32ABFCF84A97A835B6B22(__this, NULL);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_1 = (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3*)il2cpp_codegen_object_new(Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Material__ctor_mFCC42FB90257F1E8F7516A8640A79C465A39961C(L_1, L_0, NULL);
		// material.SetInt("_StencilComp", (int)CompareFunction.NotEqual);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_2 = L_1;
		NullCheck(L_2);
		Material_SetInt_m41DF5404A9942239265888105E1DC83F2FBF901A(L_2, _stringLiteral0F52C788AC4796FE5841155F7DF3896E049C051E, 6, NULL);
		// return material;
		return L_2;
	}
}
// System.Void EasyTransition.CutoutMaskUI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CutoutMaskUI__ctor_m9F0EF583991DE926CC37C9C36350ED4835788C0B (CutoutMaskUI_t8E318AC6B7D2737A609EF1827E5C695F5B701611* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		Image__ctor_m8F922348981CDB74700D89D833FE39611FA4BC37(__this, NULL);
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
// System.Void EasyTransition.Transition::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_Start_mF9E1AC57B1ECC4B191D1B721308160F2D3CCBD4A (Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D68D42D01BE44A952EF4BA2DB5FDCF516A5E76);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_1 = NULL;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_2 = NULL;
	int32_t V_3 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_4 = NULL;
	int32_t V_5 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_6 = NULL;
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// transitionCanvas.referenceResolution = transitionSettings.refrenceResolution;
		CanvasScaler_t3BC095205EAD308CF3EAC27136A73387AC32FC3B* L_1 = __this->___transitionCanvas_7;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_2 = __this->___transitionSettings_4;
		NullCheck(L_2);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = L_2->___refrenceResolution_6;
		NullCheck(L_1);
		CanvasScaler_set_referenceResolution_m793679B8505AF9BBF64F45D80AFE39F3F99FAB8D(L_1, L_3, NULL);
		// transitionPanelIN.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___transitionPanelIN_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// transitionPanelOUT.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___transitionPanelOUT_6;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_7, (bool)0, NULL);
		// transitionPanelIN.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___transitionPanelIN_5;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_8, NULL);
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
		// GameObject transitionIn = Instantiate(transitionSettings.transitionIn, transitionPanelIN);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_10 = __this->___transitionSettings_4;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___transitionIn_17;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___transitionPanelIN_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_11, L_12, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_13;
		// transitionIn.AddComponent<CanvasGroup>().blocksRaycasts = transitionSettings.blockRaycasts;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		NullCheck(L_14);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_15;
		L_15 = GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA(L_14, GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_16 = __this->___transitionSettings_4;
		NullCheck(L_16);
		bool L_17 = L_16->___blockRaycasts_7;
		NullCheck(L_15);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_15, L_17, NULL);
		// multiplyColorMaterial = transitionSettings.multiplyColorMaterial;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_18 = __this->___transitionSettings_4;
		NullCheck(L_18);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_19 = L_18->___multiplyColorMaterial_4;
		__this->___multiplyColorMaterial_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___multiplyColorMaterial_8), (void*)L_19);
		// additiveColorMaterial = transitionSettings.addColorMaterial;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_20 = __this->___transitionSettings_4;
		NullCheck(L_20);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_21 = L_20->___addColorMaterial_5;
		__this->___additiveColorMaterial_9 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___additiveColorMaterial_9), (void*)L_21);
		// if (multiplyColorMaterial == null || additiveColorMaterial == null)
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22 = __this->___multiplyColorMaterial_8;
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_23)
		{
			goto IL_00bf;
		}
	}
	{
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_24 = __this->___additiveColorMaterial_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_24, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_25)
		{
			goto IL_00c9;
		}
	}

IL_00bf:
	{
		// Debug.LogWarning("There are no color tint materials set for the transition. Changing the color tint will not affect the transition anymore!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralF6D68D42D01BE44A952EF4BA2DB5FDCF516A5E76, NULL);
	}

IL_00c9:
	{
		// if (!transitionSettings.isCutoutTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_26 = __this->___transitionSettings_4;
		NullCheck(L_26);
		bool L_27 = L_26->___isCutoutTransition_10;
		if (L_27)
		{
			goto IL_01ee;
		}
	}
	{
		// if (transitionIn.TryGetComponent<Image>(out Image parentImage))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = V_0;
		NullCheck(L_28);
		bool L_29;
		L_29 = GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB(L_28, (&V_2), GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var);
		if (!L_29)
		{
			goto IL_014e;
		}
	}
	{
		// if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_30 = __this->___transitionSettings_4;
		NullCheck(L_30);
		int32_t L_31 = L_30->___colorTintMode_8;
		if (L_31)
		{
			goto IL_0119;
		}
	}
	{
		// parentImage.material = multiplyColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_32 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_33 = __this->___multiplyColorMaterial_8;
		NullCheck(L_32);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_32, L_33);
		// parentImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_34 = V_2;
		NullCheck(L_34);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_35;
		L_35 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_34);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_36 = __this->___transitionSettings_4;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37 = L_36->___colorTint_9;
		NullCheck(L_35);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_35, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_37, NULL);
		goto IL_014e;
	}

IL_0119:
	{
		// else if (transitionSettings.colorTintMode == ColorTintMode.Add)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_38 = __this->___transitionSettings_4;
		NullCheck(L_38);
		int32_t L_39 = L_38->___colorTintMode_8;
		if ((!(((uint32_t)L_39) == ((uint32_t)1))))
		{
			goto IL_014e;
		}
	}
	{
		// parentImage.material = additiveColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = V_2;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___additiveColorMaterial_9;
		NullCheck(L_40);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_40, L_41);
		// parentImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = V_2;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_44 = __this->___transitionSettings_4;
		NullCheck(L_44);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45 = L_44->___colorTint_9;
		NullCheck(L_43);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_43, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_45, NULL);
	}

IL_014e:
	{
		// for (int i = 0; i < transitionIn.transform.childCount; i++)
		V_3 = 0;
		goto IL_01dd;
	}

IL_0155:
	{
		// if (transitionIn.transform.GetChild(i).TryGetComponent<Image>(out Image childImage))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = V_0;
		NullCheck(L_46);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_47;
		L_47 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_46, NULL);
		int32_t L_48 = V_3;
		NullCheck(L_47);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_47, L_48, NULL);
		NullCheck(L_49);
		bool L_50;
		L_50 = Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C(L_49, (&V_4), Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var);
		if (!L_50)
		{
			goto IL_01d9;
		}
	}
	{
		// if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_51 = __this->___transitionSettings_4;
		NullCheck(L_51);
		int32_t L_52 = L_51->___colorTintMode_8;
		if (L_52)
		{
			goto IL_01a2;
		}
	}
	{
		// childImage.material = multiplyColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_53 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_54 = __this->___multiplyColorMaterial_8;
		NullCheck(L_53);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_53, L_54);
		// childImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_55 = V_4;
		NullCheck(L_55);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_56;
		L_56 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_55);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_57 = __this->___transitionSettings_4;
		NullCheck(L_57);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = L_57->___colorTint_9;
		NullCheck(L_56);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_56, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_58, NULL);
		goto IL_01d9;
	}

IL_01a2:
	{
		// else if (transitionSettings.colorTintMode == ColorTintMode.Add)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_59 = __this->___transitionSettings_4;
		NullCheck(L_59);
		int32_t L_60 = L_59->___colorTintMode_8;
		if ((!(((uint32_t)L_60) == ((uint32_t)1))))
		{
			goto IL_01d9;
		}
	}
	{
		// childImage.material = additiveColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_61 = V_4;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_62 = __this->___additiveColorMaterial_9;
		NullCheck(L_61);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_61, L_62);
		// childImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_63 = V_4;
		NullCheck(L_63);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_64;
		L_64 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_63);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_65 = __this->___transitionSettings_4;
		NullCheck(L_65);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66 = L_65->___colorTint_9;
		NullCheck(L_64);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_64, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_66, NULL);
	}

IL_01d9:
	{
		// for (int i = 0; i < transitionIn.transform.childCount; i++)
		int32_t L_67 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_01dd:
	{
		// for (int i = 0; i < transitionIn.transform.childCount; i++)
		int32_t L_68 = V_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = V_0;
		NullCheck(L_69);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_70;
		L_70 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_69, NULL);
		NullCheck(L_70);
		int32_t L_71;
		L_71 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_70, NULL);
		if ((((int32_t)L_68) < ((int32_t)L_71)))
		{
			goto IL_0155;
		}
	}

IL_01ee:
	{
		// if (transitionSettings.flipX)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_72 = __this->___transitionSettings_4;
		NullCheck(L_72);
		bool L_73 = L_72->___flipX_13;
		if (!L_73)
		{
			goto IL_023c;
		}
	}
	{
		// transitionIn.transform.localScale = new Vector3(-transitionIn.transform.localScale.x, transitionIn.transform.localScale.y, transitionIn.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = V_0;
		NullCheck(L_74);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_75;
		L_75 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_74, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = V_0;
		NullCheck(L_76);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_77;
		L_77 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_76, NULL);
		NullCheck(L_77);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_77, NULL);
		float L_79 = L_78.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = V_0;
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_81, NULL);
		float L_83 = L_82.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = V_0;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_85, NULL);
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((-L_79)), L_83, L_87, /*hidden argument*/NULL);
		NullCheck(L_75);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_75, L_88, NULL);
	}

IL_023c:
	{
		// if (transitionSettings.flipY)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_89 = __this->___transitionSettings_4;
		NullCheck(L_89);
		bool L_90 = L_89->___flipY_14;
		if (!L_90)
		{
			goto IL_028a;
		}
	}
	{
		// transitionIn.transform.localScale = new Vector3(transitionIn.transform.localScale.x, -transitionIn.transform.localScale.y, transitionIn.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = V_0;
		NullCheck(L_91);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_92;
		L_92 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_91, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = V_0;
		NullCheck(L_93);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_94;
		L_94 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_93, NULL);
		NullCheck(L_94);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_94, NULL);
		float L_96 = L_95.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = V_0;
		NullCheck(L_97);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_98;
		L_98 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_97, NULL);
		NullCheck(L_98);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_98, NULL);
		float L_100 = L_99.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = V_0;
		NullCheck(L_101);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_102;
		L_102 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_101, NULL);
		NullCheck(L_102);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103;
		L_103 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_102, NULL);
		float L_104 = L_103.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_105), L_96, ((-L_100)), L_104, /*hidden argument*/NULL);
		NullCheck(L_92);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_92, L_105, NULL);
	}

IL_028a:
	{
		// if (transitionIn.TryGetComponent<Animator>(out Animator parentAnim) && transitionSettings.transitionSpeed != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = V_0;
		NullCheck(L_106);
		bool L_107;
		L_107 = GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B(L_106, (&V_1), GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var);
		if (!L_107)
		{
			goto IL_02b9;
		}
	}
	{
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_108 = __this->___transitionSettings_4;
		NullCheck(L_108);
		float L_109 = L_108->___transitionSpeed_11;
		if ((((float)L_109) == ((float)(0.0f))))
		{
			goto IL_02b9;
		}
	}
	{
		// parentAnim.speed = transitionSettings.transitionSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_110 = V_1;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_111 = __this->___transitionSettings_4;
		NullCheck(L_111);
		float L_112 = L_111->___transitionSpeed_11;
		NullCheck(L_110);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_110, L_112, NULL);
		goto IL_030d;
	}

IL_02b9:
	{
		// for (int c = 0; c < transitionIn.transform.childCount; c++)
		V_5 = 0;
		goto IL_02fe;
	}

IL_02be:
	{
		// if(transitionIn.transform.GetChild(c).TryGetComponent<Animator>(out Animator childAnim) && transitionSettings.transitionSpeed != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = V_0;
		NullCheck(L_113);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_114;
		L_114 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_113, NULL);
		int32_t L_115 = V_5;
		NullCheck(L_114);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_116;
		L_116 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_114, L_115, NULL);
		NullCheck(L_116);
		bool L_117;
		L_117 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(L_116, (&V_6), Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		if (!L_117)
		{
			goto IL_02f8;
		}
	}
	{
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_118 = __this->___transitionSettings_4;
		NullCheck(L_118);
		float L_119 = L_118->___transitionSpeed_11;
		if ((((float)L_119) == ((float)(0.0f))))
		{
			goto IL_02f8;
		}
	}
	{
		// childAnim.speed = transitionSettings.transitionSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_120 = V_6;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_121 = __this->___transitionSettings_4;
		NullCheck(L_121);
		float L_122 = L_121->___transitionSpeed_11;
		NullCheck(L_120);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_120, L_122, NULL);
	}

IL_02f8:
	{
		// for (int c = 0; c < transitionIn.transform.childCount; c++)
		int32_t L_123 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02fe:
	{
		// for (int c = 0; c < transitionIn.transform.childCount; c++)
		int32_t L_124 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = V_0;
		NullCheck(L_125);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_126;
		L_126 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_125, NULL);
		NullCheck(L_126);
		int32_t L_127;
		L_127 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_126, NULL);
		if ((((int32_t)L_124) < ((int32_t)L_127)))
		{
			goto IL_02be;
		}
	}

IL_030d:
	{
		// SceneManager.sceneLoaded += OnSceneLoad;
		UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A* L_128 = (UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A*)il2cpp_codegen_object_new(UnityAction_2_t1C08AEB5AA4F72FEFAB7F303E33C8CFFF80A8C3A_il2cpp_TypeInfo_var);
		NullCheck(L_128);
		UnityAction_2__ctor_m0E0C01B7056EB1CB1E6C6F4FC457EBCA3F6B0041(L_128, __this, (intptr_t)((void*)Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_add_sceneLoaded_m14BEBCC5E4A8DD2C806A48D79A4773315CB434C6(L_128, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.Transition::OnSceneLoad(UnityEngine.SceneManagement.Scene,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C (Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* __this, Scene_tA1DC762B79745EB5140F054C884855B922318356 ___0_scene, int32_t ___1_mode, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_1 = NULL;
	float V_2 = 0.0f;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_3 = NULL;
	int32_t V_4 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_5 = NULL;
	int32_t V_6 = 0;
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* V_7 = NULL;
	{
		// if (hasTransitionTriggeredOnce) return;
		bool L_0 = __this->___hasTransitionTriggeredOnce_10;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (hasTransitionTriggeredOnce) return;
		return;
	}

IL_0009:
	{
		// transitionPanelIN.gameObject.SetActive(false);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___transitionPanelIN_5;
		NullCheck(L_1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_1, NULL);
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// transitionPanelOUT.gameObject.SetActive(true);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___transitionPanelOUT_6;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// GameObject transitionOut = Instantiate(transitionSettings.transitionOut, transitionPanelOUT);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_5 = __this->___transitionSettings_4;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___transitionOut_18;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___transitionPanelOUT_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_6, L_7, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		V_0 = L_8;
		// transitionOut.AddComponent<CanvasGroup>().blocksRaycasts = transitionSettings.blockRaycasts;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* L_10;
		L_10 = GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA(L_9, GameObject_AddComponent_TisCanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_m1C004B58918BA839B892637D46D95AF04D69DADA_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_11 = __this->___transitionSettings_4;
		NullCheck(L_11);
		bool L_12 = L_11->___blockRaycasts_7;
		NullCheck(L_10);
		CanvasGroup_set_blocksRaycasts_m6C17F35782D16AE3FC42FCD1A4D68E1C4A4776E0(L_10, L_12, NULL);
		// if (!transitionSettings.isCutoutTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_13 = __this->___transitionSettings_4;
		NullCheck(L_13);
		bool L_14 = L_13->___isCutoutTransition_10;
		if (L_14)
		{
			goto IL_0182;
		}
	}
	{
		// if (transitionOut.TryGetComponent<Image>(out Image parentImage))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		bool L_16;
		L_16 = GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB(L_15, (&V_3), GameObject_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mF43BB12CD42D366843337AF225C559E1A33CFCEB_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_00dd;
		}
	}
	{
		// if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_17 = __this->___transitionSettings_4;
		NullCheck(L_17);
		int32_t L_18 = L_17->___colorTintMode_8;
		if (L_18)
		{
			goto IL_00a8;
		}
	}
	{
		// parentImage.material = multiplyColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = __this->___multiplyColorMaterial_8;
		NullCheck(L_19);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_19, L_20);
		// parentImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = V_3;
		NullCheck(L_21);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_22;
		L_22 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_21);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_23 = __this->___transitionSettings_4;
		NullCheck(L_23);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = L_23->___colorTint_9;
		NullCheck(L_22);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_22, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_24, NULL);
		goto IL_00dd;
	}

IL_00a8:
	{
		// else if (transitionSettings.colorTintMode == ColorTintMode.Add)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_25 = __this->___transitionSettings_4;
		NullCheck(L_25);
		int32_t L_26 = L_25->___colorTintMode_8;
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_00dd;
		}
	}
	{
		// parentImage.material = additiveColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27 = V_3;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_28 = __this->___additiveColorMaterial_9;
		NullCheck(L_27);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_27, L_28);
		// parentImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_29 = V_3;
		NullCheck(L_29);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_30;
		L_30 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_29);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_31 = __this->___transitionSettings_4;
		NullCheck(L_31);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32 = L_31->___colorTint_9;
		NullCheck(L_30);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_30, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_32, NULL);
	}

IL_00dd:
	{
		// for (int i = 0; i < transitionOut.transform.childCount; i++)
		V_4 = 0;
		goto IL_0170;
	}

IL_00e5:
	{
		// if (transitionOut.transform.GetChild(i).TryGetComponent<Image>(out Image childImage))
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = V_0;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_33, NULL);
		int32_t L_35 = V_4;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_34, L_35, NULL);
		NullCheck(L_36);
		bool L_37;
		L_37 = Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C(L_36, (&V_5), Component_TryGetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m95E99711326C24670FBE794A5278EB2B542D043C_RuntimeMethod_var);
		if (!L_37)
		{
			goto IL_016a;
		}
	}
	{
		// if (transitionSettings.colorTintMode == ColorTintMode.Multiply)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_38 = __this->___transitionSettings_4;
		NullCheck(L_38);
		int32_t L_39 = L_38->___colorTintMode_8;
		if (L_39)
		{
			goto IL_0133;
		}
	}
	{
		// childImage.material = multiplyColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_41 = __this->___multiplyColorMaterial_8;
		NullCheck(L_40);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_40, L_41);
		// childImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = V_5;
		NullCheck(L_42);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_43;
		L_43 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_42);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_44 = __this->___transitionSettings_4;
		NullCheck(L_44);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45 = L_44->___colorTint_9;
		NullCheck(L_43);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_43, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_45, NULL);
		goto IL_016a;
	}

IL_0133:
	{
		// else if (transitionSettings.colorTintMode == ColorTintMode.Add)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_46 = __this->___transitionSettings_4;
		NullCheck(L_46);
		int32_t L_47 = L_46->___colorTintMode_8;
		if ((!(((uint32_t)L_47) == ((uint32_t)1))))
		{
			goto IL_016a;
		}
	}
	{
		// childImage.material = additiveColorMaterial;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = V_5;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_49 = __this->___additiveColorMaterial_9;
		NullCheck(L_48);
		VirtualActionInvoker1< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, L_48, L_49);
		// childImage.material.SetColor("_Color", transitionSettings.colorTint);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_50 = V_5;
		NullCheck(L_50);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_51;
		L_51 = VirtualFuncInvoker0< Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, L_50);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_52 = __this->___transitionSettings_4;
		NullCheck(L_52);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = L_52->___colorTint_9;
		NullCheck(L_51);
		Material_SetColor_mFAB32FAA44461E46FD707B34184EC080CBB3539F(L_51, _stringLiteral47A3FAF17D89549FD0F0ECA7370B81F7C80DFCDE, L_53, NULL);
	}

IL_016a:
	{
		// for (int i = 0; i < transitionOut.transform.childCount; i++)
		int32_t L_54 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0170:
	{
		// for (int i = 0; i < transitionOut.transform.childCount; i++)
		int32_t L_55 = V_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = V_0;
		NullCheck(L_56);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_57;
		L_57 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_56, NULL);
		NullCheck(L_57);
		int32_t L_58;
		L_58 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_57, NULL);
		if ((((int32_t)L_55) < ((int32_t)L_58)))
		{
			goto IL_00e5;
		}
	}

IL_0182:
	{
		// if (transitionSettings.flipX)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_59 = __this->___transitionSettings_4;
		NullCheck(L_59);
		bool L_60 = L_59->___flipX_13;
		if (!L_60)
		{
			goto IL_01d0;
		}
	}
	{
		// transitionOut.transform.localScale = new Vector3(-transitionOut.transform.localScale.x, transitionOut.transform.localScale.y, transitionOut.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = V_0;
		NullCheck(L_61);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_62;
		L_62 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_61, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = V_0;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_63, NULL);
		NullCheck(L_64);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_64, NULL);
		float L_66 = L_65.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = V_0;
		NullCheck(L_67);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_68;
		L_68 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_67, NULL);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_68, NULL);
		float L_70 = L_69.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = V_0;
		NullCheck(L_71);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_72;
		L_72 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_71, NULL);
		NullCheck(L_72);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_72, NULL);
		float L_74 = L_73.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		memset((&L_75), 0, sizeof(L_75));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_75), ((-L_66)), L_70, L_74, /*hidden argument*/NULL);
		NullCheck(L_62);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_62, L_75, NULL);
	}

IL_01d0:
	{
		// if (transitionSettings.flipY)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_76 = __this->___transitionSettings_4;
		NullCheck(L_76);
		bool L_77 = L_76->___flipY_14;
		if (!L_77)
		{
			goto IL_021e;
		}
	}
	{
		// transitionOut.transform.localScale = new Vector3(transitionOut.transform.localScale.x, -transitionOut.transform.localScale.y, transitionOut.transform.localScale.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = V_0;
		NullCheck(L_78);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_79;
		L_79 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_78, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = V_0;
		NullCheck(L_80);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_81;
		L_81 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_80, NULL);
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_81, NULL);
		float L_83 = L_82.___x_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = V_0;
		NullCheck(L_84);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_85;
		L_85 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_84, NULL);
		NullCheck(L_85);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_85, NULL);
		float L_87 = L_86.___y_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_0;
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_88, NULL);
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_89, NULL);
		float L_91 = L_90.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		memset((&L_92), 0, sizeof(L_92));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_92), L_83, ((-L_87)), L_91, /*hidden argument*/NULL);
		NullCheck(L_79);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_79, L_92, NULL);
	}

IL_021e:
	{
		// if (transitionOut.TryGetComponent<Animator>(out Animator parentAnim) && transitionSettings.transitionSpeed != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = V_0;
		NullCheck(L_93);
		bool L_94;
		L_94 = GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B(L_93, (&V_1), GameObject_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mE42B057DA910B503A4361F7DC5981ED25DC5733B_RuntimeMethod_var);
		if (!L_94)
		{
			goto IL_024d;
		}
	}
	{
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_95 = __this->___transitionSettings_4;
		NullCheck(L_95);
		float L_96 = L_95->___transitionSpeed_11;
		if ((((float)L_96) == ((float)(0.0f))))
		{
			goto IL_024d;
		}
	}
	{
		// parentAnim.speed = transitionSettings.transitionSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_97 = V_1;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_98 = __this->___transitionSettings_4;
		NullCheck(L_98);
		float L_99 = L_98->___transitionSpeed_11;
		NullCheck(L_97);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_97, L_99, NULL);
		goto IL_02a1;
	}

IL_024d:
	{
		// for (int c = 0; c < transitionOut.transform.childCount; c++)
		V_6 = 0;
		goto IL_0292;
	}

IL_0252:
	{
		// if (transitionOut.transform.GetChild(c).TryGetComponent<Animator>(out Animator childAnim) && transitionSettings.transitionSpeed != 0)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = V_0;
		NullCheck(L_100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_101;
		L_101 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_100, NULL);
		int32_t L_102 = V_6;
		NullCheck(L_101);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_103;
		L_103 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_101, L_102, NULL);
		NullCheck(L_103);
		bool L_104;
		L_104 = Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7(L_103, (&V_7), Component_TryGetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB76FB94B535737E34543C621AD6FFB137CEE9AE7_RuntimeMethod_var);
		if (!L_104)
		{
			goto IL_028c;
		}
	}
	{
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_105 = __this->___transitionSettings_4;
		NullCheck(L_105);
		float L_106 = L_105->___transitionSpeed_11;
		if ((((float)L_106) == ((float)(0.0f))))
		{
			goto IL_028c;
		}
	}
	{
		// childAnim.speed = transitionSettings.transitionSpeed;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_107 = V_7;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_108 = __this->___transitionSettings_4;
		NullCheck(L_108);
		float L_109 = L_108->___transitionSpeed_11;
		NullCheck(L_107);
		Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC(L_107, L_109, NULL);
	}

IL_028c:
	{
		// for (int c = 0; c < transitionOut.transform.childCount; c++)
		int32_t L_110 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_0292:
	{
		// for (int c = 0; c < transitionOut.transform.childCount; c++)
		int32_t L_111 = V_6;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112 = V_0;
		NullCheck(L_112);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_113;
		L_113 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_112, NULL);
		NullCheck(L_113);
		int32_t L_114;
		L_114 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_113, NULL);
		if ((((int32_t)L_111) < ((int32_t)L_114)))
		{
			goto IL_0252;
		}
	}

IL_02a1:
	{
		// hasTransitionTriggeredOnce = true;
		__this->___hasTransitionTriggeredOnce_10 = (bool)1;
		// float destroyTime = transitionSettings.destroyTime;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_115 = __this->___transitionSettings_4;
		NullCheck(L_115);
		float L_116 = L_115->___destroyTime_16;
		V_2 = L_116;
		// if (transitionSettings.autoAdjustTransitionTime)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_117 = __this->___transitionSettings_4;
		NullCheck(L_117);
		bool L_118 = L_117->___autoAdjustTransitionTime_12;
		if (!L_118)
		{
			goto IL_02cf;
		}
	}
	{
		// destroyTime = destroyTime / transitionSettings.transitionSpeed;
		float L_119 = V_2;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_120 = __this->___transitionSettings_4;
		NullCheck(L_120);
		float L_121 = L_120->___transitionSpeed_11;
		V_2 = ((float)(L_119/L_121));
	}

IL_02cf:
	{
		// Destroy(gameObject, destroyTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122;
		L_122 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		float L_123 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m064F2A066491D2DC4FFCFBDBE5FCFFB807A04436(L_122, L_123, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.Transition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transition__ctor_mCB7605F9B2911606574ACFD6366BA926180D7E45 (Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EasyTransition.TransitionManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Awake_mC3F2CD7D65D26FD1B569F0FE7E6DF5C418F8F4EE (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// instance = this;
		((TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var))->___instance_9 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var))->___instance_9), (void*)__this);
		// }
		return;
	}
}
// EasyTransition.TransitionManager EasyTransition.TransitionManager::Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* TransitionManager_Instance_mD0F560575D5BE4BAF16DCF20A07C8736AAB60935 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral078E14735EE684F69282FFE94BDE152096DD68F7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (instance == null)
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_0 = ((TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var))->___instance_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("You tried to access the instance before it exists.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral078E14735EE684F69282FFE94BDE152096DD68F7, NULL);
	}

IL_0017:
	{
		// return instance;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_2 = ((TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_StaticFields*)il2cpp_codegen_static_fields_for(TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_il2cpp_TypeInfo_var))->___instance_9;
		return L_2;
	}
}
// System.Void EasyTransition.TransitionManager::Transition(EasyTransition.TransitionSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Transition_mDF51A18F677902160CBB0A1A9F21F8246505DB0D (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___0_transition, float ___1_startDelay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transition == null || runningTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_0 = ___0_transition;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		bool L_2 = __this->___runningTransition_5;
		if (!L_2)
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// Debug.LogError("You have to assing a transition.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// runningTransition = true;
		__this->___runningTransition_5 = (bool)1;
		// StartCoroutine(Timer(startDelay, transition));
		float L_3 = ___1_startDelay;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_4 = ___0_transition;
		RuntimeObject* L_5;
		L_5 = TransitionManager_Timer_m9D05665D4AEBDA7610D4873EDC74B344F2E5FED1(__this, L_3, L_4, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.TransitionManager::Transition(System.String,EasyTransition.TransitionSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Transition_m0E2E7E40B9DE68EEFE2345D0D01DE21C6191F32E (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transition, float ___2_startDelay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transition == null || runningTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_0 = ___1_transition;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		bool L_2 = __this->___runningTransition_5;
		if (!L_2)
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// Debug.LogError("You have to assing a transition.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// runningTransition = true;
		__this->___runningTransition_5 = (bool)1;
		// StartCoroutine(Timer(sceneName, startDelay, transition));
		String_t* L_3 = ___0_sceneName;
		float L_4 = ___2_startDelay;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_5 = ___1_transition;
		RuntimeObject* L_6;
		L_6 = TransitionManager_Timer_m31A6543331F8AD06860FAE6B3E7CBED844E5F658(__this, L_3, L_4, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Void EasyTransition.TransitionManager::Transition(System.Int32,EasyTransition.TransitionSettings,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager_Transition_mBB625C55AA961F8F5381F06861CF53CA399CE1A4 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, int32_t ___0_sceneIndex, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transition, float ___2_startDelay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (transition == null || runningTransition)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_0 = ___1_transition;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		bool L_2 = __this->___runningTransition_5;
		if (!L_2)
		{
			goto IL_001c;
		}
	}

IL_0011:
	{
		// Debug.LogError("You have to assing a transition.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralEEADE7D8C8580C9D85EFC964996C53031B5030B9, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// runningTransition = true;
		__this->___runningTransition_5 = (bool)1;
		// StartCoroutine(Timer(sceneIndex, startDelay, transition));
		int32_t L_3 = ___0_sceneIndex;
		float L_4 = ___2_startDelay;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_5 = ___1_transition;
		RuntimeObject* L_6;
		L_6 = TransitionManager_Timer_m27EDDC77C310937C1E4D5C59967A8E344911DAEE(__this, L_3, L_4, L_5, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		// }
		return;
	}
}
// System.Int32 EasyTransition.TransitionManager::GetSceneIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TransitionManager_GetSceneIndex_m249C684C61D0CB0A174F2090BB4C7126725C2E24 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return SceneManager.GetSceneByName(sceneName).buildIndex;
		String_t* L_0 = ___0_sceneName;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_1;
		L_1 = SceneManager_GetSceneByName_m2A70CB2D1C586ED6747E82693785CA86F99FA9B9(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		return L_2;
	}
}
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.String,System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m31A6543331F8AD06860FAE6B3E7CBED844E5F658 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, String_t* ___0_sceneName, float ___1_startDelay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___2_transitionSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_0 = (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA*)il2cpp_codegen_object_new(U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimerU3Ed__12__ctor_mE910E7E4470172567346B7B3E21B3A7A8A3A5E26(L_0, 0, NULL);
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_2 = L_1;
		String_t* L_3 = ___0_sceneName;
		NullCheck(L_2);
		L_2->___sceneName_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___sceneName_5), (void*)L_3);
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_4 = L_2;
		float L_5 = ___1_startDelay;
		NullCheck(L_4);
		L_4->___startDelay_2 = L_5;
		U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* L_6 = L_4;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_7 = ___2_transitionSettings;
		NullCheck(L_6);
		L_6->___transitionSettings_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___transitionSettings_4), (void*)L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.Int32,System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m27EDDC77C310937C1E4D5C59967A8E344911DAEE (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, int32_t ___0_sceneIndex, float ___1_startDelay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___2_transitionSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_0 = (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327*)il2cpp_codegen_object_new(U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimerU3Ed__13__ctor_m6B396D2730423917A93230EA7ABEC2F22C9B47EC(L_0, 0, NULL);
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_2 = L_1;
		int32_t L_3 = ___0_sceneIndex;
		NullCheck(L_2);
		L_2->___sceneIndex_5 = L_3;
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_4 = L_2;
		float L_5 = ___1_startDelay;
		NullCheck(L_4);
		L_4->___startDelay_2 = L_5;
		U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* L_6 = L_4;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_7 = ___2_transitionSettings;
		NullCheck(L_6);
		L_6->___transitionSettings_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___transitionSettings_4), (void*)L_7);
		return L_6;
	}
}
// System.Collections.IEnumerator EasyTransition.TransitionManager::Timer(System.Single,EasyTransition.TransitionSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Timer_m9D05665D4AEBDA7610D4873EDC74B344F2E5FED1 (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, float ___0_delay, TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* ___1_transitionSettings, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* L_0 = (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24*)il2cpp_codegen_object_new(U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTimerU3Ed__14__ctor_mC6A7764E3CB1A7E820F6BC2B4C0E4B837CABC0AC(L_0, 0, NULL);
		U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* L_2 = L_1;
		float L_3 = ___0_delay;
		NullCheck(L_2);
		L_2->___delay_2 = L_3;
		U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* L_4 = L_2;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_5 = ___1_transitionSettings;
		NullCheck(L_4);
		L_4->___transitionSettings_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___transitionSettings_4), (void*)L_5);
		return L_4;
	}
}
// System.Collections.IEnumerator EasyTransition.TransitionManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransitionManager_Start_mF2A7353A274247C8C7389E8AC963B65C9F3AA24B (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* L_0 = (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43*)il2cpp_codegen_object_new(U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ed__15__ctor_mEDA09644404BB45ACE41F0CB519EDA5AF0DFF67A(L_0, 0, NULL);
		U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EasyTransition.TransitionManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionManager__ctor_m5EBDA751B7211440BE7F29D2F30E6411E8BE9FDB (TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EasyTransition.TransitionManager/<Timer>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__12__ctor_mE910E7E4470172567346B7B3E21B3A7A8A3A5E26 (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__12_System_IDisposable_Dispose_m12E453F44514537276D9BEE38838F25619E5998B (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.TransitionManager/<Timer>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerU3Ed__12_MoveNext_m72047C53F15F4D7D407E7CA6BA9228DB11BC14D3 (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* V_1 = NULL;
	float V_2 = 0.0f;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B5_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B4_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B11_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B10_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B15_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00f8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(startDelay);
		float L_3 = __this->___startDelay_2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_4 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0047:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionBegin?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_5 = V_1;
		NullCheck(L_5);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5->___onTransitionBegin_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_005a;
		}
	}
	{
		goto IL_005f;
	}

IL_005a:
	{
		NullCheck(G_B5_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B5_0, NULL);
	}

IL_005f:
	{
		// GameObject template = Instantiate(transitionTemplate) as GameObject;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___transitionTemplate_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// template.GetComponent<Transition>().transitionSettings = transitionSettings;
		NullCheck(L_10);
		Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* L_11;
		L_11 = GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C(L_10, GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_12 = __this->___transitionSettings_4;
		NullCheck(L_11);
		L_11->___transitionSettings_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___transitionSettings_4), (void*)L_12);
		// float transitionTime = transitionSettings.transitionTime;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_13 = __this->___transitionSettings_4;
		NullCheck(L_13);
		float L_14 = L_13->___transitionTime_15;
		V_2 = L_14;
		// if (transitionSettings.autoAdjustTransitionTime)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_15 = __this->___transitionSettings_4;
		NullCheck(L_15);
		bool L_16 = L_15->___autoAdjustTransitionTime_12;
		if (!L_16)
		{
			goto IL_00a1;
		}
	}
	{
		// transitionTime = transitionTime / transitionSettings.transitionSpeed;
		float L_17 = V_2;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_18 = __this->___transitionSettings_4;
		NullCheck(L_18);
		float L_19 = L_18->___transitionSpeed_11;
		V_2 = ((float)(L_17/L_19));
	}

IL_00a1:
	{
		// yield return new WaitForSecondsRealtime(transitionTime);
		float L_20 = V_2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_21 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_21, L_20, NULL);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionCutPointReached?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_22 = V_1;
		NullCheck(L_22);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = L_22->___onTransitionCutPointReached_7;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = L_23;
		G_B10_0 = L_24;
		if (L_24)
		{
			G_B11_0 = L_24;
			goto IL_00c9;
		}
	}
	{
		goto IL_00ce;
	}

IL_00c9:
	{
		NullCheck(G_B11_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B11_0, NULL);
	}

IL_00ce:
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_25 = __this->___sceneName_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(L_25, NULL);
		// yield return new WaitForSecondsRealtime(transitionSettings.destroyTime);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_26 = __this->___transitionSettings_4;
		NullCheck(L_26);
		float L_27 = L_26->___destroyTime_16;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_28 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_28, L_27, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00f8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionEnd?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_29 = V_1;
		NullCheck(L_29);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_30 = L_29->___onTransitionEnd_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_31 = L_30;
		G_B14_0 = L_31;
		if (L_31)
		{
			G_B15_0 = L_31;
			goto IL_010b;
		}
	}
	{
		goto IL_0110;
	}

IL_010b:
	{
		NullCheck(G_B15_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B15_0, NULL);
	}

IL_0110:
	{
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m43A1ADA13C05B60A809D7630DB37640A7CEFDBCB (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__12_System_Collections_IEnumerator_Reset_mC8685C0C1008A7F349736CCBEF5DFC8D20A51D7A (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerU3Ed__12_System_Collections_IEnumerator_Reset_mC8685C0C1008A7F349736CCBEF5DFC8D20A51D7A_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__12_System_Collections_IEnumerator_get_Current_m2564F95DF19485AF2B42FD1098A1E8CC929B418C (U3CTimerU3Ed__12_t33112946320484B8EDE57CCC8FCD773B699A7AFA* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EasyTransition.TransitionManager/<Timer>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__13__ctor_m6B396D2730423917A93230EA7ABEC2F22C9B47EC (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__13_System_IDisposable_Dispose_mD2CCF85AA56A4DBD659EF10D7C6D9A9D389F013B (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.TransitionManager/<Timer>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerU3Ed__13_MoveNext_m9535E4C855751FD5C03D8ED332602E825E2E2B06 (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* V_1 = NULL;
	float V_2 = 0.0f;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B5_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B4_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B11_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B10_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B15_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_00b6;
			}
			case 3:
			{
				goto IL_00f8;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(startDelay);
		float L_3 = __this->___startDelay_2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_4 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0047:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionBegin?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_5 = V_1;
		NullCheck(L_5);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5->___onTransitionBegin_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_005a;
		}
	}
	{
		goto IL_005f;
	}

IL_005a:
	{
		NullCheck(G_B5_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B5_0, NULL);
	}

IL_005f:
	{
		// GameObject template = Instantiate(transitionTemplate) as GameObject;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___transitionTemplate_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		// template.GetComponent<Transition>().transitionSettings = transitionSettings;
		NullCheck(L_10);
		Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* L_11;
		L_11 = GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C(L_10, GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_12 = __this->___transitionSettings_4;
		NullCheck(L_11);
		L_11->___transitionSettings_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___transitionSettings_4), (void*)L_12);
		// float transitionTime = transitionSettings.transitionTime;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_13 = __this->___transitionSettings_4;
		NullCheck(L_13);
		float L_14 = L_13->___transitionTime_15;
		V_2 = L_14;
		// if (transitionSettings.autoAdjustTransitionTime)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_15 = __this->___transitionSettings_4;
		NullCheck(L_15);
		bool L_16 = L_15->___autoAdjustTransitionTime_12;
		if (!L_16)
		{
			goto IL_00a1;
		}
	}
	{
		// transitionTime = transitionTime / transitionSettings.transitionSpeed;
		float L_17 = V_2;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_18 = __this->___transitionSettings_4;
		NullCheck(L_18);
		float L_19 = L_18->___transitionSpeed_11;
		V_2 = ((float)(L_17/L_19));
	}

IL_00a1:
	{
		// yield return new WaitForSecondsRealtime(transitionTime);
		float L_20 = V_2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_21 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_21, L_20, NULL);
		__this->___U3CU3E2__current_1 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_21);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b6:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionCutPointReached?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_22 = V_1;
		NullCheck(L_22);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_23 = L_22->___onTransitionCutPointReached_7;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = L_23;
		G_B10_0 = L_24;
		if (L_24)
		{
			G_B11_0 = L_24;
			goto IL_00c9;
		}
	}
	{
		goto IL_00ce;
	}

IL_00c9:
	{
		NullCheck(G_B11_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B11_0, NULL);
	}

IL_00ce:
	{
		// SceneManager.LoadScene(sceneIndex);
		int32_t L_25 = __this->___sceneIndex_5;
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(L_25, NULL);
		// yield return new WaitForSecondsRealtime(transitionSettings.destroyTime);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_26 = __this->___transitionSettings_4;
		NullCheck(L_26);
		float L_27 = L_26->___destroyTime_16;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_28 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_28, L_27, NULL);
		__this->___U3CU3E2__current_1 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_28);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00f8:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionEnd?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_29 = V_1;
		NullCheck(L_29);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_30 = L_29->___onTransitionEnd_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_31 = L_30;
		G_B14_0 = L_31;
		if (L_31)
		{
			G_B15_0 = L_31;
			goto IL_010b;
		}
	}
	{
		goto IL_0110;
	}

IL_010b:
	{
		NullCheck(G_B15_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B15_0, NULL);
	}

IL_0110:
	{
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m682ADE71B56003A227542B3479A57A11C95DC208 (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__13_System_Collections_IEnumerator_Reset_m7DB493B01CB2F8558E5F3B7043C8AFA98D1BF13B (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerU3Ed__13_System_Collections_IEnumerator_Reset_m7DB493B01CB2F8558E5F3B7043C8AFA98D1BF13B_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__13_System_Collections_IEnumerator_get_Current_mD1A3CF72AEFF1DEA91924496AAD343C4BBF0354F (U3CTimerU3Ed__13_t56430AE9679760142031D7B10E0BC56EFFDF1327* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EasyTransition.TransitionManager/<Timer>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__14__ctor_mC6A7764E3CB1A7E820F6BC2B4C0E4B837CABC0AC (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__14_System_IDisposable_Dispose_m7A09F9788B4D4A84D877EC8B7D467FA8C2F25801 (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.TransitionManager/<Timer>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerU3Ed__14_MoveNext_m83B81BD1CCD46543CBAC6648C80BF57A0EC29CCC (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* V_1 = NULL;
	float V_2 = 0.0f;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B5_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B4_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B11_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B10_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B15_0 = NULL;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* G_B14_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_1 = __this->___U3CU3E4__this_3;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0026;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_00c2;
			}
			case 3:
			{
				goto IL_010f;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSecondsRealtime(delay);
		float L_3 = __this->___delay_2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_4 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_4, L_3, NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0047:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionBegin?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_5 = V_1;
		NullCheck(L_5);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_6 = L_5->___onTransitionBegin_6;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_7 = L_6;
		G_B4_0 = L_7;
		if (L_7)
		{
			G_B5_0 = L_7;
			goto IL_005a;
		}
	}
	{
		goto IL_005f;
	}

IL_005a:
	{
		NullCheck(G_B5_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B5_0, NULL);
	}

IL_005f:
	{
		// GameObject template = Instantiate(transitionTemplate) as GameObject;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___transitionTemplate_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___U3CtemplateU3E5__2_5 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CtemplateU3E5__2_5), (void*)L_10);
		// template.GetComponent<Transition>().transitionSettings = transitionSettings;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___U3CtemplateU3E5__2_5;
		NullCheck(L_11);
		Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* L_12;
		L_12 = GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C(L_11, GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_13 = __this->___transitionSettings_4;
		NullCheck(L_12);
		L_12->___transitionSettings_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___transitionSettings_4), (void*)L_13);
		// float transitionTime = transitionSettings.transitionTime;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_14 = __this->___transitionSettings_4;
		NullCheck(L_14);
		float L_15 = L_14->___transitionTime_15;
		V_2 = L_15;
		// if (transitionSettings.autoAdjustTransitionTime)
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_16 = __this->___transitionSettings_4;
		NullCheck(L_16);
		bool L_17 = L_16->___autoAdjustTransitionTime_12;
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		// transitionTime = transitionTime / transitionSettings.transitionSpeed;
		float L_18 = V_2;
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_19 = __this->___transitionSettings_4;
		NullCheck(L_19);
		float L_20 = L_19->___transitionSpeed_11;
		V_2 = ((float)(L_18/L_20));
	}

IL_00ad:
	{
		// yield return new WaitForSecondsRealtime(transitionTime);
		float L_21 = V_2;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_22 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_22, L_21, NULL);
		__this->___U3CU3E2__current_1 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_22);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00c2:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionCutPointReached?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_23 = V_1;
		NullCheck(L_23);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_24 = L_23->___onTransitionCutPointReached_7;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_25 = L_24;
		G_B10_0 = L_25;
		if (L_25)
		{
			G_B11_0 = L_25;
			goto IL_00d5;
		}
	}
	{
		goto IL_00da;
	}

IL_00d5:
	{
		NullCheck(G_B11_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B11_0, NULL);
	}

IL_00da:
	{
		// template.GetComponent<Transition>().OnSceneLoad(SceneManager.GetActiveScene(), LoadSceneMode.Single);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___U3CtemplateU3E5__2_5;
		NullCheck(L_26);
		Transition_t39D9D02D5CD62874417708B94489C9786D4E582B* L_27;
		L_27 = GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C(L_26, GameObject_GetComponent_TisTransition_t39D9D02D5CD62874417708B94489C9786D4E582B_m31B68ABF72E57B8A5E638193889FE072F5F88F8C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_28;
		L_28 = SceneManager_GetActiveScene_m0B320EC4302F51A71495D1CCD1A0FF9C2ED1FDC8(NULL);
		NullCheck(L_27);
		Transition_OnSceneLoad_m204A020AB3403ADBB6303F9080082AEB19BE139C(L_27, L_28, 0, NULL);
		// yield return new WaitForSecondsRealtime(transitionSettings.destroyTime);
		TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* L_29 = __this->___transitionSettings_4;
		NullCheck(L_29);
		float L_30 = L_29->___destroyTime_16;
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_31 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_31, L_30, NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_010f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onTransitionEnd?.Invoke();
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_32 = V_1;
		NullCheck(L_32);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_33 = L_32->___onTransitionEnd_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_34 = L_33;
		G_B14_0 = L_34;
		if (L_34)
		{
			G_B15_0 = L_34;
			goto IL_0122;
		}
	}
	{
		goto IL_0127;
	}

IL_0122:
	{
		NullCheck(G_B15_0);
		UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline(G_B15_0, NULL);
	}

IL_0127:
	{
		// runningTransition = false;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_35 = V_1;
		NullCheck(L_35);
		L_35->___runningTransition_5 = (bool)0;
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5B78F2190769586AFC1C3303672A52A3600C1B12 (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.TransitionManager/<Timer>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__14_System_Collections_IEnumerator_Reset_m73D9974A940C1435742E8CECBF31ED793EACA33B (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerU3Ed__14_System_Collections_IEnumerator_Reset_m73D9974A940C1435742E8CECBF31ED793EACA33B_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.TransitionManager/<Timer>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTimerU3Ed__14_System_Collections_IEnumerator_get_Current_m1E67AED1711AD301B775F9304FF480555405973D (U3CTimerU3Ed__14_tC7B6B3E44B86E3EE8FA73B2017E1A0D694DDDF24* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EasyTransition.TransitionManager/<Start>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15__ctor_mEDA09644404BB45ACE41F0CB519EDA5AF0DFF67A (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EasyTransition.TransitionManager/<Start>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15_System_IDisposable_Dispose_m91FF2F8BAD40E447B814BE59991BE791C564AB5C (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EasyTransition.TransitionManager/<Start>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__15_MoveNext_m5D4EC5A80C85CC142A093D03995EC7E3A3983405 (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FEAD6B2BFD82FD8CA47BF3CF8F052CED9EA79AA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0061;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0068;
	}

IL_0020:
	{
		// var managerCount = GameObject.FindObjectsOfType<TransitionManager>(true).Length;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		TransitionManagerU5BU5D_tE50647465AB32A70FD3D789435715A5E2E7563C8* L_4;
		L_4 = Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4((bool)1, Object_FindObjectsOfType_TisTransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C_mE6DD30D5A4719048ADEEEB30730668B2AFE1FAF4_RuntimeMethod_var);
		NullCheck(L_4);
		V_2 = ((int32_t)(((RuntimeArray*)L_4)->max_length));
		// if (managerCount > 1)
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		// Debug.LogError($"There are {managerCount.ToString()} Transition Managers in your scene. Please ensure there is only one Transition Manager in your scene or overlapping transitions may occur.");
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral077D54EF56505C116721926A0393FE48C3AF6F26, L_6, _stringLiteral4FEAD6B2BFD82FD8CA47BF3CF8F052CED9EA79AA, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
	}

IL_0048:
	{
		// yield return new WaitForSecondsRealtime(1f);
		WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* L_8 = (WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01*)il2cpp_codegen_object_new(WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSecondsRealtime__ctor_mBFC1E4F0E042D5EC6E7EEB211A2FE5193A8F6D6F(L_8, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0061:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0068:
	{
		// while (this.gameObject.activeInHierarchy)
		TransitionManager_t239B1BFE36FC5AC44E0313C1D6848A36F0E8A78C* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeInHierarchy_m49250F4F168DCC5388D5BE4F6A5681386907B109(L_10, NULL);
		if (L_11)
		{
			goto IL_0020;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object EasyTransition.TransitionManager/<Start>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB47DDBBF4396D856EBD7EF09BB3D17C66393F63C (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EasyTransition.TransitionManager/<Start>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_m543FFCF10310A057B0649F6DBDE9973AAE866FED (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__15_System_Collections_IEnumerator_Reset_m543FFCF10310A057B0649F6DBDE9973AAE866FED_RuntimeMethod_var)));
	}
}
// System.Object EasyTransition.TransitionManager/<Start>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ed__15_System_Collections_IEnumerator_get_Current_m537B932054415362608C4CAEFB2FFD23D90D2566 (U3CStartU3Ed__15_t9E59D515CE136A03042D02D9529E44E8024E0E43* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
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
// System.Void EasyTransition.TransitionSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransitionSettings__ctor_m6CC3860A609B31549137C50D53C9C0C983229B55 (TransitionSettings_tD210947AC479D0F7CE4CA8B70F1A68F712839F24* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 refrenceResolution = new Vector2(1920, 1080);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_0), (1920.0f), (1080.0f), /*hidden argument*/NULL);
		__this->___refrenceResolution_6 = L_0;
		// public bool blockRaycasts = true;
		__this->___blockRaycasts_7 = (bool)1;
		// public Color colorTint = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		L_1 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___colorTint_9 = L_1;
		// public float transitionSpeed = 1;
		__this->___transitionSpeed_11 = (1.0f);
		// public bool autoAdjustTransitionTime = true;
		__this->___autoAdjustTransitionTime_12 = (bool)1;
		// public float transitionTime = 1.5f;
		__this->___transitionTime_15 = (1.5f);
		// public float destroyTime = 3f;
		__this->___destroyTime_16 = (3.0f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Distance_mBACBB1609E1894D68F882D86A93519E311810C89_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))));
		V_2 = ((float)L_12);
		goto IL_002e;
	}

IL_002e:
	{
		float L_13 = V_2;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_left_m8C1116485A9E689760AEE1142F5977852278B7E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___leftVector_9;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_AxisOptions_m541692280806ECF76F7C2C710973AF9D8AB334C6_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		int32_t L_0 = ___0_value;
		__this->___axisOptions_6 = L_0;
		// public AxisOptions AxisOptions { get { return AxisOptions; } set { axisOptions = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapX_mB2090989F6AC933B30823751D74E799FC8D9B87A_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		bool L_0 = ___0_value;
		__this->___snapX_7 = L_0;
		// public bool SnapX { get { return snapX; } set { snapX = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Joystick_set_SnapY_m7419D5EB972285A9E5E446CD668BEC266D11CD86_inline (Joystick_tE3193C48A43E3F5577CBD4E9A8204BBFF2FEEB7A* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		bool L_0 = ___0_value;
		__this->___snapY_8 = L_0;
		// public bool SnapY { get { return snapY; } set { snapY = value; } }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 position { get; set; }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___U3CpositionU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m707994C12D356E65E453CEE8F767E652B60911BF_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)(L_1/L_3)), ((float)(L_5/L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))))));
		V_0 = ((float)L_4);
		goto IL_0026;
	}

IL_0026:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_normalized_mF6722883AEFB5027690A778DF8ACC20F0FA65297_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_0), L_0, L_1, NULL);
		Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = V_0;
		V_1 = L_2;
		goto IL_0020;
	}

IL_0020:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m6FFFFF6A9E069A4FBCA7E098D88AE39C2B80D442_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_up_m41067879408BB378593EF7406AF2525F176F0ABF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___upVector_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Angle_mD94AAEA690169FE5882D60F8489C8BF63300C221_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_from, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___0_from), NULL);
		float L_1;
		L_1 = Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline((&___1_to), NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = sqrt(((double)((float)il2cpp_codegen_multiply(L_0, L_1))));
		V_0 = ((float)L_2);
		float L_3 = V_0;
		V_2 = (bool)((((float)L_3) < ((float)(1.0E-15f)))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		V_3 = (0.0f);
		goto IL_0056;
	}

IL_002c:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___0_from;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_to;
		float L_7;
		L_7 = Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline(L_5, L_6, NULL);
		float L_8 = V_0;
		float L_9;
		L_9 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)(L_7/L_8)), (-1.0f), (1.0f), NULL);
		V_1 = L_9;
		float L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_11;
		L_11 = acos(((double)L_10));
		V_3 = ((float)il2cpp_codegen_multiply(((float)L_11), (57.2957802f)));
		goto IL_0056;
	}

IL_0056:
	{
		float L_12 = V_3;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityAction_Invoke_m5CB9EE17CCDF64D00DE5D96DF3553CDB20D66F70_inline (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2_Normalize_m56DABCAB5967DF37A6B96710477D3660D800C652_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		float L_0;
		L_0 = Vector2_get_magnitude_m5C59B4056420AEFDB291AD0914A3F675330A75CE_inline(__this, NULL);
		V_0 = L_0;
		float L_1 = V_0;
		V_1 = (bool)((((float)L_1) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this);
		float L_4 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = Vector2_op_Division_m57A2DCD71E0CE7420851D705D1951F9238902AAB_inline(L_3, L_4, NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_5;
		goto IL_0033;
	}

IL_0028:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Vector2_get_zero_m32506C40EC2EE7D5D4410BF40D3EE683A3D5F32C_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)__this = L_6;
	}

IL_0033:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_get_sqrMagnitude_mA16336720C14EEF8BA9B55AE33B98C9EE2082BDC_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_0;
		float L_1 = __this->___x_0;
		float L_2 = __this->___y_1;
		float L_3 = __this->___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector2_Dot_mC1E68FDB4FB462A279A303C043B8FD0AC11C8458_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_lhs, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_lhs;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_lhs;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_rhs;
		float L_7 = L_6.___y_1;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7))));
		goto IL_001f;
	}

IL_001f:
	{
		float L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___0_value, float ___1_min, float ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___0_value;
		float L_1 = ___1_min;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___0_value;
		float L_5 = ___2_max;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		float L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
