#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_ComponentControls_CustomController.h"
namespace Rewired_Core::Rewired::ComponentControls { struct CustomController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::ComponentControls
{
	struct CustomController_CreateCustomControllerSettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _createCustomController;
		int32_t _customControllerSourceId;
		int32_t _assignToPlayerId;
		bool _destroyCustomController;
		bool get_createCustomController();
		void set_createCustomController(bool value);
		int32_t get_customControllerSourceId();
		void set_customControllerSourceId(int32_t value);
		int32_t get_assignToPlayerId();
		void set_assignToPlayerId(int32_t value);
		bool get_destroyCustomController();
		void set_destroyCustomController(bool value);
		void _ctor();
	};
}

