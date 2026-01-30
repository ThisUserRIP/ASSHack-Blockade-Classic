#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMPro_ExtensionMethods : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<int32_t>* ToIntArray(mscorlib::System::String* text);
		static mscorlib::System::String* ArrayToString(IL2CPP::Array<wchar_t>* chars);
		static mscorlib::System::String* IntToString(IL2CPP::Array<int32_t>* unicodes);
		static mscorlib::System::String* UintToString(mscorlib::System::Collections::Generic::List_1<mscorlib::System::UInt32>* unicodes);
		static mscorlib::System::String* IntToString(IL2CPP::Array<int32_t>* unicodes, int32_t start, int32_t length);
		template <typename T> static int32_t FindInstanceID(mscorlib::System::Collections::Generic::List_1<T>* list, T* target)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindInstanceID", std::vector<std::string> { "System.Collections.Generic.List`1<T>", GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)list;
			params[1] = (intptr_t)target;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
		static bool Compare(UnityEngine_CoreModule::UnityEngine::Color32 a, UnityEngine_CoreModule::UnityEngine::Color32 b);
		static bool CompareRGB(UnityEngine_CoreModule::UnityEngine::Color32 a, UnityEngine_CoreModule::UnityEngine::Color32 b);
		static bool Compare(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b);
		static bool CompareRGB(UnityEngine_CoreModule::UnityEngine::Color a, UnityEngine_CoreModule::UnityEngine::Color b);
		static UnityEngine_CoreModule::UnityEngine::Color32 Multiply(UnityEngine_CoreModule::UnityEngine::Color32 c1, UnityEngine_CoreModule::UnityEngine::Color32 c2);
		static UnityEngine_CoreModule::UnityEngine::Color32 Tint(UnityEngine_CoreModule::UnityEngine::Color32 c1, UnityEngine_CoreModule::UnityEngine::Color32 c2);
		static UnityEngine_CoreModule::UnityEngine::Color32 Tint(UnityEngine_CoreModule::UnityEngine::Color32 c1, float tint);
		static UnityEngine_CoreModule::UnityEngine::Color MinAlpha(UnityEngine_CoreModule::UnityEngine::Color c1, UnityEngine_CoreModule::UnityEngine::Color c2);
		static bool Compare(UnityEngine_CoreModule::UnityEngine::Vector3 v1, UnityEngine_CoreModule::UnityEngine::Vector3 v2, int32_t accuracy);
		static bool Compare(UnityEngine_CoreModule::UnityEngine::Quaternion q1, UnityEngine_CoreModule::UnityEngine::Quaternion q2, int32_t accuracy);
	};
}

