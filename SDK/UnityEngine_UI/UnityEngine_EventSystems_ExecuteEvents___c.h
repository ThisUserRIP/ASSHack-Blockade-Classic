#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_EventSystems_ExecuteEvents.h"
namespace UnityEngine_UI::UnityEngine::EventSystems { struct ExecuteEvents; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UI::UnityEngine::EventSystems { struct IEventSystemHandler; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace UnityEngine_UI::UnityEngine::EventSystems
{
	struct ExecuteEvents___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_UI::UnityEngine::EventSystems::ExecuteEvents___c* __9;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void __cctor_b__79_0(mscorlib::System::Collections::Generic::List_1<UnityEngine_UI::UnityEngine::EventSystems::IEventSystemHandler>* l);
	};
}

