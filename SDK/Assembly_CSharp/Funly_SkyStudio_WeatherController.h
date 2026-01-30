#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::Funly::SkyStudio { struct RainDownfallController; };
namespace Assembly_CSharp::Funly::SkyStudio { struct RainSplashController; };
namespace Assembly_CSharp::Funly::SkyStudio { struct LightningController; };
namespace Assembly_CSharp::Funly::SkyStudio { struct WeatherDepthCamera; };
namespace Assembly_CSharp::Funly::SkyStudio { struct WeatherEnclosure; };
namespace UnityEngine_CoreModule::UnityEngine { struct MeshRenderer; };
namespace Assembly_CSharp::Funly::SkyStudio { struct WeatherEnclosureDetector; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SkyProfile; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct WeatherController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Funly::SkyStudio::RainDownfallController* _rainDownfallController_k__BackingField;
		Assembly_CSharp::Funly::SkyStudio::RainSplashController* _rainSplashController_k__BackingField;
		Assembly_CSharp::Funly::SkyStudio::LightningController* _lightningController_k__BackingField;
		Assembly_CSharp::Funly::SkyStudio::WeatherDepthCamera* _weatherDepthCamera_k__BackingField;
		Assembly_CSharp::Funly::SkyStudio::WeatherEnclosure* m_Enclosure;
		UnityEngine_CoreModule::UnityEngine::MeshRenderer* m_EnclosureMeshRenderer;
		Assembly_CSharp::Funly::SkyStudio::WeatherEnclosureDetector* detector;
		Assembly_CSharp::Funly::SkyStudio::SkyProfile* m_Profile;
		float m_TimeOfDay;
		Assembly_CSharp::Funly::SkyStudio::RainDownfallController* get_rainDownfallController();
		void set_rainDownfallController(Assembly_CSharp::Funly::SkyStudio::RainDownfallController* value);
		Assembly_CSharp::Funly::SkyStudio::RainSplashController* get_rainSplashController();
		void set_rainSplashController(Assembly_CSharp::Funly::SkyStudio::RainSplashController* value);
		Assembly_CSharp::Funly::SkyStudio::LightningController* get_lightningController();
		void set_lightningController(Assembly_CSharp::Funly::SkyStudio::LightningController* value);
		Assembly_CSharp::Funly::SkyStudio::WeatherDepthCamera* get_weatherDepthCamera();
		void set_weatherDepthCamera(Assembly_CSharp::Funly::SkyStudio::WeatherDepthCamera* value);
		void Awake();
		void Start();
		void OnEnable();
		void DiscoverWeatherControllers();
		void OnDisable();
		void UpdateForTimeOfDay(Assembly_CSharp::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay);
		void LateUpdate();
		void OnEnclosureDidChange(Assembly_CSharp::Funly::SkyStudio::WeatherEnclosure* enclosure);
		void _ctor();
	};
}

