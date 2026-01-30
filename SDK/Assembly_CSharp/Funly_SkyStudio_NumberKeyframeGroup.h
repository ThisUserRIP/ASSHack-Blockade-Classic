#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::Funly::SkyStudio { struct NumberKeyframe; };
#include "Funly_SkyStudio_KeyframeGroup_1.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct NumberKeyframeGroup : Assembly_CSharp::Funly::SkyStudio::KeyframeGroup_1<Assembly_CSharp::Funly::SkyStudio::NumberKeyframe>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float minValue;
		float maxValue;
		void _ctor(mscorlib::System::String* name, float min, float max);
		void _ctor(mscorlib::System::String* name, float min, float max, Assembly_CSharp::Funly::SkyStudio::NumberKeyframe* frame);
		float GetFirstValue();
		float ValueToPercent(float value);
		float ValuePercentAtTime(float time);
		float PercentToValue(float percent);
		float NumericValueAtTime(float time);
	};
}

