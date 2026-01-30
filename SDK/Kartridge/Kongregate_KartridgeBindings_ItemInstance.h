#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Kongregate_KartridgeBindings.h"
namespace Kartridge::Kongregate { struct KartridgeBindings; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Kongregate_ItemInstanceType.h"
namespace Kartridge::Kongregate { struct ItemInstanceType; };

namespace Kartridge::Kongregate
{
	struct KartridgeBindings_ItemInstance : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t UserId;
		uint64_t Id;
		mscorlib::System::String* Identifier;
		bool Consumable;
		void _ctor(Kartridge::Kongregate::ItemInstanceType item);
	};
}

