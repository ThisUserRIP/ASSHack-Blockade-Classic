#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Globalization_Unicode_SimpleCollator.h"
namespace mscorlib::Mono::Globalization::Unicode { struct SimpleCollator; };
#include "System_Globalization_CompareOptions.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct SimpleCollator_Context
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Globalization::CompareOptions Option;
		uint8_t* NeverMatchFlags;
		uint8_t* AlwaysMatchFlags;
		uint8_t* Buffer1;
		uint8_t* Buffer2;
		int32_t PrevCode;
		uint8_t* PrevSortKey;
		void _ctor(mscorlib::System::Globalization::CompareOptions opt, uint8_t* alwaysMatchFlags, uint8_t* neverMatchFlags, uint8_t* buffer1, uint8_t* buffer2, uint8_t* prev1);
	};
}

