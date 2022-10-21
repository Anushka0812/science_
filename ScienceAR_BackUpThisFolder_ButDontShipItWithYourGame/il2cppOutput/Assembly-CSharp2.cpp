#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph>
struct Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7;
// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character>
struct Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2;
// System.Collections.Generic.HashSet`1<System.UInt32>
struct HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph>
struct List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C;
// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect>
struct List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<TMPro.TMP_Character>
struct List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E;
// System.Collections.Generic.List`1<TMPro.TMP_FontAsset>
struct List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF;
// System.Collections.Generic.List`1<TMPro.TMP_Glyph>
struct List_1_tAB7976FADCF872E418770E60783056C23394843D;
// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A;
// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.CustomDropdown/Item>
struct List_1_t8E0D2E61E4E8ABA65FB86A559AAD3A78A49D6A8B;
// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.DropdownMultiSelect/Item>
struct List_1_tE05A2B10A670006DBCF2772B374ADDF9ACCC7265;
// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.HorizontalSelector/Item>
struct List_1_t9A05FAC3397936FA51BE4C42897111635919000A;
// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.WindowManager/WindowItem>
struct List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB;
// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_FontWeightPair[]
struct TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// Michsky.UI.ModernUIPack.WindowManager/WindowItem[]
struct WindowItemU5BU5D_t5F14AD5E23D2336CFDD6FD51F99603FF17EC4D8D;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Michsky.UI.ModernUIPack.CustomDropdown
struct CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F;
// Michsky.UI.ModernUIPack.CustomToggle
struct CustomToggle_t7F72D9CADC7D528DCB945B84C3AA2B299BC6F44F;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Michsky.UI.ModernUIPack.DropdownMultiSelect
struct DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.EventSystems.EventTrigger
struct EventTrigger_tAEBFB7A16CA99343EA87722F78884BF8646BAE1B;
// TMPro.FaceInfo_Legacy
struct FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8;
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.HorizontalLayoutGroup
struct HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA;
// Michsky.UI.ModernUIPack.HorizontalSelector
struct HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// TMPro.KerningTable
struct KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
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
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_FontFeatureTable
struct TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// Michsky.UI.ModernUIPack.TooltipContent
struct TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2;
// Michsky.UI.ModernUIPack.TooltipManager
struct TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
// Michsky.UI.ModernUIPack.UIManager
struct UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45;
// Michsky.UI.ModernUIPack.UIManagerAnimatedIcon
struct UIManagerAnimatedIcon_t36FD30605E0D1CB7E1DA88FF739613EBAAFA766C;
// Michsky.UI.ModernUIPack.UIManagerButton
struct UIManagerButton_tDBCC56BB5AC64BEE72F0EE022087F149A0576A76;
// Michsky.UI.ModernUIPack.UIManagerContextMenu
struct UIManagerContextMenu_t5202ADB13D57B215B622761F7909D1C3F5798127;
// Michsky.UI.ModernUIPack.UIManagerDropdown
struct UIManagerDropdown_t3D0E999C173335861F863A8682182F435C0074BE;
// Michsky.UI.ModernUIPack.UIManagerHSelector
struct UIManagerHSelector_t5118B938B6788E1B7CD8E66D7A73F285D15D828B;
// Michsky.UI.ModernUIPack.UIManagerInputField
struct UIManagerInputField_t23A219884764CEDF5AE579FECC10FF2B97987A12;
// Michsky.UI.ModernUIPack.UIManagerModalWindow
struct UIManagerModalWindow_tF334E46DFD82D725A2171587092C097003A9EC84;
// Michsky.UI.ModernUIPack.UIManagerNotification
struct UIManagerNotification_t88F573098C62D58BBBC59551CD498BE0C6D14C0D;
// Michsky.UI.ModernUIPack.UIManagerPieChart
struct UIManagerPieChart_t4C0D858AF056796F23A21F475AA2251BBB56C55E;
// Michsky.UI.ModernUIPack.UIManagerProgressBar
struct UIManagerProgressBar_t3E9D23017D4282C00C7CBD36D94BB6BD53056100;
// Michsky.UI.ModernUIPack.UIManagerProgressBarLoop
struct UIManagerProgressBarLoop_t00705338CCFCC39D4B98E73931D562028D8A1811;
// Michsky.UI.ModernUIPack.UIManagerScrollbar
struct UIManagerScrollbar_tEC34CA446FD18E5B69031806C8EB87C4F883C547;
// Michsky.UI.ModernUIPack.UIManagerSlider
struct UIManagerSlider_t3E93FA1D8585657FE1E890C0668F88254CE97C6A;
// Michsky.UI.ModernUIPack.UIManagerSwitch
struct UIManagerSwitch_t10308E1F0F799B9D61640874FF2AEF87E2761C02;
// Michsky.UI.ModernUIPack.UIManagerToggle
struct UIManagerToggle_tF3715BC417FB445F6C94BC4518984FB61F64CF80;
// Michsky.UI.ModernUIPack.UIManagerTooltip
struct UIManagerTooltip_tB4C4AF938181B5351FE87A6BB5FFB1B9D9E76A91;
// Michsky.UI.ModernUIPack.UIManagerWindowManager
struct UIManagerWindowManager_tB4469D0FAA9F9E8D3EE1189E770DDC7DE1692660;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// UnityEngine.UI.VerticalLayoutGroup
struct VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// Michsky.UI.ModernUIPack.WindowDragger
struct WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF;
// Michsky.UI.ModernUIPack.WindowManager
struct WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C;
// Michsky.UI.ModernUIPack.WindowManagerButton
struct WindowManagerButton_t93F9B24A6E1C958C9CB1DED69613A7EF9FBA71F8;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// Michsky.UI.ModernUIPack.CustomDropdown/DropdownEvent
struct DropdownEvent_t9CEBE75B0F525C2F1126C932DA7DD110E5715489;
// Michsky.UI.ModernUIPack.HorizontalSelector/SelectorEvent
struct SelectorEvent_t9941DE301494150698473567265F58F3349F7AF4;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;
// Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10
struct U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0;
// Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11
struct U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B;
// Michsky.UI.ModernUIPack.WindowManager/WindowChangeEvent
struct WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C;
// Michsky.UI.ModernUIPack.WindowManager/WindowItem
struct WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D;

IL2CPP_EXTERN_C RuntimeClass* Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A095EE8842ABB18435F89659E4389EF73BF565E;
IL2CPP_EXTERN_C String_t* _stringLiteral22C63C853ABA4891881A23EFB49EC77CE12F294D;
IL2CPP_EXTERN_C String_t* _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8;
IL2CPP_EXTERN_C String_t* _stringLiteral34E6C956E064B1720D3D9F453AF359FE2A3AC3D0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B624A1883BC2A2B406EF653268D220A8C58C381;
IL2CPP_EXTERN_C String_t* _stringLiteral3D238E6B4834A511550314B5CAFBBBF17B779B87;
IL2CPP_EXTERN_C String_t* _stringLiteral420D147F653744AD282955DF186E73A6B871EB22;
IL2CPP_EXTERN_C String_t* _stringLiteral4A65E58E99B1263560FFEE98B35619C1927295EA;
IL2CPP_EXTERN_C String_t* _stringLiteral51AD00569E0EC5559DADEA05FCFC4AFFF59EED2C;
IL2CPP_EXTERN_C String_t* _stringLiteral544BB20556DCF0413145355232B9F429C30DAA0C;
IL2CPP_EXTERN_C String_t* _stringLiteral8D283782C3F09C63D1216CA185F4ED256E392399;
IL2CPP_EXTERN_C String_t* _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44;
IL2CPP_EXTERN_C String_t* _stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F;
IL2CPP_EXTERN_C String_t* _stringLiteralC34E3198326D5FD0889590C2FDF1ABD4DF2F9691;
IL2CPP_EXTERN_C String_t* _stringLiteralCDF0CEC4215B327D0CE9D530B19E6DA09A2D3933;
IL2CPP_EXTERN_C String_t* _stringLiteralDF42A79EC2386D05C063A64BE15CD7F3B556CBD5;
IL2CPP_EXTERN_C String_t* _stringLiteralF04C22D032D8B8FCBC400A60E3E00C3BD09D9ADA;
IL2CPP_EXTERN_C String_t* _stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133;
IL2CPP_EXTERN_C String_t* _stringLiteralFA35C822D88D604BA53D9E08ADDF58E770BC8554;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomToggle_UpdateStateDynamic_mF879FB051F8148B541F2C6B2E503B66768F80907_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m454971F9D9EA677E9FA85BEC6FA483F0D606BBFF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInParent_TisTooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC_m5FC8D020A1DA3BCCD42B959CD2B6F110DCD95C06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F_m4D11731CD25EFEB71A0661F018EC47306CB8364B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE_m4FA148F9D52010D52AD990611C404CCF8694B207_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisHorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791_m5D0E06F33ED2C16E0F4191E06F653644F038B1C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAB2C21FB95076AEE694E1C0996728B3DF12FEE97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m3563D2891290DEA83C59AE2BCC3046A8FFC7D18E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShowTooltipU3Ed__10_System_Collections_IEnumerator_Reset_m37E8F5F37E76797723256603E10D35F8A6BF26E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CUpdateLayoutPositionU3Ed__11_System_Collections_IEnumerator_Reset_mF8243E44F3008D20295463367F04D17BC5513962_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.WindowManager/WindowItem>
struct List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	WindowItemU5BU5D_t5F14AD5E23D2336CFDD6FD51F99603FF17EC4D8D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	WindowItemU5BU5D_t5F14AD5E23D2336CFDD6FD51F99603FF17EC4D8D* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10
struct U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0  : public RuntimeObject
{
	// System.Int32 Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Michsky.UI.ModernUIPack.TooltipContent Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::<>4__this
	TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* ___U3CU3E4__this_2;
};

// Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11
struct U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B  : public RuntimeObject
{
	// System.Int32 Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Michsky.UI.ModernUIPack.TooltipContent Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::<>4__this
	TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* ___U3CU3E4__this_2;
};

// Michsky.UI.ModernUIPack.WindowManager/WindowItem
struct WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D  : public RuntimeObject
{
	// System.String Michsky.UI.ModernUIPack.WindowManager/WindowItem::windowName
	String_t* ___windowName_0;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.WindowManager/WindowItem::windowObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___windowObject_1;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.WindowManager/WindowItem::buttonObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buttonObject_2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`1<System.Int32>
struct UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
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

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
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

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 
{
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_FaceIndex
	int32_t ___m_FaceIndex_0;
	// System.String UnityEngine.TextCore.FaceInfo::m_FamilyName
	String_t* ___m_FamilyName_1;
	// System.String UnityEngine.TextCore.FaceInfo::m_StyleName
	String_t* ___m_StyleName_2;
	// System.Int32 UnityEngine.TextCore.FaceInfo::m_PointSize
	int32_t ___m_PointSize_3;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Scale
	float ___m_Scale_4;
	// System.Single UnityEngine.TextCore.FaceInfo::m_LineHeight
	float ___m_LineHeight_5;
	// System.Single UnityEngine.TextCore.FaceInfo::m_AscentLine
	float ___m_AscentLine_6;
	// System.Single UnityEngine.TextCore.FaceInfo::m_CapLine
	float ___m_CapLine_7;
	// System.Single UnityEngine.TextCore.FaceInfo::m_MeanLine
	float ___m_MeanLine_8;
	// System.Single UnityEngine.TextCore.FaceInfo::m_Baseline
	float ___m_Baseline_9;
	// System.Single UnityEngine.TextCore.FaceInfo::m_DescentLine
	float ___m_DescentLine_10;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptOffset
	float ___m_SuperscriptOffset_11;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SuperscriptSize
	float ___m_SuperscriptSize_12;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptOffset
	float ___m_SubscriptOffset_13;
	// System.Single UnityEngine.TextCore.FaceInfo::m_SubscriptSize
	float ___m_SubscriptSize_14;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineOffset
	float ___m_UnderlineOffset_15;
	// System.Single UnityEngine.TextCore.FaceInfo::m_UnderlineThickness
	float ___m_UnderlineThickness_16;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughOffset
	float ___m_StrikethroughOffset_17;
	// System.Single UnityEngine.TextCore.FaceInfo::m_StrikethroughThickness
	float ___m_StrikethroughThickness_18;
	// System.Single UnityEngine.TextCore.FaceInfo::m_TabWidth
	float ___m_TabWidth_19;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_pinvoke
{
	int32_t ___m_FaceIndex_0;
	char* ___m_FamilyName_1;
	char* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};
// Native definition for COM marshalling of UnityEngine.TextCore.FaceInfo
struct FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756_marshaled_com
{
	int32_t ___m_FaceIndex_0;
	Il2CppChar* ___m_FamilyName_1;
	Il2CppChar* ___m_StyleName_2;
	int32_t ___m_PointSize_3;
	float ___m_Scale_4;
	float ___m_LineHeight_5;
	float ___m_AscentLine_6;
	float ___m_CapLine_7;
	float ___m_MeanLine_8;
	float ___m_Baseline_9;
	float ___m_DescentLine_10;
	float ___m_SuperscriptOffset_11;
	float ___m_SuperscriptSize_12;
	float ___m_SubscriptOffset_13;
	float ___m_SubscriptSize_14;
	float ___m_UnderlineOffset_15;
	float ___m_UnderlineThickness_16;
	float ___m_StrikethroughOffset_17;
	float ___m_StrikethroughThickness_18;
	float ___m_TabWidth_19;
};

// TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF 
{
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileName
	String_t* ___sourceFontFileName_0;
	// System.String TMPro.FontAssetCreationSettings::sourceFontFileGUID
	String_t* ___sourceFontFileGUID_1;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSizeSamplingMode
	int32_t ___pointSizeSamplingMode_2;
	// System.Int32 TMPro.FontAssetCreationSettings::pointSize
	int32_t ___pointSize_3;
	// System.Int32 TMPro.FontAssetCreationSettings::padding
	int32_t ___padding_4;
	// System.Int32 TMPro.FontAssetCreationSettings::packingMode
	int32_t ___packingMode_5;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasWidth
	int32_t ___atlasWidth_6;
	// System.Int32 TMPro.FontAssetCreationSettings::atlasHeight
	int32_t ___atlasHeight_7;
	// System.Int32 TMPro.FontAssetCreationSettings::characterSetSelectionMode
	int32_t ___characterSetSelectionMode_8;
	// System.String TMPro.FontAssetCreationSettings::characterSequence
	String_t* ___characterSequence_9;
	// System.String TMPro.FontAssetCreationSettings::referencedFontAssetGUID
	String_t* ___referencedFontAssetGUID_10;
	// System.String TMPro.FontAssetCreationSettings::referencedTextAssetGUID
	String_t* ___referencedTextAssetGUID_11;
	// System.Int32 TMPro.FontAssetCreationSettings::fontStyle
	int32_t ___fontStyle_12;
	// System.Single TMPro.FontAssetCreationSettings::fontStyleModifier
	float ___fontStyleModifier_13;
	// System.Int32 TMPro.FontAssetCreationSettings::renderMode
	int32_t ___renderMode_14;
	// System.Boolean TMPro.FontAssetCreationSettings::includeFontFeatures
	bool ___includeFontFeatures_15;
};
// Native definition for P/Invoke marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_pinvoke
{
	char* ___sourceFontFileName_0;
	char* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	char* ___characterSequence_9;
	char* ___referencedFontAssetGUID_10;
	char* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
};
// Native definition for COM marshalling of TMPro.FontAssetCreationSettings
struct FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF_marshaled_com
{
	Il2CppChar* ___sourceFontFileName_0;
	Il2CppChar* ___sourceFontFileGUID_1;
	int32_t ___pointSizeSamplingMode_2;
	int32_t ___pointSize_3;
	int32_t ___padding_4;
	int32_t ___packingMode_5;
	int32_t ___atlasWidth_6;
	int32_t ___atlasHeight_7;
	int32_t ___characterSetSelectionMode_8;
	Il2CppChar* ___characterSequence_9;
	Il2CppChar* ___referencedFontAssetGUID_10;
	Il2CppChar* ___referencedTextAssetGUID_11;
	int32_t ___fontStyle_12;
	float ___fontStyleModifier_13;
	int32_t ___renderMode_14;
	int32_t ___includeFontFeatures_15;
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

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
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

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

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

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
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

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
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

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
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
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02  : public UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB
{
};

// Michsky.UI.ModernUIPack.WindowManager/WindowChangeEvent
struct WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C  : public UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A
{
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9  : public MulticastDelegate_t
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

// TMPro.TMP_Asset
struct TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Int32 TMPro.TMP_Asset::m_InstanceID
	int32_t ___m_InstanceID_4;
	// System.Int32 TMPro.TMP_Asset::hashCode
	int32_t ___hashCode_5;
	// UnityEngine.Material TMPro.TMP_Asset::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_6;
	// System.Int32 TMPro.TMP_Asset::materialHashCode
	int32_t ___materialHashCode_7;
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Michsky.UI.ModernUIPack.UIManager
struct UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean Michsky.UI.ModernUIPack.UIManager::enableDynamicUpdate
	bool ___enableDynamicUpdate_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManager::enableExtendedColorPicker
	bool ___enableExtendedColorPicker_5;
	// System.Boolean Michsky.UI.ModernUIPack.UIManager::editorHints
	bool ___editorHints_6;
	// System.Boolean Michsky.UI.ModernUIPack.UIManager::changeRootFolder
	bool ___changeRootFolder_7;
	// System.String Michsky.UI.ModernUIPack.UIManager::rootFolder
	String_t* ___rootFolder_8;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::animatedIconColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___animatedIconColor_9;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::contextBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___contextBackgroundColor_10;
	// Michsky.UI.ModernUIPack.UIManager/ButtonThemeType Michsky.UI.ModernUIPack.UIManager::buttonThemeType
	int32_t ___buttonThemeType_11;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::buttonFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___buttonFont_12;
	// System.Single Michsky.UI.ModernUIPack.UIManager::buttonFontSize
	float ___buttonFontSize_13;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::buttonBorderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonBorderColor_14;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::buttonFilledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonFilledColor_15;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::buttonTextBasicColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonTextBasicColor_16;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::buttonTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonTextColor_17;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::buttonTextHighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonTextHighlightedColor_18;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::buttonIconBasicColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonIconBasicColor_19;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::buttonIconColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonIconColor_20;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::buttonIconHighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___buttonIconHighlightedColor_21;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::dropdownItemFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___dropdownItemFont_22;
	// System.Single Michsky.UI.ModernUIPack.UIManager::dropdownItemFontSize
	float ___dropdownItemFontSize_23;
	// Michsky.UI.ModernUIPack.UIManager/DropdownThemeType Michsky.UI.ModernUIPack.UIManager::dropdownThemeType
	int32_t ___dropdownThemeType_24;
	// Michsky.UI.ModernUIPack.UIManager/DropdownAnimationType Michsky.UI.ModernUIPack.UIManager::dropdownAnimationType
	int32_t ___dropdownAnimationType_25;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::dropdownFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___dropdownFont_26;
	// System.Single Michsky.UI.ModernUIPack.UIManager::dropdownFontSize
	float ___dropdownFontSize_27;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::dropdownColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___dropdownColor_28;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::dropdownTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___dropdownTextColor_29;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::dropdownIconColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___dropdownIconColor_30;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::dropdownItemColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___dropdownItemColor_31;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::dropdownItemTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___dropdownItemTextColor_32;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::dropdownItemIconColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___dropdownItemIconColor_33;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::selectorFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___selectorFont_34;
	// System.Single Michsky.UI.ModernUIPack.UIManager::hSelectorFontSize
	float ___hSelectorFontSize_35;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::selectorColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___selectorColor_36;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::selectorHighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___selectorHighlightedColor_37;
	// System.Boolean Michsky.UI.ModernUIPack.UIManager::hSelectorInvertAnimation
	bool ___hSelectorInvertAnimation_38;
	// System.Boolean Michsky.UI.ModernUIPack.UIManager::hSelectorLoopSelection
	bool ___hSelectorLoopSelection_39;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::inputFieldFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___inputFieldFont_40;
	// System.Single Michsky.UI.ModernUIPack.UIManager::inputFieldFontSize
	float ___inputFieldFontSize_41;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::inputFieldColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___inputFieldColor_42;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::modalWindowTitleFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___modalWindowTitleFont_43;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::modalWindowContentFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___modalWindowContentFont_44;
	// Michsky.UI.ModernUIPack.UIManager/DropdownThemeType Michsky.UI.ModernUIPack.UIManager::modalThemeType
	int32_t ___modalThemeType_45;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::modalWindowTitleColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___modalWindowTitleColor_46;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::modalWindowDescriptionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___modalWindowDescriptionColor_47;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::modalWindowIconColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___modalWindowIconColor_48;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::modalWindowBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___modalWindowBackgroundColor_49;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::modalWindowContentPanelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___modalWindowContentPanelColor_50;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::notificationTitleFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___notificationTitleFont_51;
	// System.Single Michsky.UI.ModernUIPack.UIManager::notificationTitleFontSize
	float ___notificationTitleFontSize_52;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::notificationDescriptionFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___notificationDescriptionFont_53;
	// System.Single Michsky.UI.ModernUIPack.UIManager::notificationDescriptionFontSize
	float ___notificationDescriptionFontSize_54;
	// Michsky.UI.ModernUIPack.UIManager/NotificationThemeType Michsky.UI.ModernUIPack.UIManager::notificationThemeType
	int32_t ___notificationThemeType_55;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::notificationBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___notificationBackgroundColor_56;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::notificationTitleColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___notificationTitleColor_57;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::notificationDescriptionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___notificationDescriptionColor_58;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::notificationIconColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___notificationIconColor_59;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::progressBarLabelFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___progressBarLabelFont_60;
	// System.Single Michsky.UI.ModernUIPack.UIManager::progressBarLabelFontSize
	float ___progressBarLabelFontSize_61;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::progressBarColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___progressBarColor_62;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::progressBarBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___progressBarBackgroundColor_63;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::progressBarLoopBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___progressBarLoopBackgroundColor_64;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::progressBarLabelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___progressBarLabelColor_65;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::scrollbarColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___scrollbarColor_66;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::scrollbarBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___scrollbarBackgroundColor_67;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::sliderLabelFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___sliderLabelFont_68;
	// System.Single Michsky.UI.ModernUIPack.UIManager::sliderLabelFontSize
	float ___sliderLabelFontSize_69;
	// Michsky.UI.ModernUIPack.UIManager/SliderThemeType Michsky.UI.ModernUIPack.UIManager::sliderThemeType
	int32_t ___sliderThemeType_70;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::sliderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sliderColor_71;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::sliderBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sliderBackgroundColor_72;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::sliderLabelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sliderLabelColor_73;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::sliderPopupLabelColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sliderPopupLabelColor_74;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::sliderHandleColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___sliderHandleColor_75;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::switchBorderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___switchBorderColor_76;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::switchBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___switchBackgroundColor_77;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::switchHandleOnColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___switchHandleOnColor_78;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::switchHandleOffColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___switchHandleOffColor_79;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::toggleFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___toggleFont_80;
	// System.Single Michsky.UI.ModernUIPack.UIManager::toggleFontSize
	float ___toggleFontSize_81;
	// Michsky.UI.ModernUIPack.UIManager/ToggleThemeType Michsky.UI.ModernUIPack.UIManager::toggleThemeType
	int32_t ___toggleThemeType_82;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::toggleTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___toggleTextColor_83;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::toggleBorderColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___toggleBorderColor_84;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::toggleBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___toggleBackgroundColor_85;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::toggleCheckColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___toggleCheckColor_86;
	// TMPro.TMP_FontAsset Michsky.UI.ModernUIPack.UIManager::tooltipFont
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___tooltipFont_87;
	// System.Single Michsky.UI.ModernUIPack.UIManager::tooltipFontSize
	float ___tooltipFontSize_88;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::tooltipTextColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tooltipTextColor_89;
	// UnityEngine.Color Michsky.UI.ModernUIPack.UIManager::tooltipBackgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___tooltipBackgroundColor_90;
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

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

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160  : public TMP_Asset_t135A047D4F5CBBA9CD356B762B55AB164122B969
{
	// System.String TMPro.TMP_FontAsset::m_Version
	String_t* ___m_Version_8;
	// System.String TMPro.TMP_FontAsset::m_SourceFontFileGUID
	String_t* ___m_SourceFontFileGUID_9;
	// UnityEngine.Font TMPro.TMP_FontAsset::m_SourceFontFile
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___m_SourceFontFile_10;
	// TMPro.AtlasPopulationMode TMPro.TMP_FontAsset::m_AtlasPopulationMode
	int32_t ___m_AtlasPopulationMode_11;
	// UnityEngine.TextCore.FaceInfo TMPro.TMP_FontAsset::m_FaceInfo
	FaceInfo_t12F0319E555A62CBA1D9E51A16C7963393932756 ___m_FaceInfo_12;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphTable
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphTable_13;
	// System.Collections.Generic.Dictionary`2<System.UInt32,UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphLookupDictionary
	Dictionary_2_tC61348D10610A6B3D7B65102D82AC3467D59EAA7* ___m_GlyphLookupDictionary_14;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterTable
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharacterTable_15;
	// System.Collections.Generic.Dictionary`2<System.UInt32,TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharacterLookupDictionary
	Dictionary_2_tCB5FEF8D6CEA1557D9B9BA25946AD6BF3E6C14D0* ___m_CharacterLookupDictionary_16;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::m_AtlasTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___m_AtlasTexture_17;
	// UnityEngine.Texture2D[] TMPro.TMP_FontAsset::m_AtlasTextures
	Texture2DU5BU5D_t05332F1E3F7D4493E304C702201F9BE4F9236191* ___m_AtlasTextures_18;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasTextureIndex
	int32_t ___m_AtlasTextureIndex_19;
	// System.Boolean TMPro.TMP_FontAsset::m_IsMultiAtlasTexturesEnabled
	bool ___m_IsMultiAtlasTexturesEnabled_20;
	// System.Boolean TMPro.TMP_FontAsset::m_ClearDynamicDataOnBuild
	bool ___m_ClearDynamicDataOnBuild_21;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_UsedGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_UsedGlyphRects_22;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.GlyphRect> TMPro.TMP_FontAsset::m_FreeGlyphRects
	List_1_t425D3A455811E316D2DF73E46CF9CD90A4341C1B* ___m_FreeGlyphRects_23;
	// TMPro.FaceInfo_Legacy TMPro.TMP_FontAsset::m_fontInfo
	FaceInfo_Legacy_t23B118EFD5AB7162515ABF18C0212DF155CCF7B8* ___m_fontInfo_24;
	// UnityEngine.Texture2D TMPro.TMP_FontAsset::atlas
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___atlas_25;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasWidth
	int32_t ___m_AtlasWidth_26;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasHeight
	int32_t ___m_AtlasHeight_27;
	// System.Int32 TMPro.TMP_FontAsset::m_AtlasPadding
	int32_t ___m_AtlasPadding_28;
	// UnityEngine.TextCore.LowLevel.GlyphRenderMode TMPro.TMP_FontAsset::m_AtlasRenderMode
	int32_t ___m_AtlasRenderMode_29;
	// System.Collections.Generic.List`1<TMPro.TMP_Glyph> TMPro.TMP_FontAsset::m_glyphInfoList
	List_1_tAB7976FADCF872E418770E60783056C23394843D* ___m_glyphInfoList_30;
	// TMPro.KerningTable TMPro.TMP_FontAsset::m_KerningTable
	KerningTable_t040C3FE3B519B12AADE1C5B00628581551D5AB6B* ___m_KerningTable_31;
	// TMPro.TMP_FontFeatureTable TMPro.TMP_FontAsset::m_FontFeatureTable
	TMP_FontFeatureTable_t726A09E64FDF682A8FFE294BB6CFE7747F6C40EA* ___m_FontFeatureTable_32;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::fallbackFontAssets
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___fallbackFontAssets_33;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::m_FallbackFontAssetTable
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___m_FallbackFontAssetTable_34;
	// TMPro.FontAssetCreationSettings TMPro.TMP_FontAsset::m_CreationSettings
	FontAssetCreationSettings_t2B94078737A72F814E8BC2126F967B94231190DF ___m_CreationSettings_35;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::m_FontWeightTable
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___m_FontWeightTable_36;
	// TMPro.TMP_FontWeightPair[] TMPro.TMP_FontAsset::fontWeights
	TMP_FontWeightPairU5BU5D_t0A3A5955F13FEB2F7329D81BA157110DB99F9F37* ___fontWeights_37;
	// System.Single TMPro.TMP_FontAsset::normalStyle
	float ___normalStyle_38;
	// System.Single TMPro.TMP_FontAsset::normalSpacingOffset
	float ___normalSpacingOffset_39;
	// System.Single TMPro.TMP_FontAsset::boldStyle
	float ___boldStyle_40;
	// System.Single TMPro.TMP_FontAsset::boldSpacing
	float ___boldSpacing_41;
	// System.Byte TMPro.TMP_FontAsset::italicStyle
	uint8_t ___italicStyle_42;
	// System.Byte TMPro.TMP_FontAsset::tabSize
	uint8_t ___tabSize_43;
	// System.Boolean TMPro.TMP_FontAsset::IsFontAssetLookupTablesDirty
	bool ___IsFontAssetLookupTablesDirty_44;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::FallbackSearchQueryLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___FallbackSearchQueryLookup_53;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsToRender
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsToRender_59;
	// System.Collections.Generic.List`1<UnityEngine.TextCore.Glyph> TMPro.TMP_FontAsset::m_GlyphsRendered
	List_1_t95DB74B8EE315F8F92B7B96D93C901C8C3F6FE2C* ___m_GlyphsRendered_60;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexList_61;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphIndexListNewlyAdded
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphIndexListNewlyAdded_62;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAdd
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___m_GlyphsToAdd_63;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_GlyphsToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_GlyphsToAddLookup_64;
	// System.Collections.Generic.List`1<TMPro.TMP_Character> TMPro.TMP_FontAsset::m_CharactersToAdd
	List_1_tCE1ACAA0C2736A7797B2C134895298CAB10BEB5E* ___m_CharactersToAdd_65;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_CharactersToAddLookup
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_CharactersToAddLookup_66;
	// System.Collections.Generic.List`1<System.UInt32> TMPro.TMP_FontAsset::s_MissingCharacterList
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* ___s_MissingCharacterList_67;
	// System.Collections.Generic.HashSet`1<System.UInt32> TMPro.TMP_FontAsset::m_MissingUnicodesFromFontFile
	HashSet_1_t5DD20B42149A11AEBF12A75505306E6EFC34943A* ___m_MissingUnicodesFromFontFile_68;
};

struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ReadFontAssetDefinitionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ReadFontAssetDefinitionMarker_45;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_AddSynthesizedCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_AddSynthesizedCharactersMarker_46;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharacterMarker_47;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_TryAddCharactersMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_TryAddCharactersMarker_48;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateGlyphAdjustmentRecordsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateGlyphAdjustmentRecordsMarker_49;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_ClearFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ClearFontAssetDataMarker_50;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_FontAsset::k_UpdateFontAssetDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_UpdateFontAssetDataMarker_51;
	// System.String TMPro.TMP_FontAsset::s_DefaultMaterialSuffix
	String_t* ___s_DefaultMaterialSuffix_52;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_SearchedFontAssetLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_SearchedFontAssetLookup_54;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_FontFeaturesUpdateQueue_55;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_FontFeaturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_FontFeaturesUpdateQueueLookup_56;
	// System.Collections.Generic.List`1<TMPro.TMP_FontAsset> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueue
	List_1_t06C3ABB0C6F2347B32881E33D154431EADAE3ECF* ___k_FontAssets_AtlasTexturesUpdateQueue_57;
	// System.Collections.Generic.HashSet`1<System.Int32> TMPro.TMP_FontAsset::k_FontAssets_AtlasTexturesUpdateQueueLookup
	HashSet_1_t4A2F2B74276D0AD3ED0F873045BD61E9504ECAE2* ___k_FontAssets_AtlasTexturesUpdateQueueLookup_58;
	// System.UInt32[] TMPro.TMP_FontAsset::k_GlyphIndexArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___k_GlyphIndexArray_69;
};

