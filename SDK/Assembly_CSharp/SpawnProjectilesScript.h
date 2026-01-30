#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_UI::UnityEngine::UI { struct Text; };
namespace Assembly_CSharp { struct RotateToMouseScript; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct SpawnProjectilesScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool cameraShake;
		UnityEngine_UI::UnityEngine::UI::Text* effectName;
		Assembly_CSharp::RotateToMouseScript* rotateToMouse;
		UnityEngine_CoreModule::UnityEngine::GameObject* firePoint;
		UnityEngine_CoreModule::UnityEngine::GameObject* cameras;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* VFXs;
		int32_t count;
		float timeToFire;
		UnityEngine_CoreModule::UnityEngine::GameObject* effectToSpawn;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Camera>* camerasList;
		void Start();
		void Update();
		void SpawnVFX();
		void Next();
		void Previous();
		void CameraShake();
		void ZoomIn();
		void ZoomOut();
		void SwitchCamera();
		void _ctor();
	};
}

