#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RuntimeEventInfo.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::System::Reflection
{
	struct MonoEvent : mscorlib::System::Reflection::RuntimeEventInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t klass;
		intptr_t handle;
		mscorlib::System::Reflection::MethodInfo* GetAddMethod(bool nonPublic);
		mscorlib::System::Reflection::MethodInfo* GetRaiseMethod(bool nonPublic);
		mscorlib::System::Reflection::MethodInfo* GetRemoveMethod(bool nonPublic);
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::Type* get_ReflectedType();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* ToString();
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesData();
		void _ctor();
	};
}

