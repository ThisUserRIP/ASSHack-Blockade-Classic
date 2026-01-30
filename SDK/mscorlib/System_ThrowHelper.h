#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_ExceptionArgument.h"
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System { struct Object; };
#include "System_ExceptionResource.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System { struct String; };

namespace mscorlib::System
{
	struct ThrowHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void ThrowArgumentNullException(mscorlib::System::ExceptionArgument argument);
		static mscorlib::System::Exception* CreateArgumentNullException(mscorlib::System::ExceptionArgument argument);
		static void ThrowArgumentOutOfRangeException();
		static void ThrowWrongValueTypeArgumentException(mscorlib::System::Object* value, mscorlib::System::Type* targetType);
		static void ThrowArgumentException(mscorlib::System::ExceptionResource resource);
		static void ThrowArgumentOutOfRangeException(mscorlib::System::ExceptionArgument argument, mscorlib::System::ExceptionResource resource);
		static void ThrowInvalidOperationException(mscorlib::System::ExceptionResource resource);
		static void ThrowNotSupportedException(mscorlib::System::ExceptionResource resource);
		template <typename T> static void IfNullAndNullsAreIllegalThenThrow(mscorlib::System::Object* value, mscorlib::System::ExceptionArgument argName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IfNullAndNullsAreIllegalThenThrow", std::vector<std::string> { "System.Object", "System.ExceptionArgument" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)value;
			params[1] = (intptr_t)&argName;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static mscorlib::System::String* GetArgumentName(mscorlib::System::ExceptionArgument argument);
		static mscorlib::System::String* GetResourceName(mscorlib::System::ExceptionResource resource);
	};
}

