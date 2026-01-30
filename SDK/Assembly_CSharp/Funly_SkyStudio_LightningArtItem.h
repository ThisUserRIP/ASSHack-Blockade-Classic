#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Funly_SkyStudio_SpriteArtItem.h"
#include "Funly_SkyStudio_LightningArtItem_Alignment.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct LightningArtItem : Assembly_CSharp::Funly::SkyStudio::SpriteArtItem
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Funly::SkyStudio::LightningArtItem_Alignment alignment;
		UnityEngine_AudioModule::UnityEngine::AudioClip* thunderSound;
		float strikeProbability;
		float size;
		float intensity;
		void _ctor();
	};
}

