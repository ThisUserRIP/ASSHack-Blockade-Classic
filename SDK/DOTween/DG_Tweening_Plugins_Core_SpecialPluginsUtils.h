#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "DG_Tweening_Plugins_Options_QuaternionOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct QuaternionOptions; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
#include "DG_Tweening_Plugins_Options_Vector3ArrayOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct Vector3ArrayOptions; };

namespace DOTween::DG::Tweening::Plugins::Core
{
	struct SpecialPluginsUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool SetLookAt(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Options::QuaternionOptions>* t);
		static bool SetPunch(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
		static bool SetShake(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
		static bool SetCameraShakePosition(DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>, DOTween::DG::Tweening::Plugins::Options::Vector3ArrayOptions>* t);
	};
}