// Michsky.UI.ModernUIPack.CustomDropdown
struct CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Animator Michsky.UI.ModernUIPack.CustomDropdown::dropdownAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___dropdownAnimator_4;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.CustomDropdown::triggerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___triggerObject_5;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.CustomDropdown::selectedText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___selectedText_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.CustomDropdown::selectedImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___selectedImage_7;
	// UnityEngine.Transform Michsky.UI.ModernUIPack.CustomDropdown::itemParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___itemParent_8;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.CustomDropdown::itemObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___itemObject_9;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.CustomDropdown::scrollbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scrollbar_10;
	// UnityEngine.UI.VerticalLayoutGroup Michsky.UI.ModernUIPack.CustomDropdown::itemList
	VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* ___itemList_11;
	// UnityEngine.Transform Michsky.UI.ModernUIPack.CustomDropdown::listParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___listParent_12;
	// UnityEngine.AudioSource Michsky.UI.ModernUIPack.CustomDropdown::soundSource
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___soundSource_13;
	// UnityEngine.Transform Michsky.UI.ModernUIPack.CustomDropdown::currentListParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currentListParent_14;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::enableIcon
	bool ___enableIcon_15;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::enableTrigger
	bool ___enableTrigger_16;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::enableScrollbar
	bool ___enableScrollbar_17;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::setHighPriorty
	bool ___setHighPriorty_18;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::outOnPointerExit
	bool ___outOnPointerExit_19;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::isListItem
	bool ___isListItem_20;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::invokeAtStart
	bool ___invokeAtStart_21;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::enableDropdownSounds
	bool ___enableDropdownSounds_22;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::useHoverSound
	bool ___useHoverSound_23;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::useClickSound
	bool ___useClickSound_24;
	// Michsky.UI.ModernUIPack.CustomDropdown/AnimationType Michsky.UI.ModernUIPack.CustomDropdown::animationType
	int32_t ___animationType_25;
	// System.Int32 Michsky.UI.ModernUIPack.CustomDropdown::itemPaddingTop
	int32_t ___itemPaddingTop_26;
	// System.Int32 Michsky.UI.ModernUIPack.CustomDropdown::itemPaddingBottom
	int32_t ___itemPaddingBottom_27;
	// System.Int32 Michsky.UI.ModernUIPack.CustomDropdown::itemPaddingLeft
	int32_t ___itemPaddingLeft_28;
	// System.Int32 Michsky.UI.ModernUIPack.CustomDropdown::itemPaddingRight
	int32_t ___itemPaddingRight_29;
	// System.Int32 Michsky.UI.ModernUIPack.CustomDropdown::itemSpacing
	int32_t ___itemSpacing_30;
	// System.Int32 Michsky.UI.ModernUIPack.CustomDropdown::selectedItemIndex
	int32_t ___selectedItemIndex_31;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::saveSelected
	bool ___saveSelected_32;
	// System.String Michsky.UI.ModernUIPack.CustomDropdown::dropdownTag
	String_t* ___dropdownTag_33;
	// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.CustomDropdown/Item> Michsky.UI.ModernUIPack.CustomDropdown::dropdownItems
	List_1_t8E0D2E61E4E8ABA65FB86A559AAD3A78A49D6A8B* ___dropdownItems_34;
	// Michsky.UI.ModernUIPack.CustomDropdown/DropdownEvent Michsky.UI.ModernUIPack.CustomDropdown::dropdownEvent
	DropdownEvent_t9CEBE75B0F525C2F1126C932DA7DD110E5715489* ___dropdownEvent_35;
	// UnityEngine.AudioClip Michsky.UI.ModernUIPack.CustomDropdown::hoverSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___hoverSound_36;
	// UnityEngine.AudioClip Michsky.UI.ModernUIPack.CustomDropdown::clickSound
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clickSound_37;
	// System.Boolean Michsky.UI.ModernUIPack.CustomDropdown::isOn
	bool ___isOn_38;
	// System.Int32 Michsky.UI.ModernUIPack.CustomDropdown::index
	int32_t ___index_39;
	// System.Int32 Michsky.UI.ModernUIPack.CustomDropdown::siblingIndex
	int32_t ___siblingIndex_40;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.CustomDropdown::setItemText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___setItemText_41;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.CustomDropdown::setItemImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___setItemImage_42;
	// UnityEngine.EventSystems.EventTrigger Michsky.UI.ModernUIPack.CustomDropdown::triggerEvent
	EventTrigger_tAEBFB7A16CA99343EA87722F78884BF8646BAE1B* ___triggerEvent_43;
	// UnityEngine.Sprite Michsky.UI.ModernUIPack.CustomDropdown::imageHelper
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___imageHelper_44;
	// System.String Michsky.UI.ModernUIPack.CustomDropdown::textHelper
	String_t* ___textHelper_45;
};

// Michsky.UI.ModernUIPack.CustomToggle
struct CustomToggle_t7F72D9CADC7D528DCB945B84C3AA2B299BC6F44F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Toggle Michsky.UI.ModernUIPack.CustomToggle::toggleObject
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___toggleObject_4;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.CustomToggle::toggleAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___toggleAnimator_5;
};

// Michsky.UI.ModernUIPack.DropdownMultiSelect
struct DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.DropdownMultiSelect::triggerObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___triggerObject_4;
	// UnityEngine.Transform Michsky.UI.ModernUIPack.DropdownMultiSelect::itemParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___itemParent_5;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.DropdownMultiSelect::itemObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___itemObject_6;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.DropdownMultiSelect::scrollbar
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___scrollbar_7;
	// UnityEngine.UI.VerticalLayoutGroup Michsky.UI.ModernUIPack.DropdownMultiSelect::itemList
	VerticalLayoutGroup_t06B5E51FC8051BF2009E6494876FBB9F3E5320B8* ___itemList_8;
	// UnityEngine.Transform Michsky.UI.ModernUIPack.DropdownMultiSelect::currentListParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___currentListParent_9;
	// UnityEngine.Transform Michsky.UI.ModernUIPack.DropdownMultiSelect::listParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___listParent_10;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.DropdownMultiSelect::dropdownAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___dropdownAnimator_11;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.DropdownMultiSelect::setItemText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___setItemText_12;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::enableIcon
	bool ___enableIcon_13;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::enableTrigger
	bool ___enableTrigger_14;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::enableScrollbar
	bool ___enableScrollbar_15;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::setHighPriorty
	bool ___setHighPriorty_16;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::outOnPointerExit
	bool ___outOnPointerExit_17;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::isListItem
	bool ___isListItem_18;
	// Michsky.UI.ModernUIPack.DropdownMultiSelect/AnimationType Michsky.UI.ModernUIPack.DropdownMultiSelect::animationType
	int32_t ___animationType_19;
	// System.Int32 Michsky.UI.ModernUIPack.DropdownMultiSelect::itemPaddingTop
	int32_t ___itemPaddingTop_20;
	// System.Int32 Michsky.UI.ModernUIPack.DropdownMultiSelect::itemPaddingBottom
	int32_t ___itemPaddingBottom_21;
	// System.Int32 Michsky.UI.ModernUIPack.DropdownMultiSelect::itemPaddingLeft
	int32_t ___itemPaddingLeft_22;
	// System.Int32 Michsky.UI.ModernUIPack.DropdownMultiSelect::itemPaddingRight
	int32_t ___itemPaddingRight_23;
	// System.Int32 Michsky.UI.ModernUIPack.DropdownMultiSelect::itemSpacing
	int32_t ___itemSpacing_24;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::saveSelected
	bool ___saveSelected_25;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::invokeAtStart
	bool ___invokeAtStart_26;
	// System.String Michsky.UI.ModernUIPack.DropdownMultiSelect::toggleTag
	String_t* ___toggleTag_27;
	// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.DropdownMultiSelect/Item> Michsky.UI.ModernUIPack.DropdownMultiSelect::dropdownItems
	List_1_tE05A2B10A670006DBCF2772B374ADDF9ACCC7265* ___dropdownItems_28;
	// System.String Michsky.UI.ModernUIPack.DropdownMultiSelect::textHelper
	String_t* ___textHelper_29;
	// System.String Michsky.UI.ModernUIPack.DropdownMultiSelect::newItemTitle
	String_t* ___newItemTitle_30;
	// System.Boolean Michsky.UI.ModernUIPack.DropdownMultiSelect::isOn
	bool ___isOn_31;
	// System.Int32 Michsky.UI.ModernUIPack.DropdownMultiSelect::iHelper
	int32_t ___iHelper_32;
	// System.Int32 Michsky.UI.ModernUIPack.DropdownMultiSelect::siblingIndex
	int32_t ___siblingIndex_33;
	// UnityEngine.EventSystems.EventTrigger Michsky.UI.ModernUIPack.DropdownMultiSelect::triggerEvent
	EventTrigger_tAEBFB7A16CA99343EA87722F78884BF8646BAE1B* ___triggerEvent_34;
};

// Michsky.UI.ModernUIPack.HorizontalSelector
struct HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.HorizontalSelector::label
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___label_4;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.HorizontalSelector::labelHelper
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___labelHelper_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.HorizontalSelector::labelIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___labelIcon_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.HorizontalSelector::labelIconHelper
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___labelIconHelper_7;
	// UnityEngine.Transform Michsky.UI.ModernUIPack.HorizontalSelector::indicatorParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___indicatorParent_8;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.HorizontalSelector::indicatorObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___indicatorObject_9;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.HorizontalSelector::selectorAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___selectorAnimator_10;
	// UnityEngine.UI.HorizontalLayoutGroup Michsky.UI.ModernUIPack.HorizontalSelector::contentLayout
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* ___contentLayout_11;
	// UnityEngine.UI.HorizontalLayoutGroup Michsky.UI.ModernUIPack.HorizontalSelector::contentLayoutHelper
	HorizontalLayoutGroup_t615DFEC1382E2E207BC9CBAA9A511F7ED93965BA* ___contentLayoutHelper_12;
	// System.String Michsky.UI.ModernUIPack.HorizontalSelector::newItemTitle
	String_t* ___newItemTitle_13;
	// System.Boolean Michsky.UI.ModernUIPack.HorizontalSelector::enableIcon
	bool ___enableIcon_14;
	// System.Boolean Michsky.UI.ModernUIPack.HorizontalSelector::saveValue
	bool ___saveValue_15;
	// System.String Michsky.UI.ModernUIPack.HorizontalSelector::selectorTag
	String_t* ___selectorTag_16;
	// System.Boolean Michsky.UI.ModernUIPack.HorizontalSelector::enableIndicators
	bool ___enableIndicators_17;
	// System.Boolean Michsky.UI.ModernUIPack.HorizontalSelector::invokeAtStart
	bool ___invokeAtStart_18;
	// System.Boolean Michsky.UI.ModernUIPack.HorizontalSelector::invertAnimation
	bool ___invertAnimation_19;
	// System.Boolean Michsky.UI.ModernUIPack.HorizontalSelector::loopSelection
	bool ___loopSelection_20;
	// System.Single Michsky.UI.ModernUIPack.HorizontalSelector::iconScale
	float ___iconScale_21;
	// System.Int32 Michsky.UI.ModernUIPack.HorizontalSelector::contentSpacing
	int32_t ___contentSpacing_22;
	// System.Int32 Michsky.UI.ModernUIPack.HorizontalSelector::defaultIndex
	int32_t ___defaultIndex_23;
	// System.Int32 Michsky.UI.ModernUIPack.HorizontalSelector::index
	int32_t ___index_24;
	// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.HorizontalSelector/Item> Michsky.UI.ModernUIPack.HorizontalSelector::itemList
	List_1_t9A05FAC3397936FA51BE4C42897111635919000A* ___itemList_25;
	// Michsky.UI.ModernUIPack.HorizontalSelector/SelectorEvent Michsky.UI.ModernUIPack.HorizontalSelector::onValueChanged
	SelectorEvent_t9941DE301494150698473567265F58F3349F7AF4* ___onValueChanged_26;
};

// Michsky.UI.ModernUIPack.TooltipContent
struct TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Michsky.UI.ModernUIPack.TooltipContent::description
	String_t* ___description_4;
	// System.Single Michsky.UI.ModernUIPack.TooltipContent::delay
	float ___delay_5;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.TooltipContent::tooltipRect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tooltipRect_6;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.TooltipContent::descriptionText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___descriptionText_7;
	// System.Boolean Michsky.UI.ModernUIPack.TooltipContent::forceToUpdate
	bool ___forceToUpdate_8;
	// Michsky.UI.ModernUIPack.TooltipManager Michsky.UI.ModernUIPack.TooltipContent::tpManager
	TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* ___tpManager_9;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.TooltipContent::tooltipAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___tooltipAnimator_10;
};

// Michsky.UI.ModernUIPack.TooltipManager
struct TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Canvas Michsky.UI.ModernUIPack.TooltipManager::mainCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___mainCanvas_4;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.TooltipManager::tooltipObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tooltipObject_5;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.TooltipManager::tooltipContent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___tooltipContent_6;
	// System.Single Michsky.UI.ModernUIPack.TooltipManager::tooltipSmoothness
	float ___tooltipSmoothness_7;
	// System.Boolean Michsky.UI.ModernUIPack.TooltipManager::allowUpdating
	bool ___allowUpdating_8;
	// System.Int32 Michsky.UI.ModernUIPack.TooltipManager::vBorderTop
	int32_t ___vBorderTop_9;
	// System.Int32 Michsky.UI.ModernUIPack.TooltipManager::vBorderBottom
	int32_t ___vBorderBottom_10;
	// System.Int32 Michsky.UI.ModernUIPack.TooltipManager::hBorderLeft
	int32_t ___hBorderLeft_11;
	// System.Int32 Michsky.UI.ModernUIPack.TooltipManager::hBorderRight
	int32_t ___hBorderRight_12;
	// UnityEngine.Vector2 Michsky.UI.ModernUIPack.TooltipManager::uiPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uiPos_13;
	// UnityEngine.Vector3 Michsky.UI.ModernUIPack.TooltipManager::cursorPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cursorPos_14;
	// UnityEngine.RectTransform Michsky.UI.ModernUIPack.TooltipManager::tooltipRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___tooltipRect_15;
	// UnityEngine.RectTransform Michsky.UI.ModernUIPack.TooltipManager::tooltipZHelper
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___tooltipZHelper_16;
	// UnityEngine.Vector3 Michsky.UI.ModernUIPack.TooltipManager::contentPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___contentPos_17;
	// UnityEngine.Vector3 Michsky.UI.ModernUIPack.TooltipManager::tooltipVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tooltipVelocity_18;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Michsky.UI.ModernUIPack.UIManagerAnimatedIcon
struct UIManagerAnimatedIcon_t36FD30605E0D1CB7E1DA88FF739613EBAAFA766C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::webglMode
	bool ___webglMode_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::images
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___images_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::imagesWithAlpha
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___imagesWithAlpha_7;
};

// Michsky.UI.ModernUIPack.UIManagerButton
struct UIManagerButton_tDBCC56BB5AC64BEE72F0EE022087F149A0576A76  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerButton::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// Michsky.UI.ModernUIPack.UIManagerButton/ButtonType Michsky.UI.ModernUIPack.UIManagerButton::buttonType
	int32_t ___buttonType_5;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerButton::webglMode
	bool ___webglMode_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicFilled
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicFilled_7;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::basicText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___basicText_8;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOnlyIconFilled
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOnlyIconFilled_9;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOnlyIconIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOnlyIconIcon_10;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicWithIconFilled
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicWithIconFilled_11;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicWithIconIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicWithIconIcon_12;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::basicWithIconText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___basicWithIconText_13;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineBorder
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineBorder_14;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineFilled
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineFilled_15;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___basicOutlineText_16;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineTextHighligted
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___basicOutlineTextHighligted_17;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineOOBorder
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineOOBorder_18;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineOOFilled
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineOOFilled_19;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineOOIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineOOIcon_20;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineOOIconHighlighted
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineOOIconHighlighted_21;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineWOBorder
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineWOBorder_22;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineWOFilled
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineWOFilled_23;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineWOIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineWOIcon_24;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineWOIconHighlighted
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___basicOutlineWOIconHighlighted_25;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineWOText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___basicOutlineWOText_26;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::basicOutlineWOTextHighligted
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___basicOutlineWOTextHighligted_27;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::radialOOBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___radialOOBackground_28;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::radialOOIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___radialOOIcon_29;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::radialOutlineOOBorder
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___radialOutlineOOBorder_30;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::radialOutlineOOFilled
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___radialOutlineOOFilled_31;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::radialOutlineOOIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___radialOutlineOOIcon_32;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::radialOutlineOOIconHighlighted
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___radialOutlineOOIconHighlighted_33;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::roundedBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___roundedBackground_34;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::roundedText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___roundedText_35;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::roundedOutlineBorder
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___roundedOutlineBorder_36;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerButton::roundedOutlineFilled
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___roundedOutlineFilled_37;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::roundedOutlineText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___roundedOutlineText_38;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerButton::roundedOutlineTextHighligted
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___roundedOutlineTextHighligted_39;
};

// Michsky.UI.ModernUIPack.UIManagerContextMenu
struct UIManagerContextMenu_t5202ADB13D57B215B622761F7909D1C3F5798127  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerContextMenu::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerContextMenu::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerContextMenu::backgroundImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___backgroundImage_6;
};

// Michsky.UI.ModernUIPack.UIManagerDropdown
struct UIManagerDropdown_t3D0E999C173335861F863A8682182F435C0074BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerDropdown::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerDropdown::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerDropdown::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerDropdown::contentBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___contentBackground_7;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerDropdown::mainIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___mainIcon_8;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerDropdown::mainText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___mainText_9;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerDropdown::expandIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___expandIcon_10;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerDropdown::itemBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___itemBackground_11;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerDropdown::itemIcon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___itemIcon_12;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerDropdown::itemText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___itemText_13;
	// Michsky.UI.ModernUIPack.CustomDropdown Michsky.UI.ModernUIPack.UIManagerDropdown::dropdownMain
	CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* ___dropdownMain_14;
	// Michsky.UI.ModernUIPack.DropdownMultiSelect Michsky.UI.ModernUIPack.UIManagerDropdown::dropdownMulti
	DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE* ___dropdownMulti_15;
};

// Michsky.UI.ModernUIPack.UIManagerHSelector
struct UIManagerHSelector_t5118B938B6788E1B7CD8E66D7A73F285D15D828B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerHSelector::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerHSelector::webglMode
	bool ___webglMode_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Michsky.UI.ModernUIPack.UIManagerHSelector::images
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___images_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Michsky.UI.ModernUIPack.UIManagerHSelector::imagesHighlighted
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___imagesHighlighted_7;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Michsky.UI.ModernUIPack.UIManagerHSelector::texts
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___texts_8;
	// Michsky.UI.ModernUIPack.HorizontalSelector Michsky.UI.ModernUIPack.UIManagerHSelector::hSelector
	HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791* ___hSelector_9;
};

// Michsky.UI.ModernUIPack.UIManagerInputField
struct UIManagerInputField_t23A219884764CEDF5AE579FECC10FF2B97987A12  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerInputField::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerInputField::webglMode
	bool ___webglMode_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Michsky.UI.ModernUIPack.UIManagerInputField::images
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___images_6;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> Michsky.UI.ModernUIPack.UIManagerInputField::texts
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___texts_7;
};

// Michsky.UI.ModernUIPack.UIManagerModalWindow
struct UIManagerModalWindow_tF334E46DFD82D725A2171587092C097003A9EC84  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerModalWindow::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerModalWindow::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerModalWindow::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerModalWindow::contentBackground
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___contentBackground_7;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerModalWindow::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_8;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerModalWindow::title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___title_9;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerModalWindow::description
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___description_10;
};

// Michsky.UI.ModernUIPack.UIManagerNotification
struct UIManagerNotification_t88F573098C62D58BBBC59551CD498BE0C6D14C0D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerNotification::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerNotification::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerNotification::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerNotification::icon
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___icon_7;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerNotification::title
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___title_8;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerNotification::description
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___description_9;
};

// Michsky.UI.ModernUIPack.UIManagerPieChart
struct UIManagerPieChart_t4C0D858AF056796F23A21F475AA2251BBB56C55E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Michsky.UI.ModernUIPack.UIManagerProgressBar
struct UIManagerProgressBar_t3E9D23017D4282C00C7CBD36D94BB6BD53056100  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerProgressBar::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerProgressBar::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerProgressBar::bar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bar_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerProgressBar::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_7;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerProgressBar::label
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___label_8;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerProgressBar::dynamicUpdateEnabled
	bool ___dynamicUpdateEnabled_9;
};

// Michsky.UI.ModernUIPack.UIManagerProgressBarLoop
struct UIManagerProgressBarLoop_t00705338CCFCC39D4B98E73931D562028D8A1811  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::hasBackground
	bool ___hasBackground_5;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::useRegularBackground
	bool ___useRegularBackground_6;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::webglMode
	bool ___webglMode_7;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::bar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bar_8;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_9;
};

// Michsky.UI.ModernUIPack.UIManagerScrollbar
struct UIManagerScrollbar_tEC34CA446FD18E5B69031806C8EB87C4F883C547  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerScrollbar::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerScrollbar::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerScrollbar::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerScrollbar::bar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bar_7;
};

// Michsky.UI.ModernUIPack.UIManagerSlider
struct UIManagerSlider_t3E93FA1D8585657FE1E890C0668F88254CE97C6A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerSlider::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerSlider::hasLabel
	bool ___hasLabel_5;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerSlider::hasPopupLabel
	bool ___hasPopupLabel_6;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerSlider::webglMode
	bool ___webglMode_7;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerSlider::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_8;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerSlider::bar
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___bar_9;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerSlider::handle
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___handle_10;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerSlider::label
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___label_11;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerSlider::popupLabel
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___popupLabel_12;
};

// Michsky.UI.ModernUIPack.UIManagerSwitch
struct UIManagerSwitch_t10308E1F0F799B9D61640874FF2AEF87E2761C02  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerSwitch::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerSwitch::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerSwitch::border
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___border_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerSwitch::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_7;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerSwitch::handleOn
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___handleOn_8;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerSwitch::handleOff
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___handleOff_9;
};

// Michsky.UI.ModernUIPack.UIManagerToggle
struct UIManagerToggle_tF3715BC417FB445F6C94BC4518984FB61F64CF80  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerToggle::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerToggle::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerToggle::border
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___border_6;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerToggle::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_7;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerToggle::check
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___check_8;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerToggle::onLabel
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___onLabel_9;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerToggle::offLabel
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___offLabel_10;
};

// Michsky.UI.ModernUIPack.UIManagerTooltip
struct UIManagerTooltip_tB4C4AF938181B5351FE87A6BB5FFB1B9D9E76A91  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Michsky.UI.ModernUIPack.UIManager Michsky.UI.ModernUIPack.UIManagerTooltip::UIManagerAsset
	UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* ___UIManagerAsset_4;
	// System.Boolean Michsky.UI.ModernUIPack.UIManagerTooltip::webglMode
	bool ___webglMode_5;
	// UnityEngine.UI.Image Michsky.UI.ModernUIPack.UIManagerTooltip::background
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___background_6;
	// TMPro.TextMeshProUGUI Michsky.UI.ModernUIPack.UIManagerTooltip::text
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___text_7;
};

// Michsky.UI.ModernUIPack.UIManagerWindowManager
struct UIManagerWindowManager_tB4469D0FAA9F9E8D3EE1189E770DDC7DE1692660  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Michsky.UI.ModernUIPack.WindowManager
struct WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.WindowManager/WindowItem> Michsky.UI.ModernUIPack.WindowManager::windows
	List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* ___windows_4;
	// System.Int32 Michsky.UI.ModernUIPack.WindowManager::currentWindowIndex
	int32_t ___currentWindowIndex_5;
	// System.Int32 Michsky.UI.ModernUIPack.WindowManager::currentButtonIndex
	int32_t ___currentButtonIndex_6;
	// System.Int32 Michsky.UI.ModernUIPack.WindowManager::newWindowIndex
	int32_t ___newWindowIndex_7;
	// System.Boolean Michsky.UI.ModernUIPack.WindowManager::editMode
	bool ___editMode_8;
	// System.Boolean Michsky.UI.ModernUIPack.WindowManager::isFirstTime
	bool ___isFirstTime_9;
	// Michsky.UI.ModernUIPack.WindowManager/WindowChangeEvent Michsky.UI.ModernUIPack.WindowManager::onWindowChange
	WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C* ___onWindowChange_10;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.WindowManager::currentWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentWindow_11;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.WindowManager::nextWindow
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextWindow_12;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.WindowManager::currentButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentButton_13;
	// UnityEngine.GameObject Michsky.UI.ModernUIPack.WindowManager::nextButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___nextButton_14;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.WindowManager::currentWindowAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___currentWindowAnimator_15;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.WindowManager::nextWindowAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___nextWindowAnimator_16;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.WindowManager::currentButtonAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___currentButtonAnimator_17;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.WindowManager::nextButtonAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___nextButtonAnimator_18;
	// System.String Michsky.UI.ModernUIPack.WindowManager::windowFadeIn
	String_t* ___windowFadeIn_19;
	// System.String Michsky.UI.ModernUIPack.WindowManager::windowFadeOut
	String_t* ___windowFadeOut_20;
	// System.String Michsky.UI.ModernUIPack.WindowManager::buttonFadeIn
	String_t* ___buttonFadeIn_21;
	// System.String Michsky.UI.ModernUIPack.WindowManager::buttonFadeOut
	String_t* ___buttonFadeOut_22;
};

