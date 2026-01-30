#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_Dropdown.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Dropdown; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Dropdown_OptionData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_Dropdown_OptionDataList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionData>* m_Options;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionData>* get_options();
		void set_options(mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Dropdown_OptionData>* value);
		void _ctor();
	};
}

