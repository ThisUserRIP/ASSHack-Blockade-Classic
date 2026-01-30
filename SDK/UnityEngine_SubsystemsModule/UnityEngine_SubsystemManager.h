#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Action; };
namespace UnityEngine_SubsystemsModule::UnityEngine { struct IntegratedSubsystem; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation { struct SubsystemWithProvider; };
namespace UnityEngine_SubsystemsModule::UnityEngine { struct Subsystem; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace UnityEngine_SubsystemsModule::UnityEngine
{
	struct SubsystemManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action* beforeReloadSubsystems;
			mscorlib::System::Action* afterReloadSubsystems;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem>* s_IntegratedSubsystems;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemWithProvider>* s_StandaloneSubsystems;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_SubsystemsModule::UnityEngine::Subsystem>* s_DeprecatedSubsystems;
			mscorlib::System::Action* reloadSubsytemsStarted;
			mscorlib::System::Action* reloadSubsytemsCompleted;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void ReloadSubsystemsStarted();
		static void ReloadSubsystemsCompleted();
		static void InitializeIntegratedSubsystem(intptr_t ptr, UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem* subsystem);
		static void ClearSubsystems();
		static void StaticConstructScriptingClassMap();
		static void _cctor();
		template <typename T> static void GetSubsystems(mscorlib::System::Collections::Generic::List_1<T>* subsystems)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSubsystems", std::vector<std::string> { "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)subsystems;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename TBaseTypeInList, typename TQueryType> static void AddSubsystemSubset(mscorlib::System::Collections::Generic::List_1<TBaseTypeInList>* copyFrom, mscorlib::System::Collections::Generic::List_1<TQueryType>* copyTo)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddSubsystemSubset", std::vector<std::string> { "System.Collections.Generic.List`1<TBaseTypeInList>", "System.Collections.Generic.List`1<TQueryType>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TBaseTypeInList::GetIl2CppType();
			typeArguments->vector[1] = TQueryType::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)copyFrom;
			params[1] = (intptr_t)copyTo;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystem* GetIntegratedSubsystemByPtr(intptr_t ptr);
		template <typename T> static void GetInstances(mscorlib::System::Collections::Generic::List_1<T>* subsystems)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInstances", std::vector<std::string> { "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)subsystems;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

