#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_ComponentModel_EventHandlerList.h"
namespace System::System::ComponentModel { struct EventHandlerList; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Delegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct EventHandlerList_ListEntry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::EventHandlerList_ListEntry* next;
		mscorlib::System::Object* key;
		mscorlib::System::Delegate* handler;
		void _ctor(mscorlib::System::Object* key, mscorlib::System::Delegate* handler, System::ComponentModel::EventHandlerList_ListEntry* next);
	};
}

