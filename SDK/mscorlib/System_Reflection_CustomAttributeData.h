#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Reflection { struct ConstructorInfo; };
#include "System_Reflection_CustomAttributeTypedArgument.h"
namespace mscorlib::System::Reflection { struct CustomAttributeTypedArgument; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "System_Reflection_CustomAttributeNamedArgument.h"
namespace mscorlib::System::Reflection { struct CustomAttributeNamedArgument; };
namespace mscorlib::System::Reflection { struct CustomAttributeData_LazyCAttrData; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct Assembly; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MemberInfo; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System::Reflection { struct Module; };
namespace mscorlib::System::Reflection { struct ParameterInfo; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::System::Reflection
{
	struct CustomAttributeData : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::ConstructorInfo* ctorInfo;
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeTypedArgument>* ctorArgs;
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeNamedArgument>* namedArgs;
		mscorlib::System::Reflection::CustomAttributeData_LazyCAttrData* lazyData;
		void _ctor();
		void _ctor(mscorlib::System::Reflection::ConstructorInfo* ctorInfo, mscorlib::System::Reflection::Assembly* assembly, intptr_t data, uint32_t data_length);
		static void ResolveArgumentsInternal(mscorlib::System::Reflection::ConstructorInfo* ctor, mscorlib::System::Reflection::Assembly* assembly, intptr_t data, uint32_t data_length, IL2CPP::Array<mscorlib::System::Object*>& ctorArgs, IL2CPP::Array<mscorlib::System::Object*>& namedArgs);
		void ResolveArguments();
		mscorlib::System::Reflection::ConstructorInfo* get_Constructor();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeTypedArgument>* get_ConstructorArguments();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeNamedArgument>* get_NamedArguments();
		static mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributes(mscorlib::System::Reflection::Assembly* target);
		static mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributes(mscorlib::System::Reflection::MemberInfo* target);
		static mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesInternal(mscorlib::System::RuntimeType* target);
		static mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributes(mscorlib::System::Reflection::Module* target);
		static mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributes(mscorlib::System::Reflection::ParameterInfo* target);
		mscorlib::System::Type* get_AttributeType();
		mscorlib::System::String* ToString();
		template <typename T> static IL2CPP::Array<T>* UnboxValues(IL2CPP::Array<mscorlib::System::Object*>* values)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UnboxValues", std::vector<std::string> { "System.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)values;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

