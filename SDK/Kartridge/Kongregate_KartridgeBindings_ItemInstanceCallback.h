#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "Kongregate_KartridgeBindings.h"
namespace Kartridge::Kongregate { struct KartridgeBindings; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Kartridge::Kongregate { struct ItemInstanceType; };
namespace Kartridge::Kongregate { struct ItemInstanceType; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace Kartridge::Kongregate
{
	struct KartridgeBindings_ItemInstanceCallback : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(intptr_t context, uint32_t id, uint8_t success, Kartridge::Kongregate::ItemInstanceType& instance);
		mscorlib::System::IAsyncResult* BeginInvoke(intptr_t context, uint32_t id, uint8_t success, Kartridge::Kongregate::ItemInstanceType& instance, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(Kartridge::Kongregate::ItemInstanceType& instance, mscorlib::System::IAsyncResult* result);
	};
}

