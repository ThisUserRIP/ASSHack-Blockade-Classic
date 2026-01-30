#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Funly_SkyStudio_ProfileGroupDefinition_GroupType.h"
#include "Funly_SkyStudio_ProfileGroupDefinition_FormatStyle.h"
#include "Funly_SkyStudio_ProfileGroupDefinition_RebuildType.h"
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SpherePoint; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct ProfileGroupDefinition : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_GroupType type;
		Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_FormatStyle formatStyle;
		Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType;
		mscorlib::System::String* propertyKey;
		mscorlib::System::String* groupName;
		UnityEngine_CoreModule::UnityEngine::Color color;
		Assembly_CSharp::Funly::SkyStudio::SpherePoint* spherePoint;
		float minimumValue;
		float maximumValue;
		float value;
		bool boolValue;
		UnityEngine_CoreModule::UnityEngine::Texture2D* texture;
		mscorlib::System::String* tooltip;
		mscorlib::System::String* dependsOnFeature;
		bool dependsOnValue;
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* NumberGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float minimumValue, float maximumValue, float value, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* NumberGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float minimumValue, float maximumValue, float value, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* NumberGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float minimumValue, float maximumValue, float value, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* NumberGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float minimumValue, float maximumValue, float value, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_FormatStyle formatStyle, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* ColorGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Color color, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* ColorGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Color color, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* ColorGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Color color, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* SpherePointGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float horizontalRotation, float verticalRotation, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* SpherePointGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, float horizontalRotation, float verticalRotation, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* TextureGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* TextureGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* TextureGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, UnityEngine_CoreModule::UnityEngine::Texture2D* texture, Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition_RebuildType rebuildType, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip);
		static Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition* BoolGroupDefinition(mscorlib::System::String* groupName, mscorlib::System::String* propKey, bool value, mscorlib::System::String* dependsOnKeyword, bool dependsOnValue, mscorlib::System::String* tooltip);
		void _ctor();
	};
}

