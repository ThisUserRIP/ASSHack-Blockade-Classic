#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Keyframe
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_Time;
		float m_Value;
		float m_InTangent;
		float m_OutTangent;
		int32_t m_WeightedMode;
		float m_InWeight;
		float m_OutWeight;
		void _ctor(float time, float value);
		void _ctor(float time, float value, float inTangent, float outTangent);
		float get_time();
		void set_time(float value);
		float get_value();
		void set_value(float value);
		float get_inTangent();
		void set_inTangent(float value);
		float get_outTangent();
		void set_outTangent(float value);
		int32_t get_tangentMode();
		void set_tangentMode(int32_t value);
		int32_t get_tangentModeInternal();
		void set_tangentModeInternal(int32_t value);
	};
}