// Michsky.UI.ModernUIPack.WindowManagerButton
struct WindowManagerButton_t93F9B24A6E1C958C9CB1DED69613A7EF9FBA71F8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Michsky.UI.ModernUIPack.WindowManagerButton::enableMobileMode
	bool ___enableMobileMode_4;
	// UnityEngine.Animator Michsky.UI.ModernUIPack.WindowManagerButton::buttonAnimator
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___buttonAnimator_5;
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
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// Michsky.UI.ModernUIPack.WindowDragger
struct WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform Michsky.UI.ModernUIPack.WindowDragger::dragArea
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___dragArea_4;
	// UnityEngine.RectTransform Michsky.UI.ModernUIPack.WindowDragger::dragObject
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___dragObject_5;
	// System.Boolean Michsky.UI.ModernUIPack.WindowDragger::topOnClick
	bool ___topOnClick_6;
	// UnityEngine.Vector2 Michsky.UI.ModernUIPack.WindowDragger::originalLocalPointerPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___originalLocalPointerPosition_7;
	// UnityEngine.Vector3 Michsky.UI.ModernUIPack.WindowDragger::originalPanelLocalPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___originalPanelLocalPosition_8;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A  : public RuntimeArray
{
	ALIGN_FIELD (8) Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* m_Items[1];

	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* value)
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method) ;

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Toggle>()
inline Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
inline void UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB* __this, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tEEB36A367DCB5867E93AAF6BECAF3558CA71BECB*, UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*, const RuntimeMethod*))UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_gshared)(__this, ___call0, method);
}
// System.Void Michsky.UI.ModernUIPack.CustomToggle::UpdateState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomToggle_UpdateState_m818E137DC7FB529470CE6F6E98BEFA00FA5651FE (CustomToggle_t7F72D9CADC7D528DCB945B84C3AA2B299BC6F44F* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300 (String_t* ___name0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInChildren<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<Michsky.UI.ModernUIPack.TooltipManager>()
inline TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* GameObject_GetComponentInParent_TisTooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC_m5FC8D020A1DA3BCCD42B959CD2B6F110DCD95C06 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___layerIndex0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowTooltipU3Ed__10__ctor_m73AF8FAE69FDF4D4E0CA6A6C8782C6B24A4DD04A (U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateLayoutPositionU3Ed__11__ctor_m30BCEB48A70A47A92DCA5AA58536D91254C4E99E (U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.LayoutRebuilder::ForceRebuildLayoutImmediate(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___layoutRoot0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_pivot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponentInParent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m454971F9D9EA677E9FA85BEC6FA483F0D606BBFF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponentInParent_TisRuntimeObject_mDD9FD68B12361AC472D4A83310CAD793C02C6654_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.RectTransform::get_anchoredPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.TooltipManager::CheckForBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipManager_CheckForBounds_mCC500F7E4B36BDE4C6F04DC3BD06C44E9531D291 (TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* __this, const RuntimeMethod* method) ;
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___currentVelocity2, float ___smoothTime3, float ___maxSpeed4, float ___deltaTime5, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<Michsky.UI.ModernUIPack.UIManager>(System.String)
inline UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::UpdateAnimatedIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerAnimatedIcon_UpdateAnimatedIcon_mAAB11875DA11C4A255AE125F6EB2E2BF2E3D748C (UIManagerAnimatedIcon_t36FD30605E0D1CB7E1DA88FF739613EBAAFA766C* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Item(System.Int32)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979 (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.GameObject>::get_Count()
inline int32_t List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Michsky.UI.ModernUIPack.UIManagerButton::UpdateButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerButton_UpdateButton_mC8A56366684B5BBC95AE6BF98780F253E2AB6151 (UIManagerButton_tDBCC56BB5AC64BEE72F0EE022087F149A0576A76* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_font(TMPro.TMP_FontAsset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_fontSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerContextMenu::UpdateContextMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerContextMenu_UpdateContextMenu_m8290CACF35CBE7A9776FE5F1306ECE6E2481E2EC (UIManagerContextMenu_t5202ADB13D57B215B622761F7909D1C3F5798127* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Michsky.UI.ModernUIPack.CustomDropdown>()
inline CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* GameObject_GetComponent_TisCustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F_m4D11731CD25EFEB71A0661F018EC47306CB8364B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<Michsky.UI.ModernUIPack.DropdownMultiSelect>()
inline DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE* GameObject_GetComponent_TisDropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE_m4FA148F9D52010D52AD990611C404CCF8694B207 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Michsky.UI.ModernUIPack.UIManagerDropdown::UpdateDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerDropdown_UpdateDropdown_mD6E6CFA3F513D133581E19528C7D624835C0C5CA (UIManagerDropdown_t3D0E999C173335861F863A8682182F435C0074BE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<Michsky.UI.ModernUIPack.HorizontalSelector>()
inline HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791* GameObject_GetComponent_TisHorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791_m5D0E06F33ED2C16E0F4191E06F653644F038B1C8 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Michsky.UI.ModernUIPack.UIManagerHSelector::UpdateSelector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerHSelector_UpdateSelector_m4476CF3D77C9E49B1584F58C5070908F546C47C4 (UIManagerHSelector_t5118B938B6788E1B7CD8E66D7A73F285D15D828B* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void Michsky.UI.ModernUIPack.UIManagerInputField::UpdateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerInputField_UpdateInputField_m53C2FD6332FF6911F4A19D24F9C71BE3238CDA7A (UIManagerInputField_t23A219884764CEDF5AE579FECC10FF2B97987A12* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerModalWindow::UpdateModalWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerModalWindow_UpdateModalWindow_mAB6C7E7BEFC296663DA48E49593BBE28AC1A5495 (UIManagerModalWindow_tF334E46DFD82D725A2171587092C097003A9EC84* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerNotification::UpdateNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerNotification_UpdateNotification_m8650DF53AFB05D3B5231650BEF21054629ED173F (UIManagerNotification_t88F573098C62D58BBBC59551CD498BE0C6D14C0D* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBar::UpdateProgressBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBar_UpdateProgressBar_mFE8AC2DD6253194B84F49A20E4C0C02CAC6C69A4 (UIManagerProgressBar_t3E9D23017D4282C00C7CBD36D94BB6BD53056100* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::UpdateProgressBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBarLoop_UpdateProgressBar_m41248C62B8834BACE35E702EDCA2FCC1212DE1ED (UIManagerProgressBarLoop_t00705338CCFCC39D4B98E73931D562028D8A1811* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerScrollbar::UpdateScrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerScrollbar_UpdateScrollbar_mD5B754C5C72203372355A37BAD7DD68D1F118872 (UIManagerScrollbar_tEC34CA446FD18E5B69031806C8EB87C4F883C547* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerSlider::UpdateSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSlider_UpdateSlider_m56871C9FF62D89C93E2E6E91AD99C42278BE32A9 (UIManagerSlider_t3E93FA1D8585657FE1E890C0668F88254CE97C6A* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerSwitch::UpdateSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSwitch_UpdateSwitch_mF4126657F75EB6356C4DDE34FCDFA07DDBEA7E01 (UIManagerSwitch_t10308E1F0F799B9D61640874FF2AEF87E2761C02* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerToggle::UpdateToggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerToggle_UpdateToggle_m3306956DE4CEA776202A4B4CB80B14355C01714A (UIManagerToggle_tF3715BC417FB445F6C94BC4518984FB61F64CF80* __this, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.UIManagerTooltip::UpdateTooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerTooltip_UpdateTooltip_m6DBC54411B39E185881D99A50ACAEC4434B84415 (UIManagerTooltip_tB4C4AF938181B5351FE87A6BB5FFB1B9D9E76A91* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A (Type_t* ___type0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Michsky.UI.ModernUIPack.WindowDragger::get_DragObjectInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0 (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, const RuntimeMethod* method) ;
// UnityEngine.RectTransform Michsky.UI.ModernUIPack.WindowDragger::get_DragAreaInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* WindowDragger_get_DragAreaInternal_mBEB30D0F99DD5AC624BDFE4FF54D70CC4CC9258D (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.EventSystems.PointerEventData::get_pressEventCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3 (PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPoint1, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___cam2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___localPoint3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// System.Void Michsky.UI.ModernUIPack.WindowDragger::ClampToArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowDragger_ClampToArea_m20D51420EB4C367309058EAFF850BA879EFABD31 (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_min()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_max()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.WindowManager/WindowItem>::get_Item(System.Int32)
inline WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4 (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* (*) (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::Invoke(T0)
inline void UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, int32_t ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, int32_t, const RuntimeMethod*))UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_gshared)(__this, ___arg00, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.WindowManager/WindowItem>::get_Count()
inline int32_t List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_inline (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void Michsky.UI.ModernUIPack.WindowManager/WindowItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowItem__ctor_m81DA2F10B0DABA3E919858535FE5CF3DAE393DD1 (WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline (const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.WindowManager/WindowItem>::Add(T)
inline void List_1_Add_mAB2C21FB95076AEE694E1C0996728B3DF12FEE97_inline (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* __this, WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE*, WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Michsky.UI.ModernUIPack.WindowManager/WindowItem>::.ctor()
inline void List_1__ctor_m3563D2891290DEA83C59AE2BCC3046A8FFC7D18E (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.Int32>::.ctor()
inline void UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684 (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t7CC0661D6B113117B4CC68761D93AC8DF5DBD66A*, const RuntimeMethod*))UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Michsky.UI.ModernUIPack.CustomToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomToggle_Start_m0A916C2CD2E892F0DDE069152C3035DD3566FC36 (CustomToggle_t7F72D9CADC7D528DCB945B84C3AA2B299BC6F44F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomToggle_UpdateStateDynamic_mF879FB051F8148B541F2C6B2E503B66768F80907_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (toggleObject == null)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggleObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// toggleObject = gameObject.GetComponent<Toggle>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3;
		L_3 = GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17(L_2, GameObject_GetComponent_TisToggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F_m4EE154BD6B3D051BADD8CC7F7C28CF20349ABD17_RuntimeMethod_var);
		__this->___toggleObject_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggleObject_4), (void*)L_3);
	}

IL_001f:
	{
		// if (toggleAnimator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___toggleAnimator_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// toggleAnimator = toggleObject.GetComponent<Animator>();
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_6 = __this->___toggleObject_4;
		NullCheck(L_6);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7;
		L_7 = Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE(L_6, Component_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m1C9FCB4BBE56BEC6BDEF6E4BA1E5DFF91614D7CE_RuntimeMethod_var);
		__this->___toggleAnimator_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___toggleAnimator_5), (void*)L_7);
	}

IL_003e:
	{
		// toggleObject.onValueChanged.AddListener(UpdateStateDynamic);
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_8 = __this->___toggleObject_4;
		NullCheck(L_8);
		ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* L_9 = L_8->___onValueChanged_23;
		UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9* L_10 = (UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9*)il2cpp_codegen_object_new(UnityAction_1_t8EC357AF4FBD2A0C4A575C4BBD0B3A81029E43A9_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction_1__ctor_m11A393DB3C00474B4520978077E444DB6E4418DD(L_10, __this, (intptr_t)((void*)CustomToggle_UpdateStateDynamic_mF879FB051F8148B541F2C6B2E503B66768F80907_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD(L_9, L_10, UnityEvent_1_AddListener_mE9367D4B3AA4C323EE7C35FA18CF2D8A142F43FD_RuntimeMethod_var);
		// UpdateState();
		CustomToggle_UpdateState_m818E137DC7FB529470CE6F6E98BEFA00FA5651FE(__this, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.CustomToggle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomToggle_OnEnable_mD4B02CEEDE9AC32C6BA65D5424121A2958B02FE8 (CustomToggle_t7F72D9CADC7D528DCB945B84C3AA2B299BC6F44F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (toggleObject == null)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggleObject_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// UpdateState();
		CustomToggle_UpdateState_m818E137DC7FB529470CE6F6E98BEFA00FA5651FE(__this, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.CustomToggle::UpdateState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomToggle_UpdateState_m818E137DC7FB529470CE6F6E98BEFA00FA5651FE (CustomToggle_t7F72D9CADC7D528DCB945B84C3AA2B299BC6F44F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B624A1883BC2A2B406EF653268D220A8C58C381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51AD00569E0EC5559DADEA05FCFC4AFFF59EED2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (toggleObject.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggleObject_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// toggleAnimator.Play("Toggle On");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___toggleAnimator_5;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, _stringLiteral51AD00569E0EC5559DADEA05FCFC4AFFF59EED2C, NULL);
		return;
	}

IL_001e:
	{
		// toggleAnimator.Play("Toggle Off");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___toggleAnimator_5;
		NullCheck(L_3);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_3, _stringLiteral3B624A1883BC2A2B406EF653268D220A8C58C381, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.CustomToggle::UpdateStateDynamic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomToggle_UpdateStateDynamic_mF879FB051F8148B541F2C6B2E503B66768F80907 (CustomToggle_t7F72D9CADC7D528DCB945B84C3AA2B299BC6F44F* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B624A1883BC2A2B406EF653268D220A8C58C381);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51AD00569E0EC5559DADEA05FCFC4AFFF59EED2C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (toggleObject.isOn)
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_0 = __this->___toggleObject_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_0, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// toggleAnimator.Play("Toggle On");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___toggleAnimator_5;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, _stringLiteral51AD00569E0EC5559DADEA05FCFC4AFFF59EED2C, NULL);
		return;
	}

IL_001e:
	{
		// toggleAnimator.Play("Toggle Off");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___toggleAnimator_5;
		NullCheck(L_3);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_3, _stringLiteral3B624A1883BC2A2B406EF653268D220A8C58C381, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.CustomToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomToggle__ctor_mB08F597321126A66C6B1D36650045B866DEEE887 (CustomToggle_t7F72D9CADC7D528DCB945B84C3AA2B299BC6F44F* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.TooltipContent::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipContent_Start_m700C70B2F715E440FDBD0E68D0435F20BDD710AB (TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisTooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC_m5FC8D020A1DA3BCCD42B959CD2B6F110DCD95C06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral544BB20556DCF0413145355232B9F429C30DAA0C);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (tooltipRect == null || descriptionText == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tooltipRect_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___descriptionText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}

IL_001c:
	{
	}
	try
	{// begin try (depth: 1)
		// tooltipRect = GameObject.Find("Tooltip Rect");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_Find_m7A669B4EEC2617AB82F6E3FF007CDCD9F21DB300(_stringLiteral544BB20556DCF0413145355232B9F429C30DAA0C, NULL);
		__this->___tooltipRect_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tooltipRect_6), (void*)L_4);
		// descriptionText = tooltipRect.transform.GetComponentInChildren<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___tooltipRect_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7;
		L_7 = Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC(L_6, Component_GetComponentInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m60A1B193FDBBFB3719065622DB5E0BB21CA4ABDC_RuntimeMethod_var);
		__this->___descriptionText_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___descriptionText_7), (void*)L_7);
		// }
		goto IL_0053;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0045;
		}
		throw e;
	}

CATCH_0045:
	{// begin catch(System.Object)
		// catch { Debug.LogError("<b>[Tooltip Content]</b> Tooltip Rect is missing.", this); return; }
		// catch { Debug.LogError("<b>[Tooltip Content]</b> Tooltip Rect is missing.", this); return; }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_m94F967AB31244EACE68C3BE1DD85B69ED3334C0E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral22C63C853ABA4891881A23EFB49EC77CE12F294D)), __this, NULL);
		// catch { Debug.LogError("<b>[Tooltip Content]</b> Tooltip Rect is missing.", this); return; }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0083;
	}// end catch (depth: 1)

IL_0053:
	{
		// if (tooltipRect != null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___tooltipRect_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0083;
		}
	}
	{
		// tpManager = tooltipRect.GetComponentInParent<TooltipManager>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___tooltipRect_6;
		NullCheck(L_10);
		TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* L_11;
		L_11 = GameObject_GetComponentInParent_TisTooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC_m5FC8D020A1DA3BCCD42B959CD2B6F110DCD95C06(L_10, GameObject_GetComponentInParent_TisTooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC_m5FC8D020A1DA3BCCD42B959CD2B6F110DCD95C06_RuntimeMethod_var);
		__this->___tpManager_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tpManager_9), (void*)L_11);
		// tooltipAnimator = tooltipRect.GetComponentInParent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___tooltipRect_6;
		NullCheck(L_12);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13;
		L_13 = GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5(L_12, GameObject_GetComponentInParent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_m4005DFE32A3F44556C2CC9365D31C3DDAB22CBB5_RuntimeMethod_var);
		__this->___tooltipAnimator_10 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tooltipAnimator_10), (void*)L_13);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipContent::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipContent_OnPointerEnter_mE9139626F8ACD4053D4C610BF01E569BF17EB25E (TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A65E58E99B1263560FFEE98B35619C1927295EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF42A79EC2386D05C063A64BE15CD7F3B556CBD5);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (tooltipRect == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tooltipRect_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// descriptionText.text = description;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2 = __this->___descriptionText_7;
		String_t* L_3 = __this->___description_4;
		NullCheck(L_2);
		VirtualActionInvoker1< String_t* >::Invoke(66 /* System.Void TMPro.TMP_Text::set_text(System.String) */, L_2, L_3);
		// tpManager.allowUpdating = true;
		TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* L_4 = __this->___tpManager_9;
		NullCheck(L_4);
		L_4->___allowUpdating_8 = (bool)1;
		// tooltipAnimator.gameObject.SetActive(false);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___tooltipAnimator_10;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// tooltipAnimator.gameObject.SetActive(true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___tooltipAnimator_10;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_7, NULL);
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// if (delay == 0)
		float L_9 = __this->___delay_5;
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		// tooltipAnimator.Play("In");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___tooltipAnimator_10;
		NullCheck(L_10);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_10, _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, NULL);
		goto IL_0079;
	}

IL_006d:
	{
		// StartCoroutine("ShowTooltip");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral4A65E58E99B1263560FFEE98B35619C1927295EA, NULL);
	}

IL_0079:
	{
		// if (forceToUpdate == true)
		bool L_12 = __this->___forceToUpdate_8;
		if (!L_12)
		{
			goto IL_008d;
		}
	}
	{
		// StartCoroutine("UpdateLayoutPosition");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_13;
		L_13 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteralDF42A79EC2386D05C063A64BE15CD7F3B556CBD5, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipContent::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipContent_OnPointerExit_m08983E791538C085E0386B77B45CC0C48BD0B4BA (TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A65E58E99B1263560FFEE98B35619C1927295EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (tooltipRect == null)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tooltipRect_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (delay != 0)
		float L_2 = __this->___delay_5;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0054;
		}
	}
	{
		// StopCoroutine("ShowTooltip");
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(__this, _stringLiteral4A65E58E99B1263560FFEE98B35619C1927295EA, NULL);
		// if (tooltipAnimator.GetCurrentAnimatorStateInfo(0).IsName("In"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___tooltipAnimator_10;
		NullCheck(L_3);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_4;
		L_4 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_3, 0, NULL);
		V_0 = L_4;
		bool L_5;
		L_5 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, NULL);
		if (!L_5)
		{
			goto IL_0064;
		}
	}
	{
		// tooltipAnimator.Play("Out");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___tooltipAnimator_10;
		NullCheck(L_6);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_6, _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, NULL);
		goto IL_0064;
	}

IL_0054:
	{
		// tooltipAnimator.Play("Out");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___tooltipAnimator_10;
		NullCheck(L_7);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_7, _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44, NULL);
	}

IL_0064:
	{
		// tpManager.allowUpdating = false;
		TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* L_8 = __this->___tpManager_9;
		NullCheck(L_8);
		L_8->___allowUpdating_8 = (bool)0;
		// }
		return;
	}
}
// System.Collections.IEnumerator Michsky.UI.ModernUIPack.TooltipContent::ShowTooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TooltipContent_ShowTooltip_m4D80DB3998B8E39A69DF29082ED56D4CA59E9F91 (TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* L_0 = (U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0*)il2cpp_codegen_object_new(U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShowTooltipU3Ed__10__ctor_m73AF8FAE69FDF4D4E0CA6A6C8782C6B24A4DD04A(L_0, 0, NULL);
		U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Michsky.UI.ModernUIPack.TooltipContent::UpdateLayoutPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TooltipContent_UpdateLayoutPosition_m143D0D49DDB115AE0014B20B466C01CD149A09AE (TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* L_0 = (U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B*)il2cpp_codegen_object_new(U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CUpdateLayoutPositionU3Ed__11__ctor_m30BCEB48A70A47A92DCA5AA58536D91254C4E99E(L_0, 0, NULL);
		U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipContent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipContent__ctor_mA9D6822712E2567405F14E17414F1890205B00AC (TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowTooltipU3Ed__10__ctor_m73AF8FAE69FDF4D4E0CA6A6C8782C6B24A4DD04A (U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowTooltipU3Ed__10_System_IDisposable_Dispose_mF19A25502098CE8DAA736682B85B35E2A3DC51AC (U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShowTooltipU3Ed__10_MoveNext_m2898E50331A3A3AFD1E15B365888BFA593C8D504 (U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A65E58E99B1263560FFEE98B35619C1927295EA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* L_1 = __this->___U3CU3E4__this_2;
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
		TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->___delay_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, L_5, NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0038:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// tooltipAnimator.Play("In");
		TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* L_7 = V_1;
		NullCheck(L_7);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = L_7->___tooltipAnimator_10;
		NullCheck(L_8);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_8, _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8, NULL);
		// StopCoroutine("ShowTooltip");
		TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* L_9 = V_1;
		NullCheck(L_9);
		MonoBehaviour_StopCoroutine_m1DA0B9343DCDB53221A6CD707CBF0827A6FFF17F(L_9, _stringLiteral4A65E58E99B1263560FFEE98B35619C1927295EA, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowTooltipU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE72FD066BA77DC8AABC284ABD18A1085F8E002EC (U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShowTooltipU3Ed__10_System_Collections_IEnumerator_Reset_m37E8F5F37E76797723256603E10D35F8A6BF26E8 (U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShowTooltipU3Ed__10_System_Collections_IEnumerator_Reset_m37E8F5F37E76797723256603E10D35F8A6BF26E8_RuntimeMethod_var)));
	}
}
// System.Object Michsky.UI.ModernUIPack.TooltipContent/<ShowTooltip>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShowTooltipU3Ed__10_System_Collections_IEnumerator_get_Current_mA7F5C42BA53D7B9E3101006019DFC80E0F7E79D4 (U3CShowTooltipU3Ed__10_tC6588DB9A89243E96AAC49B047DA701517C85AB0* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateLayoutPositionU3Ed__11__ctor_m30BCEB48A70A47A92DCA5AA58536D91254C4E99E (U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateLayoutPositionU3Ed__11_System_IDisposable_Dispose_mD1834C01804B8ADAF359BCD181889F9990FD7183 (U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CUpdateLayoutPositionU3Ed__11_MoveNext_m04D80CB17F83EE2EA4E859FDFBE2871F0CF648C1 (U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(0.1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (0.100000001f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// LayoutRebuilder.ForceRebuildLayoutImmediate(tooltipAnimator.gameObject.GetComponent<RectTransform>());
		TooltipContent_t3C4C9537C2CA44663E238E4F4CB300BCB94C1CE2* L_5 = V_1;
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = L_5->___tooltipAnimator_10;
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_6, NULL);
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_7, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		LayoutRebuilder_ForceRebuildLayoutImmediate_mCCA094579654469919EFA4B5AA5D9AF93CD67B4A(L_8, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateLayoutPositionU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBDDCF2F645B4AD0D67A8D7990779A1A519E41C14 (U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CUpdateLayoutPositionU3Ed__11_System_Collections_IEnumerator_Reset_mF8243E44F3008D20295463367F04D17BC5513962 (U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CUpdateLayoutPositionU3Ed__11_System_Collections_IEnumerator_Reset_mF8243E44F3008D20295463367F04D17BC5513962_RuntimeMethod_var)));
	}
}
// System.Object Michsky.UI.ModernUIPack.TooltipContent/<UpdateLayoutPosition>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CUpdateLayoutPositionU3Ed__11_System_Collections_IEnumerator_get_Current_mFA78C995D49C54DA903E2DDDEA218162D90D5FE8 (U3CUpdateLayoutPositionU3Ed__11_tAD961CE97D66DECD6830636C9F611C90FA21C97B* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.TooltipManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipManager_Start_m3E5E57B6480AC0D13A37B89C5959A9295DF0C3B3 (TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m454971F9D9EA677E9FA85BEC6FA483F0D606BBFF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tooltipContent.GetComponent<RectTransform>().pivot = new Vector2(0f, tooltipContent.GetComponent<RectTransform>().pivot.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___tooltipContent_6;
		NullCheck(L_0);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_1;
		L_1 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_0, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___tooltipContent_6;
		NullCheck(L_2);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3;
		L_3 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_2, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_3, NULL);
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), (0.0f), L_5, /*hidden argument*/NULL);
		NullCheck(L_1);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_1, L_6, NULL);
		// tooltipContent.GetComponent<RectTransform>().pivot = new Vector2(tooltipContent.GetComponent<RectTransform>().pivot.x, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___tooltipContent_6;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_7, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___tooltipContent_6;
		NullCheck(L_9);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_9, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_10);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_10, NULL);
		float L_12 = L_11.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_13), L_12, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_8, L_13, NULL);
		// if (mainCanvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_14 = __this->___mainCanvas_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// mainCanvas = gameObject.GetComponentInParent<Canvas>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_16);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17;
		L_17 = GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991(L_16, GameObject_GetComponentInParent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m0A41CB7A7F9A10FCC98D1C7B5799D57C2724D991_RuntimeMethod_var);
		__this->___mainCanvas_4 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCanvas_4), (void*)L_17);
	}

IL_007d:
	{
		// tooltipZHelper = gameObject.GetComponentInParent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18;
		L_18 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_18);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_19;
		L_19 = GameObject_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m454971F9D9EA677E9FA85BEC6FA483F0D606BBFF(L_18, GameObject_GetComponentInParent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m454971F9D9EA677E9FA85BEC6FA483F0D606BBFF_RuntimeMethod_var);
		__this->___tooltipZHelper_16 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tooltipZHelper_16), (void*)L_19);
		// tooltipRect = tooltipObject.GetComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___tooltipObject_5;
		NullCheck(L_20);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_21;
		L_21 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_20, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		__this->___tooltipRect_15 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tooltipRect_15), (void*)L_21);
		// contentPos = new Vector3(vBorderTop, hBorderLeft, 0);
		int32_t L_22 = __this->___vBorderTop_9;
		int32_t L_23 = __this->___hBorderLeft_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)L_22), ((float)L_23), (0.0f), /*hidden argument*/NULL);
		__this->___contentPos_17 = L_24;
		// gameObject.transform.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25;
		L_25 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		NullCheck(L_26);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_26, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipManager_Update_m0C4261BC00D25BE65A3E790E4C41BCD075B1482D (TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* __this, const RuntimeMethod* method) 
{
	{
		// if (allowUpdating == true)
		bool L_0 = __this->___allowUpdating_8;
		if (!L_0)
		{
			goto IL_012b;
		}
	}
	{
		// cursorPos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_mFF21FBD2647DAE2A23BD4C45571CA95D05A0A42C(NULL);
		__this->___cursorPos_14 = L_1;
		// cursorPos.z = tooltipZHelper.position.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = (&__this->___cursorPos_14);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___tooltipZHelper_16;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___z_4;
		L_2->___z_4 = L_5;
		// uiPos = tooltipRect.anchoredPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6 = __this->___tooltipRect_15;
		NullCheck(L_6);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = RectTransform_get_anchoredPosition_m38F25A4253B0905BB058BE73DBF43C7172CE0680(L_6, NULL);
		__this->___uiPos_13 = L_7;
		// CheckForBounds();
		TooltipManager_CheckForBounds_mCC500F7E4B36BDE4C6F04DC3BD06C44E9531D291(__this, NULL);
		// if (mainCanvas.renderMode == RenderMode.ScreenSpaceCamera || mainCanvas.renderMode == RenderMode.WorldSpace)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_8 = __this->___mainCanvas_4;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_8, NULL);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_0064;
		}
	}
	{
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_10 = __this->___mainCanvas_4;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)2))))
		{
			goto IL_00c1;
		}
	}

IL_0064:
	{
		// tooltipRect.position = Camera.main.ScreenToWorldPoint(cursorPos);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___tooltipRect_15;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13;
		L_13 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___cursorPos_14;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Camera_ScreenToWorldPoint_m5EA3148F070985EC72127AAC3448D8D6ABE6E7E5(L_13, L_14, NULL);
		NullCheck(L_12);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_12, L_15, NULL);
		// tooltipContent.transform.localPosition = Vector3.SmoothDamp(tooltipContent.transform.localPosition, contentPos, ref tooltipVelocity, tooltipSmoothness, 1000f, Time.unscaledDeltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___tooltipContent_6;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_16, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___tooltipContent_6;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___contentPos_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = (&__this->___tooltipVelocity_18);
		float L_23 = __this->___tooltipSmoothness_7;
		float L_24;
		L_24 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_20, L_21, L_22, L_23, (1000.0f), L_24, NULL);
		NullCheck(L_17);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_17, L_25, NULL);
		return;
	}

IL_00c1:
	{
		// else if (mainCanvas.renderMode == RenderMode.ScreenSpaceOverlay)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_26 = __this->___mainCanvas_4;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Canvas_get_renderMode_m1BEF259548C6CAD27E4466F31D20752D246688CC(L_26, NULL);
		if (L_27)
		{
			goto IL_012b;
		}
	}
	{
		// tooltipRect.position = cursorPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_28 = __this->___tooltipRect_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = __this->___cursorPos_14;
		NullCheck(L_28);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_28, L_29, NULL);
		// tooltipContent.transform.position = Vector3.SmoothDamp(tooltipContent.transform.position, cursorPos + contentPos, ref tooltipVelocity, tooltipSmoothness, 1000f, Time.unscaledDeltaTime);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___tooltipContent_6;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_30, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___tooltipContent_6;
		NullCheck(L_32);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_32, NULL);
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___cursorPos_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = __this->___contentPos_17;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_36, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_38 = (&__this->___tooltipVelocity_18);
		float L_39 = __this->___tooltipSmoothness_7;
		float L_40;
		L_40 = Time_get_unscaledDeltaTime_mF057EECA857E5C0F90A3F910D26D3EE59F27C4B5(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_SmoothDamp_mAF61EA22D4906BF87DD00A91FB4F6AC0C54C495A(L_34, L_37, L_38, L_39, (1000.0f), L_40, NULL);
		NullCheck(L_31);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_41, NULL);
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipManager::CheckForBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipManager_CheckForBounds_mCC500F7E4B36BDE4C6F04DC3BD06C44E9531D291 (TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (uiPos.x <= -400)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_0 = (&__this->___uiPos_13);
		float L_1 = L_0->___x_0;
		if ((!(((float)L_1) <= ((float)(-400.0f)))))
		{
			goto IL_0063;
		}
	}
	{
		// contentPos = new Vector3(hBorderLeft, contentPos.y, 0);
		int32_t L_2 = __this->___hBorderLeft_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_3 = (&__this->___contentPos_17);
		float L_4 = L_3->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_5), ((float)L_2), L_4, (0.0f), /*hidden argument*/NULL);
		__this->___contentPos_17 = L_5;
		// tooltipContent.GetComponent<RectTransform>().pivot = new Vector2(0f, tooltipContent.GetComponent<RectTransform>().pivot.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___tooltipContent_6;
		NullCheck(L_6);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_7;
		L_7 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_6, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___tooltipContent_6;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_8, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_9);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10;
		L_10 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_9, NULL);
		float L_11 = L_10.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_12), (0.0f), L_11, /*hidden argument*/NULL);
		NullCheck(L_7);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_7, L_12, NULL);
	}

IL_0063:
	{
		// if (uiPos.x >= 400)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_13 = (&__this->___uiPos_13);
		float L_14 = L_13->___x_0;
		if ((!(((float)L_14) >= ((float)(400.0f)))))
		{
			goto IL_00c6;
		}
	}
	{
		// contentPos = new Vector3(hBorderRight, contentPos.y, 0);
		int32_t L_15 = __this->___hBorderRight_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = (&__this->___contentPos_17);
		float L_17 = L_16->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)L_15), L_17, (0.0f), /*hidden argument*/NULL);
		__this->___contentPos_17 = L_18;
		// tooltipContent.GetComponent<RectTransform>().pivot = new Vector2(1f, tooltipContent.GetComponent<RectTransform>().pivot.y);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___tooltipContent_6;
		NullCheck(L_19);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_20;
		L_20 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_19, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___tooltipContent_6;
		NullCheck(L_21);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22;
		L_22 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_21, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_22);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_22, NULL);
		float L_24 = L_23.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_25), (1.0f), L_24, /*hidden argument*/NULL);
		NullCheck(L_20);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_20, L_25, NULL);
	}

IL_00c6:
	{
		// if (uiPos.y <= -325)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_26 = (&__this->___uiPos_13);
		float L_27 = L_26->___y_1;
		if ((!(((float)L_27) <= ((float)(-325.0f)))))
		{
			goto IL_0129;
		}
	}
	{
		// contentPos = new Vector3(contentPos.x, vBorderBottom, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = (&__this->___contentPos_17);
		float L_29 = L_28->___x_2;
		int32_t L_30 = __this->___vBorderBottom_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_31), L_29, ((float)L_30), (0.0f), /*hidden argument*/NULL);
		__this->___contentPos_17 = L_31;
		// tooltipContent.GetComponent<RectTransform>().pivot = new Vector2(tooltipContent.GetComponent<RectTransform>().pivot.x, 0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___tooltipContent_6;
		NullCheck(L_32);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_33;
		L_33 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_32, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___tooltipContent_6;
		NullCheck(L_34);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_35;
		L_35 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_34, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_35);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36;
		L_36 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_35, NULL);
		float L_37 = L_36.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		memset((&L_38), 0, sizeof(L_38));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_38), L_37, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_33, L_38, NULL);
	}

IL_0129:
	{
		// if (uiPos.y >= 325)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_39 = (&__this->___uiPos_13);
		float L_40 = L_39->___y_1;
		if ((!(((float)L_40) >= ((float)(325.0f)))))
		{
			goto IL_018c;
		}
	}
	{
		// contentPos = new Vector3(contentPos.x, vBorderTop, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___contentPos_17);
		float L_42 = L_41->___x_2;
		int32_t L_43 = __this->___vBorderTop_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_44), L_42, ((float)L_43), (0.0f), /*hidden argument*/NULL);
		__this->___contentPos_17 = L_44;
		// tooltipContent.GetComponent<RectTransform>().pivot = new Vector2(tooltipContent.GetComponent<RectTransform>().pivot.x, 1f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___tooltipContent_6;
		NullCheck(L_45);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_46;
		L_46 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_45, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___tooltipContent_6;
		NullCheck(L_47);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_48;
		L_48 = GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4(L_47, GameObject_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m1592DCB5AA07291F73A76006F0913A64DFB8A9C4_RuntimeMethod_var);
		NullCheck(L_48);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		L_49 = RectTransform_get_pivot_mA8334AF05AA7FF09A173A2430F2BB9E85E5CBFFF(L_48, NULL);
		float L_50 = L_49.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		memset((&L_51), 0, sizeof(L_51));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_51), L_50, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_46);
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(L_46, L_51, NULL);
	}

