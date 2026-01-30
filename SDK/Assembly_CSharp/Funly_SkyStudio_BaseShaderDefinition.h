#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileGroupSection; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileFeatureSection; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileFeatureDefinition; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct BaseShaderDefinition : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _shaderName_k__BackingField;
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection*>* m_ProfileDefinitions;
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileFeatureSection*>* m_ProfileFeatures;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition>* m_KeyToFeature;
		mscorlib::System::String* get_shaderName();
		void set_shaderName(mscorlib::System::String* value);
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection*>* get_groups();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileFeatureSection*>* get_features();
		Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition* GetFeatureDefinition(mscorlib::System::String* featureKey);
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileFeatureSection*>* ProfileFeatureSection();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection*>* ProfileDefinitionTable();
		void _ctor();
	};
}

