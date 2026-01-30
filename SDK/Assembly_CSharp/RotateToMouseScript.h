#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
namespace UnityEngine_CoreModule::UnityEngine { struct WaitForSeconds; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp
{
	struct RotateToMouseScript : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float maximumLenght;
		UnityEngine_CoreModule::UnityEngine::Ray rayMouse;
		UnityEngine_CoreModule::UnityEngine::Vector3 pos;
		UnityEngine_CoreModule::UnityEngine::Vector3 direction;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotation;
		UnityEngine_CoreModule::UnityEngine::Camera* cam;
		UnityEngine_CoreModule::UnityEngine::WaitForSeconds* updateTime;
		void StartUpdateRay();
		mscorlib::System::Collections::IEnumerator* UpdateRay();
		void RotateToMouse(UnityEngine_CoreModule::UnityEngine::GameObject* obj, UnityEngine_CoreModule::UnityEngine::Vector3 destination);
		void SetCamera(UnityEngine_CoreModule::UnityEngine::Camera* camera);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetDirection();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetRotation();
		void _ctor();
	};
}

