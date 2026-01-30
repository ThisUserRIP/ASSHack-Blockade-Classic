#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_TextParsingUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_TextParsingUtilities* s_Instance;
			mscorlib::System::String* k_LookupStringL;
			mscorlib::System::String* k_LookupStringU;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static Unity_TextMeshPro::TMPro::TMP_TextParsingUtilities* get_instance();
		static int32_t GetHashCode(mscorlib::System::String* s);
		static int32_t GetHashCodeCaseSensitive(mscorlib::System::String* s);
		static wchar_t ToLowerASCIIFast(wchar_t c);
		static wchar_t ToUpperASCIIFast(wchar_t c);
		static uint32_t ToUpperASCIIFast(uint32_t c);
		static uint32_t ToLowerASCIIFast(uint32_t c);
		static bool IsHighSurrogate(uint32_t c);
		static bool IsLowSurrogate(uint32_t c);
		static uint32_t ConvertToUTF32(uint32_t highSurrogate, uint32_t lowSurrogate);
		void _ctor();
	};
}

