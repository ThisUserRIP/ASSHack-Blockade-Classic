#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileFeatureSection; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileGroupSection; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileFeatureDefinition; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct IProfileDefinition
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_shaderName();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileFeatureSection*>* get_features();
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupSection*>* get_groups();
		Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition* GetFeatureDefinition(mscorlib::System::String* featureKey);
	};
}

