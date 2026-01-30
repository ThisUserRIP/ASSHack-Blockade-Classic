#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Funly::SkyStudio { struct SkyProfile; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Funly::SkyStudio { struct RainSplashRenderer; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct RainSplashController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Funly::SkyStudio::SkyProfile* m_SkyProfile;
		float m_TimeOfDay;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Funly::SkyStudio::RainSplashRenderer>* m_SplashRenderers;
		void Start();
		void UpdateForTimeOfDay(Assembly_CSharp::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay);
		void Update();
		void ClearSplashRenderers();
		void CreateSplashRenderers();
		void _ctor();
	};
}

