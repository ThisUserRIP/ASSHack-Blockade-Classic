#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_IO_SearchOption.h"

namespace mscorlib::System::IO
{
	struct FileSystemEnumerableFactory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* CreateFileNameIterator(mscorlib::System::String* path, mscorlib::System::String* originalUserPath, mscorlib::System::String* searchPattern, bool includeFiles, bool includeDirs, mscorlib::System::IO::SearchOption searchOption, bool checkHost);
	};
}

