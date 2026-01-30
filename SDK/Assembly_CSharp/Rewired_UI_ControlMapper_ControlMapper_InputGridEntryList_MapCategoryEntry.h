#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper_InputGridEntryList.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList_ActionEntry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList_ActionCategoryEntry; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { template <typename TKey, typename TValue> struct ControlMapper_IndexedDictionary_2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\Rewired_Core\Rewired_AxisRange.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct InputAction; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputGridEntryList_MapCategoryEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry>* _actionList;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_IndexedDictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry>* _actionCategoryList;
		float _columnHeight;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry>* get_actionList();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_IndexedDictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry>* get_actionCategoryList();
		float get_columnHeight();
		void set_columnHeight(float value);
		void _ctor();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry* GetActionEntry(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange);
		int32_t IndexOfActionEntry(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange);
		bool ContainsActionEntry(int32_t actionId, Rewired_Core::Rewired::AxisRange axisRange);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry* AddAction(Rewired_Core::Rewired::InputAction* action, Rewired_Core::Rewired::AxisRange axisRange);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry* GetActionCategoryEntry(int32_t actionCategoryId);
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionCategoryEntry* AddActionCategory(int32_t actionCategoryId);
		void SetAllActive(bool state);
	};
}

