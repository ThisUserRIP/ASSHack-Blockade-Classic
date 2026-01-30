#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Funly_SkyStudio_InterpolationCurve.h"
#include "Funly_SkyStudio_InterpolationDirection.h"

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct IBaseKeyframe
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* get_id();
		float get_time();
		void set_time(float value);
		Assembly_CSharp::Funly::SkyStudio::InterpolationCurve get_interpolationCurve();
		void set_interpolationCurve(Assembly_CSharp::Funly::SkyStudio::InterpolationCurve value);
		Assembly_CSharp::Funly::SkyStudio::InterpolationDirection get_interpolationDirection();
		void set_interpolationDirection(Assembly_CSharp::Funly::SkyStudio::InterpolationDirection value);
	};
}

