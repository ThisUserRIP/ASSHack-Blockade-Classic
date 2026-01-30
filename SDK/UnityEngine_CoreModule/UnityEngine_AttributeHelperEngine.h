#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct DisallowMultipleComponent; };
namespace UnityEngine_CoreModule::UnityEngine { struct ExecuteInEditMode; };
namespace UnityEngine_CoreModule::UnityEngine { struct RequireComponent; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct AttributeHelperEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::DisallowMultipleComponent*>* _disallowMultipleComponentArray;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::ExecuteInEditMode*>* _executeInEditModeArray;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::RequireComponent*>* _requireComponentArray;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::Type* GetParentTypeDisallowingMultipleInclusion(mscorlib::System::Type* type);
		static IL2CPP::Array<mscorlib::System::Type*>* GetRequiredComponents(mscorlib::System::Type* klass);
		static int32_t GetExecuteMode(mscorlib::System::Type* klass);
		static int32_t CheckIsEditorScript(mscorlib::System::Type* klass);
		static int32_t GetDefaultExecutionOrderFor(mscorlib::System::Type* klass);
		template <typename T> static T* GetCustomAttributeOfType(mscorlib::System::Type* klass)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCustomAttributeOfType", std::vector<std::string> { "System.Type" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)klass;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		static void _cctor();
	};
}

