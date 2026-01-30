#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TextAlignmentOptions.h"

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Compatibility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Unity_TextMeshPro::TMPro::TextAlignmentOptions ConvertTextAlignmentEnumValues(Unity_TextMeshPro::TMPro::TextAlignmentOptions oldValue);
	};
}

