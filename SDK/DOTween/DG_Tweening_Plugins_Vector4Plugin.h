#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "DG_Tweening_Plugins_Options_VectorOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct VectorOptions; };
#include "DG_Tweening_Plugins_Core_ABSTweenPlugin_3.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace DOTween::DG::Tweening { struct Tween; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOGetter_1; };
namespace DOTween::DG::Tweening::Core { template <typename T> struct DOSetter_1; };
#include "DG_Tweening_Core_Enums_UpdateNotice.h"

namespace DOTween::DG::Tweening::Plugins
{
	struct Vector4Plugin : DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Reset(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* t);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* t, bool isRelative);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* t, UnityEngine_CoreModule::UnityEngine::Vector4 fromValue, bool setImmediately);
		UnityEngine_CoreModule::UnityEngine::Vector4 ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* t, UnityEngine_CoreModule::UnityEngine::Vector4 value);
		void SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* t);
		void SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector4, UnityEngine_CoreModule::UnityEngine::Vector4, DOTween::DG::Tweening::Plugins::Options::VectorOptions>* t);
		float GetSpeedBasedDuration(DOTween::DG::Tweening::Plugins::Options::VectorOptions options, float unitsXSecond, UnityEngine_CoreModule::UnityEngine::Vector4 changeValue);
		void EvaluateAndApply(DOTween::DG::Tweening::Plugins::Options::VectorOptions options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector4>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector4>* setter, float elapsed, UnityEngine_CoreModule::UnityEngine::Vector4 startValue, UnityEngine_CoreModule::UnityEngine::Vector4 changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
		void _ctor();
	};
}

