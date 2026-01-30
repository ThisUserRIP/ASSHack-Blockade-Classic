#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct DemoScriptMoveRandomly : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float elapsed;
		UnityEngine_CoreModule::UnityEngine::Vector3 startStartPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 startEndPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 endStartPos;
		UnityEngine_CoreModule::UnityEngine::Vector3 endEndPos;
		UnityEngine_CoreModule::UnityEngine::Transform* Transform1;
		UnityEngine_CoreModule::UnityEngine::Transform* Transform2;
		float MoveTimeSeconds;
		void Start();
		void Update();
		void _ctor();
	};
}

