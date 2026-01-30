#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct MethodBase; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Remoting::Messaging { struct IMethodMessage; };

namespace mscorlib::System::Runtime::Remoting::Messaging
{
	struct CADMethodRef : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool ctor;
		mscorlib::System::String* typeName;
		mscorlib::System::String* methodName;
		IL2CPP::Array<mscorlib::System::String*>* param_names;
		IL2CPP::Array<mscorlib::System::String*>* generic_arg_names;
		IL2CPP::Array<mscorlib::System::Type*>* GetTypes(IL2CPP::Array<mscorlib::System::String*>* typeArray);
		mscorlib::System::Reflection::MethodBase* Resolve();
		void _ctor(mscorlib::System::Runtime::Remoting::Messaging::IMethodMessage* msg);
	};
}

