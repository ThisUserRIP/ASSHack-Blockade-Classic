#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_MemberDescriptor.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct MemberDescriptor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Delegate; };

namespace System::System::ComponentModel
{
	struct EventDescriptor : System::ComponentModel::MemberDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::String* name, IL2CPP::Array<mscorlib::System::Attribute*>* attrs);
		void _ctor(System::ComponentModel::MemberDescriptor* descr);
		void _ctor(System::ComponentModel::MemberDescriptor* descr, IL2CPP::Array<mscorlib::System::Attribute*>* attrs);
		mscorlib::System::Type* get_ComponentType();
		mscorlib::System::Type* get_EventType();
		bool get_IsMulticast();
		void AddEventHandler(mscorlib::System::Object* component, mscorlib::System::Delegate* value);
		void RemoveEventHandler(mscorlib::System::Object* component, mscorlib::System::Delegate* value);
	};
}

