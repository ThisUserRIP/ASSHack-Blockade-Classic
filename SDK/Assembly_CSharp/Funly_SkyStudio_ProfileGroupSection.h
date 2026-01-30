#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Funly::SkyStudio { struct ProfileGroupDefinition; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct ProfileGroupSection : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* sectionTitle;
		mscorlib::System::String* sectionIcon;
		mscorlib::System::String* sectionKey;
		mscorlib::System::String* dependsOnFeature;
		bool dependsOnValue;
		IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*>* groups;
		void _ctor(mscorlib::System::String* sectionTitle, mscorlib::System::String* sectionKey, mscorlib::System::String* sectionIcon, mscorlib::System::String* dependsOnFeature, bool dependsOnValue, IL2CPP::Array<Assembly_CSharp::Funly::SkyStudio::ProfileGroupDefinition*>* groups);
	};
}

