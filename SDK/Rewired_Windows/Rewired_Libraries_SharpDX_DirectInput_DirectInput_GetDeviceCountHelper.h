#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Libraries_SharpDX_DirectInput_DirectInput.h"
namespace Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput { struct DirectInput; };
namespace Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput { struct DirectInput_GetDeviceCountHelper_DirectInputEnumDevicesDelegate; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput
{
	struct DirectInput_GetDeviceCountHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput_GetDeviceCountHelper_DirectInputEnumDevicesDelegate* _callback;
			intptr_t _callbackPointer;
			int32_t _count;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static intptr_t get_callbackPointer();
		static int32_t GetCountAndClear();
		static void Clear();
		static int32_t DirectInputEnumDevicesImpl(void* deviceInstance, intptr_t data);
	};
}

