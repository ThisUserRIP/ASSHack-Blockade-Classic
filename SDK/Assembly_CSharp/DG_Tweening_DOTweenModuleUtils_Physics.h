#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_DOTweenModuleUtils.h"
namespace Assembly_CSharp::DG::Tweening { struct DOTweenModuleUtils; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\DOTween\DG_Tweening_Plugins_Options_PathOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct PathOptions; };
namespace DOTween::DG::Tweening { struct Tween; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Component; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace DOTween::DG::Tweening::Plugins::Core::PathCore { struct Path; };
namespace DOTween::DG::Tweening::Core { template <typename T1, typename T2, typename TPlugOptions> struct TweenerCore_3; };
namespace UnityEngine_CoreModule::UnityEngine { struct MonoBehaviour; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\DOTween\DG_Tweening_PathMode.h"

namespace Assembly_CSharp::DG::Tweening
{
	struct DOTweenModuleUtils_Physics : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void SetOrientationOnPath(DOTween::DG::Tweening::Plugins::Options::PathOptions options, DOTween::DG::Tweening::Tween* t, UnityEngine_CoreModule::UnityEngine::Quaternion newRot, UnityEngine_CoreModule::UnityEngine::Transform* trans);
		static bool HasRigidbody2D(UnityEngine_CoreModule::UnityEngine::Component* target);
		static bool HasRigidbody(UnityEngine_CoreModule::UnityEngine::Component* target);
		static DOTween::DG::Tweening::Core::TweenerCore_3<UnityEngine_CoreModule::UnityEngine::Vector3, DOTween::DG::Tweening::Plugins::Core::PathCore::Path, DOTween::DG::Tweening::Plugins::Options::PathOptions>* CreateDOTweenPathTween(UnityEngine_CoreModule::UnityEngine::MonoBehaviour* target, bool tweenRigidbody, bool isLocal, DOTween::DG::Tweening::Plugins::Core::PathCore::Path* path, float duration, DOTween::DG::Tweening::PathMode pathMode);
	};
}

