#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Facepunch_Steamworks_Inventory.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Definition; };
#include "Facepunch_Steamworks_Inventory_Recipe_Ingredient.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe_Ingredient; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Recipe
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* Result;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient>* Ingredients;
		static Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe FromString(mscorlib::System::String* part, IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition*>* definitions, Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* Result);
	};
}

