#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Funly::SkyStudio { struct SkyProfile; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SkyMaterialController; };
namespace Assembly_CSharp::Funly::SkyStudio { struct OrbitingBody; };
namespace Assembly_CSharp::Funly::SkyStudio { struct WeatherController; };
namespace Assembly_CSharp::Funly::SkyStudio { struct TimeOfDayController_TimeOfDayDidChange; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct TimeOfDayController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Funly::SkyStudio::SkyProfile* m_SkyProfile;
		float m_SkyTime;
		bool automaticTimeIncrement;
		bool copySkyProfile;
		Assembly_CSharp::Funly::SkyStudio::SkyMaterialController* m_SkyMaterialController;
		float automaticIncrementSpeed;
		Assembly_CSharp::Funly::SkyStudio::OrbitingBody* sunOrbit;
		Assembly_CSharp::Funly::SkyStudio::OrbitingBody* moonOrbit;
		Assembly_CSharp::Funly::SkyStudio::WeatherController* weatherController;
		bool updateGlobalIllumination;
		Assembly_CSharp::Funly::SkyStudio::TimeOfDayController_TimeOfDayDidChange* timeChangedCallback;
		bool m_DidInitialUpdate;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* AdditionalMaterials;
		struct StaticFields
		{
			Assembly_CSharp::Funly::SkyStudio::TimeOfDayController* _instance_k__BackingField;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::Funly::SkyStudio::TimeOfDayController* get_instance();
		static void set_instance(Assembly_CSharp::Funly::SkyStudio::TimeOfDayController* value);
		Assembly_CSharp::Funly::SkyStudio::SkyProfile* get_skyProfile();
		void set_skyProfile(Assembly_CSharp::Funly::SkyStudio::SkyProfile* value);
		float get_skyTime();
		void set_skyTime(float value);
		Assembly_CSharp::Funly::SkyStudio::SkyMaterialController* get_SkyMaterial();
		void add_timeChangedCallback(Assembly_CSharp::Funly::SkyStudio::TimeOfDayController_TimeOfDayDidChange* value);
		void remove_timeChangedCallback(Assembly_CSharp::Funly::SkyStudio::TimeOfDayController_TimeOfDayDidChange* value);
		float get_timeOfDay();
		int32_t get_daysElapsed();
		void Awake();
		void OnEnabled();
		void OnValidate();
		void WarnInvalidSkySetup();
		void Update();
		void UpdateGlobalIllumination();
		void SynchronizeAllShaderKeywords();
		void SynchronizedShaderKeyword(mscorlib::System::String* featureKey, mscorlib::System::String* shaderKeyword);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPrimaryLightDirection();
		void UpdateSkyForCurrentTime();
		void UpdateAdditionalMaterials();
		void _ctor();
	};
}

