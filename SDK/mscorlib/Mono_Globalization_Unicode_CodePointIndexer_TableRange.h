#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Globalization_Unicode_CodePointIndexer.h"
namespace mscorlib::Mono::Globalization::Unicode { struct CodePointIndexer; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct CodePointIndexer_TableRange
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Start;
		int32_t End;
		int32_t Count;
		int32_t IndexStart;
		int32_t IndexEnd;
		void _ctor(int32_t start, int32_t end, int32_t indexStart);
	};
}

