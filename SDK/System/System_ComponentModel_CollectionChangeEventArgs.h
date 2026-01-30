#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
#include "System_ComponentModel_CollectionChangeAction.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct CollectionChangeEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::CollectionChangeAction action;
		mscorlib::System::Object* element;
		void _ctor(System::ComponentModel::CollectionChangeAction action, mscorlib::System::Object* element);
		System::ComponentModel::CollectionChangeAction get_Action();
		mscorlib::System::Object* get_Element();
	};
}

