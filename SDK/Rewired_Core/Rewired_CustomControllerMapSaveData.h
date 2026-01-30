#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_ControllerMapSaveData.h"
namespace Rewired_Core::Rewired { struct CustomController; };
namespace Rewired_Core::Rewired { struct CustomControllerMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct CustomControllerMapSaveData : Rewired_Core::Rewired::ControllerMapSaveData
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::CustomController* get_customController();
		Rewired_Core::Rewired::CustomControllerMap* get_customControllerMap();
		int32_t get_customControllerSourceId();
		void _ctor(Rewired_Core::Rewired::CustomController* customController, Rewired_Core::Rewired::CustomControllerMap* map);
	};
}

