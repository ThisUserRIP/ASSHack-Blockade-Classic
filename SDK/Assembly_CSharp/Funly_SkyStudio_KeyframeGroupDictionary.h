#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Funly::SkyStudio { struct IKeyframeGroup; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ColorGroupDictionary; };
namespace Assembly_CSharp::Funly::SkyStudio { struct NumberGroupDictionary; };
namespace Assembly_CSharp::Funly::SkyStudio { struct TextureGroupDictionary; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SpherePointGroupDictionary; };
namespace Assembly_CSharp::Funly::SkyStudio { struct BoolGroupDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct KeyframeGroupDictionary : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::Funly::SkyStudio::IKeyframeGroup>* m_Groups;
		Assembly_CSharp::Funly::SkyStudio::ColorGroupDictionary* m_ColorGroup;
		Assembly_CSharp::Funly::SkyStudio::NumberGroupDictionary* m_NumberGroup;
		Assembly_CSharp::Funly::SkyStudio::TextureGroupDictionary* m_TextureGroup;
		Assembly_CSharp::Funly::SkyStudio::SpherePointGroupDictionary* m_SpherePointGroup;
		Assembly_CSharp::Funly::SkyStudio::BoolGroupDictionary* m_BoolGroup;
		Assembly_CSharp::Funly::SkyStudio::IKeyframeGroup* get_Item(mscorlib::System::String* aKey);
		void set_Item(mscorlib::System::String* aKey, Assembly_CSharp::Funly::SkyStudio::IKeyframeGroup* value);
		bool ContainsKey(mscorlib::System::String* key);
		void Clear();
		template <typename T> T* GetGroup(mscorlib::System::String* propertyName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGroup", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)propertyName;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		mscorlib::System::Collections::Generic::IEnumerator_1<mscorlib::System::String>* GetEnumerator();
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
		void _ctor();
	};
}

