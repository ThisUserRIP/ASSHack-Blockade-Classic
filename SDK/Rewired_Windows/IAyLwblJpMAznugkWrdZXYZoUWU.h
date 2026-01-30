#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UIntPtr.h"
namespace mscorlib::System { struct UIntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System { struct String; };

namespace Rewired_Windows
{
	struct IAyLwblJpMAznugkWrdZXYZoUWU : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void* zUzxpbGdBXnMCuXzHovwluDxnvj(void* A_0, void* A_1, uintptr_t A_2);
		static void* dsQCneRPNhakFUZTImIbRgtXKWU(void* A_0, void* A_1, int32_t A_2);
		static void dIgTGxEiaZPNtUQApuOSTOPXGNn(intptr_t A_0, intptr_t A_1, int32_t A_2);
		template <typename T> static int32_t HpJJLviJNTdNTFomCcozdEbeFam()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HpJJLviJNTdNTFomCcozdEbeFam");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		static mscorlib::System::Guid unAjVnLeFgyBPiLeIcgxIIpAwDL(mscorlib::System::Type* A_0);
		static mscorlib::System::String* ffeNMmhoHykeBOCCKhmyRaysgQZD(intptr_t A_0, int32_t A_1);
		template <typename T> static mscorlib::System::String* BoYbQJqdxkEWeIAjBdoyzgWdFoqJ(mscorlib::System::String* A_0, IL2CPP::Array<T>* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BoYbQJqdxkEWeIAjBdoyzgWdFoqJ");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::String*)returnValue;
		}
	};
}

