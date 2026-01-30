#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::ComponentModel { struct EventHandlerList_ListEntry; };
namespace System::System::ComponentModel { struct Component; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct EventHandlerList : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::EventHandlerList_ListEntry* head;
		System::ComponentModel::Component* parent;
		void _ctor();
		void _ctor(System::ComponentModel::Component* parent);
		mscorlib::System::Delegate* get_Item(mscorlib::System::Object* key);
		void set_Item(mscorlib::System::Object* key, mscorlib::System::Delegate* value);
		void AddHandler(mscorlib::System::Object* key, mscorlib::System::Delegate* value);
		void AddHandlers(System::ComponentModel::EventHandlerList* listToAddFrom);
		void Dispose();
		System::ComponentModel::EventHandlerList_ListEntry* Find(mscorlib::System::Object* key);
		void RemoveHandler(mscorlib::System::Object* key, mscorlib::System::Delegate* value);
	};
}

