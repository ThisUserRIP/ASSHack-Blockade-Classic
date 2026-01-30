#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IInputManagerJoystickPublic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t get_rewiredId();
		int32_t get_inputManagerId();
		mscorlib::System::String* get_name();
		mscorlib::System::Nullable_1<mscorlib::System::Int64> get_systemId();
		int32_t get_unityId();
		Rewired_Core::Rewired::Controller_Extension* get_extension();
		mscorlib::System::Guid get_instanceGuid();
		mscorlib::System::Guid get_persistentGuid();
		void SetVibration(float amount, int32_t motorIndex);
		void StopVibration();
	};
}

