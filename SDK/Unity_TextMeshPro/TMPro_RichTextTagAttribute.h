#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "TMPro_TagValueType.h"
#include "TMPro_TagUnitType.h"

namespace Unity_TextMeshPro::TMPro
{
	struct RichTextTagAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t nameHashCode;
		int32_t valueHashCode;
		Unity_TextMeshPro::TMPro::TagValueType valueType;
		int32_t valueStartIndex;
		int32_t valueLength;
		Unity_TextMeshPro::TMPro::TagUnitType unitType;
	};
}

