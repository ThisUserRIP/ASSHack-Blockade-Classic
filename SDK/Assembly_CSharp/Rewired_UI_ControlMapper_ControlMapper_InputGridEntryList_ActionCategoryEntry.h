#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper_InputGridEntryList.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUILabel; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputGridEntryList_ActionCategoryEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t actionCategoryId;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label;
		void _ctor(int32_t actionCategoryId);
		void SetLabel(Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUILabel* label);
		void SetActive(bool state);
	};
}

