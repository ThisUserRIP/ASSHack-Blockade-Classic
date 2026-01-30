#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Action; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Item; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Facepunch_Steamworks::SteamNative { struct SteamInventory; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Result; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory_Definition; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "SteamNative_SteamInventoryDefinitionUpdate_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryDefinitionUpdate_t; };
#include "SteamNative_SteamInventoryFullUpdate_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryFullUpdate_t; };
#include "SteamNative_SteamInventoryResultReady_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryResultReady_t; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "SteamNative_SteamInventoryResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryResult_t; };
#include "SteamNative_SteamItemDetails_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamItemDetails_t; };
#include "SteamNative_SteamItemDef_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamItemDef_t; };
#include "SteamNative_SteamInventoryRequestPricesResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct SteamInventoryRequestPricesResult_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Inventory : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Action* OnUpdate;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item*>* Items;
		IL2CPP::Array<uint8_t>* SerializedItems;
		mscorlib::System::DateTime SerializedExpireTime;
		uint32_t LastTimestamp;
		Facepunch_Steamworks::SteamNative::SteamInventory* inventory;
		bool _IsServer_k__BackingField;
		mscorlib::System::Action* OnDefinitionsUpdated;
		mscorlib::System::Action_1<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Result>* OnInventoryResultReady;
		IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition*>* Definitions;
		mscorlib::System::String* _Currency_k__BackingField;
		bool get_IsServer();
		void set_IsServer(bool value);
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, Facepunch_Steamworks::SteamNative::SteamInventory* c, bool server);
		void onDefinitionsUpdated(Facepunch_Steamworks::SteamNative::SteamInventoryDefinitionUpdate_t obj);
		bool LoadDefinitions();
		void onFullUpdate(Facepunch_Steamworks::SteamNative::SteamInventoryFullUpdate_t data);
		void onResultReady(Facepunch_Steamworks::SteamNative::SteamInventoryResultReady_t data);
		void onResult(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Result* r, bool isFullUpdate);
		void ApplyResult(Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Result* r, bool isFullUpdate);
		void Dispose();
		void Refresh();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* CreateDefinition(int32_t id);
		void FetchItemDefinitions();
		static float PriceCategoryToFloat(mscorlib::System::String* price);
		mscorlib::System::String* get_Currency();
		void set_Currency(mscorlib::System::String* value);
		void UpdatePrices();
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Item* ItemFrom(Facepunch_Steamworks::SteamNative::SteamInventoryResult_t handle, Facepunch_Steamworks::SteamNative::SteamItemDetails_t detail, int32_t index);
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory_Definition* _LoadDefinitions_b__20_0(Facepunch_Steamworks::SteamNative::SteamItemDef_t x);
		void _UpdatePrices_b__48_0(Facepunch_Steamworks::SteamNative::SteamInventoryRequestPricesResult_t result, bool b);
	};
}

