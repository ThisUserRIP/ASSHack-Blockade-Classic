#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_ReInput.h"
namespace Rewired_Core::Rewired { struct ReInput; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_InputLegacyModule\UnityEngine_Touch.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct Touch; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired
{
	struct ReInput_UnityTouch : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Core::Rewired::ReInput_UnityTouch* PxkTdIkXptwTeWPXwEumaEaSBxt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ReInput_UnityTouch* get_Instance();
		void _ctor();
		int32_t get_touchCount();
		IL2CPP::Array<UnityEngine_InputLegacyModule::UnityEngine::Touch>* get_touches();
		bool get_simulateMouseWithTouches();
		void set_simulateMouseWithTouches(bool value);
		bool get_multiTouchEnabled();
		void set_multiTouchEnabled(bool value);
		UnityEngine_InputLegacyModule::UnityEngine::Touch GetTouch(int32_t index);
	};
}