IL_018c:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.TooltipManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TooltipManager__ctor_m4F15B5131504B695A696525E964B545A20FFCAEB (TooltipManager_t2CCC146AD926C41FAA0F08EFF405B187DDA3EDFC* __this, const RuntimeMethod* method) 
{
	{
		// [Range(0.01f, 0.5f)] public float tooltipSmoothness = 0.1f;
		__this->___tooltipSmoothness_7 = (0.100000001f);
		// public int vBorderTop = -115;
		__this->___vBorderTop_9 = ((int32_t)-115);
		// public int vBorderBottom = 100;
		__this->___vBorderBottom_10 = ((int32_t)100);
		// public int hBorderLeft = 230;
		__this->___hBorderLeft_11 = ((int32_t)230);
		// public int hBorderRight = -210;
		__this->___hBorderRight_12 = ((int32_t)-210);
		// Vector3 contentPos = new Vector3(0, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___contentPos_17 = L_0;
		// Vector3 tooltipVelocity = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___tooltipVelocity_18 = L_1;
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
// System.Void Michsky.UI.ModernUIPack.UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_m4DAC8B319CEDC44B8F4794FB928E207376DF4A92 (UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D283782C3F09C63D1216CA185F4ED256E392399);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [HideInInspector] public bool enableDynamicUpdate = true;
		__this->___enableDynamicUpdate_4 = (bool)1;
		// [HideInInspector] public bool enableExtendedColorPicker = true;
		__this->___enableExtendedColorPicker_5 = (bool)1;
		// [HideInInspector] public bool editorHints = true;
		__this->___editorHints_6 = (bool)1;
		// [HideInInspector] public bool changeRootFolder = true;
		__this->___changeRootFolder_7 = (bool)1;
		// [HideInInspector] public string rootFolder = "Modern UI Pack/Prefabs/";
		__this->___rootFolder_8 = _stringLiteral8D283782C3F09C63D1216CA185F4ED256E392399;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rootFolder_8), (void*)_stringLiteral8D283782C3F09C63D1216CA185F4ED256E392399);
		// public Color animatedIconColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___animatedIconColor_9 = L_0;
		// public Color contextBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1;
		memset((&L_1), 0, sizeof(L_1));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_1), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___contextBackgroundColor_10 = L_1;
		// public float buttonFontSize = 22.5f;
		__this->___buttonFontSize_13 = (22.5f);
		// public Color buttonBorderColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2;
		memset((&L_2), 0, sizeof(L_2));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_2), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___buttonBorderColor_14 = L_2;
		// public Color buttonFilledColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_3), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___buttonFilledColor_15 = L_3;
		// public Color buttonTextBasicColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___buttonTextBasicColor_16 = L_4;
		// public Color buttonTextColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5;
		memset((&L_5), 0, sizeof(L_5));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_5), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___buttonTextColor_17 = L_5;
		// public Color buttonTextHighlightedColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___buttonTextHighlightedColor_18 = L_6;
		// public Color buttonIconBasicColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_7), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___buttonIconBasicColor_19 = L_7;
		// public Color buttonIconColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___buttonIconColor_20 = L_8;
		// public Color buttonIconHighlightedColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_9), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___buttonIconHighlightedColor_21 = L_9;
		// public float dropdownItemFontSize = 22.5f;
		__this->___dropdownItemFontSize_23 = (22.5f);
		// public float dropdownFontSize = 22.5f;
		__this->___dropdownFontSize_27 = (22.5f);
		// public Color dropdownColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10;
		memset((&L_10), 0, sizeof(L_10));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_10), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___dropdownColor_28 = L_10;
		// public Color dropdownTextColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11;
		memset((&L_11), 0, sizeof(L_11));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_11), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___dropdownTextColor_29 = L_11;
		// public Color dropdownIconColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_12), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___dropdownIconColor_30 = L_12;
		// public Color dropdownItemColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_13), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___dropdownItemColor_31 = L_13;
		// public Color dropdownItemTextColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		memset((&L_14), 0, sizeof(L_14));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_14), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___dropdownItemTextColor_32 = L_14;
		// public Color dropdownItemIconColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___dropdownItemIconColor_33 = L_15;
		// public float hSelectorFontSize = 28;
		__this->___hSelectorFontSize_35 = (28.0f);
		// public Color selectorColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___selectorColor_36 = L_16;
		// public Color selectorHighlightedColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___selectorHighlightedColor_37 = L_17;
		// public float inputFieldFontSize = 28;
		__this->___inputFieldFontSize_41 = (28.0f);
		// public Color inputFieldColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_18), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___inputFieldColor_42 = L_18;
		// public Color modalWindowTitleColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_19), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___modalWindowTitleColor_46 = L_19;
		// public Color modalWindowDescriptionColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_20), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___modalWindowDescriptionColor_47 = L_20;
		// public Color modalWindowIconColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_21), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___modalWindowIconColor_48 = L_21;
		// public Color modalWindowBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_22), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___modalWindowBackgroundColor_49 = L_22;
		// public Color modalWindowContentPanelColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23;
		memset((&L_23), 0, sizeof(L_23));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_23), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___modalWindowContentPanelColor_50 = L_23;
		// public float notificationTitleFontSize = 22.5f;
		__this->___notificationTitleFontSize_52 = (22.5f);
		// public float notificationDescriptionFontSize = 18;
		__this->___notificationDescriptionFontSize_54 = (18.0f);
		// public Color notificationBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_24), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___notificationBackgroundColor_56 = L_24;
		// public Color notificationTitleColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		memset((&L_25), 0, sizeof(L_25));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_25), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___notificationTitleColor_57 = L_25;
		// public Color notificationDescriptionColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26;
		memset((&L_26), 0, sizeof(L_26));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_26), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___notificationDescriptionColor_58 = L_26;
		// public Color notificationIconColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		memset((&L_27), 0, sizeof(L_27));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_27), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___notificationIconColor_59 = L_27;
		// public float progressBarLabelFontSize = 25;
		__this->___progressBarLabelFontSize_61 = (25.0f);
		// public Color progressBarColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_28), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___progressBarColor_62 = L_28;
		// public Color progressBarBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_29), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___progressBarBackgroundColor_63 = L_29;
		// public Color progressBarLoopBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___progressBarLoopBackgroundColor_64 = L_30;
		// public Color progressBarLabelColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_31), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___progressBarLabelColor_65 = L_31;
		// public Color scrollbarColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_32;
		memset((&L_32), 0, sizeof(L_32));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_32), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___scrollbarColor_66 = L_32;
		// public Color scrollbarBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_33), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___scrollbarBackgroundColor_67 = L_33;
		// public float sliderLabelFontSize = 24;
		__this->___sliderLabelFontSize_69 = (24.0f);
		// public Color sliderColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_34;
		memset((&L_34), 0, sizeof(L_34));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_34), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___sliderColor_71 = L_34;
		// public Color sliderBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		memset((&L_35), 0, sizeof(L_35));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_35), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___sliderBackgroundColor_72 = L_35;
		// public Color sliderLabelColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_36;
		memset((&L_36), 0, sizeof(L_36));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_36), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___sliderLabelColor_73 = L_36;
		// public Color sliderPopupLabelColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		memset((&L_37), 0, sizeof(L_37));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_37), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___sliderPopupLabelColor_74 = L_37;
		// public Color sliderHandleColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_38;
		memset((&L_38), 0, sizeof(L_38));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_38), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___sliderHandleColor_75 = L_38;
		// public Color switchBorderColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		memset((&L_39), 0, sizeof(L_39));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_39), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___switchBorderColor_76 = L_39;
		// public Color switchBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		memset((&L_40), 0, sizeof(L_40));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_40), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___switchBackgroundColor_77 = L_40;
		// public Color switchHandleOnColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		memset((&L_41), 0, sizeof(L_41));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_41), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___switchHandleOnColor_78 = L_41;
		// public Color switchHandleOffColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		memset((&L_42), 0, sizeof(L_42));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_42), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___switchHandleOffColor_79 = L_42;
		// public float toggleFontSize = 35;
		__this->___toggleFontSize_81 = (35.0f);
		// public Color toggleTextColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		memset((&L_43), 0, sizeof(L_43));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_43), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___toggleTextColor_83 = L_43;
		// public Color toggleBorderColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		memset((&L_44), 0, sizeof(L_44));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_44), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___toggleBorderColor_84 = L_44;
		// public Color toggleBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		memset((&L_45), 0, sizeof(L_45));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_45), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___toggleBackgroundColor_85 = L_45;
		// public Color toggleCheckColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
		memset((&L_46), 0, sizeof(L_46));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_46), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___toggleCheckColor_86 = L_46;
		// public float tooltipFontSize = 22;
		__this->___tooltipFontSize_88 = (22.0f);
		// public Color tooltipTextColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47;
		memset((&L_47), 0, sizeof(L_47));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_47), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___tooltipTextColor_89 = L_47;
		// public Color tooltipBackgroundColor = new Color(255, 255, 255, 255);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		memset((&L_48), 0, sizeof(L_48));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_48), (255.0f), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		__this->___tooltipBackgroundColor_90 = L_48;
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
// System.Void Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerAnimatedIcon_Awake_mF5C0C4C4313E3E5564391CFD54CC0AE4183C42A3 (UIManagerAnimatedIcon_t36FD30605E0D1CB7E1DA88FF739613EBAAFA766C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateAnimatedIcon();
			UIManagerAnimatedIcon_UpdateAnimatedIcon_mAAB11875DA11C4A255AE125F6EB2E2BF2E3D748C(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerAnimatedIcon_LateUpdate_m8EA38B62FEE2E5019DFD3CFCF64DD492551FCB14 (UIManagerAnimatedIcon_t36FD30605E0D1CB7E1DA88FF739613EBAAFA766C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateAnimatedIcon();
		UIManagerAnimatedIcon_UpdateAnimatedIcon_mAAB11875DA11C4A255AE125F6EB2E2BF2E3D748C(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::UpdateAnimatedIcon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerAnimatedIcon_UpdateAnimatedIcon_mAAB11875DA11C4A255AE125F6EB2E2BF2E3D748C (UIManagerAnimatedIcon_t36FD30605E0D1CB7E1DA88FF739613EBAAFA766C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_2 = NULL;
	{
		// for (int i = 0; i < images.Count; ++i)
		V_0 = 0;
		goto IL_0029;
	}

IL_0004:
	{
		// Image currentImage = images[i].GetComponent<Image>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___images_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		// currentImage.color = UIManagerAsset.animatedIconColor;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4 = __this->___UIManagerAsset_4;
		NullCheck(L_4);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = L_4->___animatedIconColor_9;
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_5);
		// for (int i = 0; i < images.Count; ++i)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0029:
	{
		// for (int i = 0; i < images.Count; ++i)
		int32_t L_7 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_8 = __this->___images_6;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_8, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < imagesWithAlpha.Count; ++i)
		V_1 = 0;
		goto IL_0097;
	}

IL_003b:
	{
		// Image currentAlphaImage = imagesWithAlpha[i].GetComponent<Image>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_10 = __this->___imagesWithAlpha_7;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_10, L_11, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		V_2 = L_13;
		// currentAlphaImage.color = new Color(UIManagerAsset.animatedIconColor.r, UIManagerAsset.animatedIconColor.g, UIManagerAsset.animatedIconColor.b, currentAlphaImage.color.a);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = V_2;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_15 = __this->___UIManagerAsset_4;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = (&L_15->___animatedIconColor_9);
		float L_17 = L_16->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_18 = __this->___UIManagerAsset_4;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19 = (&L_18->___animatedIconColor_9);
		float L_20 = L_19->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_21 = __this->___UIManagerAsset_4;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_22 = (&L_21->___animatedIconColor_9);
		float L_23 = L_22->___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24 = V_2;
		NullCheck(L_24);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		L_25 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_24);
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		memset((&L_27), 0, sizeof(L_27));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_27), L_17, L_20, L_23, L_26, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_27);
		// for (int i = 0; i < imagesWithAlpha.Count; ++i)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0097:
	{
		// for (int i = 0; i < imagesWithAlpha.Count; ++i)
		int32_t L_29 = V_1;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_30 = __this->___imagesWithAlpha_7;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_30, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_003b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerAnimatedIcon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerAnimatedIcon__ctor_mA9B8E9237EEC0D1E3E690FD9CFEC68619B039254 (UIManagerAnimatedIcon_t36FD30605E0D1CB7E1DA88FF739613EBAAFA766C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> images = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___images_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___images_6), (void*)L_0);
		// public List<GameObject> imagesWithAlpha = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___imagesWithAlpha_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imagesWithAlpha_7), (void*)L_1);
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
// System.Void Michsky.UI.ModernUIPack.UIManagerButton::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerButton_Awake_m27C73C72098289276D3A18B991E5D58AF20F9C27 (UIManagerButton_tDBCC56BB5AC64BEE72F0EE022087F149A0576A76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_6;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateButton();
			UIManagerButton_UpdateButton_mC8A56366684B5BBC95AE6BF98780F253E2AB6151(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerButton::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerButton_LateUpdate_m7E240DAE6A7D25CDA9E016E3F2437CA8F180D1DC (UIManagerButton_tDBCC56BB5AC64BEE72F0EE022087F149A0576A76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateButton();
		UIManagerButton_UpdateButton_mC8A56366684B5BBC95AE6BF98780F253E2AB6151(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerButton::UpdateButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerButton_UpdateButton_mC8A56366684B5BBC95AE6BF98780F253E2AB6151 (UIManagerButton_tDBCC56BB5AC64BEE72F0EE022087F149A0576A76* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_6;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset.buttonThemeType == UIManager.ButtonThemeType.BASIC)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			NullCheck(L_2);
			int32_t L_3 = L_2->___buttonThemeType_11;
			if (L_3)
			{
				goto IL_0518_1;
			}
		}
		{
			// if (buttonType == ButtonType.BASIC)
			int32_t L_4 = __this->___buttonType_5;
			if (L_4)
			{
				goto IL_0086_1;
			}
		}
		{
			// basicFilled.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___basicFilled_7;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_6 = __this->___UIManagerAsset_4;
			NullCheck(L_6);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___buttonBorderColor_14;
			NullCheck(L_5);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
			// basicText.color = UIManagerAsset.buttonFilledColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___basicText_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_9 = __this->___UIManagerAsset_4;
			NullCheck(L_9);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___buttonFilledColor_15;
			NullCheck(L_8);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_10);
			// basicText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___basicText_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_12 = __this->___UIManagerAsset_4;
			NullCheck(L_12);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_13 = L_12->___buttonFont_12;
			NullCheck(L_11);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_11, L_13, NULL);
			// basicText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___basicText_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_15 = __this->___UIManagerAsset_4;
			NullCheck(L_15);
			float L_16 = L_15->___buttonFontSize_13;
			NullCheck(L_14);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_14, L_16, NULL);
			goto IL_0a1b_1;
		}

IL_0086_1:
		{
			// else if (buttonType == ButtonType.BASIC_ONLY_ICON)
			int32_t L_17 = __this->___buttonType_5;
			if ((!(((uint32_t)L_17) == ((uint32_t)1))))
			{
				goto IL_00c0_1;
			}
		}
		{
			// basicOnlyIconFilled.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18 = __this->___basicOnlyIconFilled_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_19 = __this->___UIManagerAsset_4;
			NullCheck(L_19);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = L_19->___buttonBorderColor_14;
			NullCheck(L_18);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_20);
			// basicOnlyIconIcon.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_21 = __this->___basicOnlyIconIcon_10;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_22 = __this->___UIManagerAsset_4;
			NullCheck(L_22);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = L_22->___buttonFilledColor_15;
			NullCheck(L_21);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_23);
			goto IL_0a1b_1;
		}

IL_00c0_1:
		{
			// else if (buttonType == ButtonType.BASIC_WITH_ICON)
			int32_t L_24 = __this->___buttonType_5;
			if ((!(((uint32_t)L_24) == ((uint32_t)2))))
			{
				goto IL_013c_1;
			}
		}
		{
			// basicWithIconFilled.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25 = __this->___basicWithIconFilled_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_26 = __this->___UIManagerAsset_4;
			NullCheck(L_26);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = L_26->___buttonBorderColor_14;
			NullCheck(L_25);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_27);
			// basicWithIconIcon.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28 = __this->___basicWithIconIcon_12;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_29 = __this->___UIManagerAsset_4;
			NullCheck(L_29);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = L_29->___buttonFilledColor_15;
			NullCheck(L_28);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_30);
			// basicWithIconText.color = UIManagerAsset.buttonFilledColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = __this->___basicWithIconText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_32 = __this->___UIManagerAsset_4;
			NullCheck(L_32);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = L_32->___buttonFilledColor_15;
			NullCheck(L_31);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_33);
			// basicWithIconText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34 = __this->___basicWithIconText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_35 = __this->___UIManagerAsset_4;
			NullCheck(L_35);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_36 = L_35->___buttonFont_12;
			NullCheck(L_34);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_34, L_36, NULL);
			// basicWithIconText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_37 = __this->___basicWithIconText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_38 = __this->___UIManagerAsset_4;
			NullCheck(L_38);
			float L_39 = L_38->___buttonFontSize_13;
			NullCheck(L_37);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_37, L_39, NULL);
			goto IL_0a1b_1;
		}

IL_013c_1:
		{
			// else if (buttonType == ButtonType.BASIC_OUTLINE)
			int32_t L_40 = __this->___buttonType_5;
			if ((!(((uint32_t)L_40) == ((uint32_t)3))))
			{
				goto IL_01fd_1;
			}
		}
		{
			// basicOutlineBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_41 = __this->___basicOutlineBorder_14;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_42 = __this->___UIManagerAsset_4;
			NullCheck(L_42);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43 = L_42->___buttonBorderColor_14;
			NullCheck(L_41);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_43);
			// basicOutlineFilled.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44 = __this->___basicOutlineFilled_15;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_45 = __this->___UIManagerAsset_4;
			NullCheck(L_45);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46 = L_45->___buttonBorderColor_14;
			NullCheck(L_44);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_44, L_46);
			// basicOutlineText.color = UIManagerAsset.buttonBorderColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_47 = __this->___basicOutlineText_16;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_48 = __this->___UIManagerAsset_4;
			NullCheck(L_48);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_49 = L_48->___buttonBorderColor_14;
			NullCheck(L_47);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_47, L_49);
			// basicOutlineTextHighligted.color = UIManagerAsset.buttonFilledColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_50 = __this->___basicOutlineTextHighligted_17;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_51 = __this->___UIManagerAsset_4;
			NullCheck(L_51);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_52 = L_51->___buttonFilledColor_15;
			NullCheck(L_50);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_50, L_52);
			// basicOutlineText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_53 = __this->___basicOutlineText_16;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_54 = __this->___UIManagerAsset_4;
			NullCheck(L_54);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_55 = L_54->___buttonFont_12;
			NullCheck(L_53);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_53, L_55, NULL);
			// basicOutlineTextHighligted.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_56 = __this->___basicOutlineTextHighligted_17;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_57 = __this->___UIManagerAsset_4;
			NullCheck(L_57);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_58 = L_57->___buttonFont_12;
			NullCheck(L_56);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_56, L_58, NULL);
			// basicOutlineText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_59 = __this->___basicOutlineText_16;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_60 = __this->___UIManagerAsset_4;
			NullCheck(L_60);
			float L_61 = L_60->___buttonFontSize_13;
			NullCheck(L_59);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_59, L_61, NULL);
			// basicOutlineTextHighligted.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_62 = __this->___basicOutlineTextHighligted_17;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_63 = __this->___UIManagerAsset_4;
			NullCheck(L_63);
			float L_64 = L_63->___buttonFontSize_13;
			NullCheck(L_62);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_62, L_64, NULL);
			goto IL_0a1b_1;
		}

IL_01fd_1:
		{
			// else if (buttonType == ButtonType.BASIC_OUTLINE_ONLY_ICON)
			int32_t L_65 = __this->___buttonType_5;
			if ((!(((uint32_t)L_65) == ((uint32_t)4))))
			{
				goto IL_0263_1;
			}
		}
		{
			// basicOutlineOOBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_66 = __this->___basicOutlineOOBorder_18;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_67 = __this->___UIManagerAsset_4;
			NullCheck(L_67);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_68 = L_67->___buttonBorderColor_14;
			NullCheck(L_66);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_66, L_68);
			// basicOutlineOOFilled.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_69 = __this->___basicOutlineOOFilled_19;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_70 = __this->___UIManagerAsset_4;
			NullCheck(L_70);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_71 = L_70->___buttonBorderColor_14;
			NullCheck(L_69);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_69, L_71);
			// basicOutlineOOIcon.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_72 = __this->___basicOutlineOOIcon_20;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_73 = __this->___UIManagerAsset_4;
			NullCheck(L_73);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_74 = L_73->___buttonBorderColor_14;
			NullCheck(L_72);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_72, L_74);
			// basicOutlineOOIconHighlighted.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_75 = __this->___basicOutlineOOIconHighlighted_21;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_76 = __this->___UIManagerAsset_4;
			NullCheck(L_76);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77 = L_76->___buttonFilledColor_15;
			NullCheck(L_75);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_75, L_77);
			goto IL_0a1b_1;
		}

IL_0263_1:
		{
			// else if (buttonType == ButtonType.BASIC_OUTLINE_WITH_ICON)
			int32_t L_78 = __this->___buttonType_5;
			if ((!(((uint32_t)L_78) == ((uint32_t)5))))
			{
				goto IL_0350_1;
			}
		}
		{
			// basicOutlineWOBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_79 = __this->___basicOutlineWOBorder_22;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_80 = __this->___UIManagerAsset_4;
			NullCheck(L_80);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_81 = L_80->___buttonBorderColor_14;
			NullCheck(L_79);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_79, L_81);
			// basicOutlineWOFilled.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82 = __this->___basicOutlineWOFilled_23;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_83 = __this->___UIManagerAsset_4;
			NullCheck(L_83);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_84 = L_83->___buttonBorderColor_14;
			NullCheck(L_82);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_82, L_84);
			// basicOutlineWOIcon.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85 = __this->___basicOutlineWOIcon_24;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_86 = __this->___UIManagerAsset_4;
			NullCheck(L_86);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87 = L_86->___buttonBorderColor_14;
			NullCheck(L_85);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_85, L_87);
			// basicOutlineWOIconHighlighted.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_88 = __this->___basicOutlineWOIconHighlighted_25;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_89 = __this->___UIManagerAsset_4;
			NullCheck(L_89);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_90 = L_89->___buttonFilledColor_15;
			NullCheck(L_88);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_88, L_90);
			// basicOutlineWOText.color = UIManagerAsset.buttonBorderColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_91 = __this->___basicOutlineWOText_26;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_92 = __this->___UIManagerAsset_4;
			NullCheck(L_92);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_93 = L_92->___buttonBorderColor_14;
			NullCheck(L_91);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_91, L_93);
			// basicOutlineWOTextHighligted.color = UIManagerAsset.buttonFilledColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_94 = __this->___basicOutlineWOTextHighligted_27;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_95 = __this->___UIManagerAsset_4;
			NullCheck(L_95);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_96 = L_95->___buttonFilledColor_15;
			NullCheck(L_94);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_94, L_96);
			// basicOutlineWOText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_97 = __this->___basicOutlineWOText_26;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_98 = __this->___UIManagerAsset_4;
			NullCheck(L_98);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_99 = L_98->___buttonFont_12;
			NullCheck(L_97);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_97, L_99, NULL);
			// basicOutlineWOTextHighligted.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_100 = __this->___basicOutlineWOTextHighligted_27;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_101 = __this->___UIManagerAsset_4;
			NullCheck(L_101);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_102 = L_101->___buttonFont_12;
			NullCheck(L_100);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_100, L_102, NULL);
			// basicOutlineWOText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_103 = __this->___basicOutlineWOText_26;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_104 = __this->___UIManagerAsset_4;
			NullCheck(L_104);
			float L_105 = L_104->___buttonFontSize_13;
			NullCheck(L_103);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_103, L_105, NULL);
			// basicOutlineWOTextHighligted.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_106 = __this->___basicOutlineWOTextHighligted_27;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_107 = __this->___UIManagerAsset_4;
			NullCheck(L_107);
			float L_108 = L_107->___buttonFontSize_13;
			NullCheck(L_106);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_106, L_108, NULL);
			goto IL_0a1b_1;
		}

IL_0350_1:
		{
			// else if (buttonType == ButtonType.RADIAL_ONLY_ICON)
			int32_t L_109 = __this->___buttonType_5;
			if ((!(((uint32_t)L_109) == ((uint32_t)6))))
			{
				goto IL_038a_1;
			}
		}
		{
			// radialOOBackground.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_110 = __this->___radialOOBackground_28;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_111 = __this->___UIManagerAsset_4;
			NullCheck(L_111);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_112 = L_111->___buttonBorderColor_14;
			NullCheck(L_110);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_110, L_112);
			// radialOOIcon.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_113 = __this->___radialOOIcon_29;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_114 = __this->___UIManagerAsset_4;
			NullCheck(L_114);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_115 = L_114->___buttonFilledColor_15;
			NullCheck(L_113);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_113, L_115);
			goto IL_0a1b_1;
		}

IL_038a_1:
		{
			// else if (buttonType == ButtonType.RADIAL_OUTLINE_ONLY_ICON)
			int32_t L_116 = __this->___buttonType_5;
			if ((!(((uint32_t)L_116) == ((uint32_t)7))))
			{
				goto IL_03f0_1;
			}
		}
		{
			// radialOutlineOOBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_117 = __this->___radialOutlineOOBorder_30;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_118 = __this->___UIManagerAsset_4;
			NullCheck(L_118);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_119 = L_118->___buttonBorderColor_14;
			NullCheck(L_117);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_117, L_119);
			// radialOutlineOOFilled.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_120 = __this->___radialOutlineOOFilled_31;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_121 = __this->___UIManagerAsset_4;
			NullCheck(L_121);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_122 = L_121->___buttonBorderColor_14;
			NullCheck(L_120);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_120, L_122);
			// radialOutlineOOIcon.color = UIManagerAsset.buttonIconColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_123 = __this->___radialOutlineOOIcon_32;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_124 = __this->___UIManagerAsset_4;
			NullCheck(L_124);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_125 = L_124->___buttonIconColor_20;
			NullCheck(L_123);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_123, L_125);
			// radialOutlineOOIconHighlighted.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_126 = __this->___radialOutlineOOIconHighlighted_33;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_127 = __this->___UIManagerAsset_4;
			NullCheck(L_127);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_128 = L_127->___buttonFilledColor_15;
			NullCheck(L_126);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_126, L_128);
			goto IL_0a1b_1;
		}

IL_03f0_1:
		{
			// else if (buttonType == ButtonType.ROUNDED)
			int32_t L_129 = __this->___buttonType_5;
			if ((!(((uint32_t)L_129) == ((uint32_t)8))))
			{
				goto IL_0456_1;
			}
		}
		{
			// roundedBackground.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_130 = __this->___roundedBackground_34;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_131 = __this->___UIManagerAsset_4;
			NullCheck(L_131);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_132 = L_131->___buttonBorderColor_14;
			NullCheck(L_130);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_130, L_132);
			// roundedText.color = UIManagerAsset.buttonFilledColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_133 = __this->___roundedText_35;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_134 = __this->___UIManagerAsset_4;
			NullCheck(L_134);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_135 = L_134->___buttonFilledColor_15;
			NullCheck(L_133);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_133, L_135);
			// roundedText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_136 = __this->___roundedText_35;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_137 = __this->___UIManagerAsset_4;
			NullCheck(L_137);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_138 = L_137->___buttonFont_12;
			NullCheck(L_136);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_136, L_138, NULL);
			// roundedText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_139 = __this->___roundedText_35;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_140 = __this->___UIManagerAsset_4;
			NullCheck(L_140);
			float L_141 = L_140->___buttonFontSize_13;
			NullCheck(L_139);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_139, L_141, NULL);
			goto IL_0a1b_1;
		}

IL_0456_1:
		{
			// else if (buttonType == ButtonType.ROUNDED_OUTLINE)
			int32_t L_142 = __this->___buttonType_5;
			if ((!(((uint32_t)L_142) == ((uint32_t)((int32_t)9)))))
			{
				goto IL_0a1b_1;
			}
		}
		{
			// roundedOutlineBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_143 = __this->___roundedOutlineBorder_36;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_144 = __this->___UIManagerAsset_4;
			NullCheck(L_144);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_145 = L_144->___buttonBorderColor_14;
			NullCheck(L_143);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_143, L_145);
			// roundedOutlineFilled.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_146 = __this->___roundedOutlineFilled_37;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_147 = __this->___UIManagerAsset_4;
			NullCheck(L_147);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_148 = L_147->___buttonBorderColor_14;
			NullCheck(L_146);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_146, L_148);
			// roundedOutlineText.color = UIManagerAsset.buttonBorderColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_149 = __this->___roundedOutlineText_38;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_150 = __this->___UIManagerAsset_4;
			NullCheck(L_150);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_151 = L_150->___buttonBorderColor_14;
			NullCheck(L_149);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_149, L_151);
			// roundedOutlineTextHighligted.color = UIManagerAsset.buttonFilledColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_152 = __this->___roundedOutlineTextHighligted_39;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_153 = __this->___UIManagerAsset_4;
			NullCheck(L_153);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_154 = L_153->___buttonFilledColor_15;
			NullCheck(L_152);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_152, L_154);
			// roundedOutlineText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_155 = __this->___roundedOutlineText_38;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_156 = __this->___UIManagerAsset_4;
			NullCheck(L_156);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_157 = L_156->___buttonFont_12;
			NullCheck(L_155);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_155, L_157, NULL);
			// roundedOutlineTextHighligted.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_158 = __this->___roundedOutlineTextHighligted_39;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_159 = __this->___UIManagerAsset_4;
			NullCheck(L_159);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_160 = L_159->___buttonFont_12;
			NullCheck(L_158);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_158, L_160, NULL);
			// roundedOutlineText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_161 = __this->___roundedOutlineText_38;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_162 = __this->___UIManagerAsset_4;
			NullCheck(L_162);
			float L_163 = L_162->___buttonFontSize_13;
			NullCheck(L_161);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_161, L_163, NULL);
			// roundedOutlineTextHighligted.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_164 = __this->___roundedOutlineTextHighligted_39;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_165 = __this->___UIManagerAsset_4;
			NullCheck(L_165);
			float L_166 = L_165->___buttonFontSize_13;
			NullCheck(L_164);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_164, L_166, NULL);
			goto IL_0a1b_1;
		}

IL_0518_1:
		{
			// else if (UIManagerAsset.buttonThemeType == UIManager.ButtonThemeType.CUSTOM)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_167 = __this->___UIManagerAsset_4;
			NullCheck(L_167);
			int32_t L_168 = L_167->___buttonThemeType_11;
			if ((!(((uint32_t)L_168) == ((uint32_t)1))))
			{
				goto IL_0a1b_1;
			}
		}
		{
			// if (buttonType == ButtonType.BASIC)
			int32_t L_169 = __this->___buttonType_5;
			if (L_169)
			{
				goto IL_058e_1;
			}
		}
		{
			// basicFilled.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_170 = __this->___basicFilled_7;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_171 = __this->___UIManagerAsset_4;
			NullCheck(L_171);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_172 = L_171->___buttonFilledColor_15;
			NullCheck(L_170);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_170, L_172);
			// basicText.color = UIManagerAsset.buttonTextBasicColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_173 = __this->___basicText_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_174 = __this->___UIManagerAsset_4;
			NullCheck(L_174);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_175 = L_174->___buttonTextBasicColor_16;
			NullCheck(L_173);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_173, L_175);
			// basicText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_176 = __this->___basicText_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_177 = __this->___UIManagerAsset_4;
			NullCheck(L_177);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_178 = L_177->___buttonFont_12;
			NullCheck(L_176);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_176, L_178, NULL);
			// basicText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_179 = __this->___basicText_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_180 = __this->___UIManagerAsset_4;
			NullCheck(L_180);
			float L_181 = L_180->___buttonFontSize_13;
			NullCheck(L_179);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_179, L_181, NULL);
			goto IL_0a1b_1;
		}

IL_058e_1:
		{
			// else if (buttonType == ButtonType.BASIC_ONLY_ICON)
			int32_t L_182 = __this->___buttonType_5;
			if ((!(((uint32_t)L_182) == ((uint32_t)1))))
			{
				goto IL_05c8_1;
			}
		}
		{
			// basicOnlyIconFilled.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_183 = __this->___basicOnlyIconFilled_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_184 = __this->___UIManagerAsset_4;
			NullCheck(L_184);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_185 = L_184->___buttonFilledColor_15;
			NullCheck(L_183);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_183, L_185);
			// basicOnlyIconIcon.color = UIManagerAsset.buttonIconBasicColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_186 = __this->___basicOnlyIconIcon_10;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_187 = __this->___UIManagerAsset_4;
			NullCheck(L_187);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_188 = L_187->___buttonIconBasicColor_19;
			NullCheck(L_186);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_186, L_188);
			goto IL_0a1b_1;
		}

IL_05c8_1:
		{
			// else if (buttonType == ButtonType.BASIC_WITH_ICON)
			int32_t L_189 = __this->___buttonType_5;
			if ((!(((uint32_t)L_189) == ((uint32_t)2))))
			{
				goto IL_0644_1;
			}
		}
		{
			// basicWithIconFilled.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_190 = __this->___basicWithIconFilled_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_191 = __this->___UIManagerAsset_4;
			NullCheck(L_191);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_192 = L_191->___buttonFilledColor_15;
			NullCheck(L_190);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_190, L_192);
			// basicWithIconIcon.color = UIManagerAsset.buttonIconBasicColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_193 = __this->___basicWithIconIcon_12;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_194 = __this->___UIManagerAsset_4;
			NullCheck(L_194);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_195 = L_194->___buttonIconBasicColor_19;
			NullCheck(L_193);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_193, L_195);
			// basicWithIconText.color = UIManagerAsset.buttonTextBasicColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_196 = __this->___basicWithIconText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_197 = __this->___UIManagerAsset_4;
			NullCheck(L_197);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_198 = L_197->___buttonTextBasicColor_16;
			NullCheck(L_196);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_196, L_198);
			// basicWithIconText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_199 = __this->___basicWithIconText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_200 = __this->___UIManagerAsset_4;
			NullCheck(L_200);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_201 = L_200->___buttonFont_12;
			NullCheck(L_199);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_199, L_201, NULL);
			// basicWithIconText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_202 = __this->___basicWithIconText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_203 = __this->___UIManagerAsset_4;
			NullCheck(L_203);
			float L_204 = L_203->___buttonFontSize_13;
			NullCheck(L_202);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_202, L_204, NULL);
			goto IL_0a1b_1;
		}

