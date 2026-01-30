#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper_InputGridEntryList.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputActionSet; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList_ActionEntry; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputGridEntryList__GetActionSets_d__18 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputActionSet* __2__current;
		int32_t __l__initialThreadId;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList* __4__this;
		int32_t mapCategoryId;
		int32_t __3__mapCategoryId;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputGridEntryList_ActionEntry>* _list_5__2;
		int32_t _count_5__3;
		int32_t _i_5__4;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputActionSet* System_Collections_Generic_IEnumerator_Rewired_UI_ControlMapper_ControlMapper_InputActionSet__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
		mscorlib::System::Collections::Generic::IEnumerator_1<Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_InputActionSet>* System_Collections_Generic_IEnumerable_Rewired_UI_ControlMapper_ControlMapper_InputActionSet__GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
	};
}

