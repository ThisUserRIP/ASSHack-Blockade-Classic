#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "DG_Tweening_Plugins_Options_PathOptions.h"
namespace DOTween::DG::Tweening::Plugins::Options { struct PathOptions; };
namespace DOTween::DG::Tweening { struct Tween; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3, typename T4> struct Action_4; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace DOTween::DG::Tweening::Core
{
	struct DOTweenExternalCommand : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_4<DOTween::DG::Tweening::Plugins::Options::PathOptions, DOTween::DG::Tweening::Tween, UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Transform>* SetOrientationOnPath;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void add_SetOrientationOnPath(mscorlib::System::Action_4<DOTween::DG::Tweening::Plugins::Options::PathOptions, DOTween::DG::Tweening::Tween, UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Transform>* value);
		static void remove_SetOrientationOnPath(mscorlib::System::Action_4<DOTween::DG::Tweening::Plugins::Options::PathOptions, DOTween::DG::Tweening::Tween, UnityEngine_CoreModule::UnityEngine::Quaternion, UnityEngine_CoreModule::UnityEngine::Transform>* value);
		static void Dispatch_SetOrientationOnPath(DOTween::DG::Tweening::Plugins::Options::PathOptions options, DOTween::DG::Tweening::Tween* t, UnityEngine_CoreModule::UnityEngine::Quaternion newRot, UnityEngine_CoreModule::UnityEngine::Transform* trans);
	};
}

