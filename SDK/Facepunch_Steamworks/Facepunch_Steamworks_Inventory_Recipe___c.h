#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Facepunch_Steamworks_Inventory_Recipe.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe; };
#include "Facepunch_Steamworks_Inventory_Recipe_Ingredient.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Recipe_Ingredient; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory_Recipe___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe___c* __9;
			mscorlib::System::Func_2<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient, mscorlib::System::Boolean>* __9__3_1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		bool _FromString_b__3_1(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Recipe_Ingredient x);
	};
}

