#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Funly_SkyStudio_SpriteArtSet.h"
namespace Assembly_CSharp::Funly::SkyStudio { struct RainSplashArtItem; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct RainSplashArtSet : Assembly_CSharp::Funly::SkyStudio::SpriteArtSet
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Funly::SkyStudio::RainSplashArtItem>* rainSplashArtItems;
		void _ctor();
	};
}

