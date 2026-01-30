#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "agfBbckzkopIdsLHksRRPOkzsVrN.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput
{
	struct DeviceObjectId
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _rawType;
		Rewired_Windows::agfBbckzkopIdsLHksRRPOkzsVrN get_Flags();
		int32_t get_InstanceNumber();
		bool Equals(Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DeviceObjectId other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
	};
}

