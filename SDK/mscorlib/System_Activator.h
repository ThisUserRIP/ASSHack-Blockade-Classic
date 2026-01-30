#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace mscorlib::System
{
	struct Activator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* args, mscorlib::System::Globalization::CultureInfo* culture);
		static mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type, mscorlib::System::Reflection::BindingFlags bindingAttr, mscorlib::System::Reflection::Binder* binder, IL2CPP::Array<mscorlib::System::Object*>* args, mscorlib::System::Globalization::CultureInfo* culture, IL2CPP::Array<mscorlib::System::Object*>* activationAttributes);
		static mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type, IL2CPP::Array<mscorlib::System::Object*>* args);
		static mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type);
		static mscorlib::System::Object* CreateInstance(mscorlib::System::Type* type, bool nonPublic);
		template <typename T> static T* CreateInstance()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateInstance");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
	};
}

