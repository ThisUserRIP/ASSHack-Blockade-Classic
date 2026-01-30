#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct MethodInfo; };

namespace System::System
{
	struct SecurityUtils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void DemandReflectionAccess(mscorlib::System::Type* type);
		static void DemandGrantSet(mscorlib::System::Reflection::Assembly* assembly);
		static bool HasReflectionPermission(mscorlib::System::Type* type);
		static mscorlib::System::Object* SecureCreateInstance(mscorlib::System::Type* type);
		static mscorlib::System::Object* SecureCreateInstance(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Object*>* args, bool allowNonPublic);
		static mscorlib::System::Object* SecureCreateInstance(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::Object* SecureConstructorInvoke(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Type*>* argTypes, IL2CPP::Array<mscorlib::System::Object*>* args, bool allowNonPublic);
		static mscorlib::System::Object* SecureConstructorInvoke(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Type*>* argTypes, IL2CPP::Array<mscorlib::System::Object*>* args, bool allowNonPublic, mscorlib::System::Reflection::BindingFlags extraFlags);
		static bool GenericArgumentsAreVisible(mscorlib::System::Reflection::MethodInfo* method);
		static mscorlib::System::Object* MethodInfoInvoke(mscorlib::System::Reflection::MethodInfo* method, mscorlib::System::Object* target, IL2CPP::Array<mscorlib::System::Object*>* args);
	};
}

