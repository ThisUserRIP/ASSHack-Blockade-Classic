#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Globalization_Unicode_CodePointIndexer_TableRange.h"
namespace mscorlib::Mono::Globalization::Unicode { struct CodePointIndexer_TableRange; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct CodePointIndexer : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::Mono::Globalization::Unicode::CodePointIndexer_TableRange>* ranges;
		int32_t TotalCount;
		int32_t defaultIndex;
		int32_t defaultCP;
		void _ctor(IL2CPP::Array<int32_t>* starts, IL2CPP::Array<int32_t>* ends, int32_t defaultIndex, int32_t defaultCP);
		int32_t ToIndex(int32_t cp);
	};
}

