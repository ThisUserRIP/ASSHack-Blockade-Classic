#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct ProfileSectionKeys : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* FeaturesSectionKey;
			mscorlib::System::String* SkySectionKey;
			mscorlib::System::String* SunSectionKey;
			mscorlib::System::String* MoonSectionKey;
			mscorlib::System::String* CloudSectionKey;
			mscorlib::System::String* FogSectionKey;
			mscorlib::System::String* StarsBasicSectionKey;
			mscorlib::System::String* Star1SectionKey;
			mscorlib::System::String* Star2SectionKey;
			mscorlib::System::String* Star3SectionKey;
			mscorlib::System::String* RainSectionKey;
			mscorlib::System::String* RainSplashSectionKey;
			mscorlib::System::String* LightningSectionKey;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

