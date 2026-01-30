#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerMapWithAxes.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct CustomControllerMap : Rewired_Core::Rewired::ControllerMapWithAxes
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t _sourceControllerId;
		int32_t get_sourceControllerId();
		void set_sourceControllerId(int32_t value);
		void _ctor();
		void _ctor(Rewired_Core::Rewired::CustomControllerMap* customControllerMap);
		void SetIdentity(int32_t sourceControllerId, int32_t categoryId, int32_t layoutId);
		static Rewired_Core::Rewired::CustomControllerMap* Blank(int32_t sourceControllerId, int32_t categoryId, int32_t layoutId);
	};
}

