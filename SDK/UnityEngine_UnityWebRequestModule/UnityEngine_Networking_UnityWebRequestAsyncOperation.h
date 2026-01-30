#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_AsyncOperation.h"
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	struct UnityWebRequestAsyncOperation : UnityEngine_CoreModule::UnityEngine::AsyncOperation
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* _webRequest_k__BackingField;
		void set_webRequest(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* value);
		void _ctor();
	};
}

