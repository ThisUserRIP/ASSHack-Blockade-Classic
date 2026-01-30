#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
namespace Assembly_CSharp::Funly::SkyStudio { struct IProfileDefinition; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::Funly::SkyStudio { struct KeyframeGroupDictionary; };
namespace Assembly_CSharp::Funly::SkyStudio { struct BoolDictionary; };
namespace Assembly_CSharp::Funly::SkyStudio { struct LightningArtSet; };
namespace Assembly_CSharp::Funly::SkyStudio { struct RainSplashArtSet; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileGroupDefinition; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileGroupSection; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileFeatureSection; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SpherePoint; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Assembly_CSharp::Funly::SkyStudio { struct IKeyframeGroup; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct SkyProfile : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Material* m_SkyboxMaterial;
		mscorlib::System::String* m_ShaderName;
		Assembly_CSharp::Funly::SkyStudio::IProfileDefinition* profileDefinition;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* timelineManagedKeys;
		Assembly_CSharp::Funly::SkyStudio::KeyframeGroupDictionary* keyframeGroups;
		Assembly_CSharp::Funly::SkyStudio::BoolDictionary* featureStatus;
		Assembly_CSharp::Funly::SkyStudio::LightningArtSet* lightningArtSet;
		Assembly_CSharp::Funly::SkyStudio::RainSplashArtSet* rainSplashArtSet;
		UnityEngine_CoreModule::UnityEngine::Texture2D* starLayer1DataTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* starLayer2DataTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* starLayer3DataTexture;
		int32_t m_ProfileVersion;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition>* m_KeyToGroupInfo;
		struct StaticFields
		{
			mscorlib::System::String* DefaultShaderName;
			mscorlib::System::String* DefaultLegacyShaderName;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Material* get_skyboxMaterial();
		void set_skyboxMaterial(UnityEngine_CoreModule::UnityEngine::Material* value);
		mscorlib::System::String* get_shaderName();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection*>* get_groupDefinitions();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileFeatureSection*>* get_featureDefinitions();
		float GetNumberPropertyValue(mscorlib::System::String* propertyKey);
		float GetNumberPropertyValue(mscorlib::System::String* propertyKey, float timeOfDay);
		UnityEngine_CoreModule::UnityEngine::Color GetColorPropertyValue(mscorlib::System::String* propertyKey);
		UnityEngine_CoreModule::UnityEngine::Color GetColorPropertyValue(mscorlib::System::String* propertyKey, float timeOfDay);
		UnityEngine_CoreModule::UnityEngine::Texture* GetTexturePropertyValue(mscorlib::System::String* propertyKey);
		UnityEngine_CoreModule::UnityEngine::Texture* GetTexturePropertyValue(mscorlib::System::String* propertyKey, float timeOfDay);
		Assembly_CSharp::Funly::SkyStudio::SpherePoint* GetSpherePointPropertyValue(mscorlib::System::String* propertyKey);
		Assembly_CSharp::Funly::SkyStudio::SpherePoint* GetSpherePointPropertyValue(mscorlib::System::String* propertyKey, float timeOfDay);
		bool GetBoolPropertyValue(mscorlib::System::String* propertyKey);
		bool GetBoolPropertyValue(mscorlib::System::String* propertyKey, float timeOfDay);
		void _ctor();
		void OnEnable();
		void ReloadFullProfile();
		void ReloadDefinitions();
		Assembly_CSharp::Funly::SkyStudio::IProfileDefinition* GetShaderInfoForMaterial(mscorlib::System::String* shaderName);
		void MergeProfileWithDefinitions();
		void MergeGroupsWithDefinitions();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition>* GroupDefinitionDictionary();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection*>* ProfileDefinitionTable();
		void AddNumericGroup(mscorlib::System::String* propKey, mscorlib::System::String* groupName, float min, float max, float value);
		void AddColorGroup(mscorlib::System::String* propKey, mscorlib::System::String* groupName, UnityEngine_CoreModule::UnityEngine::Color color);
		void AddTextureGroup(mscorlib::System::String* propKey, mscorlib::System::String* groupName, UnityEngine_CoreModule::UnityEngine::Texture2D* texture);
		void AddSpherePointGroup(mscorlib::System::String* propKey, mscorlib::System::String* groupName, Assembly_CSharp::Funly::SkyStudio::SpherePoint* point);
		void AddBooleanGroup(mscorlib::System::String* propKey, mscorlib::System::String* groupName, bool value);
		template <typename T> T* GetGroup(mscorlib::System::String* propertyKey)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetGroup", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)propertyKey;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		Assembly_CSharp::Funly::SkyStudio::IKeyframeGroup* GetGroup(mscorlib::System::String* propertyKey);
		Assembly_CSharp::Funly::SkyStudio::IKeyframeGroup* GetGroupWithId(mscorlib::System::String* groupId);
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection*>* GetProfileDefinitions();
		Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection* GetSectionInfo(mscorlib::System::String* sectionKey);
		bool IsManagedByTimeline(mscorlib::System::String* propertyKey);
		void ValidateTimelineGroupKeys();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition>* GetGroupDefinitionsManagedByTimeline();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition>* GetGroupDefinitionsNotManagedByTimeline();
		Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* GetGroupDefinitionForKey(mscorlib::System::String* propertyKey);
		void RebuildKeyToGroupInfoMapping();
		void TrimGroupToSingleKeyframe(mscorlib::System::String* propertyKey);
		bool CanGroupBeOnTimeline(Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* definition);
		void MergeShaderKeywordsWithDefinitions();
		bool IsFeatureEnabled(mscorlib::System::String* featureKey, bool recursive);
		void SetFeatureEnabled(mscorlib::System::String* featureKey, bool value);
	};
}

