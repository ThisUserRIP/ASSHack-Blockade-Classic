#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_UI_Dropdown.h"
namespace UnityEngine_UI::UnityEngine::UI { struct Dropdown; };
namespace UnityEngine_UI::UnityEngine::UI { struct Dropdown_OptionData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct Dropdown_OptionDataList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Dropdown_OptionData>* m_Options;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Dropdown_OptionData>* get_options();
		void set_options(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::UI::Dropdown_OptionData>* value);
		void _ctor();
	};
}

