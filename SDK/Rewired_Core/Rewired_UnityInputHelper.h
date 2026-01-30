#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Rewired_Core::Rewired { struct UnityInputHelper_xrWZoZmrVvNIkALVloJCAwCjzBI; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Rewired_Core::Rewired
{
	struct UnityInputHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			IL2CPP::Array<Rewired_Core::Rewired::UnityInputHelper_xrWZoZmrVvNIkALVloJCAwCjzBI*>* vkDGyJpgkWfjlrQqHquOdtBvuGd;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static float GetJoystickAxisValueByJoystickId(int32_t joystickId, int32_t axisIndex);
		static float GetJoystickAxisRawValueByJoystickId(int32_t joystickId, int32_t axisIndex);
		static float GetJoystickAxisValueByJoystickIndex(int32_t joystickIndex, int32_t axisIndex);
		static float GetJoystickAxisRawValueByJoystickIndex(int32_t joystickIndex, int32_t axisIndex);
		static bool GetJoystickButtonValueByJoystickId(int32_t joystickId, int32_t buttonIndex);
		static bool GetJoystickButtonValueByJoystickIndex(int32_t joystickIndex, int32_t buttonIndex);
	};
}

