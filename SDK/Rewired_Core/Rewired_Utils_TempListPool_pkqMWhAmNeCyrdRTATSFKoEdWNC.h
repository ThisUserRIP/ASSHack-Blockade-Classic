#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Utils_TempListPool.h"
namespace Rewired_Core::Rewired::Utils { struct TempListPool; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename TKey, typename TValue> struct ADictionary_2; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Rewired_Core::Rewired::Utils { template <typename T> struct TempListPool_TList_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Utils
{
	struct TempListPool_pkqMWhAmNeCyrdRTATSFKoEdWNC : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>>* joOJyQjBMzDWUApfMkVyMpsTUhy;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::Utils::Classes::Data::ADictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Object>>* get_tLists();
		template <typename T> static Rewired_Core::Rewired::Utils::TempListPool_TList_1<T>* uHNqKSOftclMqrHEVbMOPpMFYbC(mscorlib::System::Collections::Generic::List_1<T>* A_0)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "uHNqKSOftclMqrHEVbMOPpMFYbC");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)A_0;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::Utils::TempListPool_TList_1<T>*)returnValue;
		}
		template <typename T> static void LItGBWWAYXODvoMPvOiZWdEQovV(Rewired_Core::Rewired::Utils::TempListPool_TList_1<T>* A_0)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LItGBWWAYXODvoMPvOiZWdEQovV");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)A_0;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void YKZBMWjnxRgiKHTlqTUxBHLfkvNW();
		static void YKZBMWjnxRgiKHTlqTUxBHLfkvNW(mscorlib::System::Type* A_0);
	};
}

