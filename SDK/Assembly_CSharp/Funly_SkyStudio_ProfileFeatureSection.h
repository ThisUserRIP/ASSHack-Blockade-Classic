#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileFeatureDefinition; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct ProfileFeatureSection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* sectionTitle;
		mscorlib::System::String* sectionKey;
		mscorlib::System::String* sectionIcon;
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition*>* featureDefinitions;
		void _ctor(mscorlib::System::String* sectionTitle, mscorlib::System::String* sectionKey, IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileFeatureDefinition*>* featureDefinitions);
	};
}

