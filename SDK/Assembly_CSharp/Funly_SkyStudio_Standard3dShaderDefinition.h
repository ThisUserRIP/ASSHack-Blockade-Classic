#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Funly_SkyStudio_BaseShaderDefinition.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileFeatureSection; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileGroupSection; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct Standard3dShaderDefinition : Assembly_CSharp::Funly::SkyStudio::BaseShaderDefinition
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float MaxStarSize;
			float MaxStarDensity;
			float MinEdgeFeathering;
			float MinStarFadeBegin;
			float MaxSpriteItems;
			float MinRotationSpeed;
			float MaxRotationSpeed;
			float MaxCloudRotationSpeed;
			float MaxHDRValue;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileFeatureSection*>* ProfileFeatureSection();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection*>* ProfileDefinitionTable();
	};
}

