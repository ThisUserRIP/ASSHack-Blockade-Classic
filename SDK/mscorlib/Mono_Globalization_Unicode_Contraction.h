#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct Contraction : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Index;
		IL2CPP::Array<wchar_t>* Source;
		mscorlib::System::String* Replacement;
		IL2CPP::Array<uint8_t>* SortKey;
		void _ctor(int32_t index, IL2CPP::Array<wchar_t>* source, mscorlib::System::String* replacement, IL2CPP::Array<uint8_t>* sortkey);
	};
}

