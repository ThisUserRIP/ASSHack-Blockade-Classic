#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace Assembly_CSharp { struct CarController; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Gunner : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float rotSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 pointCursor;
		UnityEngine_CoreModule::UnityEngine::Texture* cross;
		UnityEngine_CoreModule::UnityEngine::Texture* crossStatic;
		Assembly_CSharp::CarController* cc;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		void Start();
		void Update();
		void OnGUI();
		void _ctor();
	};
}

