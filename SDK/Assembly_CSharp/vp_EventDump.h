#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct vp_EventHandler; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Delegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_EventDump : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::String* Dump(Assembly_CSharp::vp_EventHandler* handler, IL2CPP::Array<mscorlib::System::String*>* eventTypes);
		static mscorlib::System::String* DumpEventsOfType(mscorlib::System::String* type, mscorlib::System::String* caption, Assembly_CSharp::vp_EventHandler* handler);
		static mscorlib::System::String* DumpEventListeners(mscorlib::System::Object* e, IL2CPP::Array<mscorlib::System::String*>* invokers);
		static IL2CPP::Array<mscorlib::System::String*>* GetMethodNames(IL2CPP::Array<mscorlib::System::Delegate*>* list);
		static IL2CPP::Array<mscorlib::System::Delegate*>* RemoveDelegatesFromList(IL2CPP::Array<mscorlib::System::Delegate*>* list);
		static mscorlib::System::String* DumpDelegateNames(IL2CPP::Array<mscorlib::System::String*>* array);
		void _ctor();
	};
}

