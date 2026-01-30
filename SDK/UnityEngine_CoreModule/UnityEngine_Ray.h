#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct IFormatProvider; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Ray
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Origin;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Direction;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_origin();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_direction();
		void set_direction(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPoint(float distance);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* format, mscorlib::System::IFormatProvider* formatProvider);
	};
}

