#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct PauseGUI; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct vp_FPInput; };
namespace Assembly_CSharp { struct WeaponSystem; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct TransportDetect : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* icons;
		int32_t icoIndex;
		UnityEngine_CoreModule::UnityEngine::Texture* lockT;
		bool ico;
		bool my;
		Assembly_CSharp::Client* cl;
		Assembly_CSharp::PauseGUI* pGUI;
		bool activeControl;
		UnityEngine_CoreModule::UnityEngine::Transform* MyTransform;
		UnityEngine_AudioModule::UnityEngine::AudioSource* AS;
		float targetingTime;
		float startTargetingTime;
		Assembly_CSharp::vp_FPInput* m_Input;
		Assembly_CSharp::WeaponSystem* WS;
		bool targeting;
		bool lastJavelinState;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		UnityEngine_TextRenderingModule::UnityEngine::Font* f;
		bool searchingVehicle;
		void Start();
		void Update();
		void OnGUI();
		void DrawTargetLock(UnityEngine_CoreModule::UnityEngine::Vector3 p);
		void _ctor();
	};
}

