#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct CustomAnimation : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* rightColt;
		UnityEngine_CoreModule::UnityEngine::GameObject* leftColt;
		UnityEngine_CoreModule::UnityEngine::GameObject* rightColtMuzzle;
		UnityEngine_CoreModule::UnityEngine::GameObject* leftColtMuzzle;
		float muzzleTime;
		bool rightFiring;
		void Awake();
		void DrawIn();
		void RightColtFire();
		void LeftColtFire();
		void Update();
		void _ctor();
	};
}

