#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "Funly_SkyStudio_ProfileFeatureDefinition_FeatureType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct ProfileFeatureDefinition : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* featureKey;
		IL2CPP::Array<mscorlib::System::String*>* featureKeys;
		Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition_FeatureType featureType;
		mscorlib::System::String* shaderKeyword;
		IL2CPP::Array<mscorlib::System::String*>* shaderKeywords;
		IL2CPP::Array<mscorlib::System::String*>* dropdownLabels;
		int32_t dropdownSelectedIndex;
		mscorlib::System::String* name;
		bool value;
		mscorlib::System::String* tooltip;
		mscorlib::System::String* dependsOnFeature;
		bool dependsOnValue;
		bool isShaderKeywordFeature;
		static Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition* CreateShaderFeature(mscorlib::System::String* featureKey, mscorlib::System::String* shaderKeyword, bool value, mscorlib::System::String* name, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition* CreateShaderFeatureDropdown(IL2CPP::Array<mscorlib::System::String*>* featureKeys, IL2CPP::Array<mscorlib::System::String*>* shaderKeywords, IL2CPP::Array<mscorlib::System::String*>* labels, int32_t selectedIndex, mscorlib::System::String* name, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition* CreateBooleanFeature(mscorlib::System::String* featureKey, bool value, mscorlib::System::String* name, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, mscorlib::System::String* tooltip);
		void _ctor();
	};
}

