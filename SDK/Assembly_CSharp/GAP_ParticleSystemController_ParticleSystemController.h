#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::GAP_ParticleSystemController { struct ParticleSystemOriginalSettings; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Gradient; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace Assembly_CSharp::GAP_ParticleSystemController
{
	struct ParticleSystemController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float size;
		float speed;
		float duration;
		bool loop;
		bool prewarm;
		bool lights;
		bool trails;
		bool changeColor;
		UnityEngine_CoreModule::UnityEngine::Color newMaxColor;
		UnityEngine_CoreModule::UnityEngine::Color newMinColor;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* ParticleSystems;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Boolean>* ActiveParticleSystems;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::GAP_ParticleSystemController::ParticleSystemOriginalSettings>* psOriginalSettingsList;
		void UpdateParticleSystem();
		void ResetParticleSystem();
		UnityEngine_CoreModule::UnityEngine::Color ChangeHUE(UnityEngine_CoreModule::UnityEngine::Color oldColor, UnityEngine_CoreModule::UnityEngine::Color newColor);
		UnityEngine_CoreModule::UnityEngine::Gradient* ChangeGradientColor(UnityEngine_CoreModule::UnityEngine::Gradient* oldGradient, UnityEngine_CoreModule::UnityEngine::Color newColor);
		void FillLists();
		void EmptyLists();
		void AddChildRecurvsively(UnityEngine_CoreModule::UnityEngine::Transform* transf);
		void _ctor();
	};
}

