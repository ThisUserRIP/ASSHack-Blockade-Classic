#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_SubsystemsModule::UnityEngine { struct IntegratedSubsystemDescriptor; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation { struct SubsystemDescriptorWithProvider; };
namespace UnityEngine_SubsystemsModule::UnityEngine { struct SubsystemDescriptor; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation
{
	struct SubsystemDescriptorStore : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystemDescriptor>* s_IntegratedDescriptors;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_SubsystemsModule::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider>* s_StandaloneDescriptors;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_SubsystemsModule::UnityEngine::SubsystemDescriptor>* s_DeprecatedDescriptors;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void InitializeManagedDescriptor(intptr_t ptr, UnityEngine_SubsystemsModule::UnityEngine::IntegratedSubsystemDescriptor* desc);
		static void ClearManagedDescriptors();
		static void ReportSingleSubsystemAnalytics(mscorlib::System::String* id);
		template <typename TDescriptor, typename TBaseTypeInList> static void RegisterDescriptor(TDescriptor* descriptor, mscorlib::System::Collections::Generic::List_1<TBaseTypeInList>* storeInList)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterDescriptor", std::vector<std::string> { GetGenericTypeName<TDescriptor>(), "System.Collections.Generic.List`1<TBaseTypeInList>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = TDescriptor::GetIl2CppType();
			typeArguments->vector[1] = TBaseTypeInList::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)descriptor;
			params[1] = (intptr_t)storeInList;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		static void RegisterDeprecatedDescriptor(UnityEngine_SubsystemsModule::UnityEngine::SubsystemDescriptor* descriptor);
		static void _cctor();
	};
}