IL_0644_1:
		{
			// else if (buttonType == ButtonType.BASIC_OUTLINE)
			int32_t L_205 = __this->___buttonType_5;
			if ((!(((uint32_t)L_205) == ((uint32_t)3))))
			{
				goto IL_0705_1;
			}
		}
		{
			// basicOutlineBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_206 = __this->___basicOutlineBorder_14;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_207 = __this->___UIManagerAsset_4;
			NullCheck(L_207);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_208 = L_207->___buttonBorderColor_14;
			NullCheck(L_206);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_206, L_208);
			// basicOutlineFilled.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_209 = __this->___basicOutlineFilled_15;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_210 = __this->___UIManagerAsset_4;
			NullCheck(L_210);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_211 = L_210->___buttonFilledColor_15;
			NullCheck(L_209);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_209, L_211);
			// basicOutlineText.color = UIManagerAsset.buttonTextColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_212 = __this->___basicOutlineText_16;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_213 = __this->___UIManagerAsset_4;
			NullCheck(L_213);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_214 = L_213->___buttonTextColor_17;
			NullCheck(L_212);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_212, L_214);
			// basicOutlineTextHighligted.color = UIManagerAsset.buttonTextHighlightedColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_215 = __this->___basicOutlineTextHighligted_17;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_216 = __this->___UIManagerAsset_4;
			NullCheck(L_216);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_217 = L_216->___buttonTextHighlightedColor_18;
			NullCheck(L_215);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_215, L_217);
			// basicOutlineText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_218 = __this->___basicOutlineText_16;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_219 = __this->___UIManagerAsset_4;
			NullCheck(L_219);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_220 = L_219->___buttonFont_12;
			NullCheck(L_218);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_218, L_220, NULL);
			// basicOutlineTextHighligted.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_221 = __this->___basicOutlineTextHighligted_17;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_222 = __this->___UIManagerAsset_4;
			NullCheck(L_222);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_223 = L_222->___buttonFont_12;
			NullCheck(L_221);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_221, L_223, NULL);
			// basicOutlineText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_224 = __this->___basicOutlineText_16;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_225 = __this->___UIManagerAsset_4;
			NullCheck(L_225);
			float L_226 = L_225->___buttonFontSize_13;
			NullCheck(L_224);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_224, L_226, NULL);
			// basicOutlineTextHighligted.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_227 = __this->___basicOutlineTextHighligted_17;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_228 = __this->___UIManagerAsset_4;
			NullCheck(L_228);
			float L_229 = L_228->___buttonFontSize_13;
			NullCheck(L_227);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_227, L_229, NULL);
			goto IL_0a1b_1;
		}

IL_0705_1:
		{
			// else if (buttonType == ButtonType.BASIC_OUTLINE_ONLY_ICON)
			int32_t L_230 = __this->___buttonType_5;
			if ((!(((uint32_t)L_230) == ((uint32_t)4))))
			{
				goto IL_076b_1;
			}
		}
		{
			// basicOutlineOOBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_231 = __this->___basicOutlineOOBorder_18;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_232 = __this->___UIManagerAsset_4;
			NullCheck(L_232);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_233 = L_232->___buttonBorderColor_14;
			NullCheck(L_231);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_231, L_233);
			// basicOutlineOOFilled.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_234 = __this->___basicOutlineOOFilled_19;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_235 = __this->___UIManagerAsset_4;
			NullCheck(L_235);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_236 = L_235->___buttonFilledColor_15;
			NullCheck(L_234);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_234, L_236);
			// basicOutlineOOIcon.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_237 = __this->___basicOutlineOOIcon_20;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_238 = __this->___UIManagerAsset_4;
			NullCheck(L_238);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_239 = L_238->___buttonBorderColor_14;
			NullCheck(L_237);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_237, L_239);
			// basicOutlineOOIconHighlighted.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_240 = __this->___basicOutlineOOIconHighlighted_21;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_241 = __this->___UIManagerAsset_4;
			NullCheck(L_241);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_242 = L_241->___buttonFilledColor_15;
			NullCheck(L_240);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_240, L_242);
			goto IL_0a1b_1;
		}

IL_076b_1:
		{
			// else if (buttonType == ButtonType.BASIC_OUTLINE_WITH_ICON)
			int32_t L_243 = __this->___buttonType_5;
			if ((!(((uint32_t)L_243) == ((uint32_t)5))))
			{
				goto IL_0858_1;
			}
		}
		{
			// basicOutlineWOBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_244 = __this->___basicOutlineWOBorder_22;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_245 = __this->___UIManagerAsset_4;
			NullCheck(L_245);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_246 = L_245->___buttonBorderColor_14;
			NullCheck(L_244);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_244, L_246);
			// basicOutlineWOFilled.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_247 = __this->___basicOutlineWOFilled_23;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_248 = __this->___UIManagerAsset_4;
			NullCheck(L_248);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_249 = L_248->___buttonFilledColor_15;
			NullCheck(L_247);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_247, L_249);
			// basicOutlineWOIcon.color = UIManagerAsset.buttonIconColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_250 = __this->___basicOutlineWOIcon_24;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_251 = __this->___UIManagerAsset_4;
			NullCheck(L_251);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_252 = L_251->___buttonIconColor_20;
			NullCheck(L_250);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_250, L_252);
			// basicOutlineWOIconHighlighted.color = UIManagerAsset.buttonIconHighlightedColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_253 = __this->___basicOutlineWOIconHighlighted_25;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_254 = __this->___UIManagerAsset_4;
			NullCheck(L_254);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_255 = L_254->___buttonIconHighlightedColor_21;
			NullCheck(L_253);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_253, L_255);
			// basicOutlineWOText.color = UIManagerAsset.buttonTextColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_256 = __this->___basicOutlineWOText_26;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_257 = __this->___UIManagerAsset_4;
			NullCheck(L_257);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_258 = L_257->___buttonTextColor_17;
			NullCheck(L_256);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_256, L_258);
			// basicOutlineWOTextHighligted.color = UIManagerAsset.buttonTextHighlightedColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_259 = __this->___basicOutlineWOTextHighligted_27;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_260 = __this->___UIManagerAsset_4;
			NullCheck(L_260);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_261 = L_260->___buttonTextHighlightedColor_18;
			NullCheck(L_259);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_259, L_261);
			// basicOutlineWOText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_262 = __this->___basicOutlineWOText_26;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_263 = __this->___UIManagerAsset_4;
			NullCheck(L_263);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_264 = L_263->___buttonFont_12;
			NullCheck(L_262);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_262, L_264, NULL);
			// basicOutlineWOTextHighligted.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_265 = __this->___basicOutlineWOTextHighligted_27;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_266 = __this->___UIManagerAsset_4;
			NullCheck(L_266);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_267 = L_266->___buttonFont_12;
			NullCheck(L_265);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_265, L_267, NULL);
			// basicOutlineWOText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_268 = __this->___basicOutlineWOText_26;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_269 = __this->___UIManagerAsset_4;
			NullCheck(L_269);
			float L_270 = L_269->___buttonFontSize_13;
			NullCheck(L_268);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_268, L_270, NULL);
			// basicOutlineWOTextHighligted.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_271 = __this->___basicOutlineWOTextHighligted_27;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_272 = __this->___UIManagerAsset_4;
			NullCheck(L_272);
			float L_273 = L_272->___buttonFontSize_13;
			NullCheck(L_271);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_271, L_273, NULL);
			goto IL_0a1b_1;
		}

IL_0858_1:
		{
			// else if (buttonType == ButtonType.RADIAL_ONLY_ICON)
			int32_t L_274 = __this->___buttonType_5;
			if ((!(((uint32_t)L_274) == ((uint32_t)6))))
			{
				goto IL_0892_1;
			}
		}
		{
			// radialOOBackground.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_275 = __this->___radialOOBackground_28;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_276 = __this->___UIManagerAsset_4;
			NullCheck(L_276);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_277 = L_276->___buttonFilledColor_15;
			NullCheck(L_275);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_275, L_277);
			// radialOOIcon.color = UIManagerAsset.buttonIconBasicColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_278 = __this->___radialOOIcon_29;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_279 = __this->___UIManagerAsset_4;
			NullCheck(L_279);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_280 = L_279->___buttonIconBasicColor_19;
			NullCheck(L_278);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_278, L_280);
			goto IL_0a1b_1;
		}

IL_0892_1:
		{
			// else if (buttonType == ButtonType.RADIAL_OUTLINE_ONLY_ICON)
			int32_t L_281 = __this->___buttonType_5;
			if ((!(((uint32_t)L_281) == ((uint32_t)7))))
			{
				goto IL_08f8_1;
			}
		}
		{
			// radialOutlineOOBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_282 = __this->___radialOutlineOOBorder_30;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_283 = __this->___UIManagerAsset_4;
			NullCheck(L_283);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_284 = L_283->___buttonBorderColor_14;
			NullCheck(L_282);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_282, L_284);
			// radialOutlineOOFilled.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_285 = __this->___radialOutlineOOFilled_31;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_286 = __this->___UIManagerAsset_4;
			NullCheck(L_286);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_287 = L_286->___buttonFilledColor_15;
			NullCheck(L_285);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_285, L_287);
			// radialOutlineOOIcon.color = UIManagerAsset.buttonIconColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_288 = __this->___radialOutlineOOIcon_32;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_289 = __this->___UIManagerAsset_4;
			NullCheck(L_289);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_290 = L_289->___buttonIconColor_20;
			NullCheck(L_288);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_288, L_290);
			// radialOutlineOOIconHighlighted.color = UIManagerAsset.buttonIconHighlightedColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_291 = __this->___radialOutlineOOIconHighlighted_33;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_292 = __this->___UIManagerAsset_4;
			NullCheck(L_292);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_293 = L_292->___buttonIconHighlightedColor_21;
			NullCheck(L_291);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_291, L_293);
			goto IL_0a1b_1;
		}

IL_08f8_1:
		{
			// else if (buttonType == ButtonType.ROUNDED)
			int32_t L_294 = __this->___buttonType_5;
			if ((!(((uint32_t)L_294) == ((uint32_t)8))))
			{
				goto IL_095e_1;
			}
		}
		{
			// roundedBackground.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_295 = __this->___roundedBackground_34;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_296 = __this->___UIManagerAsset_4;
			NullCheck(L_296);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_297 = L_296->___buttonFilledColor_15;
			NullCheck(L_295);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_295, L_297);
			// roundedText.color = UIManagerAsset.buttonTextBasicColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_298 = __this->___roundedText_35;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_299 = __this->___UIManagerAsset_4;
			NullCheck(L_299);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_300 = L_299->___buttonTextBasicColor_16;
			NullCheck(L_298);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_298, L_300);
			// roundedText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_301 = __this->___roundedText_35;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_302 = __this->___UIManagerAsset_4;
			NullCheck(L_302);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_303 = L_302->___buttonFont_12;
			NullCheck(L_301);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_301, L_303, NULL);
			// roundedText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_304 = __this->___roundedText_35;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_305 = __this->___UIManagerAsset_4;
			NullCheck(L_305);
			float L_306 = L_305->___buttonFontSize_13;
			NullCheck(L_304);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_304, L_306, NULL);
			goto IL_0a1b_1;
		}

IL_095e_1:
		{
			// else if (buttonType == ButtonType.ROUNDED_OUTLINE)
			int32_t L_307 = __this->___buttonType_5;
			if ((!(((uint32_t)L_307) == ((uint32_t)((int32_t)9)))))
			{
				goto IL_0a1b_1;
			}
		}
		{
			// roundedOutlineBorder.color = UIManagerAsset.buttonBorderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_308 = __this->___roundedOutlineBorder_36;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_309 = __this->___UIManagerAsset_4;
			NullCheck(L_309);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_310 = L_309->___buttonBorderColor_14;
			NullCheck(L_308);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_308, L_310);
			// roundedOutlineFilled.color = UIManagerAsset.buttonFilledColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_311 = __this->___roundedOutlineFilled_37;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_312 = __this->___UIManagerAsset_4;
			NullCheck(L_312);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_313 = L_312->___buttonFilledColor_15;
			NullCheck(L_311);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_311, L_313);
			// roundedOutlineText.color = UIManagerAsset.buttonTextColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_314 = __this->___roundedOutlineText_38;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_315 = __this->___UIManagerAsset_4;
			NullCheck(L_315);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_316 = L_315->___buttonTextColor_17;
			NullCheck(L_314);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_314, L_316);
			// roundedOutlineTextHighligted.color = UIManagerAsset.buttonTextHighlightedColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_317 = __this->___roundedOutlineTextHighligted_39;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_318 = __this->___UIManagerAsset_4;
			NullCheck(L_318);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_319 = L_318->___buttonTextHighlightedColor_18;
			NullCheck(L_317);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_317, L_319);
			// roundedOutlineText.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_320 = __this->___roundedOutlineText_38;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_321 = __this->___UIManagerAsset_4;
			NullCheck(L_321);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_322 = L_321->___buttonFont_12;
			NullCheck(L_320);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_320, L_322, NULL);
			// roundedOutlineTextHighligted.font = UIManagerAsset.buttonFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_323 = __this->___roundedOutlineTextHighligted_39;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_324 = __this->___UIManagerAsset_4;
			NullCheck(L_324);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_325 = L_324->___buttonFont_12;
			NullCheck(L_323);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_323, L_325, NULL);
			// roundedOutlineText.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_326 = __this->___roundedOutlineText_38;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_327 = __this->___UIManagerAsset_4;
			NullCheck(L_327);
			float L_328 = L_327->___buttonFontSize_13;
			NullCheck(L_326);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_326, L_328, NULL);
			// roundedOutlineTextHighligted.fontSize = UIManagerAsset.buttonFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_329 = __this->___roundedOutlineTextHighligted_39;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_330 = __this->___UIManagerAsset_4;
			NullCheck(L_330);
			float L_331 = L_330->___buttonFontSize_13;
			NullCheck(L_329);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_329, L_331, NULL);
		}

IL_0a1b_1:
		{
			// }
			goto IL_0a20;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0a1d;
		}
		throw e;
	}

CATCH_0a1d:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0a20;
	}// end catch (depth: 1)

IL_0a20:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerButton__ctor_m1277D3DD5FEEC449D5427E0DC221533A756A139B (UIManagerButton_tDBCC56BB5AC64BEE72F0EE022087F149A0576A76* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerContextMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerContextMenu_Awake_m943D832FC2FE626AD9C0479FED03220518C93007 (UIManagerContextMenu_t5202ADB13D57B215B622761F7909D1C3F5798127* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateContextMenu();
			UIManagerContextMenu_UpdateContextMenu_m8290CACF35CBE7A9776FE5F1306ECE6E2481E2EC(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerContextMenu::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerContextMenu_LateUpdate_m8CEE467F9C14DE1FF0B26B8E2EF3B2C82427DD33 (UIManagerContextMenu_t5202ADB13D57B215B622761F7909D1C3F5798127* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateContextMenu();
		UIManagerContextMenu_UpdateContextMenu_m8290CACF35CBE7A9776FE5F1306ECE6E2481E2EC(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerContextMenu::UpdateContextMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerContextMenu_UpdateContextMenu_m8290CACF35CBE7A9776FE5F1306ECE6E2481E2EC (UIManagerContextMenu_t5202ADB13D57B215B622761F7909D1C3F5798127* __this, const RuntimeMethod* method) 
{
	{
		// backgroundImage.color = UIManagerAsset.contextBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___backgroundImage_6;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_1 = __this->___UIManagerAsset_4;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = L_1->___contextBackgroundColor_10;
		NullCheck(L_0);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerContextMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerContextMenu__ctor_mD2559E8A5D078307E29AF3FA0AB3531CBF87748D (UIManagerContextMenu_t5202ADB13D57B215B622761F7909D1C3F5798127* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerDropdown::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerDropdown_Awake_m747760DCF421A49CC5E9DD358C403D37E3487242 (UIManagerDropdown_t3D0E999C173335861F863A8682182F435C0074BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F_m4D11731CD25EFEB71A0661F018EC47306CB8364B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE_m4FA148F9D52010D52AD990611C404CCF8694B207_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (dropdownMain != null)
			CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* L_2 = __this->___dropdownMain_14;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_0032_1;
			}
		}
		{
			// dropdownMain = gameObject.GetComponent<CustomDropdown>();
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
			L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
			NullCheck(L_4);
			CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* L_5;
			L_5 = GameObject_GetComponent_TisCustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F_m4D11731CD25EFEB71A0661F018EC47306CB8364B(L_4, GameObject_GetComponent_TisCustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F_m4D11731CD25EFEB71A0661F018EC47306CB8364B_RuntimeMethod_var);
			__this->___dropdownMain_14 = L_5;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdownMain_14), (void*)L_5);
			goto IL_0043_1;
		}

IL_0032_1:
		{
			// dropdownMulti = gameObject.GetComponent<DropdownMultiSelect>();
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
			L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
			NullCheck(L_6);
			DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE* L_7;
			L_7 = GameObject_GetComponent_TisDropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE_m4FA148F9D52010D52AD990611C404CCF8694B207(L_6, GameObject_GetComponent_TisDropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE_m4FA148F9D52010D52AD990611C404CCF8694B207_RuntimeMethod_var);
			__this->___dropdownMulti_15 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___dropdownMulti_15), (void*)L_7);
		}

IL_0043_1:
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_8 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_9)
			{
				goto IL_0061_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_10;
			L_10 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_10;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_10);
		}

IL_0061_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_11 = __this->___UIManagerAsset_4;
			NullCheck(L_11);
			bool L_12 = L_11->___enableDynamicUpdate_4;
			if (L_12)
			{
				goto IL_0082_1;
			}
		}
		{
			// UpdateDropdown();
			UIManagerDropdown_UpdateDropdown_mD6E6CFA3F513D133581E19528C7D624835C0C5CA(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0082_1:
		{
			// }
			goto IL_0092;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0084;
		}
		throw e;
	}

CATCH_0084:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0092;
	}// end catch (depth: 1)

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerDropdown::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerDropdown_LateUpdate_mD240EBFAEE73B62046B74BFFE0E94924A1435874 (UIManagerDropdown_t3D0E999C173335861F863A8682182F435C0074BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateDropdown();
		UIManagerDropdown_UpdateDropdown_mD6E6CFA3F513D133581E19528C7D624835C0C5CA(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerDropdown::UpdateDropdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerDropdown_UpdateDropdown_mD6E6CFA3F513D133581E19528C7D624835C0C5CA (UIManagerDropdown_t3D0E999C173335861F863A8682182F435C0074BE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset.buttonThemeType == UIManager.ButtonThemeType.BASIC)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			NullCheck(L_2);
			int32_t L_3 = L_2->___buttonThemeType_11;
			if (L_3)
			{
				goto IL_012e_1;
			}
		}
		{
			// background.color = UIManagerAsset.dropdownColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___background_6;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5->___dropdownColor_28;
			NullCheck(L_4);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
			// contentBackground.color = UIManagerAsset.dropdownColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___contentBackground_7;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_8 = __this->___UIManagerAsset_4;
			NullCheck(L_8);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = L_8->___dropdownColor_28;
			NullCheck(L_7);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_9);
			// mainIcon.color = UIManagerAsset.dropdownTextColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___mainIcon_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_11 = __this->___UIManagerAsset_4;
			NullCheck(L_11);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = L_11->___dropdownTextColor_29;
			NullCheck(L_10);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_12);
			// mainText.color = UIManagerAsset.dropdownTextColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_13 = __this->___mainText_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_14 = __this->___UIManagerAsset_4;
			NullCheck(L_14);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = L_14->___dropdownTextColor_29;
			NullCheck(L_13);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_13, L_15);
			// expandIcon.color = UIManagerAsset.dropdownTextColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___expandIcon_10;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_17 = __this->___UIManagerAsset_4;
			NullCheck(L_17);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = L_17->___dropdownTextColor_29;
			NullCheck(L_16);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_18);
			// itemBackground.color = UIManagerAsset.dropdownItemColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_19 = __this->___itemBackground_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_20 = __this->___UIManagerAsset_4;
			NullCheck(L_20);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21 = L_20->___dropdownItemColor_31;
			NullCheck(L_19);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_21);
			// itemIcon.color = UIManagerAsset.dropdownTextColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22 = __this->___itemIcon_12;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_23 = __this->___UIManagerAsset_4;
			NullCheck(L_23);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = L_23->___dropdownTextColor_29;
			NullCheck(L_22);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_24);
			// itemText.color = UIManagerAsset.dropdownTextColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = __this->___itemText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_26 = __this->___UIManagerAsset_4;
			NullCheck(L_26);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = L_26->___dropdownTextColor_29;
			NullCheck(L_25);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_25, L_27);
			// mainText.font = UIManagerAsset.dropdownFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_28 = __this->___mainText_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_29 = __this->___UIManagerAsset_4;
			NullCheck(L_29);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_30 = L_29->___dropdownFont_26;
			NullCheck(L_28);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_28, L_30, NULL);
			// mainText.fontSize = UIManagerAsset.dropdownFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = __this->___mainText_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_32 = __this->___UIManagerAsset_4;
			NullCheck(L_32);
			float L_33 = L_32->___dropdownFontSize_27;
			NullCheck(L_31);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_31, L_33, NULL);
			// itemText.font = UIManagerAsset.dropdownFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_34 = __this->___itemText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_35 = __this->___UIManagerAsset_4;
			NullCheck(L_35);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_36 = L_35->___dropdownFont_26;
			NullCheck(L_34);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_34, L_36, NULL);
			// itemText.fontSize = UIManagerAsset.dropdownFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_37 = __this->___itemText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_38 = __this->___UIManagerAsset_4;
			NullCheck(L_38);
			float L_39 = L_38->___dropdownFontSize_27;
			NullCheck(L_37);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_37, L_39, NULL);
			goto IL_0247_1;
		}

IL_012e_1:
		{
			// else if (UIManagerAsset.buttonThemeType == UIManager.ButtonThemeType.CUSTOM)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_40 = __this->___UIManagerAsset_4;
			NullCheck(L_40);
			int32_t L_41 = L_40->___buttonThemeType_11;
			if ((!(((uint32_t)L_41) == ((uint32_t)1))))
			{
				goto IL_0247_1;
			}
		}
		{
			// background.color = UIManagerAsset.dropdownColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_42 = __this->___background_6;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_43 = __this->___UIManagerAsset_4;
			NullCheck(L_43);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44 = L_43->___dropdownColor_28;
			NullCheck(L_42);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_44);
			// contentBackground.color = UIManagerAsset.dropdownColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_45 = __this->___contentBackground_7;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_46 = __this->___UIManagerAsset_4;
			NullCheck(L_46);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_47 = L_46->___dropdownColor_28;
			NullCheck(L_45);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_45, L_47);
			// mainIcon.color = UIManagerAsset.dropdownIconColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_48 = __this->___mainIcon_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_49 = __this->___UIManagerAsset_4;
			NullCheck(L_49);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_50 = L_49->___dropdownIconColor_30;
			NullCheck(L_48);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_48, L_50);
			// mainText.color = UIManagerAsset.dropdownTextColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_51 = __this->___mainText_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_52 = __this->___UIManagerAsset_4;
			NullCheck(L_52);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53 = L_52->___dropdownTextColor_29;
			NullCheck(L_51);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_53);
			// expandIcon.color = UIManagerAsset.dropdownIconColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_54 = __this->___expandIcon_10;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_55 = __this->___UIManagerAsset_4;
			NullCheck(L_55);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = L_55->___dropdownIconColor_30;
			NullCheck(L_54);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_54, L_56);
			// itemBackground.color = UIManagerAsset.dropdownItemColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = __this->___itemBackground_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_58 = __this->___UIManagerAsset_4;
			NullCheck(L_58);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = L_58->___dropdownItemColor_31;
			NullCheck(L_57);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_57, L_59);
			// itemIcon.color = UIManagerAsset.dropdownItemIconColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_60 = __this->___itemIcon_12;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_61 = __this->___UIManagerAsset_4;
			NullCheck(L_61);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_62 = L_61->___dropdownItemIconColor_33;
			NullCheck(L_60);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_60, L_62);
			// itemText.color = UIManagerAsset.dropdownItemTextColor;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_63 = __this->___itemText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_64 = __this->___UIManagerAsset_4;
			NullCheck(L_64);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65 = L_64->___dropdownItemTextColor_32;
			NullCheck(L_63);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_63, L_65);
			// mainText.font = UIManagerAsset.dropdownFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_66 = __this->___mainText_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_67 = __this->___UIManagerAsset_4;
			NullCheck(L_67);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_68 = L_67->___dropdownFont_26;
			NullCheck(L_66);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_66, L_68, NULL);
			// mainText.fontSize = UIManagerAsset.dropdownFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_69 = __this->___mainText_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_70 = __this->___UIManagerAsset_4;
			NullCheck(L_70);
			float L_71 = L_70->___dropdownFontSize_27;
			NullCheck(L_69);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_69, L_71, NULL);
			// itemText.font = UIManagerAsset.dropdownItemFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_72 = __this->___itemText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_73 = __this->___UIManagerAsset_4;
			NullCheck(L_73);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_74 = L_73->___dropdownItemFont_22;
			NullCheck(L_72);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_72, L_74, NULL);
			// itemText.fontSize = UIManagerAsset.dropdownItemFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_75 = __this->___itemText_13;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_76 = __this->___UIManagerAsset_4;
			NullCheck(L_76);
			float L_77 = L_76->___dropdownItemFontSize_23;
			NullCheck(L_75);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_75, L_77, NULL);
		}

IL_0247_1:
		{
			// if (dropdownMain != null)
			CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* L_78 = __this->___dropdownMain_14;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_79;
			L_79 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_78, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_79)
			{
				goto IL_02ab_1;
			}
		}
		{
			// if (UIManagerAsset.dropdownAnimationType == UIManager.DropdownAnimationType.FADING)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_80 = __this->___UIManagerAsset_4;
			NullCheck(L_80);
			int32_t L_81 = L_80->___dropdownAnimationType_25;
			if (L_81)
			{
				goto IL_0273_1;
			}
		}
		{
			// dropdownMain.animationType = CustomDropdown.AnimationType.FADING;
			CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* L_82 = __this->___dropdownMain_14;
			NullCheck(L_82);
			L_82->___animationType_25 = 0;
			goto IL_030a_1;
		}

IL_0273_1:
		{
			// else if (UIManagerAsset.dropdownAnimationType == UIManager.DropdownAnimationType.SLIDING)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_83 = __this->___UIManagerAsset_4;
			NullCheck(L_83);
			int32_t L_84 = L_83->___dropdownAnimationType_25;
			if ((!(((uint32_t)L_84) == ((uint32_t)1))))
			{
				goto IL_028f_1;
			}
		}
		{
			// dropdownMain.animationType = CustomDropdown.AnimationType.SLIDING;
			CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* L_85 = __this->___dropdownMain_14;
			NullCheck(L_85);
			L_85->___animationType_25 = 1;
			goto IL_030a_1;
		}

IL_028f_1:
		{
			// else if (UIManagerAsset.dropdownAnimationType == UIManager.DropdownAnimationType.STYLISH)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_86 = __this->___UIManagerAsset_4;
			NullCheck(L_86);
			int32_t L_87 = L_86->___dropdownAnimationType_25;
			if ((!(((uint32_t)L_87) == ((uint32_t)2))))
			{
				goto IL_030a_1;
			}
		}
		{
			// dropdownMain.animationType = CustomDropdown.AnimationType.STYLISH;
			CustomDropdown_t82976D3912C92CAC881E1E6735F65A2591E9EC1F* L_88 = __this->___dropdownMain_14;
			NullCheck(L_88);
			L_88->___animationType_25 = 2;
			goto IL_030a_1;
		}

IL_02ab_1:
		{
			// else if (dropdownMulti != null)
			DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE* L_89 = __this->___dropdownMulti_15;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_90;
			L_90 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_89, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_90)
			{
				goto IL_030a_1;
			}
		}
		{
			// if (UIManagerAsset.dropdownAnimationType == UIManager.DropdownAnimationType.FADING)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_91 = __this->___UIManagerAsset_4;
			NullCheck(L_91);
			int32_t L_92 = L_91->___dropdownAnimationType_25;
			if (L_92)
			{
				goto IL_02d4_1;
			}
		}
		{
			// dropdownMulti.animationType = DropdownMultiSelect.AnimationType.FADING;
			DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE* L_93 = __this->___dropdownMulti_15;
			NullCheck(L_93);
			L_93->___animationType_19 = 0;
			goto IL_030a_1;
		}

IL_02d4_1:
		{
			// else if (UIManagerAsset.dropdownAnimationType == UIManager.DropdownAnimationType.SLIDING)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_94 = __this->___UIManagerAsset_4;
			NullCheck(L_94);
			int32_t L_95 = L_94->___dropdownAnimationType_25;
			if ((!(((uint32_t)L_95) == ((uint32_t)1))))
			{
				goto IL_02f0_1;
			}
		}
		{
			// dropdownMulti.animationType = DropdownMultiSelect.AnimationType.SLIDING;
			DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE* L_96 = __this->___dropdownMulti_15;
			NullCheck(L_96);
			L_96->___animationType_19 = 1;
			goto IL_030a_1;
		}

IL_02f0_1:
		{
			// else if (UIManagerAsset.dropdownAnimationType == UIManager.DropdownAnimationType.STYLISH)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_97 = __this->___UIManagerAsset_4;
			NullCheck(L_97);
			int32_t L_98 = L_97->___dropdownAnimationType_25;
			if ((!(((uint32_t)L_98) == ((uint32_t)2))))
			{
				goto IL_030a_1;
			}
		}
		{
			// dropdownMulti.animationType = DropdownMultiSelect.AnimationType.STYLISH;
			DropdownMultiSelect_tAC9C8FFE84183D7C381FEB053984811F253D50AE* L_99 = __this->___dropdownMulti_15;
			NullCheck(L_99);
			L_99->___animationType_19 = 2;
		}

IL_030a_1:
		{
			// }
			goto IL_030f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_030c;
		}
		throw e;
	}

CATCH_030c:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_030f;
	}// end catch (depth: 1)

IL_030f:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerDropdown::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerDropdown__ctor_m3CE3CEA1F85DBB8A430074D37D637CC0549A631E (UIManagerDropdown_t3D0E999C173335861F863A8682182F435C0074BE* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerHSelector::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerHSelector_Awake_m711481862E956A93AA333F567D887ED382C637F6 (UIManagerHSelector_t5118B938B6788E1B7CD8E66D7A73F285D15D828B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisHorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791_m5D0E06F33ED2C16E0F4191E06F653644F038B1C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true || this.enabled == false)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (L_1)
		{
			goto IL_0017;
		}
	}

IL_000f:
	{
		bool L_2;
		L_2 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(__this, NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// return;
		return;
	}

IL_0018:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (hSelector == null)
			HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791* L_3 = __this->___hSelector_9;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_4;
			L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_4)
			{
				goto IL_0038_1;
			}
		}
		{
			// hSelector = gameObject.GetComponent<HorizontalSelector>();
			GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
			L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
			NullCheck(L_5);
			HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791* L_6;
			L_6 = GameObject_GetComponent_TisHorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791_m5D0E06F33ED2C16E0F4191E06F653644F038B1C8(L_5, GameObject_GetComponent_TisHorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791_m5D0E06F33ED2C16E0F4191E06F653644F038B1C8_RuntimeMethod_var);
			__this->___hSelector_9 = L_6;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___hSelector_9), (void*)L_6);
		}

IL_0038_1:
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_7 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_8;
			L_8 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_8)
			{
				goto IL_0056_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_9;
			L_9 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_9);
		}

IL_0056_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_10 = __this->___UIManagerAsset_4;
			NullCheck(L_10);
			bool L_11 = L_10->___enableDynamicUpdate_4;
			if (L_11)
			{
				goto IL_0077_1;
			}
		}
		{
			// UpdateSelector();
			UIManagerHSelector_UpdateSelector_m4476CF3D77C9E49B1584F58C5070908F546C47C4(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0077_1:
		{
			// }
			goto IL_0087;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0079;
		}
		throw e;
	}

CATCH_0079:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0087;
	}// end catch (depth: 1)

