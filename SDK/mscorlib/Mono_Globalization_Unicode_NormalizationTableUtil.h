#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::Mono::Globalization::Unicode { struct CodePointIndexer; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Mono::Globalization::Unicode
{
	struct NormalizationTableUtil : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Prop;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Map;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Combining;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Composite;
			mscorlib::Mono::Globalization::Unicode::CodePointIndexer* Helper;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static int32_t PropIdx(int32_t cp);
		static int32_t MapIdx(int32_t cp);
	};
}

