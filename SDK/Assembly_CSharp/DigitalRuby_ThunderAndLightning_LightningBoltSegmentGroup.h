#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color32.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color32; };
#include "DigitalRuby_ThunderAndLightning_LightningBoltSegment.h"
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningBoltSegment; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Light; };
namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning { struct LightningLightParameters; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct LightningBoltSegmentGroup : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float LineWidth;
		int32_t StartIndex;
		int32_t Generation;
		float Delay;
		float PeakStart;
		float PeakEnd;
		float LifeTime;
		float EndWidthMultiplier;
		UnityEngine_CoreModule::UnityEngine::Color32 Color;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningBoltSegment>* Segments;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Light>* Lights;
		Assembly_CSharp::DigitalRuby::ThunderAndLightning::LightningLightParameters* LightParameters;
		int32_t get_SegmentCount();
		void Reset();
		void _ctor();
	};
}