IL_0087:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerHSelector::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerHSelector_LateUpdate_mE77E0373D6827A5EEA874544E2B9594826651648 (UIManagerHSelector_t5118B938B6788E1B7CD8E66D7A73F285D15D828B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateSelector();
		UIManagerHSelector_UpdateSelector_m4476CF3D77C9E49B1584F58C5070908F546C47C4(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerHSelector::UpdateSelector()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerHSelector_UpdateSelector_m4476CF3D77C9E49B1584F58C5070908F546C47C4 (UIManagerHSelector_t5118B938B6788E1B7CD8E66D7A73F285D15D828B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_1 = NULL;
	int32_t V_2 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_3 = NULL;
	int32_t V_4 = 0;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_5 = NULL;
	{
		// for (int i = 0; i < images.Count; ++i)
		V_0 = 0;
		goto IL_0060;
	}

IL_0004:
	{
		// Image currentImage = images[i].GetComponent<Image>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___images_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		V_1 = L_3;
		// currentImage.color = new Color(UIManagerAsset.selectorColor.r, UIManagerAsset.selectorColor.g, UIManagerAsset.selectorColor.b, currentImage.color.a);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = V_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&L_5->___selectorColor_36);
		float L_7 = L_6->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_8 = __this->___UIManagerAsset_4;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = (&L_8->___selectorColor_36);
		float L_10 = L_9->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_11 = __this->___UIManagerAsset_4;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = (&L_11->___selectorColor_36);
		float L_13 = L_12->___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = V_1;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_14);
		float L_16 = L_15.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), L_7, L_10, L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_17);
		// for (int i = 0; i < images.Count; ++i)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// for (int i = 0; i < images.Count; ++i)
		int32_t L_19 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->___images_6;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_20, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < imagesHighlighted.Count; ++i)
		V_2 = 0;
		goto IL_00ce;
	}

IL_0072:
	{
		// Image currentAlphaImage = imagesHighlighted[i].GetComponent<Image>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___imagesHighlighted_7;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, L_23, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25;
		L_25 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_24, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		V_3 = L_25;
		// currentAlphaImage.color = new Color(UIManagerAsset.selectorHighlightedColor.r, UIManagerAsset.selectorHighlightedColor.g, UIManagerAsset.selectorHighlightedColor.b, currentAlphaImage.color.a);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = V_3;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_27 = __this->___UIManagerAsset_4;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = (&L_27->___selectorHighlightedColor_37);
		float L_29 = L_28->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_30 = __this->___UIManagerAsset_4;
		NullCheck(L_30);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = (&L_30->___selectorHighlightedColor_37);
		float L_32 = L_31->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_33 = __this->___UIManagerAsset_4;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_34 = (&L_33->___selectorHighlightedColor_37);
		float L_35 = L_34->___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_36 = V_3;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_36);
		float L_38 = L_37.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		memset((&L_39), 0, sizeof(L_39));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_39), L_29, L_32, L_35, L_38, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_39);
		// for (int i = 0; i < imagesHighlighted.Count; ++i)
		int32_t L_40 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00ce:
	{
		// for (int i = 0; i < imagesHighlighted.Count; ++i)
		int32_t L_41 = V_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_42 = __this->___imagesHighlighted_7;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_42, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_41) < ((int32_t)L_43)))
		{
			goto IL_0072;
		}
	}
	{
		// for (int i = 0; i < texts.Count; ++i)
		V_4 = 0;
		goto IL_016a;
	}

IL_00e4:
	{
		// TextMeshProUGUI currentText = texts[i].GetComponent<TextMeshProUGUI>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_44 = __this->___texts_8;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_44, L_45, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_46);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_47;
		L_47 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_46, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		V_5 = L_47;
		// currentText.color = new Color(UIManagerAsset.selectorColor.r, UIManagerAsset.selectorColor.g, UIManagerAsset.selectorColor.b, currentText.color.a);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_48 = V_5;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_49 = __this->___UIManagerAsset_4;
		NullCheck(L_49);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_50 = (&L_49->___selectorColor_36);
		float L_51 = L_50->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_52 = __this->___UIManagerAsset_4;
		NullCheck(L_52);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_53 = (&L_52->___selectorColor_36);
		float L_54 = L_53->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_55 = __this->___UIManagerAsset_4;
		NullCheck(L_55);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_56 = (&L_55->___selectorColor_36);
		float L_57 = L_56->___b_2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_58 = V_5;
		NullCheck(L_58);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_58);
		float L_60 = L_59.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61;
		memset((&L_61), 0, sizeof(L_61));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_61), L_51, L_54, L_57, L_60, /*hidden argument*/NULL);
		NullCheck(L_48);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_48, L_61);
		// currentText.font = UIManagerAsset.selectorFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_62 = V_5;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_63 = __this->___UIManagerAsset_4;
		NullCheck(L_63);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_64 = L_63->___selectorFont_34;
		NullCheck(L_62);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_62, L_64, NULL);
		// currentText.fontSize = UIManagerAsset.hSelectorFontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_65 = V_5;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_66 = __this->___UIManagerAsset_4;
		NullCheck(L_66);
		float L_67 = L_66->___hSelectorFontSize_35;
		NullCheck(L_65);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_65, L_67, NULL);
		// for (int i = 0; i < texts.Count; ++i)
		int32_t L_68 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_016a:
	{
		// for (int i = 0; i < texts.Count; ++i)
		int32_t L_69 = V_4;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_70 = __this->___texts_8;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_70, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_69) < ((int32_t)L_71)))
		{
			goto IL_00e4;
		}
	}
	{
		// if (hSelector != null)
		HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791* L_72 = __this->___hSelector_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_72, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_73)
		{
			goto IL_01b6;
		}
	}
	{
		// hSelector.invertAnimation = UIManagerAsset.hSelectorInvertAnimation;
		HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791* L_74 = __this->___hSelector_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_75 = __this->___UIManagerAsset_4;
		NullCheck(L_75);
		bool L_76 = L_75->___hSelectorInvertAnimation_38;
		NullCheck(L_74);
		L_74->___invertAnimation_19 = L_76;
		// hSelector.loopSelection = UIManagerAsset.hSelectorLoopSelection;
		HorizontalSelector_t536C25AF5C0C84C3A71995C21C37B508124DB791* L_77 = __this->___hSelector_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_78 = __this->___UIManagerAsset_4;
		NullCheck(L_78);
		bool L_79 = L_78->___hSelectorLoopSelection_39;
		NullCheck(L_77);
		L_77->___loopSelection_20 = L_79;
	}

IL_01b6:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerHSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerHSelector__ctor_m7DCAF35BFC0E45AE5E5F40BC1B8D23D9B45017DA (UIManagerHSelector_t5118B938B6788E1B7CD8E66D7A73F285D15D828B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> images = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___images_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___images_6), (void*)L_0);
		// public List<GameObject> imagesHighlighted = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___imagesHighlighted_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___imagesHighlighted_7), (void*)L_1);
		// public List<GameObject> texts = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_2 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_2, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___texts_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texts_8), (void*)L_2);
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
// System.Void Michsky.UI.ModernUIPack.UIManagerInputField::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerInputField_Awake_mAC025CF2978F0E48F62CE9A404BBDBE551D35A7F (UIManagerInputField_t23A219884764CEDF5AE579FECC10FF2B97987A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateInputField();
			UIManagerInputField_UpdateInputField_m53C2FD6332FF6911F4A19D24F9C71BE3238CDA7A(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerInputField::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerInputField_LateUpdate_m07FBE2F006E13203067EA2FFC63FE088320B26B1 (UIManagerInputField_t23A219884764CEDF5AE579FECC10FF2B97987A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateInputField();
		UIManagerInputField_UpdateInputField_m53C2FD6332FF6911F4A19D24F9C71BE3238CDA7A(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerInputField::UpdateInputField()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerInputField_UpdateInputField_m53C2FD6332FF6911F4A19D24F9C71BE3238CDA7A (UIManagerInputField_t23A219884764CEDF5AE579FECC10FF2B97987A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* V_1 = NULL;
	int32_t V_2 = 0;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_3 = NULL;
	{
		// for (int i = 0; i < images.Count; ++i)
		V_0 = 0;
		goto IL_0060;
	}

IL_0004:
	{
		// Image currentImage = images[i].GetComponent<Image>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = __this->___images_6;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_0, L_1, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		V_1 = L_3;
		// currentImage.color = new Color(UIManagerAsset.inputFieldColor.r, UIManagerAsset.inputFieldColor.g, UIManagerAsset.inputFieldColor.b, currentImage.color.a);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = V_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_6 = (&L_5->___inputFieldColor_42);
		float L_7 = L_6->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_8 = __this->___UIManagerAsset_4;
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_9 = (&L_8->___inputFieldColor_42);
		float L_10 = L_9->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_11 = __this->___UIManagerAsset_4;
		NullCheck(L_11);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_12 = (&L_11->___inputFieldColor_42);
		float L_13 = L_12->___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14 = V_1;
		NullCheck(L_14);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		L_15 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_14);
		float L_16 = L_15.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_17), L_7, L_10, L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_17);
		// for (int i = 0; i < images.Count; ++i)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0060:
	{
		// for (int i = 0; i < images.Count; ++i)
		int32_t L_19 = V_0;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_20 = __this->___images_6;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_20, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_19) < ((int32_t)L_21)))
		{
			goto IL_0004;
		}
	}
	{
		// for (int i = 0; i < texts.Count; ++i)
		V_2 = 0;
		goto IL_00f0;
	}

IL_0072:
	{
		// TextMeshProUGUI currentText = texts[i].GetComponent<TextMeshProUGUI>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_22 = __this->___texts_7;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979(L_22, L_23, List_1_get_Item_mE8DBE527F24D9CFED839C34216C475B716169979_RuntimeMethod_var);
		NullCheck(L_24);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25;
		L_25 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_24, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		V_3 = L_25;
		// currentText.color = new Color(UIManagerAsset.inputFieldColor.r, UIManagerAsset.inputFieldColor.g, UIManagerAsset.inputFieldColor.b, currentText.color.a);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = V_3;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_27 = __this->___UIManagerAsset_4;
		NullCheck(L_27);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_28 = (&L_27->___inputFieldColor_42);
		float L_29 = L_28->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_30 = __this->___UIManagerAsset_4;
		NullCheck(L_30);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_31 = (&L_30->___inputFieldColor_42);
		float L_32 = L_31->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_33 = __this->___UIManagerAsset_4;
		NullCheck(L_33);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_34 = (&L_33->___inputFieldColor_42);
		float L_35 = L_34->___b_2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_36 = V_3;
		NullCheck(L_36);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		L_37 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_36);
		float L_38 = L_37.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		memset((&L_39), 0, sizeof(L_39));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_39), L_29, L_32, L_35, L_38, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_26, L_39);
		// currentText.font = UIManagerAsset.inputFieldFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = V_3;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_41 = __this->___UIManagerAsset_4;
		NullCheck(L_41);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_42 = L_41->___inputFieldFont_40;
		NullCheck(L_40);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_40, L_42, NULL);
		// currentText.fontSize = UIManagerAsset.inputFieldFontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_43 = V_3;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_44 = __this->___UIManagerAsset_4;
		NullCheck(L_44);
		float L_45 = L_44->___inputFieldFontSize_41;
		NullCheck(L_43);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_43, L_45, NULL);
		// for (int i = 0; i < texts.Count; ++i)
		int32_t L_46 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00f0:
	{
		// for (int i = 0; i < texts.Count; ++i)
		int32_t L_47 = V_2;
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_48 = __this->___texts_7;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_inline(L_48, List_1_get_Count_m4C37ED2D928D63B80F55AF434730C2D64EEB9F22_RuntimeMethod_var);
		if ((((int32_t)L_47) < ((int32_t)L_49)))
		{
			goto IL_0072;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerInputField::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerInputField__ctor_m90126EC5A284952BC701535401F339D7D467A731 (UIManagerInputField_t23A219884764CEDF5AE579FECC10FF2B97987A12* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<GameObject> images = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_0 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_0, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___images_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___images_6), (void*)L_0);
		// public List<GameObject> texts = new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_1 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_1, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		__this->___texts_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___texts_7), (void*)L_1);
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
// System.Void Michsky.UI.ModernUIPack.UIManagerModalWindow::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerModalWindow_Awake_m507F89EB1D3C72374C944C401E7F3D00569A9BC7 (UIManagerModalWindow_tF334E46DFD82D725A2171587092C097003A9EC84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateModalWindow();
			UIManagerModalWindow_UpdateModalWindow_mAB6C7E7BEFC296663DA48E49593BBE28AC1A5495(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerModalWindow::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerModalWindow_LateUpdate_mD7369CDC2EA9DCA0BD662B6CB6BAACB1B2F18769 (UIManagerModalWindow_tF334E46DFD82D725A2171587092C097003A9EC84* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateModalWindow();
		UIManagerModalWindow_UpdateModalWindow_mAB6C7E7BEFC296663DA48E49593BBE28AC1A5495(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerModalWindow::UpdateModalWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerModalWindow_UpdateModalWindow_mAB6C7E7BEFC296663DA48E49593BBE28AC1A5495 (UIManagerModalWindow_tF334E46DFD82D725A2171587092C097003A9EC84* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		// background.color = UIManagerAsset.modalWindowBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_3 = __this->___UIManagerAsset_4;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___modalWindowBackgroundColor_49;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// contentBackground.color = UIManagerAsset.modalWindowContentPanelColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___contentBackground_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_6 = __this->___UIManagerAsset_4;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___modalWindowContentPanelColor_50;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// icon.color = UIManagerAsset.modalWindowIconColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___icon_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_9 = __this->___UIManagerAsset_4;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___modalWindowIconColor_48;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_10);
		// title.color = UIManagerAsset.modalWindowTitleColor;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___title_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_12 = __this->___UIManagerAsset_4;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12->___modalWindowTitleColor_46;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_13);
		// description.color = UIManagerAsset.modalWindowDescriptionColor;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___description_10;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_15 = __this->___UIManagerAsset_4;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = L_15->___modalWindowDescriptionColor_47;
		NullCheck(L_14);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_16);
		// title.font = UIManagerAsset.modalWindowTitleFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___title_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_18 = __this->___UIManagerAsset_4;
		NullCheck(L_18);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_19 = L_18->___modalWindowTitleFont_43;
		NullCheck(L_17);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_17, L_19, NULL);
		// description.font = UIManagerAsset.modalWindowContentFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___description_10;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_21 = __this->___UIManagerAsset_4;
		NullCheck(L_21);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_22 = L_21->___modalWindowContentFont_44;
		NullCheck(L_20);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_20, L_22, NULL);
		// }
		goto IL_00b0;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00ad;
		}
		throw e;
	}

CATCH_00ad:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00b0;
	}// end catch (depth: 1)

IL_00b0:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerModalWindow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerModalWindow__ctor_mD6F12D7796001E20001F52BD82B7EEBDF775F0A0 (UIManagerModalWindow_tF334E46DFD82D725A2171587092C097003A9EC84* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerNotification::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerNotification_Awake_mDECA1E0147B525EB3268A43833273C7609729897 (UIManagerNotification_t88F573098C62D58BBBC59551CD498BE0C6D14C0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateNotification();
			UIManagerNotification_UpdateNotification_m8650DF53AFB05D3B5231650BEF21054629ED173F(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerNotification::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerNotification_LateUpdate_m6D4652FA673A31080EB39E81330F14513B44701D (UIManagerNotification_t88F573098C62D58BBBC59551CD498BE0C6D14C0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateNotification();
		UIManagerNotification_UpdateNotification_m8650DF53AFB05D3B5231650BEF21054629ED173F(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerNotification::UpdateNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerNotification_UpdateNotification_m8650DF53AFB05D3B5231650BEF21054629ED173F (UIManagerNotification_t88F573098C62D58BBBC59551CD498BE0C6D14C0D* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		// background.color = UIManagerAsset.notificationBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_3 = __this->___UIManagerAsset_4;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___notificationBackgroundColor_56;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// icon.color = UIManagerAsset.notificationIconColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___icon_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_6 = __this->___UIManagerAsset_4;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___notificationIconColor_59;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// title.color = UIManagerAsset.notificationTitleColor;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___title_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_9 = __this->___UIManagerAsset_4;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___notificationTitleColor_57;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_10);
		// description.color = UIManagerAsset.notificationDescriptionColor;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___description_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_12 = __this->___UIManagerAsset_4;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = L_12->___notificationDescriptionColor_58;
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_13);
		// title.font = UIManagerAsset.notificationTitleFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___title_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_15 = __this->___UIManagerAsset_4;
		NullCheck(L_15);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_16 = L_15->___notificationTitleFont_51;
		NullCheck(L_14);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_14, L_16, NULL);
		// title.fontSize = UIManagerAsset.notificationTitleFontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_17 = __this->___title_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_18 = __this->___UIManagerAsset_4;
		NullCheck(L_18);
		float L_19 = L_18->___notificationTitleFontSize_52;
		NullCheck(L_17);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_17, L_19, NULL);
		// description.font = UIManagerAsset.notificationDescriptionFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___description_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_21 = __this->___UIManagerAsset_4;
		NullCheck(L_21);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_22 = L_21->___notificationDescriptionFont_53;
		NullCheck(L_20);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_20, L_22, NULL);
		// description.fontSize = UIManagerAsset.notificationDescriptionFontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_23 = __this->___description_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_24 = __this->___UIManagerAsset_4;
		NullCheck(L_24);
		float L_25 = L_24->___notificationDescriptionFontSize_54;
		NullCheck(L_23);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_23, L_25, NULL);
		// }
		goto IL_00c6;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c3;
		}
		throw e;
	}

CATCH_00c3:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00c6;
	}// end catch (depth: 1)

IL_00c6:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerNotification::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerNotification__ctor_m7C415613D7E41E6C2DB4395455A7DEDEE0767128 (UIManagerNotification_t88F573098C62D58BBBC59551CD498BE0C6D14C0D* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerPieChart::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerPieChart__ctor_mAF09225DADA0F2376E2BDE5EC777139DFF641EF0 (UIManagerPieChart_t4C0D858AF056796F23A21F475AA2251BBB56C55E* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBar_Awake_m637692F7A663DB6756347813A2F61CECA9CA4CF6 (UIManagerProgressBar_t3E9D23017D4282C00C7CBD36D94BB6BD53056100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateProgressBar();
			UIManagerProgressBar_UpdateProgressBar_mFE8AC2DD6253194B84F49A20E4C0C02CAC6C69A4(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBar::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBar_LateUpdate_m9B3D797B1B8A2BFD0E3F41649CA4038EAFDE3E38 (UIManagerProgressBar_t3E9D23017D4282C00C7CBD36D94BB6BD53056100* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateProgressBar();
		UIManagerProgressBar_UpdateProgressBar_mFE8AC2DD6253194B84F49A20E4C0C02CAC6C69A4(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBar::UpdateProgressBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBar_UpdateProgressBar_mFE8AC2DD6253194B84F49A20E4C0C02CAC6C69A4 (UIManagerProgressBar_t3E9D23017D4282C00C7CBD36D94BB6BD53056100* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		// bar.color = UIManagerAsset.progressBarColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___bar_6;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_3 = __this->___UIManagerAsset_4;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___progressBarColor_62;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// background.color = UIManagerAsset.progressBarBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___background_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_6 = __this->___UIManagerAsset_4;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___progressBarBackgroundColor_63;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// label.color = UIManagerAsset.progressBarLabelColor;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___label_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_9 = __this->___UIManagerAsset_4;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___progressBarLabelColor_65;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_10);
		// label.font = UIManagerAsset.progressBarLabelFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___label_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_12 = __this->___UIManagerAsset_4;
		NullCheck(L_12);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_13 = L_12->___progressBarLabelFont_60;
		NullCheck(L_11);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_11, L_13, NULL);
		// label.fontSize = UIManagerAsset.progressBarLabelFontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___label_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_15 = __this->___UIManagerAsset_4;
		NullCheck(L_15);
		float L_16 = L_15->___progressBarLabelFontSize_61;
		NullCheck(L_14);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_14, L_16, NULL);
		// }
		goto IL_0084;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0084;
	}// end catch (depth: 1)

IL_0084:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBar__ctor_m64BF9D8EE6451E430536AA4DB9617B483CFA0D9B (UIManagerProgressBar_t3E9D23017D4282C00C7CBD36D94BB6BD53056100* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBarLoop_Awake_mF81773E38B631503451563BC39DE5AC854C75D89 (UIManagerProgressBarLoop_t00705338CCFCC39D4B98E73931D562028D8A1811* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_7;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateProgressBar();
			UIManagerProgressBarLoop_UpdateProgressBar_m41248C62B8834BACE35E702EDCA2FCC1212DE1ED(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBarLoop_LateUpdate_m6B7A8C3BA8CC733880B51A50D4247B20193D6C7F (UIManagerProgressBarLoop_t00705338CCFCC39D4B98E73931D562028D8A1811* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateProgressBar();
		UIManagerProgressBarLoop_UpdateProgressBar_m41248C62B8834BACE35E702EDCA2FCC1212DE1ED(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::UpdateProgressBar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBarLoop_UpdateProgressBar_m41248C62B8834BACE35E702EDCA2FCC1212DE1ED (UIManagerProgressBarLoop_t00705338CCFCC39D4B98E73931D562028D8A1811* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_7;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// bar.color = UIManagerAsset.progressBarColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___bar_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_3 = __this->___UIManagerAsset_4;
			NullCheck(L_3);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___progressBarColor_62;
			NullCheck(L_2);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
			// if (hasBackground == true)
			bool L_5 = __this->___hasBackground_5;
			if (!L_5)
			{
				goto IL_0065_1;
			}
		}
		{
			// if (useRegularBackground == true)
			bool L_6 = __this->___useRegularBackground_6;
			if (!L_6)
			{
				goto IL_004f_1;
			}
		}
		{
			// background.color = UIManagerAsset.progressBarBackgroundColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___background_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_8 = __this->___UIManagerAsset_4;
			NullCheck(L_8);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = L_8->___progressBarBackgroundColor_63;
			NullCheck(L_7);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_9);
			goto IL_0065_1;
		}

IL_004f_1:
		{
			// background.color = UIManagerAsset.progressBarLoopBackgroundColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___background_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_11 = __this->___UIManagerAsset_4;
			NullCheck(L_11);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = L_11->___progressBarLoopBackgroundColor_64;
			NullCheck(L_10);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_12);
		}

IL_0065_1:
		{
			// }
			goto IL_006a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0067;
		}
		throw e;
	}

CATCH_0067:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006a;
	}// end catch (depth: 1)

IL_006a:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerProgressBarLoop::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerProgressBarLoop__ctor_mB5A95A6BA45D4D0514BDA6976A84C103F2D17193 (UIManagerProgressBarLoop_t00705338CCFCC39D4B98E73931D562028D8A1811* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerScrollbar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerScrollbar_Awake_mACE3310B2DA5CE369EACCC7581AC6EAE698721C0 (UIManagerScrollbar_tEC34CA446FD18E5B69031806C8EB87C4F883C547* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateScrollbar();
			UIManagerScrollbar_UpdateScrollbar_mD5B754C5C72203372355A37BAD7DD68D1F118872(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerScrollbar::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerScrollbar_LateUpdate_m553FBF5DE49243F3989EE0C8F7BDFF0335814398 (UIManagerScrollbar_tEC34CA446FD18E5B69031806C8EB87C4F883C547* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateScrollbar();
		UIManagerScrollbar_UpdateScrollbar_mD5B754C5C72203372355A37BAD7DD68D1F118872(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerScrollbar::UpdateScrollbar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerScrollbar_UpdateScrollbar_mD5B754C5C72203372355A37BAD7DD68D1F118872 (UIManagerScrollbar_tEC34CA446FD18E5B69031806C8EB87C4F883C547* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		// background.color = UIManagerAsset.scrollbarBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_3 = __this->___UIManagerAsset_4;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___scrollbarBackgroundColor_67;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// bar.color = UIManagerAsset.scrollbarColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___bar_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_6 = __this->___UIManagerAsset_4;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___scrollbarColor_66;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// }
		goto IL_0042;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003f;
		}
		throw e;
	}

CATCH_003f:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0042;
	}// end catch (depth: 1)

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerScrollbar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerScrollbar__ctor_mD440E45E179A4F1461EA370B6D43F2D445E52B1E (UIManagerScrollbar_tEC34CA446FD18E5B69031806C8EB87C4F883C547* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerSlider::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSlider_Awake_m4369021C9DDB378052100CC9A4F49586C1A1A3E5 (UIManagerSlider_t3E93FA1D8585657FE1E890C0668F88254CE97C6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_7;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateSlider();
			UIManagerSlider_UpdateSlider_m56871C9FF62D89C93E2E6E91AD99C42278BE32A9(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerSlider::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSlider_LateUpdate_mABE53C6D0C2739C1F0B707D25F860BDC1A5DEFA9 (UIManagerSlider_t3E93FA1D8585657FE1E890C0668F88254CE97C6A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateSlider();
		UIManagerSlider_UpdateSlider_m56871C9FF62D89C93E2E6E91AD99C42278BE32A9(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerSlider::UpdateSlider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSlider_UpdateSlider_m56871C9FF62D89C93E2E6E91AD99C42278BE32A9 (UIManagerSlider_t3E93FA1D8585657FE1E890C0668F88254CE97C6A* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_7;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset.sliderThemeType == UIManager.SliderThemeType.BASIC)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			NullCheck(L_2);
			int32_t L_3 = L_2->___sliderThemeType_70;
			if (L_3)
			{
				goto IL_015d_1;
			}
		}
		{
			// background.color = UIManagerAsset.sliderBackgroundColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___background_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = L_5->___sliderBackgroundColor_72;
			NullCheck(L_4);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_4, L_6);
			// bar.color = UIManagerAsset.sliderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7 = __this->___bar_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_8 = __this->___UIManagerAsset_4;
			NullCheck(L_8);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = L_8->___sliderColor_71;
			NullCheck(L_7);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_7, L_9);
			// handle.color = UIManagerAsset.sliderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10 = __this->___handle_10;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_11 = __this->___UIManagerAsset_4;
			NullCheck(L_11);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = L_11->___sliderColor_71;
			NullCheck(L_10);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_12);
			// if (hasLabel == true)
			bool L_13 = __this->___hasLabel_5;
			if (!L_13)
			{
				goto IL_00e7_1;
			}
		}
		{
			// label.color = new Color(UIManagerAsset.sliderColor.r, UIManagerAsset.sliderColor.g, UIManagerAsset.sliderColor.b, label.color.a);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_14 = __this->___label_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_15 = __this->___UIManagerAsset_4;
			NullCheck(L_15);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = (&L_15->___sliderColor_71);
			float L_17 = L_16->___r_0;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_18 = __this->___UIManagerAsset_4;
			NullCheck(L_18);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19 = (&L_18->___sliderColor_71);
			float L_20 = L_19->___g_1;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_21 = __this->___UIManagerAsset_4;
			NullCheck(L_21);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_22 = (&L_21->___sliderColor_71);
			float L_23 = L_22->___b_2;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_24 = __this->___label_11;
			NullCheck(L_24);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
			L_25 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_24);
			float L_26 = L_25.___a_3;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
			memset((&L_27), 0, sizeof(L_27));
			Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_27), L_17, L_20, L_23, L_26, /*hidden argument*/NULL);
			NullCheck(L_14);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_14, L_27);
			// label.font = UIManagerAsset.sliderLabelFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_28 = __this->___label_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_29 = __this->___UIManagerAsset_4;
			NullCheck(L_29);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_30 = L_29->___sliderLabelFont_68;
			NullCheck(L_28);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_28, L_30, NULL);
			// label.fontSize = UIManagerAsset.sliderLabelFontSize;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = __this->___label_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_32 = __this->___UIManagerAsset_4;
			NullCheck(L_32);
			float L_33 = L_32->___sliderLabelFontSize_69;
			NullCheck(L_31);
			TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_31, L_33, NULL);
		}

IL_00e7_1:
		{
			// if (hasPopupLabel == true)
			bool L_34 = __this->___hasPopupLabel_6;
			if (!L_34)
			{
				goto IL_02a2_1;
			}
		}
		{
			// popupLabel.color = new Color(UIManagerAsset.sliderPopupLabelColor.r, UIManagerAsset.sliderPopupLabelColor.g, UIManagerAsset.sliderPopupLabelColor.b, popupLabel.color.a);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_35 = __this->___popupLabel_12;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_36 = __this->___UIManagerAsset_4;
			NullCheck(L_36);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_37 = (&L_36->___sliderPopupLabelColor_74);
			float L_38 = L_37->___r_0;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_39 = __this->___UIManagerAsset_4;
			NullCheck(L_39);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_40 = (&L_39->___sliderPopupLabelColor_74);
			float L_41 = L_40->___g_1;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_42 = __this->___UIManagerAsset_4;
			NullCheck(L_42);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_43 = (&L_42->___sliderPopupLabelColor_74);
			float L_44 = L_43->___b_2;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_45 = __this->___popupLabel_12;
			NullCheck(L_45);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_46;
			L_46 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_45);
			float L_47 = L_46.___a_3;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
			memset((&L_48), 0, sizeof(L_48));
			Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_48), L_38, L_41, L_44, L_47, /*hidden argument*/NULL);
			NullCheck(L_35);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_35, L_48);
			// popupLabel.font = UIManagerAsset.sliderLabelFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_49 = __this->___popupLabel_12;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_50 = __this->___UIManagerAsset_4;
			NullCheck(L_50);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_51 = L_50->___sliderLabelFont_68;
			NullCheck(L_49);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_49, L_51, NULL);
			goto IL_02a2_1;
		}

IL_015d_1:
		{
			// else if (UIManagerAsset.sliderThemeType == UIManager.SliderThemeType.CUSTOM)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_52 = __this->___UIManagerAsset_4;
			NullCheck(L_52);
			int32_t L_53 = L_52->___sliderThemeType_70;
			if ((!(((uint32_t)L_53) == ((uint32_t)1))))
			{
				goto IL_02a2_1;
			}
		}
		{
			// background.color = UIManagerAsset.sliderBackgroundColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_54 = __this->___background_8;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_55 = __this->___UIManagerAsset_4;
			NullCheck(L_55);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = L_55->___sliderBackgroundColor_72;
			NullCheck(L_54);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_54, L_56);
			// bar.color = UIManagerAsset.sliderColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_57 = __this->___bar_9;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_58 = __this->___UIManagerAsset_4;
			NullCheck(L_58);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59 = L_58->___sliderColor_71;
			NullCheck(L_57);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_57, L_59);
			// handle.color = UIManagerAsset.sliderHandleColor;
			Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_60 = __this->___handle_10;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_61 = __this->___UIManagerAsset_4;
			NullCheck(L_61);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_62 = L_61->___sliderHandleColor_75;
			NullCheck(L_60);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_60, L_62);
			// if (hasLabel == true)
			bool L_63 = __this->___hasLabel_5;
			if (!L_63)
			{
				goto IL_0234_1;
			}
		}
		{
			// label.color = new Color(UIManagerAsset.sliderLabelColor.r, UIManagerAsset.sliderLabelColor.g, UIManagerAsset.sliderLabelColor.b, label.color.a);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_64 = __this->___label_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_65 = __this->___UIManagerAsset_4;
			NullCheck(L_65);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_66 = (&L_65->___sliderLabelColor_73);
			float L_67 = L_66->___r_0;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_68 = __this->___UIManagerAsset_4;
			NullCheck(L_68);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_69 = (&L_68->___sliderLabelColor_73);
			float L_70 = L_69->___g_1;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_71 = __this->___UIManagerAsset_4;
			NullCheck(L_71);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_72 = (&L_71->___sliderLabelColor_73);
			float L_73 = L_72->___b_2;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_74 = __this->___label_11;
			NullCheck(L_74);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_75;
			L_75 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_74);
			float L_76 = L_75.___a_3;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
			memset((&L_77), 0, sizeof(L_77));
			Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_77), L_67, L_70, L_73, L_76, /*hidden argument*/NULL);
			NullCheck(L_64);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_64, L_77);
			// label.font = UIManagerAsset.sliderLabelFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_78 = __this->___label_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_79 = __this->___UIManagerAsset_4;
			NullCheck(L_79);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_80 = L_79->___sliderLabelFont_68;
			NullCheck(L_78);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_78, L_80, NULL);
			// label.font = UIManagerAsset.sliderLabelFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_81 = __this->___label_11;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_82 = __this->___UIManagerAsset_4;
			NullCheck(L_82);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_83 = L_82->___sliderLabelFont_68;
			NullCheck(L_81);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_81, L_83, NULL);
		}

