#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::Funly::SkyStudio { struct BoolKeyframe; };
#include "Funly_SkyStudio_KeyframeGroup_1.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct BoolKeyframeGroup : Assembly_CSharp::Funly::SkyStudio::KeyframeGroup_1<Assembly_CSharp::Funly::SkyStudio::BoolKeyframe>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, Assembly_CSharp::Funly::SkyStudio::BoolKeyframe* keyframe);
		bool BoolForTime(float time);
	};
}

