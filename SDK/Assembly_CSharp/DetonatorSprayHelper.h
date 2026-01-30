#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct DetonatorSprayHelper : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float startTimeMin;
		float startTimeMax;
		float stopTimeMin;
		float stopTimeMax;
		UnityEngine_CoreModule::UnityEngine::Material* firstMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* secondMaterial;
		float startTime;
		float stopTime;
		bool isReallyOn;
		void Start();
		void FixedUpdate();
		void _ctor();
	};
}

