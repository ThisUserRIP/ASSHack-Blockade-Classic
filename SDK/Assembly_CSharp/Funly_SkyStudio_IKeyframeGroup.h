#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Funly::SkyStudio { struct IBaseKeyframe; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct IKeyframeGroup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_name();
		void set_name(mscorlib::System::String* value);
		mscorlib::System::String* get_id();
		void SortKeyframes();
		void TrimToSingleKeyframe();
		void RemoveKeyFrame(Assembly_CSharp::Funly::SkyStudio::IBaseKeyframe* keyframe);
		int32_t GetKeyFrameCount();
	};
}

