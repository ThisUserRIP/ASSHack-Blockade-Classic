#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Result; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Item; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory___c__DisplayClass24_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Result* r;
		void _ctor();
		bool _ApplyResult_b__1(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* x);
		bool _ApplyResult_b__2(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* x);
	};
}

