#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\DOTween\DG_Tweening_Plugins_Options_FloatOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct FloatOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace UnityEngine_UIModule::UnityEngine { struct CanvasGroup; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\DOTween\DG_Tweening_Plugins_Options_ColorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct ColorOptions; };
namespace UnityEngine_UI::UnityEngine::UI { struct Graphic; };
namespace UnityEngine_UI::UnityEngine::UI { struct Image; };
namespace DOTween::DG::Tweening { struct Sequence; };
namespace UnityEngine_CoreModule::UnityEngine { struct Gradient; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\DOTween\DG_Tweening_Plugins_Options_VectorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct VectorOptions; };
namespace UnityEngine_UI::UnityEngine::UI { struct LayoutElement; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Outline; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace DOTween::DG::Tweening { struct Tweener; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UI::UnityEngine::UI { struct ScrollRect; };
namespace UnityEngine_UI::UnityEngine::UI { struct Slider; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace mscorlib::System { struct String; };
#include "..\DOTween\DG_Tweening_Plugins_Options_StringOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct StringOptions; };
#include "..\DOTween\DG_Tweening_ScrambleMode.h"

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleUI : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOFade(UnityEngine_UIModule::UnityEngine::CanvasGroup* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_UI::UnityEngine::UI::Graphic* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(UnityEngine_UI::UnityEngine::UI::Graphic* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_UI::UnityEngine::UI::Image* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(UnityEngine_UI::UnityEngine::UI::Image* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOFillAmount(UnityEngine_UI::UnityEngine::UI::Image* target, float endValue, float duration);
		static DOTween::DG::Tweening::Sequence* DOGradientColor(UnityEngine_UI::UnityEngine::UI::Image* target, UnityEngine_CoreModule::UnityEngine::Gradient* gradient, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOFlexibleSize(UnityEngine_UI::UnityEngine::UI::LayoutElement* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOMinSize(UnityEngine_UI::UnityEngine::UI::LayoutElement* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOPreferredSize(UnityEngine_UI::UnityEngine::UI::LayoutElement* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_UI::UnityEngine::UI::Outline* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(UnityEngine_UI::UnityEngine::UI::Outline* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOScale(UnityEngine_UI::UnityEngine::UI::Outline* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPosX(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPosY(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos3D(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector3 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos3DX(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos3DY(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorPos3DZ(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorMax(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOAnchorMin(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOPivot(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOPivotX(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOPivotY(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector2, UnityEngine_CoreModule::UnityEngine::Vector2, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* DOSizeDelta(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Tweener* DOPunchAnchorPos(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector2 punch, float duration, int32_t vibrato, float elasticity, bool snapping);
		static DOTween::DG::Tweening::Tweener* DOShakeAnchorPos(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float duration, float strength, int32_t vibrato, float randomness, bool snapping, bool fadeOut);
		static DOTween::DG::Tweening::Tweener* DOShakeAnchorPos(UnityEngine_CoreModule::UnityEngine::RectTransform* target, float duration, UnityEngine_CoreModule::UnityEngine::Vector2 strength, int32_t vibrato, float randomness, bool snapping, bool fadeOut);
		static DOTween::DG::Tweening::Sequence* DOJumpAnchorPos(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float jumpPower, int32_t numJumps, float duration, bool snapping);
		static DOTween::DG::Tweening::Tweener* DONormalizedPos(UnityEngine_UI::UnityEngine::UI::ScrollRect* target, UnityEngine_CoreModule::UnityEngine::Vector2 endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Tweener* DOHorizontalNormalizedPos(UnityEngine_UI::UnityEngine::UI::ScrollRect* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Tweener* DOVerticalNormalizedPos(UnityEngine_UI::UnityEngine::UI::ScrollRect* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::Single, mscorlib::System::Single, DOTween::DG::Tweening::Plugins::Options::FloatOptions>* DOValue(UnityEngine_UI::UnityEngine::UI::Slider* target, float endValue, float duration, bool snapping);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_UI::UnityEngine::UI::Text* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(UnityEngine_UI::UnityEngine::UI::Text* target, float endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<mscorlib::System::String, mscorlib::System::String, DOTween::DG::Tweening::Plugins::Options::StringOptions>* DOText(UnityEngine_UI::UnityEngine::UI::Text* target, mscorlib::System::String* endValue, float duration, bool richTextEnabled, DOTween::DG::Tweening::ScrambleMode scrambleMode, mscorlib::System::String* scrambleChars);
		static DOTween::DG::Tweening::Tweener* DOBlendableColor(UnityEngine_UI::UnityEngine::UI::Graphic* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Tweener* DOBlendableColor(UnityEngine_UI::UnityEngine::UI::Image* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Tweener* DOBlendableColor(UnityEngine_UI::UnityEngine::UI::Text* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
	};
}

