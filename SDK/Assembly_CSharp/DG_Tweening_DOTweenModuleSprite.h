#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\DOTween\DG_Tweening_Plugins_Options_ColorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct ColorOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace UnityEngine_CoreModule::UnityEngine { struct SpriteRenderer; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { struct Sequence; };
namespace UnityEngine_CoreModule::UnityEngine { struct Gradient; };
namespace DOTween::DG::Tweening { struct Tweener; };

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleSprite : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOColor(UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Color, UnityEngine_CoreModule::UnityEngine::Color, DOTween::DG::Tweening::Plugins::Options::ColorOptions>* DOFade(UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target, float endValue, float duration);
		static DOTween::DG::Tweening::Sequence* DOGradientColor(UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target, UnityEngine_CoreModule::UnityEngine::Gradient* gradient, float duration);
		static DOTween::DG::Tweening::Tweener* DOBlendableColor(UnityEngine_CoreModule::UnityEngine::SpriteRenderer* target, UnityEngine_CoreModule::UnityEngine::Color endValue, float duration);
	};
}

