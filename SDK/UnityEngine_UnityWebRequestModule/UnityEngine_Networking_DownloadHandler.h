#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Text { struct Encoding; };

namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking
{
	struct DownloadHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		void Release();
		void _ctor();
		void Finalize();
		void Dispose();
		IL2CPP::Array<uint8_t>* get_data();
		mscorlib::System::String* get_text();
		IL2CPP::Array<uint8_t>* GetData();
		mscorlib::System::String* GetText();
		mscorlib::System::Text::Encoding* GetTextEncoder();
		mscorlib::System::String* GetContentType();
		static IL2CPP::Array<uint8_t>* InternalGetByteArray(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::DownloadHandler* dh);
	};
}

