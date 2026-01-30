#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Funly_SkyStudio_InterpolationCurve.h"
#include "Funly_SkyStudio_InterpolationDirection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct BaseKeyframe : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Id;
		float m_Time;
		Assembly_CSharp::Funly::SkyStudio::InterpolationCurve m_InterpolationCurve;
		Assembly_CSharp::Funly::SkyStudio::InterpolationDirection m_InterpolationDirection;
		mscorlib::System::String* get_id();
		void set_id(mscorlib::System::String* value);
		float get_time();
		void set_time(float value);
		Assembly_CSharp::Funly::SkyStudio::InterpolationCurve get_interpolationCurve();
		void set_interpolationCurve(Assembly_CSharp::Funly::SkyStudio::InterpolationCurve value);
		Assembly_CSharp::Funly::SkyStudio::InterpolationDirection get_interpolationDirection();
		void set_interpolationDirection(Assembly_CSharp::Funly::SkyStudio::InterpolationDirection value);
		void _ctor(float time);
		int32_t CompareTo(mscorlib::System::Object* other);
	};
}

