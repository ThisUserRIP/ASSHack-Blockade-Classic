#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioListener; };
#include "Tayx_Graphy_GraphyManager_LookForAudioListener.h"
#include "..\UnityEngine_AudioModule\UnityEngine_FFTWindow.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_LoadSceneMode.h"

namespace Assembly_CSharp::Tayx::Graphy::Audio
{
	struct G_AudioMonitor : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		UnityEngine_AudioModule::UnityEngine::AudioListener* m_audioListener;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_LookForAudioListener m_findAudioListenerInCameraIfNull;
		UnityEngine_AudioModule::UnityEngine::FFTWindow m_FFTWindow;
		int32_t m_spectrumSize;
		IL2CPP::Array<float>* m_spectrum;
		IL2CPP::Array<float>* m_spectrumHighestValues;
		float m_maxDB;
		struct StaticFields
		{
			float m_refValue;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		IL2CPP::Array<float>* get_Spectrum();
		IL2CPP::Array<float>* get_SpectrumHighestValues();
		float get_MaxDB();
		bool get_SpectrumDataAvailable();
		void Awake();
		void Update();
		void OnDestroy();
		void UpdateParameters();
		float lin2dB(float linear);
		float dBNormalized(float db);
		UnityEngine_AudioModule::UnityEngine::AudioListener* FindAudioListener();
		void OnSceneLoaded(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, UnityEngine_CoreModule::UnityEngine::SceneManagement::LoadSceneMode loadSceneMode);
		void Init();
		void _ctor();
	};
}

