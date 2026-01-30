#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_SimpleInventory_InventoryItemStatus.h"
#include "vp_SimpleInventory.h"
namespace Assembly_CSharp { struct vp_SimpleInventory; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_SimpleInventory_InventoryWeaponStatus : Assembly_CSharp::vp_SimpleInventory_InventoryItemStatus
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* ClipType;
		int32_t LoadedAmmo;
		int32_t MaxAmmo;
		void _ctor();
	};
}

