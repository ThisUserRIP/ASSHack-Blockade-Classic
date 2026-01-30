#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "DG_Tweening_Plugins_Options_Vector3ArrayOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct Vector3ArrayOptions; };
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
	struct Vector3ArrayPlugin : DOTween::DG::Tweening::Plugins::Core::ABSTweenPlugin_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Reset(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, bool isRelative);
		void SetFrom(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* fromValue, bool setImmediately);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* ConvertToStartValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t, UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void SetRelativeEndValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
		void SetChangeValue(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
		float GetSpeedBasedDuration(DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions options, float unitsXSecond, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* changeValue);
		void EvaluateAndApply(DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions options, DOTween::DG::Tweening::Tween* t, bool isRelative, DOTween::DG::Tweening::Core::DOGetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* getter, DOTween::DG::Tweening::Core::DOSetter_1<UnityEngine_CoreModule::UnityEngine::Vector3>* setter, float elapsed, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* startValue, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* changeValue, float duration, bool usingInversePosition, DOTween::DG::Tweening::Core::Enums::UpdateNotice updateNotice);
		void _ctor();
	};
}

