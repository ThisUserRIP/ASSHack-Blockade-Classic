#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SpherePointKeyframe; };
#include "Funly_SkyStudio_KeyframeGroup_1.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Funly::SkyStudio { struct SpherePoint; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct SpherePointKeyframeGroup : Assembly_CSharp::Funly::SkyStudio::KeyframeGroup_1<Assembly_CSharp::Funly::SkyStudio::SpherePointKeyframe>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float MinHorizontalRotation;
			float MaxHorizontalRotation;
			float MinVerticalRotation;
			float MaxVerticalRotation;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, Assembly_CSharp::Funly::SkyStudio::SpherePointKeyframe* keyframe);
		Assembly_CSharp::Funly::SkyStudio::SpherePoint* SpherePointForTime(float time);
	};
}

