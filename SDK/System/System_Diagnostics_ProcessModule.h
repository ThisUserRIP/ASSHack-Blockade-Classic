#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_Component.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
namespace System::System::Diagnostics { struct FileVersionInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::Diagnostics
{
	struct ProcessModule : System::ComponentModel::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t baseaddr;
		intptr_t entryaddr;
		mscorlib::System::String* filename;
		System::Diagnostics::FileVersionInfo* version_info;
		int32_t memory_size;
		mscorlib::System::String* modulename;
		mscorlib::System::String* get_FileName();
		mscorlib::System::String* get_ModuleName();
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

