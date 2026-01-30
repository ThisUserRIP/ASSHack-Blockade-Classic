#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_LogType.h"

namespace Assembly_CSharp
{
	struct LogCatch : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void OnEnable();
		void OnDisable();
		void Awake();
		void HandleLog(mscorlib::System::String* logString, mscorlib::System::String* stackTrace, UnityEngine_CoreModule::UnityEngine::LogType t);
		void _ctor();
	};
}

