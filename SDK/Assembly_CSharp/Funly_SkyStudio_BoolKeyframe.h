#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Funly_SkyStudio_BaseKeyframe.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct BoolKeyframe : Assembly_CSharp::Funly::SkyStudio::BaseKeyframe
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool value;
		void _ctor(float time, bool value);
		void _ctor(Assembly_CSharp::Funly::SkyStudio::BoolKeyframe* keyframe);
	};
}

