#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_ControlMapper_InputGridEntryList.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_InputGridEntryList; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct ControlMapper_GUIInputField; };
namespace Assembly_CSharp::Rewired::UI::ControlMapper { template <typename TKey, typename TValue> struct ControlMapper_IndexedDictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct ControlMapper_InputGridEntryList_FieldSet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::GameObject* groupContainer;
		Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_IndexedDictionary_2<mscorlib::System::Int32, Assembly_CSharp::Rewired::UI::ControlMapper::ControlMapper_GUIInputField>* fields;
		void _ctor(UnityEngine_CoreModule::UnityEngine::GameObject* groupContainer);
	};
}

