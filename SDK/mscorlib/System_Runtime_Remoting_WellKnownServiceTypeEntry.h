#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Runtime_Remoting_TypeEntry.h"
namespace mscorlib::System { struct String; };
#include "System_Runtime_Remoting_WellKnownObjectMode.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Runtime::Remoting
{
	struct WellKnownServiceTypeEntry : mscorlib::System::Runtime::Remoting::TypeEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* obj_type;
		mscorlib::System::String* obj_uri;
		mscorlib::System::Runtime::Remoting::WellKnownObjectMode obj_mode;
		void _ctor(mscorlib::System::String* typeName, mscorlib::System::String* assemblyName, mscorlib::System::String* objectUri, mscorlib::System::Runtime::Remoting::WellKnownObjectMode mode);
		mscorlib::System::Runtime::Remoting::WellKnownObjectMode get_Mode();
		mscorlib::System::Type* get_ObjectType();
		mscorlib::System::String* get_ObjectUri();
		mscorlib::System::String* ToString();
	};
}