IL_0234_1:
		{
			// if (hasPopupLabel == true)
			bool L_84 = __this->___hasPopupLabel_6;
			if (!L_84)
			{
				goto IL_02a2_1;
			}
		}
		{
			// popupLabel.color = new Color(UIManagerAsset.sliderPopupLabelColor.r, UIManagerAsset.sliderPopupLabelColor.g, UIManagerAsset.sliderPopupLabelColor.b, popupLabel.color.a);
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_85 = __this->___popupLabel_12;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_86 = __this->___UIManagerAsset_4;
			NullCheck(L_86);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_87 = (&L_86->___sliderPopupLabelColor_74);
			float L_88 = L_87->___r_0;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_89 = __this->___UIManagerAsset_4;
			NullCheck(L_89);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_90 = (&L_89->___sliderPopupLabelColor_74);
			float L_91 = L_90->___g_1;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_92 = __this->___UIManagerAsset_4;
			NullCheck(L_92);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_93 = (&L_92->___sliderPopupLabelColor_74);
			float L_94 = L_93->___b_2;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_95 = __this->___popupLabel_12;
			NullCheck(L_95);
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_96;
			L_96 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_95);
			float L_97 = L_96.___a_3;
			Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_98;
			memset((&L_98), 0, sizeof(L_98));
			Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_98), L_88, L_91, L_94, L_97, /*hidden argument*/NULL);
			NullCheck(L_85);
			VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_85, L_98);
			// popupLabel.font = UIManagerAsset.sliderLabelFont;
			TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_99 = __this->___popupLabel_12;
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_100 = __this->___UIManagerAsset_4;
			NullCheck(L_100);
			TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_101 = L_100->___sliderLabelFont_68;
			NullCheck(L_99);
			TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_99, L_101, NULL);
		}

IL_02a2_1:
		{
			// }
			goto IL_02a7;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_02a4;
		}
		throw e;
	}

CATCH_02a4:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_02a7;
	}// end catch (depth: 1)

IL_02a7:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSlider__ctor_mDB742B38CD30108B249B05FD2CC4934026ADB4FE (UIManagerSlider_t3E93FA1D8585657FE1E890C0668F88254CE97C6A* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerSwitch::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSwitch_Awake_m934E55C915E331E4BC23406650CEEC87E89E569A (UIManagerSwitch_t10308E1F0F799B9D61640874FF2AEF87E2761C02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateSwitch();
			UIManagerSwitch_UpdateSwitch_mF4126657F75EB6356C4DDE34FCDFA07DDBEA7E01(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerSwitch::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSwitch_LateUpdate_mEFB4369F2E16813F4AF25F6E852B4774E41608DD (UIManagerSwitch_t10308E1F0F799B9D61640874FF2AEF87E2761C02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateSwitch();
		UIManagerSwitch_UpdateSwitch_mF4126657F75EB6356C4DDE34FCDFA07DDBEA7E01(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerSwitch::UpdateSwitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSwitch_UpdateSwitch_mF4126657F75EB6356C4DDE34FCDFA07DDBEA7E01 (UIManagerSwitch_t10308E1F0F799B9D61640874FF2AEF87E2761C02* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		// border.color = new Color(UIManagerAsset.switchBorderColor.r, UIManagerAsset.switchBorderColor.g, UIManagerAsset.switchBorderColor.b, border.color.a);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___border_6;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_3 = __this->___UIManagerAsset_4;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&L_3->___switchBorderColor_76);
		float L_5 = L_4->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_6 = __this->___UIManagerAsset_4;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_7 = (&L_6->___switchBorderColor_76);
		float L_8 = L_7->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_9 = __this->___UIManagerAsset_4;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_10 = (&L_9->___switchBorderColor_76);
		float L_11 = L_10->___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12 = __this->___border_6;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13;
		L_13 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_12);
		float L_14 = L_13.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15;
		memset((&L_15), 0, sizeof(L_15));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_15), L_5, L_8, L_11, L_14, /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_15);
		// background.color = new Color(UIManagerAsset.switchBackgroundColor.r, UIManagerAsset.switchBackgroundColor.g, UIManagerAsset.switchBackgroundColor.b, background.color.a);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16 = __this->___background_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_17 = __this->___UIManagerAsset_4;
		NullCheck(L_17);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_18 = (&L_17->___switchBackgroundColor_77);
		float L_19 = L_18->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_20 = __this->___UIManagerAsset_4;
		NullCheck(L_20);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_21 = (&L_20->___switchBackgroundColor_77);
		float L_22 = L_21->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_23 = __this->___UIManagerAsset_4;
		NullCheck(L_23);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_24 = (&L_23->___switchBackgroundColor_77);
		float L_25 = L_24->___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_26 = __this->___background_7;
		NullCheck(L_26);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_26);
		float L_28 = L_27.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_29), L_19, L_22, L_25, L_28, /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_29);
		// handleOn.color = new Color(UIManagerAsset.switchHandleOnColor.r, UIManagerAsset.switchHandleOnColor.g, UIManagerAsset.switchHandleOnColor.b, handleOn.color.a);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_30 = __this->___handleOn_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_31 = __this->___UIManagerAsset_4;
		NullCheck(L_31);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_32 = (&L_31->___switchHandleOnColor_78);
		float L_33 = L_32->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_34 = __this->___UIManagerAsset_4;
		NullCheck(L_34);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_35 = (&L_34->___switchHandleOnColor_78);
		float L_36 = L_35->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_37 = __this->___UIManagerAsset_4;
		NullCheck(L_37);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_38 = (&L_37->___switchHandleOnColor_78);
		float L_39 = L_38->___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40 = __this->___handleOn_8;
		NullCheck(L_40);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_40);
		float L_42 = L_41.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		memset((&L_43), 0, sizeof(L_43));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_43), L_33, L_36, L_39, L_42, /*hidden argument*/NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_43);
		// handleOff.color = new Color(UIManagerAsset.switchHandleOffColor.r, UIManagerAsset.switchHandleOffColor.g, UIManagerAsset.switchHandleOffColor.b, handleOff.color.a);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_44 = __this->___handleOff_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_45 = __this->___UIManagerAsset_4;
		NullCheck(L_45);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_46 = (&L_45->___switchHandleOffColor_79);
		float L_47 = L_46->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_48 = __this->___UIManagerAsset_4;
		NullCheck(L_48);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_49 = (&L_48->___switchHandleOffColor_79);
		float L_50 = L_49->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_51 = __this->___UIManagerAsset_4;
		NullCheck(L_51);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_52 = (&L_51->___switchHandleOffColor_79);
		float L_53 = L_52->___b_2;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_54 = __this->___handleOff_9;
		NullCheck(L_54);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		L_55 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_54);
		float L_56 = L_55.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57;
		memset((&L_57), 0, sizeof(L_57));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_57), L_47, L_50, L_53, L_56, /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_44, L_57);
		// }
		goto IL_0156;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0153;
		}
		throw e;
	}

CATCH_0153:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0156;
	}// end catch (depth: 1)

IL_0156:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerSwitch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerSwitch__ctor_m2685EFBED9E596E3F86466FA4FDC3F14441A9779 (UIManagerSwitch_t10308E1F0F799B9D61640874FF2AEF87E2761C02* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerToggle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerToggle_Awake_m3485DDB687F253A73818333E7E7AAFB65FEE5B40 (UIManagerToggle_tF3715BC417FB445F6C94BC4518984FB61F64CF80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateToggle();
			UIManagerToggle_UpdateToggle_m3306956DE4CEA776202A4B4CB80B14355C01714A(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerToggle::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerToggle_LateUpdate_mF05FC22CF9845E9FE6105D1D662AD98B5544E1F9 (UIManagerToggle_tF3715BC417FB445F6C94BC4518984FB61F64CF80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateToggle();
		UIManagerToggle_UpdateToggle_m3306956DE4CEA776202A4B4CB80B14355C01714A(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerToggle::UpdateToggle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerToggle_UpdateToggle_m3306956DE4CEA776202A4B4CB80B14355C01714A (UIManagerToggle_tF3715BC417FB445F6C94BC4518984FB61F64CF80* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		// border.color = UIManagerAsset.toggleBorderColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___border_6;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_3 = __this->___UIManagerAsset_4;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___toggleBorderColor_84;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// background.color = UIManagerAsset.toggleBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5 = __this->___background_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_6 = __this->___UIManagerAsset_4;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___toggleBackgroundColor_85;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// check.color = UIManagerAsset.toggleCheckColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8 = __this->___check_8;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_9 = __this->___UIManagerAsset_4;
		NullCheck(L_9);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = L_9->___toggleCheckColor_86;
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_10);
		// onLabel.color = new Color(UIManagerAsset.toggleTextColor.r, UIManagerAsset.toggleTextColor.g, UIManagerAsset.toggleTextColor.b, onLabel.color.a);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___onLabel_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_12 = __this->___UIManagerAsset_4;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_13 = (&L_12->___toggleTextColor_83);
		float L_14 = L_13->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_15 = __this->___UIManagerAsset_4;
		NullCheck(L_15);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_16 = (&L_15->___toggleTextColor_83);
		float L_17 = L_16->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_18 = __this->___UIManagerAsset_4;
		NullCheck(L_18);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_19 = (&L_18->___toggleTextColor_83);
		float L_20 = L_19->___b_2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___onLabel_9;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_21);
		float L_23 = L_22.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		memset((&L_24), 0, sizeof(L_24));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_24), L_14, L_17, L_20, L_23, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_24);
		// onLabel.font = UIManagerAsset.toggleFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_25 = __this->___onLabel_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_26 = __this->___UIManagerAsset_4;
		NullCheck(L_26);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_27 = L_26->___toggleFont_80;
		NullCheck(L_25);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_25, L_27, NULL);
		// onLabel.fontSize = UIManagerAsset.toggleFontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_28 = __this->___onLabel_9;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_29 = __this->___UIManagerAsset_4;
		NullCheck(L_29);
		float L_30 = L_29->___toggleFontSize_81;
		NullCheck(L_28);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_28, L_30, NULL);
		// offLabel.color = new Color(UIManagerAsset.toggleTextColor.r, UIManagerAsset.toggleTextColor.g, UIManagerAsset.toggleTextColor.b, offLabel.color.a);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_31 = __this->___offLabel_10;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_32 = __this->___UIManagerAsset_4;
		NullCheck(L_32);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_33 = (&L_32->___toggleTextColor_83);
		float L_34 = L_33->___r_0;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_35 = __this->___UIManagerAsset_4;
		NullCheck(L_35);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_36 = (&L_35->___toggleTextColor_83);
		float L_37 = L_36->___g_1;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_38 = __this->___UIManagerAsset_4;
		NullCheck(L_38);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_39 = (&L_38->___toggleTextColor_83);
		float L_40 = L_39->___b_2;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_41 = __this->___offLabel_10;
		NullCheck(L_41);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_42;
		L_42 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_41);
		float L_43 = L_42.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_44;
		memset((&L_44), 0, sizeof(L_44));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_44), L_34, L_37, L_40, L_43, /*hidden argument*/NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_31, L_44);
		// offLabel.font = UIManagerAsset.toggleFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_45 = __this->___offLabel_10;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_46 = __this->___UIManagerAsset_4;
		NullCheck(L_46);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_47 = L_46->___toggleFont_80;
		NullCheck(L_45);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_45, L_47, NULL);
		// offLabel.fontSize = UIManagerAsset.toggleFontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_48 = __this->___offLabel_10;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_49 = __this->___UIManagerAsset_4;
		NullCheck(L_49);
		float L_50 = L_49->___toggleFontSize_81;
		NullCheck(L_48);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_48, L_50, NULL);
		// }
		goto IL_0150;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014d;
		}
		throw e;
	}

CATCH_014d:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0150;
	}// end catch (depth: 1)

IL_0150:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerToggle__ctor_m70D731D98185D1269EA7987A91A7314ADCE70FCD (UIManagerToggle_tF3715BC417FB445F6C94BC4518984FB61F64CF80* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerTooltip::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerTooltip_Awake_m40B7CF3615E7E19E55587B05623B3653BCF9F150 (UIManagerTooltip_tB4C4AF938181B5351FE87A6BB5FFB1B9D9E76A91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// if (UIManagerAsset == null)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
			il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
			bool L_3;
			L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
			if (!L_3)
			{
				goto IL_002f_1;
			}
		}
		{
			// UIManagerAsset = Resources.Load<UIManager>("MUIP Manager");
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_4;
			L_4 = Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE(_stringLiteralC32A8F61D3DD5AF9BFEE043051BF152CB823C71F, Resources_Load_TisUIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45_m3980CD3BF3CC42D38D71C76C9E45A9113176BCEE_RuntimeMethod_var);
			__this->___UIManagerAsset_4 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___UIManagerAsset_4), (void*)L_4);
		}

IL_002f_1:
		{
			// this.enabled = true;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)1, NULL);
			// if (UIManagerAsset.enableDynamicUpdate == false)
			UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_5 = __this->___UIManagerAsset_4;
			NullCheck(L_5);
			bool L_6 = L_5->___enableDynamicUpdate_4;
			if (L_6)
			{
				goto IL_0050_1;
			}
		}
		{
			// UpdateTooltip();
			UIManagerTooltip_UpdateTooltip_m6DBC54411B39E185881D99A50ACAEC4434B84415(__this, NULL);
			// this.enabled = false;
			Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		}

IL_0050_1:
		{
			// }
			goto IL_0060;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0052;
		}
		throw e;
	}

CATCH_0052:
	{// begin catch(System.Object)
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m06155ED25645EBBC06B4C8F05235EF41B1489C7E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3D75AED4DE2715CDCD9C3CBE4F3454959D3A133)), __this, NULL);
		// catch { Debug.Log("<b>[Modern UI Pack]</b> No UI Manager found, assign it manually.", this); }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0060;
	}// end catch (depth: 1)

IL_0060:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerTooltip::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerTooltip_LateUpdate_m6EC44B641F8AB1654AEA674146C63B28324EC339 (UIManagerTooltip_tB4C4AF938181B5351FE87A6BB5FFB1B9D9E76A91* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (UIManagerAsset == null)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_0 = __this->___UIManagerAsset_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (UIManagerAsset.enableDynamicUpdate == true)
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_2 = __this->___UIManagerAsset_4;
		NullCheck(L_2);
		bool L_3 = L_2->___enableDynamicUpdate_4;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// UpdateTooltip();
		UIManagerTooltip_UpdateTooltip_m6DBC54411B39E185881D99A50ACAEC4434B84415(__this, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerTooltip::UpdateTooltip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerTooltip_UpdateTooltip_m6DBC54411B39E185881D99A50ACAEC4434B84415 (UIManagerTooltip_tB4C4AF938181B5351FE87A6BB5FFB1B9D9E76A91* __this, const RuntimeMethod* method) 
{
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (Application.isPlaying && webglMode == true)
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___webglMode_5;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		return;
	}

IL_0010:
	{
	}
	try
	{// begin try (depth: 1)
		// background.color = UIManagerAsset.tooltipBackgroundColor;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2 = __this->___background_6;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_3 = __this->___UIManagerAsset_4;
		NullCheck(L_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = L_3->___tooltipBackgroundColor_90;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// text.color = UIManagerAsset.tooltipTextColor;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_5 = __this->___text_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_6 = __this->___UIManagerAsset_4;
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___tooltipTextColor_89;
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// text.font = UIManagerAsset.tooltipFont;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___text_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_9 = __this->___UIManagerAsset_4;
		NullCheck(L_9);
		TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* L_10 = L_9->___tooltipFont_87;
		NullCheck(L_8);
		TMP_Text_set_font_mC55E4A8C1C09595031384B35F2C2FB2FC3479E83(L_8, L_10, NULL);
		// text.fontSize = UIManagerAsset.tooltipFontSize;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11 = __this->___text_7;
		UIManager_tBF1D5B1B30568ABB4117673EDB7976A442039C45* L_12 = __this->___UIManagerAsset_4;
		NullCheck(L_12);
		float L_13 = L_12->___tooltipFontSize_88;
		NullCheck(L_11);
		TMP_Text_set_fontSize_m1C3A3BA2BC88E5E1D89375FD35A0AA91E75D3AAD(L_11, L_13, NULL);
		// }
		goto IL_006e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006b;
		}
		throw e;
	}

CATCH_006b:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006e;
	}// end catch (depth: 1)

IL_006e:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.UIManagerTooltip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerTooltip__ctor_m71225417358C5160C4228B91B23E63773144ACEF (UIManagerTooltip_tB4C4AF938181B5351FE87A6BB5FFB1B9D9E76A91* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.UIManagerWindowManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManagerWindowManager__ctor_m6D7719CD37C2893946B031B8A9F326B461180909 (UIManagerWindowManager_tB4469D0FAA9F9E8D3EE1189E770DDC7DE1692660* __this, const RuntimeMethod* method) 
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
// System.Void Michsky.UI.ModernUIPack.WindowDragger::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowDragger_Start_m0D48ADF19391CFA6302BFB329F7C53B2DADFB1F8 (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if(dragArea == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___dragArea_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	try
	{// begin try (depth: 1)
		// var canvas = (Canvas)GameObject.FindObjectsOfType(typeof(Canvas))[0];
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* L_4;
		L_4 = Object_FindObjectsOfType_m3F1266E2DA67B067B22A3105C8F86A4EECCFEC4A(L_3, NULL);
		NullCheck(L_4);
		int32_t L_5 = 0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_0 = ((Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26*)CastclassSealed((RuntimeObject*)L_6, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_il2cpp_TypeInfo_var));
		// dragArea = canvas.GetComponent<RectTransform>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = V_0;
		NullCheck(L_7);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8;
		L_8 = Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4(L_7, Component_GetComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m0640480E7E38BB88B0D1F6AD59E697C8EE6AAFA4_RuntimeMethod_var);
		__this->___dragArea_4 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dragArea_4), (void*)L_8);
		// }
		goto IL_0040;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{// begin catch(System.Object)
		// catch
		// Debug.LogError("Movable Window - Drag Area has not been assigned.");
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral420D147F653744AD282955DF186E73A6B871EB22)), NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0040;
	}// end catch (depth: 1)

IL_0040:
	{
		// }
		return;
	}
}
// UnityEngine.RectTransform Michsky.UI.ModernUIPack.WindowDragger::get_DragObjectInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0 (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (dragObject == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___dragObject_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// return (transform as RectTransform);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		return ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
	}

IL_001a:
	{
		// return dragObject;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___dragObject_5;
		return L_3;
	}
}
// UnityEngine.RectTransform Michsky.UI.ModernUIPack.WindowDragger::get_DragAreaInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* WindowDragger_get_DragAreaInternal_mBEB30D0F99DD5AC624BDFE4FF54D70CC4CC9258D (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_0 = NULL;
	{
		// if (dragArea == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___dragArea_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// RectTransform canvas = transform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_2, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		goto IL_0028;
	}

IL_001c:
	{
		// canvas = canvas.parent as RectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = V_0;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_3, NULL);
		V_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_4, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
	}

IL_0028:
	{
		// while (canvas.parent != null && canvas.parent is RectTransform)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_0;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0043;
		}
	}
	{
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_8 = V_0;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_8, NULL);
		if (((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_9, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)))
		{
			goto IL_001c;
		}
	}

IL_0043:
	{
		// return canvas;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10 = V_0;
		return L_10;
	}

IL_0045:
	{
		// return dragArea;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_11 = __this->___dragArea_4;
		return L_11;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowDragger::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowDragger_OnBeginDrag_mC0CA3062233CC2FA4D3CFA30DDAC9BCA639BE1D8 (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// originalPanelLocalPosition = DragObjectInternal.localPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		__this->___originalPanelLocalPosition_8 = L_1;
		// RectTransformUtility.ScreenPointToLocalPointInRectangle(DragAreaInternal, data.position, data.pressEventCamera, out originalLocalPointerPosition);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = WindowDragger_get_DragAreaInternal_mBEB30D0F99DD5AC624BDFE4FF54D70CC4CC9258D(__this, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___data0;
		NullCheck(L_3);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_3, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_5 = ___data0;
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___originalLocalPointerPosition_7);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_2, L_4, L_6, L_7, NULL);
		// gameObject.transform.SetAsLastSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9;
		L_9 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_10, NULL);
		// if (topOnClick == true)
		bool L_11 = __this->___topOnClick_6;
		if (!L_11)
		{
			goto IL_0057;
		}
	}
	{
		// dragObject.transform.SetAsLastSibling();
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_12 = __this->___dragObject_5;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_12, NULL);
		NullCheck(L_13);
		Transform_SetAsLastSibling_m848AF1A0B4C7912FE88D8CBCF92B83D57B2B917E(L_13, NULL);
	}

IL_0057:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowDragger::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowDragger_OnDrag_mB30C3A79B97B7050ABA7DF8EC93DDB0CDF494CF9 (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (RectTransformUtility.ScreenPointToLocalPointInRectangle(DragAreaInternal, data.position, data.pressEventCamera, out localPointerPosition))
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = WindowDragger_get_DragAreaInternal_mBEB30D0F99DD5AC624BDFE4FF54D70CC4CC9258D(__this, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_1 = ___data0;
		NullCheck(L_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = PointerEventData_get_position_m5BE71C28EB72EFB8435749E4E6E839213AEF458C_inline(L_1, NULL);
		PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* L_3 = ___data0;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = PointerEventData_get_pressEventCamera_m8D6A377D5CA730307D9F8ABB8656FFB8FCD56AE3(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(RectTransformUtility_t65C00A84A72F17D78B81F2E7D88C2AA98AB61244_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = RectTransformUtility_ScreenPointToLocalPointInRectangle_m01A75CAFB6D1019F1C65BA606635EAB10AF31195(L_0, L_2, L_4, (&V_0), NULL);
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// Vector3 offsetToOriginal = localPointerPosition - originalLocalPointerPosition;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = __this->___originalLocalPointerPosition_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		V_1 = L_9;
		// DragObjectInternal.localPosition = originalPanelLocalPosition + offsetToOriginal;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___originalPanelLocalPosition_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_12, NULL);
		NullCheck(L_10);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_10, L_13, NULL);
	}

IL_0044:
	{
		// ClampToArea();
		WindowDragger_ClampToArea_m20D51420EB4C367309058EAFF850BA879EFABD31(__this, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowDragger::ClampToArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowDragger_ClampToArea_m20D51420EB4C367309058EAFF850BA879EFABD31 (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// Vector3 pos = DragObjectInternal.localPosition;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0(__this, NULL);
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		V_0 = L_1;
		// Vector3 minPosition = DragAreaInternal.rect.min - DragObjectInternal.rect.min;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = WindowDragger_get_DragAreaInternal_mBEB30D0F99DD5AC624BDFE4FF54D70CC4CC9258D(__this, NULL);
		NullCheck(L_2);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_2, NULL);
		V_3 = L_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		L_4 = Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC((&V_3), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5;
		L_5 = WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0(__this, NULL);
		NullCheck(L_5);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		L_6 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_5, NULL);
		V_3 = L_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7;
		L_7 = Rect_get_min_mD0D1BABF9C955D2D9CCA86E257B0783ACDEE69AC((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_4, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_8, NULL);
		V_1 = L_9;
		// Vector3 maxPosition = DragAreaInternal.rect.max - DragObjectInternal.rect.max;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_10;
		L_10 = WindowDragger_get_DragAreaInternal_mBEB30D0F99DD5AC624BDFE4FF54D70CC4CC9258D(__this, NULL);
		NullCheck(L_10);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_11;
		L_11 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_10, NULL);
		V_3 = L_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167((&V_3), NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_13;
		L_13 = WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0(__this, NULL);
		NullCheck(L_13);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_14;
		L_14 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_13, NULL);
		V_3 = L_14;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15;
		L_15 = Rect_get_max_m60149158D9A01113214BB417AA48CEF774899167((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_12, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_16, NULL);
		V_2 = L_17;
		// pos.x = Mathf.Clamp(DragObjectInternal.localPosition.x, minPosition.x, maxPosition.x);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_18;
		L_18 = WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0(__this, NULL);
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_18, NULL);
		float L_20 = L_19.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_1;
		float L_22 = L_21.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		float L_24 = L_23.___x_2;
		float L_25;
		L_25 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_20, L_22, L_24, NULL);
		(&V_0)->___x_2 = L_25;
		// pos.y = Mathf.Clamp(DragObjectInternal.localPosition.y, minPosition.y, maxPosition.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_26;
		L_26 = WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0(__this, NULL);
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_26, NULL);
		float L_28 = L_27.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		float L_30 = L_29.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_2;
		float L_32 = L_31.___y_3;
		float L_33;
		L_33 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(L_28, L_30, L_32, NULL);
		(&V_0)->___y_3 = L_33;
		// DragObjectInternal.localPosition = pos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_34;
		L_34 = WindowDragger_get_DragObjectInternal_mF14F7FC95BED857B2B0F94CA7CEA90E153A845E0(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_0;
		NullCheck(L_34);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_34, L_35, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowDragger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowDragger__ctor_m48968F3D1FBFC58E296096DDB3FE9548ADD1D18C (WindowDragger_t191B1A54E4C40CDA94FD4B1905A87049FE0333AF* __this, const RuntimeMethod* method) 
{
	{
		// public bool topOnClick = true;
		__this->___topOnClick_6 = (bool)1;
		UIBehaviour__ctor_m24C66A65DDD996E779871C6655CF11B871F11337(__this, NULL);
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
// System.Void Michsky.UI.ModernUIPack.WindowManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_Start_m0429D0438C0C876319A3D694CEEE3E4DD0AC7618 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// currentButton = windows[currentWindowIndex].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_0 = __this->___windows_4;
		int32_t L_1 = __this->___currentWindowIndex_5;
		NullCheck(L_0);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_2;
		L_2 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_0, L_1, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = L_2->___buttonObject_2;
		__this->___currentButton_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButton_13), (void*)L_3);
		// currentButtonAnimator = currentButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___currentButton_13;
		NullCheck(L_4);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5;
		L_5 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_4, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentButtonAnimator_17 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButtonAnimator_17), (void*)L_5);
		// currentButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = __this->___currentButtonAnimator_17;
		String_t* L_7 = __this->___buttonFadeIn_21;
		NullCheck(L_6);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_6, L_7, NULL);
		// }
		goto IL_0043;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0040;
		}
		throw e;
	}

CATCH_0040:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0043;
	}// end catch (depth: 1)

IL_0043:
	{
		// currentWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_8 = __this->___windows_4;
		int32_t L_9 = __this->___currentWindowIndex_5;
		NullCheck(L_8);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_10;
		L_10 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_8, L_9, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___windowObject_1;
		__this->___currentWindow_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindow_11), (void*)L_11);
		// currentWindowAnimator = currentWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___currentWindow_11;
		NullCheck(L_12);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_13;
		L_13 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_12, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentWindowAnimator_15 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindowAnimator_15), (void*)L_13);
		// currentWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14 = __this->___currentWindowAnimator_15;
		String_t* L_15 = __this->___windowFadeIn_19;
		NullCheck(L_14);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_14, L_15, NULL);
		// onWindowChange.Invoke(currentWindowIndex);
		WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C* L_16 = __this->___onWindowChange_10;
		int32_t L_17 = __this->___currentWindowIndex_5;
		NullCheck(L_16);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_16, L_17, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		// isFirstTime = false;
		__this->___isFirstTime_9 = (bool)0;
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_OnEnable_mC8653D1A01AD26A2F80C7042292B9D7E85C63478 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isFirstTime == false && nextWindowAnimator == null)
		bool L_0 = __this->___isFirstTime_9;
		if (L_0)
		{
			goto IL_0039;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___nextWindowAnimator_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// currentWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3 = __this->___currentWindowAnimator_15;
		String_t* L_4 = __this->___windowFadeIn_19;
		NullCheck(L_3);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_3, L_4, NULL);
		// currentButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_5 = __this->___currentButtonAnimator_17;
		String_t* L_6 = __this->___buttonFadeIn_21;
		NullCheck(L_5);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_5, L_6, NULL);
		return;
	}

IL_0039:
	{
		// else if (isFirstTime == false && nextWindowAnimator != null)
		bool L_7 = __this->___isFirstTime_9;
		if (L_7)
		{
			goto IL_0071;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_8 = __this->___nextWindowAnimator_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0071;
		}
	}
	{
		// nextWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_10 = __this->___nextWindowAnimator_16;
		String_t* L_11 = __this->___windowFadeIn_19;
		NullCheck(L_10);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_10, L_11, NULL);
		// nextButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_12 = __this->___nextButtonAnimator_18;
		String_t* L_13 = __this->___buttonFadeIn_21;
		NullCheck(L_12);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_12, L_13, NULL);
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::OpenFirstTab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_OpenFirstTab_m53A2ED9C29333E5EC482C37F24130C8845A98092 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (currentWindowIndex != 0)
		int32_t L_0 = __this->___currentWindowIndex_5;
		if (!L_0)
		{
			goto IL_012d;
		}
	}
	{
		// currentWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_1 = __this->___windows_4;
		int32_t L_2 = __this->___currentWindowIndex_5;
		NullCheck(L_1);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_3;
		L_3 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_1, L_2, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___windowObject_1;
		__this->___currentWindow_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindow_11), (void*)L_4);
		// currentWindowAnimator = currentWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___currentWindow_11;
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentWindowAnimator_15 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindowAnimator_15), (void*)L_6);
		// currentWindowAnimator.Play(windowFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___currentWindowAnimator_15;
		String_t* L_8 = __this->___windowFadeOut_20;
		NullCheck(L_7);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_7, L_8, NULL);
	}
	try
	{// begin try (depth: 1)
		// currentButton = windows[currentWindowIndex].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_9 = __this->___windows_4;
		int32_t L_10 = __this->___currentWindowIndex_5;
		NullCheck(L_9);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_11;
		L_11 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_9, L_10, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___buttonObject_2;
		__this->___currentButton_13 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButton_13), (void*)L_12);
		// currentButtonAnimator = currentButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___currentButton_13;
		NullCheck(L_13);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14;
		L_14 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_13, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentButtonAnimator_17 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButtonAnimator_17), (void*)L_14);
		// currentButtonAnimator.Play(buttonFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___currentButtonAnimator_17;
		String_t* L_16 = __this->___buttonFadeOut_22;
		NullCheck(L_15);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_15, L_16, NULL);
		// }
		goto IL_008c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0089;
		}
		throw e;
	}

CATCH_0089:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008c;
	}// end catch (depth: 1)

IL_008c:
	{
		// currentWindowIndex = 0;
		__this->___currentWindowIndex_5 = 0;
		// currentButtonIndex = 0;
		__this->___currentButtonIndex_6 = 0;
		// currentWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_17 = __this->___windows_4;
		int32_t L_18 = __this->___currentWindowIndex_5;
		NullCheck(L_17);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_19;
		L_19 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_17, L_18, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___windowObject_1;
		__this->___currentWindow_11 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindow_11), (void*)L_20);
		// currentWindowAnimator = currentWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___currentWindow_11;
		NullCheck(L_21);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_22;
		L_22 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_21, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentWindowAnimator_15 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindowAnimator_15), (void*)L_22);
		// currentWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_23 = __this->___currentWindowAnimator_15;
		String_t* L_24 = __this->___windowFadeIn_19;
		NullCheck(L_23);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_23, L_24, NULL);
	}
	try
	{// begin try (depth: 1)
		// currentButton = windows[currentButtonIndex].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_25 = __this->___windows_4;
		int32_t L_26 = __this->___currentButtonIndex_6;
		NullCheck(L_25);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_27;
		L_27 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_25, L_26, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___buttonObject_2;
		__this->___currentButton_13 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButton_13), (void*)L_28);
		// currentButtonAnimator = currentButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___currentButton_13;
		NullCheck(L_29);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30;
		L_30 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_29, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentButtonAnimator_17 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButtonAnimator_17), (void*)L_30);
		// currentButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___currentButtonAnimator_17;
		String_t* L_32 = __this->___buttonFadeIn_21;
		NullCheck(L_31);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_31, L_32, NULL);
		// }
		goto IL_011b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0118;
		}
		throw e;
	}

