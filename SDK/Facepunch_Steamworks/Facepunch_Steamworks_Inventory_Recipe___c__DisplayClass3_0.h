#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory_Recipe.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Definition; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Facepunch_Steamworks_Inventory_Recipe_Ingredient.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe_Ingredient; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Recipe___c__DisplayClass3_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition*>* definitions;
		void _ctor();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient _FromString_b__0(mscorlib::System::String* x);
	};
}

