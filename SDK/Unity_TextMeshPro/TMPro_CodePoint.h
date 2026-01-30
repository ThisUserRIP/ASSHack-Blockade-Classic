#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Unity_TextMeshPro::TMPro
{
	struct CodePoint : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint32_t SPACE;
			uint32_t DOUBLE_QUOTE;
			uint32_t NUMBER_SIGN;
			uint32_t PERCENTAGE;
			uint32_t PLUS;
			uint32_t MINUS;
			uint32_t PERIOD;
			uint32_t HYPHEN_MINUS;
			uint32_t SOFT_HYPHEN;
			uint32_t HYPHEN;
			uint32_t NON_BREAKING_HYPHEN;
			uint32_t ZERO_WIDTH_SPACE;
			uint32_t RIGHT_SINGLE_QUOTATION;
			uint32_t APOSTROPHE;
			uint32_t WORD_JOINER;
			uint32_t HIGH_SURROGATE_START;
			uint32_t HIGH_SURROGATE_END;
			uint32_t LOW_SURROGATE_START;
			uint32_t LOW_SURROGATE_END;
			uint32_t UNICODE_PLANE01_START;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}

