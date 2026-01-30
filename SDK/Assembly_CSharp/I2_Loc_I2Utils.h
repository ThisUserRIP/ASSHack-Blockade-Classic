#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_SceneManagement_Scene.h"
namespace UnityEngine_CoreModule::UnityEngine::SceneManagement { struct Scene; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace System::System::Text::RegularExpressions { struct Match; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };

namespace Assembly_CSharp::I2::Loc
{
	struct I2Utils : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* ValidChars;
			mscorlib::System::String* NumberChars;
			mscorlib::System::String* ValidNameSymbols;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* ReverseText(mscorlib::System::String* source);
		static mscorlib::System::String* RemoveNonASCII(mscorlib::System::String* text, bool allowCategory);
		static mscorlib::System::String* GetValidTermName(mscorlib::System::String* text, bool allowCategory);
		static mscorlib::System::String* SplitLine(mscorlib::System::String* line, int32_t maxCharacters);
		static bool FindNextTag(mscorlib::System::String* line, int32_t iStart, int32_t& tagStart, int32_t& tagEnd);
		static mscorlib::System::String* RemoveTags(mscorlib::System::String* text);
		static bool RemoveResourcesPath(mscorlib::System::String& sPath);
		static bool IsPlaying();
		static mscorlib::System::String* GetPath(UnityEngine_CoreModule::UnityEngine::Transform* tr);
		static UnityEngine_CoreModule::UnityEngine::Transform* FindObject(mscorlib::System::String* objectPath);
		static UnityEngine_CoreModule::UnityEngine::Transform* FindObject(UnityEngine_CoreModule::UnityEngine::SceneManagement::Scene scene, mscorlib::System::String* objectPath);
		static UnityEngine_CoreModule::UnityEngine::Transform* FindObject(UnityEngine_CoreModule::UnityEngine::Transform* root, mscorlib::System::String* objectPath);
		template <typename H> static H* FindInParents(UnityEngine_CoreModule::UnityEngine::Transform* tr)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindInParents", std::vector<std::string> { "UnityEngine.Transform" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = H::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)tr;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<H>(returnValue);;
		}
		static mscorlib::System::String* GetCaptureMatch(System::System::Text::RegularExpressions::Match* match);
		static void SendWebRequest(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* www);
	};
}

