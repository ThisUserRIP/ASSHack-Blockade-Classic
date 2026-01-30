#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Globalization_Unicode_SimpleCollator.h"
namespace mscorlib::Mono::Globalization::Unicode { struct SimpleCollator; };
namespace mscorlib::System { struct String; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct SimpleCollator_Escape
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Source;
		int32_t Index;
		int32_t Start;
		int32_t End;
		int32_t Optional;
	};
}

