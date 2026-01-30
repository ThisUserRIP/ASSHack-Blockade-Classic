#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };

namespace Rewired_Core::Rewired::Utils::Classes::Data
{
	struct ScreenRect
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float xMin;
		float yMin;
		float width;
		float height;
		void _ctor(float left, float bottom, float width, float height);
		float get_xMax();
		void set_xMax(float value);
		float get_yMax();
		void set_yMax(float value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_center();
		mscorlib::System::String* ToString();
		static UnityEngine_CoreModule::UnityEngine::Rect op_Implicit(Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect o);
		static Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect op_Implicit(UnityEngine_CoreModule::UnityEngine::Rect o);
	};
}