CATCH_0118:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011b;
	}// end catch (depth: 1)

IL_011b:
	{
		// onWindowChange.Invoke(currentWindowIndex);
		WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C* L_33 = __this->___onWindowChange_10;
		int32_t L_34 = __this->___currentWindowIndex_5;
		NullCheck(L_33);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_33, L_34, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		return;
	}

IL_012d:
	{
		// else if (currentWindowIndex == 0)
		int32_t L_35 = __this->___currentWindowIndex_5;
		if (L_35)
		{
			goto IL_01b9;
		}
	}
	{
		// currentWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_36 = __this->___windows_4;
		int32_t L_37 = __this->___currentWindowIndex_5;
		NullCheck(L_36);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_38;
		L_38 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_36, L_37, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = L_38->___windowObject_1;
		__this->___currentWindow_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindow_11), (void*)L_39);
		// currentWindowAnimator = currentWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___currentWindow_11;
		NullCheck(L_40);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_41;
		L_41 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_40, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentWindowAnimator_15 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindowAnimator_15), (void*)L_41);
		// currentWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42 = __this->___currentWindowAnimator_15;
		String_t* L_43 = __this->___windowFadeIn_19;
		NullCheck(L_42);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_42, L_43, NULL);
	}
	try
	{// begin try (depth: 1)
		// currentButton = windows[currentButtonIndex].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_44 = __this->___windows_4;
		int32_t L_45 = __this->___currentButtonIndex_6;
		NullCheck(L_44);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_46;
		L_46 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_44, L_45, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_46);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = L_46->___buttonObject_2;
		__this->___currentButton_13 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButton_13), (void*)L_47);
		// currentButtonAnimator = currentButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___currentButton_13;
		NullCheck(L_48);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_49;
		L_49 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_48, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentButtonAnimator_17 = L_49;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButtonAnimator_17), (void*)L_49);
		// currentButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_50 = __this->___currentButtonAnimator_17;
		String_t* L_51 = __this->___buttonFadeIn_21;
		NullCheck(L_50);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_50, L_51, NULL);
		// }
		goto IL_01b9;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b6;
		}
		throw e;
	}

CATCH_01b6:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01b9;
	}// end catch (depth: 1)

IL_01b9:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::OpenPanel(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_OpenPanel_mDF3DD7CC53076DFBF5C0CAFFD9A61F92FBC25DF6 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, String_t* ___newPanel0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// for (int i = 0; i < windows.Count; i++)
		V_0 = 0;
		goto IL_0028;
	}

IL_0004:
	{
		// if (windows[i].windowName == newPanel)
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_0 = __this->___windows_4;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_2;
		L_2 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_0, L_1, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = L_2->___windowName_0;
		String_t* L_4 = ___newPanel0;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0024;
		}
	}
	{
		// newWindowIndex = i;
		int32_t L_6 = V_0;
		__this->___newWindowIndex_7 = L_6;
	}

IL_0024:
	{
		// for (int i = 0; i < windows.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
	}

IL_0028:
	{
		// for (int i = 0; i < windows.Count; i++)
		int32_t L_8 = V_0;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_9 = __this->___windows_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_inline(L_9, List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// if (newWindowIndex != currentWindowIndex)
		int32_t L_11 = __this->___newWindowIndex_7;
		int32_t L_12 = __this->___currentWindowIndex_5;
		if ((((int32_t)L_11) == ((int32_t)L_12)))
		{
			goto IL_0172;
		}
	}
	{
		// currentWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_13 = __this->___windows_4;
		int32_t L_14 = __this->___currentWindowIndex_5;
		NullCheck(L_13);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_15;
		L_15 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_13, L_14, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___windowObject_1;
		__this->___currentWindow_11 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindow_11), (void*)L_16);
	}
	try
	{// begin try (depth: 1)
		// try { currentButton = windows[currentWindowIndex].buttonObject; }
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_17 = __this->___windows_4;
		int32_t L_18 = __this->___currentWindowIndex_5;
		NullCheck(L_17);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_19;
		L_19 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_17, L_18, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_19);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = L_19->___buttonObject_2;
		__this->___currentButton_13 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButton_13), (void*)L_20);
		// try { currentButton = windows[currentWindowIndex].buttonObject; }
		goto IL_0084;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0081;
		}
		throw e;
	}

CATCH_0081:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0084;
	}// end catch (depth: 1)

IL_0084:
	{
		// currentWindowIndex = newWindowIndex;
		int32_t L_21 = __this->___newWindowIndex_7;
		__this->___currentWindowIndex_5 = L_21;
		// nextWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_22 = __this->___windows_4;
		int32_t L_23 = __this->___currentWindowIndex_5;
		NullCheck(L_22);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_24;
		L_24 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_22, L_23, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_24);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = L_24->___windowObject_1;
		__this->___nextWindow_12 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextWindow_12), (void*)L_25);
		// currentWindowAnimator = currentWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___currentWindow_11;
		NullCheck(L_26);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_27;
		L_27 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_26, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentWindowAnimator_15 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindowAnimator_15), (void*)L_27);
		// nextWindowAnimator = nextWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___nextWindow_12;
		NullCheck(L_28);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29;
		L_29 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_28, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___nextWindowAnimator_16 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextWindowAnimator_16), (void*)L_29);
		// currentWindowAnimator.Play(windowFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30 = __this->___currentWindowAnimator_15;
		String_t* L_31 = __this->___windowFadeOut_20;
		NullCheck(L_30);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_30, L_31, NULL);
		// nextWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32 = __this->___nextWindowAnimator_16;
		String_t* L_33 = __this->___windowFadeIn_19;
		NullCheck(L_32);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_32, L_33, NULL);
	}
	try
	{// begin try (depth: 1)
		// currentButtonIndex = newWindowIndex;
		int32_t L_34 = __this->___newWindowIndex_7;
		__this->___currentButtonIndex_6 = L_34;
		// nextButton = windows[currentButtonIndex].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_35 = __this->___windows_4;
		int32_t L_36 = __this->___currentButtonIndex_6;
		NullCheck(L_35);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_37;
		L_37 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_35, L_36, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_37);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = L_37->___buttonObject_2;
		__this->___nextButton_14 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButton_14), (void*)L_38);
		// currentButtonAnimator = currentButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___currentButton_13;
		NullCheck(L_39);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_40;
		L_40 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_39, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentButtonAnimator_17 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButtonAnimator_17), (void*)L_40);
		// nextButtonAnimator = nextButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___nextButton_14;
		NullCheck(L_41);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_42;
		L_42 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_41, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___nextButtonAnimator_18 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButtonAnimator_18), (void*)L_42);
		// currentButtonAnimator.Play(buttonFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_43 = __this->___currentButtonAnimator_17;
		String_t* L_44 = __this->___buttonFadeOut_22;
		NullCheck(L_43);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_43, L_44, NULL);
		// nextButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_45 = __this->___nextButtonAnimator_18;
		String_t* L_46 = __this->___buttonFadeIn_21;
		NullCheck(L_45);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_45, L_46, NULL);
		// }
		goto IL_0161;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015e;
		}
		throw e;
	}

CATCH_015e:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0161;
	}// end catch (depth: 1)

IL_0161:
	{
		// onWindowChange.Invoke(currentWindowIndex);
		WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C* L_47 = __this->___onWindowChange_10;
		int32_t L_48 = __this->___currentWindowIndex_5;
		NullCheck(L_47);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_47, L_48, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
	}

IL_0172:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::NextPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_NextPage_m8DA6145F60397F0CD0F5F266E1880F17242ABA50 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (currentWindowIndex <= windows.Count - 2)
		int32_t L_0 = __this->___currentWindowIndex_5;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_1 = __this->___windows_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_inline(L_1, List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var);
		if ((((int32_t)L_0) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, 2)))))
		{
			goto IL_0149;
		}
	}
	{
		// currentWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_3 = __this->___windows_4;
		int32_t L_4 = __this->___currentWindowIndex_5;
		NullCheck(L_3);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_5;
		L_5 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_3, L_4, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___windowObject_1;
		__this->___currentWindow_11 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindow_11), (void*)L_6);
	}
	try
	{// begin try (depth: 1)
		// currentButton = windows[currentButtonIndex].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_7 = __this->___windows_4;
		int32_t L_8 = __this->___currentButtonIndex_6;
		NullCheck(L_7);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_9;
		L_9 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_7, L_8, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___buttonObject_2;
		__this->___currentButton_13 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButton_13), (void*)L_10);
		// nextButton = windows[currentButtonIndex + 1].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_11 = __this->___windows_4;
		int32_t L_12 = __this->___currentButtonIndex_6;
		NullCheck(L_11);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_13;
		L_13 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___buttonObject_2;
		__this->___nextButton_14 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButton_14), (void*)L_14);
		// currentButtonAnimator = currentButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___currentButton_13;
		NullCheck(L_15);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_16;
		L_16 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_15, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentButtonAnimator_17 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButtonAnimator_17), (void*)L_16);
		// currentButtonAnimator.Play(buttonFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_17 = __this->___currentButtonAnimator_17;
		String_t* L_18 = __this->___buttonFadeOut_22;
		NullCheck(L_17);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_17, L_18, NULL);
		// }
		goto IL_0095;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0092;
		}
		throw e;
	}

CATCH_0092:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0095;
	}// end catch (depth: 1)

IL_0095:
	{
		// currentWindowAnimator = currentWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___currentWindow_11;
		NullCheck(L_19);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_20;
		L_20 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_19, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentWindowAnimator_15 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindowAnimator_15), (void*)L_20);
		// currentWindowAnimator.Play(windowFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_21 = __this->___currentWindowAnimator_15;
		String_t* L_22 = __this->___windowFadeOut_20;
		NullCheck(L_21);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_21, L_22, NULL);
		// currentWindowIndex += 1;
		int32_t L_23 = __this->___currentWindowIndex_5;
		__this->___currentWindowIndex_5 = ((int32_t)il2cpp_codegen_add(L_23, 1));
		// currentButtonIndex += 1;
		int32_t L_24 = __this->___currentButtonIndex_6;
		__this->___currentButtonIndex_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
		// nextWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_25 = __this->___windows_4;
		int32_t L_26 = __this->___currentWindowIndex_5;
		NullCheck(L_25);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_27;
		L_27 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_25, L_26, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___windowObject_1;
		__this->___nextWindow_12 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextWindow_12), (void*)L_28);
		// nextWindowAnimator = nextWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___nextWindow_12;
		NullCheck(L_29);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_30;
		L_30 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_29, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___nextWindowAnimator_16 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextWindowAnimator_16), (void*)L_30);
		// nextWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_31 = __this->___nextWindowAnimator_16;
		String_t* L_32 = __this->___windowFadeIn_19;
		NullCheck(L_31);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_31, L_32, NULL);
	}
	try
	{// begin try (depth: 1)
		// nextButtonAnimator = nextButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___nextButton_14;
		NullCheck(L_33);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_34;
		L_34 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_33, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___nextButtonAnimator_18 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButtonAnimator_18), (void*)L_34);
		// nextButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_35 = __this->___nextButtonAnimator_18;
		String_t* L_36 = __this->___buttonFadeIn_21;
		NullCheck(L_35);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_35, L_36, NULL);
		// }
		goto IL_0138;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0135;
		}
		throw e;
	}

CATCH_0135:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0138;
	}// end catch (depth: 1)

IL_0138:
	{
		// onWindowChange.Invoke(currentWindowIndex);
		WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C* L_37 = __this->___onWindowChange_10;
		int32_t L_38 = __this->___currentWindowIndex_5;
		NullCheck(L_37);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_37, L_38, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
	}

IL_0149:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::PrevPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_PrevPage_mB5C036DCB8F840EA83625F3F9868E44A64C18C22 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (currentWindowIndex >= 1)
		int32_t L_0 = __this->___currentWindowIndex_5;
		if ((((int32_t)L_0) < ((int32_t)1)))
		{
			goto IL_013d;
		}
	}
	{
		// currentWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_1 = __this->___windows_4;
		int32_t L_2 = __this->___currentWindowIndex_5;
		NullCheck(L_1);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_3;
		L_3 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_1, L_2, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = L_3->___windowObject_1;
		__this->___currentWindow_11 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindow_11), (void*)L_4);
	}
	try
	{// begin try (depth: 1)
		// currentButton = windows[currentButtonIndex].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_5 = __this->___windows_4;
		int32_t L_6 = __this->___currentButtonIndex_6;
		NullCheck(L_5);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_7;
		L_7 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_5, L_6, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___buttonObject_2;
		__this->___currentButton_13 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButton_13), (void*)L_8);
		// nextButton = windows[currentButtonIndex - 1].buttonObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_9 = __this->___windows_4;
		int32_t L_10 = __this->___currentButtonIndex_6;
		NullCheck(L_9);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_11;
		L_11 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_9, ((int32_t)il2cpp_codegen_subtract(L_10, 1)), List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = L_11->___buttonObject_2;
		__this->___nextButton_14 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButton_14), (void*)L_12);
		// currentButtonAnimator = currentButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___currentButton_13;
		NullCheck(L_13);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_14;
		L_14 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_13, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentButtonAnimator_17 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentButtonAnimator_17), (void*)L_14);
		// currentButtonAnimator.Play(buttonFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_15 = __this->___currentButtonAnimator_17;
		String_t* L_16 = __this->___buttonFadeOut_22;
		NullCheck(L_15);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_15, L_16, NULL);
		// }
		goto IL_0089;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0086;
		}
		throw e;
	}

CATCH_0086:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0089;
	}// end catch (depth: 1)

IL_0089:
	{
		// currentWindowAnimator = currentWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___currentWindow_11;
		NullCheck(L_17);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_18;
		L_18 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_17, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___currentWindowAnimator_15 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentWindowAnimator_15), (void*)L_18);
		// currentWindowAnimator.Play(windowFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_19 = __this->___currentWindowAnimator_15;
		String_t* L_20 = __this->___windowFadeOut_20;
		NullCheck(L_19);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_19, L_20, NULL);
		// currentWindowIndex -= 1;
		int32_t L_21 = __this->___currentWindowIndex_5;
		__this->___currentWindowIndex_5 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
		// currentButtonIndex -= 1;
		int32_t L_22 = __this->___currentButtonIndex_6;
		__this->___currentButtonIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
		// nextWindow = windows[currentWindowIndex].windowObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_23 = __this->___windows_4;
		int32_t L_24 = __this->___currentWindowIndex_5;
		NullCheck(L_23);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_25;
		L_25 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_23, L_24, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___windowObject_1;
		__this->___nextWindow_12 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextWindow_12), (void*)L_26);
		// nextWindowAnimator = nextWindow.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___nextWindow_12;
		NullCheck(L_27);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_28;
		L_28 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_27, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___nextWindowAnimator_16 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextWindowAnimator_16), (void*)L_28);
		// nextWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_29 = __this->___nextWindowAnimator_16;
		String_t* L_30 = __this->___windowFadeIn_19;
		NullCheck(L_29);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_29, L_30, NULL);
	}
	try
	{// begin try (depth: 1)
		// nextButtonAnimator = nextButton.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___nextButton_14;
		NullCheck(L_31);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_32;
		L_32 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_31, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___nextButtonAnimator_18 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nextButtonAnimator_18), (void*)L_32);
		// nextButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_33 = __this->___nextButtonAnimator_18;
		String_t* L_34 = __this->___buttonFadeIn_21;
		NullCheck(L_33);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_33, L_34, NULL);
		// }
		goto IL_012c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0129;
		}
		throw e;
	}

CATCH_0129:
	{// begin catch(System.Object)
		// catch { }
		// catch { }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_012c;
	}// end catch (depth: 1)

IL_012c:
	{
		// onWindowChange.Invoke(currentWindowIndex);
		WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C* L_35 = __this->___onWindowChange_10;
		int32_t L_36 = __this->___currentWindowIndex_5;
		NullCheck(L_35);
		UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638(L_35, L_36, UnityEvent_1_Invoke_mD81A5FC81FD5B0D34212D7ACE42A8BBC15CD7638_RuntimeMethod_var);
	}

IL_013d:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::ShowCurrentWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_ShowCurrentWindow_m8E478647DA2C5BCFEFCCECBD38036CC7D4D85A28 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nextWindowAnimator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___nextWindowAnimator_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// currentWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___currentWindowAnimator_15;
		String_t* L_3 = __this->___windowFadeIn_19;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, L_3, NULL);
		return;
	}

IL_0020:
	{
		// nextWindowAnimator.Play(windowFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___nextWindowAnimator_16;
		String_t* L_5 = __this->___windowFadeIn_19;
		NullCheck(L_4);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::HideCurrentWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_HideCurrentWindow_m0A2651419D3C0787BFEF672B93B3316F384ADF0F (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nextWindowAnimator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___nextWindowAnimator_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// currentWindowAnimator.Play(windowFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___currentWindowAnimator_15;
		String_t* L_3 = __this->___windowFadeOut_20;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, L_3, NULL);
		return;
	}

IL_0020:
	{
		// nextWindowAnimator.Play(windowFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___nextWindowAnimator_16;
		String_t* L_5 = __this->___windowFadeOut_20;
		NullCheck(L_4);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::ShowCurrentButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_ShowCurrentButton_m78179E0E655B1769B2BFF18825939241ED4166CA (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nextButtonAnimator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___nextButtonAnimator_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// currentButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___currentButtonAnimator_17;
		String_t* L_3 = __this->___buttonFadeIn_21;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, L_3, NULL);
		return;
	}

IL_0020:
	{
		// nextButtonAnimator.Play(buttonFadeIn);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___nextButtonAnimator_18;
		String_t* L_5 = __this->___buttonFadeIn_21;
		NullCheck(L_4);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::HideCurrentButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_HideCurrentButton_m361281DA8A9038DCC8DF2FA9F80AE3D0BC9343D3 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (nextButtonAnimator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___nextButtonAnimator_18;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// currentButtonAnimator.Play(buttonFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_2 = __this->___currentButtonAnimator_17;
		String_t* L_3 = __this->___buttonFadeOut_22;
		NullCheck(L_2);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_2, L_3, NULL);
		return;
	}

IL_0020:
	{
		// nextButtonAnimator.Play(buttonFadeOut);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___nextButtonAnimator_18;
		String_t* L_5 = __this->___buttonFadeOut_22;
		NullCheck(L_4);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::AddNewItem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager_AddNewItem_m15DE275AB1BE66BBB8640194A02DC7F91285D31B (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAB2C21FB95076AEE694E1C0996728B3DF12FEE97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34E6C956E064B1720D3D9F453AF359FE2A3AC3D0);
		s_Il2CppMethodInitialized = true;
	}
	WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_3 = NULL;
	{
		// WindowItem window = new WindowItem();
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_0 = (WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D*)il2cpp_codegen_object_new(WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WindowItem__ctor_m81DA2F10B0DABA3E919858535FE5CF3DAE393DD1(L_0, NULL);
		V_0 = L_0;
		// if (windows.Count != 0 && windows[windows.Count - 1].windowObject != null)
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_1 = __this->___windows_4;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_inline(L_1, List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_019d;
		}
	}
	{
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_3 = __this->___windows_4;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_4 = __this->___windows_4;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_inline(L_4, List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var);
		NullCheck(L_3);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_6;
		L_6 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_3, ((int32_t)il2cpp_codegen_subtract(L_5, 1)), List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_6);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = L_6->___windowObject_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_019d;
		}
	}
	{
		// int tempIndex = windows.Count - 1;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_9 = __this->___windows_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_inline(L_9, List_1_get_Count_m631B2DA954A88EF892791298A499EAFE40509E7A_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		// GameObject tempWindow = windows[tempIndex].windowObject.transform.parent.GetChild(tempIndex).gameObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_11 = __this->___windows_4;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_13;
		L_13 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_11, L_12, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_13);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = L_13->___windowObject_1;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_15, NULL);
		int32_t L_17 = V_1;
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_16, L_17, NULL);
		NullCheck(L_18);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_18, NULL);
		// GameObject newWindow = Instantiate(tempWindow, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_20), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_21;
		L_21 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_19, L_20, L_21, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_2 = L_22;
		// newWindow.transform.SetParent(windows[tempIndex].windowObject.transform.parent, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = V_2;
		NullCheck(L_23);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24;
		L_24 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_23, NULL);
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_25 = __this->___windows_4;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_27;
		L_27 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_25, L_26, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_27);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = L_27->___windowObject_1;
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_28, NULL);
		NullCheck(L_29);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_29, NULL);
		NullCheck(L_24);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_24, L_30, (bool)0, NULL);
		// newWindow.gameObject.name = "New Window " + tempIndex.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_2;
		NullCheck(L_31);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32;
		L_32 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_31, NULL);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral34E6C956E064B1720D3D9F453AF359FE2A3AC3D0, L_33, NULL);
		NullCheck(L_32);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_32, L_34, NULL);
		// window.windowName = "New Window " + tempIndex.ToString();
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_35 = V_0;
		String_t* L_36;
		L_36 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_37;
		L_37 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral34E6C956E064B1720D3D9F453AF359FE2A3AC3D0, L_36, NULL);
		NullCheck(L_35);
		L_35->___windowName_0 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&L_35->___windowName_0), (void*)L_37);
		// window.windowObject = newWindow;
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_38 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = V_2;
		NullCheck(L_38);
		L_38->___windowObject_1 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&L_38->___windowObject_1), (void*)L_39);
		// if (windows[tempIndex].buttonObject != null)
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_40 = __this->___windows_4;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_42;
		L_42 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_40, L_41, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_42);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = L_42->___buttonObject_2;
		bool L_44;
		L_44 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_43, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_44)
		{
			goto IL_019d;
		}
	}
	{
		// GameObject tempButton = windows[tempIndex].buttonObject.transform.parent.GetChild(tempIndex).gameObject;
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_45 = __this->___windows_4;
		int32_t L_46 = V_1;
		NullCheck(L_45);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_47;
		L_47 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_45, L_46, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_47);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = L_47->___buttonObject_2;
		NullCheck(L_48);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_48, NULL);
		NullCheck(L_49);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_50;
		L_50 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_49, NULL);
		int32_t L_51 = V_1;
		NullCheck(L_50);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_50, L_51, NULL);
		NullCheck(L_52);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53;
		L_53 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_52, NULL);
		// GameObject newButton = Instantiate(tempButton, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		memset((&L_54), 0, sizeof(L_54));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_54), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_55;
		L_55 = Quaternion_get_identity_m7E701AE095ED10FD5EA0B50ABCFDE2EEFF2173A5_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_53, L_54, L_55, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		V_3 = L_56;
		// newButton.transform.SetParent(windows[tempIndex].buttonObject.transform.parent, false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = V_3;
		NullCheck(L_57);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_57, NULL);
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_59 = __this->___windows_4;
		int32_t L_60 = V_1;
		NullCheck(L_59);
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_61;
		L_61 = List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4(L_59, L_60, List_1_get_Item_m8AFF278DFCC582DC527C6B94F8A5E0B9D00755F4_RuntimeMethod_var);
		NullCheck(L_61);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = L_61->___buttonObject_2;
		NullCheck(L_62);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63;
		L_63 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_62, NULL);
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_63, NULL);
		NullCheck(L_58);
		Transform_SetParent_m9BDD7B7476714B2D7919B10BDC22CE75C0A0A195(L_58, L_64, (bool)0, NULL);
		// newButton.gameObject.name = "New Window " + tempIndex.ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = V_3;
		NullCheck(L_65);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66;
		L_66 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_65, NULL);
		String_t* L_67;
		L_67 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_1), NULL);
		String_t* L_68;
		L_68 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral34E6C956E064B1720D3D9F453AF359FE2A3AC3D0, L_67, NULL);
		NullCheck(L_66);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(L_66, L_68, NULL);
		// window.buttonObject = newButton;
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_69 = V_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = V_3;
		NullCheck(L_69);
		L_69->___buttonObject_2 = L_70;
		Il2CppCodeGenWriteBarrier((void**)(&L_69->___buttonObject_2), (void*)L_70);
	}

IL_019d:
	{
		// windows.Add(window);
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_71 = __this->___windows_4;
		WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* L_72 = V_0;
		NullCheck(L_71);
		List_1_Add_mAB2C21FB95076AEE694E1C0996728B3DF12FEE97_inline(L_71, L_72, List_1_Add_mAB2C21FB95076AEE694E1C0996728B3DF12FEE97_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManager__ctor_m672EEBECA9998C55E5F424A8F60C411E83249171 (WindowManager_t71C37A545BCDDCD71DCBF6891605A18058F42F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m3563D2891290DEA83C59AE2BCC3046A8FFC7D18E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDF0CEC4215B327D0CE9D530B19E6DA09A2D3933);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF04C22D032D8B8FCBC400A60E3E00C3BD09D9ADA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<WindowItem> windows = new List<WindowItem>();
		List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE* L_0 = (List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE*)il2cpp_codegen_object_new(List_1_tDF45F0BF7390BD43032932934EE64C971FCF83BE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m3563D2891290DEA83C59AE2BCC3046A8FFC7D18E(L_0, List_1__ctor_m3563D2891290DEA83C59AE2BCC3046A8FFC7D18E_RuntimeMethod_var);
		__this->___windows_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___windows_4), (void*)L_0);
		// bool isFirstTime = true;
		__this->___isFirstTime_9 = (bool)1;
		// string windowFadeIn = "In";
		__this->___windowFadeIn_19 = _stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___windowFadeIn_19), (void*)_stringLiteral2342ED095E8746444A44CFCD5D8ACA13F0E7EEF8);
		// string windowFadeOut = "Out";
		__this->___windowFadeOut_20 = _stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___windowFadeOut_20), (void*)_stringLiteralAF61C1EE535DDF446AAFABFE654FBB224655AE44);
		// string buttonFadeIn = "Normal to Pressed";
		__this->___buttonFadeIn_21 = _stringLiteralF04C22D032D8B8FCBC400A60E3E00C3BD09D9ADA;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonFadeIn_21), (void*)_stringLiteralF04C22D032D8B8FCBC400A60E3E00C3BD09D9ADA);
		// string buttonFadeOut = "Pressed to Normal";
		__this->___buttonFadeOut_22 = _stringLiteralCDF0CEC4215B327D0CE9D530B19E6DA09A2D3933;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonFadeOut_22), (void*)_stringLiteralCDF0CEC4215B327D0CE9D530B19E6DA09A2D3933);
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
// System.Void Michsky.UI.ModernUIPack.WindowManager/WindowChangeEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowChangeEvent__ctor_m44FC154C864D544ABCE9F35797A14366B819FC94 (WindowChangeEvent_t8C63C9F67FB60A4679AA9B97804BA723EA9FE19C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684(__this, UnityEvent_1__ctor_mCE6AA3B34C1148F11D1273C068A6A39430911684_RuntimeMethod_var);
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
// System.Void Michsky.UI.ModernUIPack.WindowManager/WindowItem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowItem__ctor_m81DA2F10B0DABA3E919858535FE5CF3DAE393DD1 (WindowItem_t4DD19949B9AE9D1D449BD0B3CC86A9D5E7D6BA4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A095EE8842ABB18435F89659E4389EF73BF565E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string windowName = "My Window";
		__this->___windowName_0 = _stringLiteral0A095EE8842ABB18435F89659E4389EF73BF565E;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___windowName_0), (void*)_stringLiteral0A095EE8842ABB18435F89659E4389EF73BF565E);
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
// System.Void Michsky.UI.ModernUIPack.WindowManagerButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManagerButton_OnEnable_m529946D443CC20DD1A396E8BCB6A818C4F39F3A7 (WindowManagerButton_t93F9B24A6E1C958C9CB1DED69613A7EF9FBA71F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (buttonAnimator == null)
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___buttonAnimator_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// buttonAnimator = gameObject.GetComponent<Animator>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		__this->___buttonAnimator_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___buttonAnimator_5), (void*)L_3);
	}

IL_001f:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManagerButton::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManagerButton_OnPointerEnter_mD58D281DB682F594793AC6C2FED8B4D1C6A1D760 (WindowManagerButton_t93F9B24A6E1C958C9CB1DED69613A7EF9FBA71F8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D238E6B4834A511550314B5CAFBBBF17B779B87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34E3198326D5FD0889590C2FDF1ABD4DF2F9691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF04C22D032D8B8FCBC400A60E3E00C3BD09D9ADA);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (enableMobileMode == true)
		bool L_0 = __this->___enableMobileMode_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!buttonAnimator.GetCurrentAnimatorStateInfo(0).IsName("Hover to Pressed")
		//     && !buttonAnimator.GetCurrentAnimatorStateInfo(0).IsName("Normal to Pressed"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___buttonAnimator_5;
		NullCheck(L_1);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2;
		L_2 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_1, 0, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC34E3198326D5FD0889590C2FDF1ABD4DF2F9691, NULL);
		if (L_3)
		{
			goto IL_004f;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___buttonAnimator_5;
		NullCheck(L_4);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_5;
		L_5 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_4, 0, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF04C22D032D8B8FCBC400A60E3E00C3BD09D9ADA, NULL);
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		// buttonAnimator.Play("Normal to Hover");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___buttonAnimator_5;
		NullCheck(L_7);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_7, _stringLiteral3D238E6B4834A511550314B5CAFBBBF17B779B87, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManagerButton::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManagerButton_OnPointerExit_mED8B88572139E2E6AAF23C2112A78FBDF0E6C1E1 (WindowManagerButton_t93F9B24A6E1C958C9CB1DED69613A7EF9FBA71F8* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC34E3198326D5FD0889590C2FDF1ABD4DF2F9691);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF04C22D032D8B8FCBC400A60E3E00C3BD09D9ADA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA35C822D88D604BA53D9E08ADDF58E770BC8554);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (enableMobileMode == true)
		bool L_0 = __this->___enableMobileMode_4;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// if (!buttonAnimator.GetCurrentAnimatorStateInfo(0).IsName("Hover to Pressed")
		//     && !buttonAnimator.GetCurrentAnimatorStateInfo(0).IsName("Normal to Pressed"))
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_1 = __this->___buttonAnimator_5;
		NullCheck(L_1);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2;
		L_2 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_1, 0, NULL);
		V_0 = L_2;
		bool L_3;
		L_3 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralC34E3198326D5FD0889590C2FDF1ABD4DF2F9691, NULL);
		if (L_3)
		{
			goto IL_004f;
		}
	}
	{
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_4 = __this->___buttonAnimator_5;
		NullCheck(L_4);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_5;
		L_5 = Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD(L_4, 0, NULL);
		V_0 = L_5;
		bool L_6;
		L_6 = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0((&V_0), _stringLiteralF04C22D032D8B8FCBC400A60E3E00C3BD09D9ADA, NULL);
		if (L_6)
		{
			goto IL_004f;
		}
	}
	{
		// buttonAnimator.Play("Hover to Normal");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7 = __this->___buttonAnimator_5;
		NullCheck(L_7);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_7, _stringLiteralFA35C822D88D604BA53D9E08ADDF58E770BC8554, NULL);
	}

IL_004f:
	{
		// }
		return;
	}
}
// System.Void Michsky.UI.ModernUIPack.WindowManagerButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WindowManagerButton__ctor_m6B02DEE07933E5FC7BB58D91EE6B894916C964DF (WindowManagerButton_t93F9B24A6E1C958C9CB1DED69613A7EF9FBA71F8* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___b1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___b1;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___a0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___b1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
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
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
