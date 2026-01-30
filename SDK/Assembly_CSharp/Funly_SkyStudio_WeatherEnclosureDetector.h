#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Funly::SkyStudio { struct WeatherEnclosure; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Funly::SkyStudio { struct RainDownfallController; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct WeatherEnclosureDetector : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Funly::SkyStudio::WeatherEnclosure* mainEnclosure;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Funly::SkyStudio::WeatherEnclosure>* triggeredEnclosures;
		Assembly_CSharp::Funly::SkyStudio::RainDownfallController* rainController;
		mscorlib::System::Action_1<Assembly_CSharp::Funly::SkyStudio::WeatherEnclosure>* enclosureChangedCallback;
		void Start();
		void OnEnable();
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* other);
		void OnTriggerExit(UnityEngine_PhysicsModule::UnityEngine::Collider* other);
		void ApplyEnclosure();
		void _ctor();
	};
}

