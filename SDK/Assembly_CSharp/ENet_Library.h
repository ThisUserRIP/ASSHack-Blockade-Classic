#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::ENet { struct Callbacks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::ENet
{
	struct Library : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint32_t maxChannelCount;
			uint32_t maxPeers;
			uint32_t maxPacketSize;
			uint32_t throttleThreshold;
			uint32_t throttleScale;
			uint32_t throttleAcceleration;
			uint32_t throttleDeceleration;
			uint32_t throttleInterval;
			uint32_t timeoutLimit;
			uint32_t timeoutMinimum;
			uint32_t timeoutMaximum;
			uint32_t version;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static uint32_t get_Time();
		static bool Initialize();
		static bool Initialize(Assembly_CSharp::ENet::Callbacks* callbacks);
		static void Deinitialize();
		static uint64_t CRC64(intptr_t buffers, int32_t bufferCount);
	};
}

