#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facebook_Unity_MethodCall_1.h"
#include "Facebook_Unity_Mobile_Android_AndroidFacebook.h"
namespace Facebook_Unity::Facebook::Unity::Mobile::Android { struct AndroidFacebook; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Facebook_Unity::Facebook::Unity { struct MethodArguments; };

namespace Facebook_Unity::Facebook::Unity::Mobile::Android
{
	template <typename T> struct AndroidFacebook_JavaMethodCall_1 : Facebook_Unity::Facebook::Unity::MethodCall_1<T>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Facebook_Unity::Facebook::Unity::Mobile::Android::AndroidFacebook::GetIl2CppClass(), "JavaMethodCall`1")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		Facebook_Unity::Facebook::Unity::Mobile::Android::AndroidFacebook* androidImpl;
		void _ctor(Facebook_Unity::Facebook::Unity::Mobile::Android::AndroidFacebook* androidImpl, mscorlib::System::String* methodName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Facebook.Unity.Mobile.Android.AndroidFacebook", "System.String" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)androidImpl;
			params[1] = (intptr_t)methodName;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void Call(Facebook_Unity::Facebook::Unity::MethodArguments* args)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Call", std::vector<std::string> { "Facebook.Unity.MethodArguments" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)args;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

