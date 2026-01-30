#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_TimeUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			float m_MinTimeScale;
			float m_MaxTimeScale;
			bool m_Paused;
			float m_TimeScaleOnPause;
			float InitialFixedTimeStep;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static float get_TimeScale();
		static void set_TimeScale(float value);
		static void FadeTimeScale(float targetTimeScale, float fadeSpeed);
		static float ClampTimeScale(float t);
		static bool get_Paused();
		static void set_Paused(bool value);
		static void _cctor();
	};
}

