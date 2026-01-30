#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_DownloadHandler.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	struct DownloadHandlerBuffer : UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static intptr_t Create(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandlerBuffer* obj);
		void InternalCreateBuffer();
		void _ctor();
		IL2CPP::Array<uint8_t>* GetData();
		IL2CPP::Array<uint8_t>* InternalGetData();
	};
}

