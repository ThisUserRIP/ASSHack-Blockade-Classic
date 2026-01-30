#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Text { struct UTF8Encoding; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace Kartridge::Kongregate { struct KartridgeBindings_EventDelegate; };
namespace Kartridge::Kongregate { struct KartridgeBindings_EventDelegate_Internal; };
namespace Kartridge::Kongregate { struct KartridgeBindings_ItemInstanceCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Kartridge::Kongregate { struct ItemInstanceType; };
namespace Kartridge::Kongregate { struct ItemInstanceType; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Kartridge::Kongregate { struct KartridgeBindings_ItemInstanceDelegate; };

namespace Kartridge::Kongregate
{
	struct KartridgeBindings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Text::UTF8Encoding* UTF8Encoder;
			intptr_t NullPtr;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::UInt32, mscorlib::System::Delegate>* Callbacks;
			Kartridge::Kongregate::KartridgeBindings_EventDelegate* eventListener;
			Kartridge::Kongregate::KartridgeBindings_EventDelegate_Internal* __f__mg_cache0;
			Kartridge::Kongregate::KartridgeBindings_ItemInstanceCallback* __f__mg_cache3;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void InternalItemInstanceCallback(intptr_t context, uint32_t id, uint8_t success, Kartridge::Kongregate::ItemInstanceType& instance);
		static bool KongregateAPI_Initialize(mscorlib::System::String* settingsJson);
		static void KongregateAPI_Shutdown();
		static void KongregateAPI_Update();
		static bool KongregateAPI_IsConnected();
		static void KongregateAPI_SetEventCallback(Kartridge::Kongregate::KartridgeBindings_EventDelegate* listener);
		static void KongregateAPI_SetEventCallback_Internal(Kartridge::Kongregate::KartridgeBindings_EventDelegate_Internal* listener, intptr_t context);
		static void InternalEventCallback(intptr_t context, mscorlib::System::String* eventName, mscorlib::System::String* eventPayload);
		static mscorlib::System::String* KongregateServices_GetUsername();
		static intptr_t KongregateServices_Internal_GetUsername();
		static uint32_t KongregateServices_GetUserId();
		static mscorlib::System::String* KongregateServices_GetGameAuthToken();
		static intptr_t KongregateServices_GetGameAuthTokenPtr();
		static bool KongregateIAP_PurchaseDynamicItem(mscorlib::System::String* orderInfo, Kartridge::Kongregate::KartridgeBindings_ItemInstanceDelegate* callback);
		static uint32_t KongregateIAP_PurchaseDynamicItem_Internal(mscorlib::System::String* orderInfo, Kartridge::Kongregate::KartridgeBindings_ItemInstanceCallback* callback, intptr_t context);
		static void _cctor();
	};
}

