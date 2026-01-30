#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IO_Directory.h"
namespace mscorlib::System::IO { struct Directory; };
namespace mscorlib::System { struct String; };
#include "System_IO_SearchOption.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::IO
{
	struct Directory_SearchData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* fullPath;
		mscorlib::System::String* userPath;
		mscorlib::System::IO::SearchOption searchOption;
		void _ctor(mscorlib::System::String* fullPath, mscorlib::System::String* userPath, mscorlib::System::IO::SearchOption searchOption);
	};
}

