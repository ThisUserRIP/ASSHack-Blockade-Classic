#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct MeshRenderer; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace UnityEngine_CoreModule::UnityEngine { struct MaterialPropertyBlock; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SkyProfile; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Funly::SkyStudio { struct WeatherEnclosure; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct RainDownfallController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::MeshRenderer* rainMeshRenderer;
		UnityEngine_CoreModule::UnityEngine::Material* rainMaterial;
		UnityEngine_CoreModule::UnityEngine::MaterialPropertyBlock* m_PropertyBlock;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_RainAudioSource;
		float m_TimeOfDay;
		Assembly_CSharp::Funly::SkyStudio::SkyProfile* m_SkyProfile;
		void SetWeatherEnclosure(Assembly_CSharp::Funly::SkyStudio::WeatherEnclosure* enclosure);
		void Update();
		void UpdateForTimeOfDay(Assembly_CSharp::Funly::SkyStudio::SkyProfile* skyProfile, float timeOfDay);
		void _ctor();
	};
}

