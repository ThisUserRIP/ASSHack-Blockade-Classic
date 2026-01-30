#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_PlayerController.h"
namespace Rewired_Core::Rewired { struct PlayerController; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Rewired_Core::Rewired { struct PlayerController_Element_Definition; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct ICollection_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_Definition : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool enabled;
		int32_t playerId;
		mscorlib::System::Collections::Generic::ICollection_1<Rewired_Core::Rewired::PlayerController_Element_Definition>* elements;
		void _ctor();
	};
}

