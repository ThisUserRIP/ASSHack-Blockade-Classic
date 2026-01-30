#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Funly::SkyStudio { struct TextureKeyframeGroup; };
#include "Funly_SkyStudio_SerializableDictionary_2.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct TextureGroupDictionary : Assembly_CSharp::Funly::SkyStudio::SerializableDictionary_2<mscorlib::System::String, Assembly_CSharp::Funly::SkyStudio::TextureKeyframeGroup>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
	};
}

