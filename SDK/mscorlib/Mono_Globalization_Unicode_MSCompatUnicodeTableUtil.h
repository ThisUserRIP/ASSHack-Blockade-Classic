#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::Mono::Globalization::Unicode { struct CodePointIndexer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct MSCompatUnicodeTableUtil : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Ignorable;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Category;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Level1;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Level2;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Level3;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* CjkCHS;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Cjk;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

