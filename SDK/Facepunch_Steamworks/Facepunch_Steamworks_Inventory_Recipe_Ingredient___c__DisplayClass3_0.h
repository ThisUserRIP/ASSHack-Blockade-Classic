#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory_Recipe_Ingredient.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe_Ingredient; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Definition; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Recipe_Ingredient___c__DisplayClass3_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient i;
		void _ctor();
		bool _FromString_b__0(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* x);
	};
}

