#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "System_IO_SearchResultHandler_1.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct SearchResult; };

namespace mscorlib::System::IO
{
	struct StringResultHandler : mscorlib::System::IO::SearchResultHandler_1<mscorlib::System::String>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _includeFiles;
		bool _includeDirs;
		void _ctor(bool includeFiles, bool includeDirs);
		bool IsResultIncluded(mscorlib::System::IO::SearchResult* result);
		mscorlib::System::String* CreateObject(mscorlib::System::IO::SearchResult* result);
	};
}

