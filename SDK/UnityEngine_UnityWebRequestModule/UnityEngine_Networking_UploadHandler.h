#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	struct UploadHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void Release();
		void _ctor();
		void Finalize();
		void Dispose();
		void set_contentType(mscorlib::System::String* value);
		void SetContentType(mscorlib::System::String* newContentType);
		void InternalSetContentType(mscorlib::System::String* newContentType);
	};
}

