#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Networking_UploadHandler.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	struct UploadHandlerRaw : UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static intptr_t Create(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UploadHandlerRaw* self, IL2CPP::Array<uint8_t>* data);
		void _ctor(IL2CPP::Array<uint8_t>* data);
	};
}

