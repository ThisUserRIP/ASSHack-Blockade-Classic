#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "I2_Loc_Localize_TermModification.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEvent; };
namespace Assembly_CSharp::I2::Loc { struct EventCallback; };
namespace Assembly_CSharp::I2::Loc { struct ILocalizeTarget; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Assembly_CSharp::I2::Loc
{
	struct Localize : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* mTerm;
		mscorlib::System::String* mTermSecondary;
		mscorlib::System::String* FinalTerm;
		mscorlib::System::String* FinalSecondaryTerm;
		Assembly_CSharp::I2::Loc::Localize_TermModification PrimaryTermModifier;
		Assembly_CSharp::I2::Loc::Localize_TermModification SecondaryTermModifier;
		mscorlib::System::String* TermPrefix;
		mscorlib::System::String* TermSuffix;
		bool LocalizeOnAwake;
		mscorlib::System::String* LastLocalizedLanguage;
		bool IgnoreRTL;
		int32_t MaxCharactersInRTL;
		bool IgnoreNumbersInRTL;
		bool CorrectAlignmentForRTL;
		bool AddSpacesToJoinedLanguages;
		bool AllowLocalizedParameters;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Object>* TranslatedObjects;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, UnityEngine_CoreModule::UnityEngine::Object>* mAssetDictionary;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* LocalizeEvent;
		bool AlwaysForceLocalize;
		Assembly_CSharp::I2::Loc::EventCallback* LocalizeCallBack;
		bool mGUI_ShowReferences;
		bool mGUI_ShowTems;
		bool mGUI_ShowCallback;
		Assembly_CSharp::I2::Loc::ILocalizeTarget* mLocalizeTarget;
		mscorlib::System::String* mLocalizeTargetName;
		struct StaticFields
		{
			mscorlib::System::String* MainTranslation;
			mscorlib::System::String* SecondaryTranslation;
			mscorlib::System::String* CallBackTerm;
			mscorlib::System::String* CallBackSecondaryTerm;
			Assembly_CSharp::I2::Loc::Localize* CurrentLocalizeComponent;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		mscorlib::System::String* get_Term();
		void set_Term(mscorlib::System::String* value);
		mscorlib::System::String* get_SecondaryTerm();
		void set_SecondaryTerm(mscorlib::System::String* value);
		void Awake();
		void OnEnable();
		bool HasCallback();
		void OnLocalize(bool Force);
		bool FindTarget();
		void GetFinalTerms(mscorlib::System::String& primaryTerm, mscorlib::System::String& secondaryTerm);
		mscorlib::System::String* GetMainTargetsText();
		void SetFinalTerms(mscorlib::System::String* Main, mscorlib::System::String* Secondary, mscorlib::System::String& primaryTerm, mscorlib::System::String& secondaryTerm, bool RemoveNonASCII);
		void SetTerm(mscorlib::System::String* primary);
		void SetTerm(mscorlib::System::String* primary, mscorlib::System::String* secondary);
		template <typename T> T* GetSecondaryTranslatedObj(mscorlib::System::String& mainTranslation, mscorlib::System::String& secondaryTranslation)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSecondaryTranslatedObj", std::vector<std::string> { "System.String&", "System.String&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&mainTranslation;
			params[1] = (intptr_t)&secondaryTranslation;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void UpdateAssetDictionary();
		template <typename T> T* GetObject(mscorlib::System::String* Translation)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetObject", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)Translation;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* GetTranslatedObject(mscorlib::System::String* Translation)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTranslatedObject", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)Translation;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void DeserializeTranslation(mscorlib::System::String* translation, mscorlib::System::String& value, mscorlib::System::String& secondary);
		template <typename T> T* FindTranslatedObject(mscorlib::System::String* value)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindTranslatedObject", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)value;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		bool HasTranslatedObject(UnityEngine_CoreModule::UnityEngine::Object* Obj);
		void AddTranslatedObject(UnityEngine_CoreModule::UnityEngine::Object* Obj);
		void SetGlobalLanguage(mscorlib::System::String* Language);
		void _ctor();
	};
}

